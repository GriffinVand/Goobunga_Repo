#include "BaseEnemy.h"
#include "Goobunga/Enemies/AI/BaseEnemyAIController.h"
#include "BrainComponent.h"
#include "FMODBlueprintStatics.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Goobunga/Goobunga_Player.h"
#include "Goobunga/Missions/MissionSubsystem.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Health = MaxHealth;
	
}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentState = StartState;
	
	if (DismemberPartClasses.Num() > 0)
	{
		for (UStaticMesh* ComponentType : DismemberPartClasses)
		{
			UStaticMeshComponent* NewMeshComp = NewObject<UStaticMeshComponent>(this);

			if (NewMeshComp)
			{
				NewMeshComp->SetStaticMesh(ComponentType);
				NewMeshComp->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
				NewMeshComp->RegisterComponent();
				NewMeshComp->SetVisibility(false);
				NewMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				NewMeshComp->SetSimulatePhysics(false);
				DismemberPartComponents.Add(NewMeshComp);
			}
		}
	}
}

void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateCurrentState(DeltaTime);
}

void ABaseEnemy::UpdateCurrentState(float DeltaTime)
{
}

EDamageResult ABaseEnemy::CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType, EAllegiance Allegiance)
{
	if (Allegiance == EnemyAllegiance || CurrentState == ENPCState::Death) { return EDamageResult::None; }
	Health -= Damage;
	if (CurrentState == ENPCState::Passive)
	{
		CurrentState = ENPCState::Calling;
		UFMODBlueprintStatics::PlayEventAtLocation(this, CallEvent, GetActorTransform(), true);
		if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
		{
			MS->ReceiveEvent(EnterCombatEvent);
		}
	}
	if (Health <= 0)
	{
		CurrentState = ENPCState::Death;
		FVector LastMovementSpeed = GetCharacterMovement()->GetLastUpdateVelocity();
		Death(LastMovementSpeed, EDeathType::Default);
		return EDamageResult::Kill;
	}
	return EDamageResult::Default;
}

void ABaseEnemy::Death(FVector LastMovementSpeed, EDeathType DeathType)
{
	if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
	{
		UE_LOG(LogTemp, Error, TEXT("Broadcast Death"));
		MS->HandleDeath(DeathTag);
	}
	CurrentState = ENPCState::Death;
	ABaseEnemyAIController* AIController = Cast<ABaseEnemyAIController>(Controller);
	if (AIController)
	{
		AIController->GetBrainComponent()->StopLogic("Dead");
	}
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	switch (DeathType)
	{
	case EDeathType::Default:
		Ragdoll();
		break;
	case EDeathType::Explosion:
		Dismember(LastMovementSpeed);
	}
}

void ABaseEnemy::Ragdoll()
{
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
	GetMesh()->SetSimulatePhysics(true);
	GetMesh()->AddRadialImpulse(GetActorLocation(), 1000.f, 500.f, RIF_Constant, true);
	SetLifeSpan(8);
}

void ABaseEnemy::Dismember(FVector LastMovementSpeed)
{
	GetMesh()->SetVisibility(false);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	if (DismemberPartComponents.Num() > 0)
	{
		SetLifeSpan(8);
	}
	else
	{
		Destroy();
	}
	for (UStaticMeshComponent* DismemberPart : DismemberPartComponents)
	{
		DismemberPart->SetVisibility(true);
		DismemberPart->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
		DismemberPart->SetSimulatePhysics(true);
		DismemberPart->AddRadialImpulse(GetActorLocation(), 1000.f, 900.f, RIF_Constant, true);
		DismemberPart->AddImpulse(LastMovementSpeed, NAME_None,true);
	}
}

void ABaseEnemy::AttackDamageTrace(FVector Loc, float Radius, int32 Damage, EDamageType DamageType)
{
	//UE_LOG(LogTemp, Error, TEXT("AttackDamageTraceStart"));
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	TArray<AActor*> IgnoreActors;
	TArray<AActor*> OutActors;
	bool bHit = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), Loc, Radius, ObjectTypes, AGoobunga_Player::StaticClass(), IgnoreActors, OutActors);
	if (bHit)
	{
		for (AActor* OutActor : OutActors)
		{
			//UE_LOG(LogTemp, Error, TEXT("Observing trace"));
			
			if (ICombatCallables* CombatCallablesInterface = Cast<ICombatCallables>(OutActor))
			{
				UE_LOG(LogTemp, Error, TEXT("Applying damage to: %s"), *OutActor->GetName());
				EDamageResult Result = CombatCallablesInterface->CombatDamage(this, Damage, DamageType, EnemyAllegiance);
				OnDealtDamage(Result);
			}
		}
	}
}






