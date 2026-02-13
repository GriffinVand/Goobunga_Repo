// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"

#include "Goobunga/Enemies/AI/BaseEnemyAIController.h"
#include "BrainComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SplineComponent.h"
#include "Engine/OverlapResult.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Goobunga/Goobunga_Player.h"
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

	if (DismemberPartClasses.Num() > 0)
	{
		for (UStaticMesh* ComponentType : DismemberPartClasses)
		{
			UStaticMeshComponent* NewMeshComp = NewObject<UStaticMeshComponent>(this);

			if (NewMeshComp)
			{
				NewMeshComp->SetIsReplicated(true);
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
	switch (CurrentState)
	{
	default:
		break;
	case EEnemyState::Launching:
		break;
	case EEnemyState::Death:
		UpdateFadeOut(DeltaTime);
	}
	AttackCooldown += DeltaTime;
}

void ABaseEnemy::CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType)
{
	Health -= Damage;
	if (Health <= 0 && !Dead)
	{
		Dead = true;
		FVector LastMovementSpeed = GetCharacterMovement()->GetLastUpdateVelocity();
		Death(LastMovementSpeed);
	}
}

void ABaseEnemy::Death(FVector LastMovementSpeed)
{
	Dismember(LastMovementSpeed);	
}

void ABaseEnemy::Dismember(FVector LastMovementSpeed)
{
	CurrentState = EEnemyState::Death;
	ABaseEnemyAIController* AIController = Cast<ABaseEnemyAIController>(Controller);
	if (AIController)
	{
		AIController->GetBrainComponent()->StopLogic("Dead");
	}
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
		DismemberPart->AddRadialImpulse(GetActorLocation(), 1000.f, 700.f, RIF_Constant, true);
		DismemberPart->AddImpulse(LastMovementSpeed, NAME_None,true);
	}
}

void ABaseEnemy::UpdateFadeOut(float DeltaTime)
{
	FadeOutTimeRemaining -= DeltaTime;
	//If no fadeout time left destroy
	if (FadeOutTimeRemaining <= 0) { Destroy(); }

	/*
	
	FadeOutTimeElapsed += DeltaTime;
	//Start with a base value ie: 2 which will be the immediate starting time before the part becomes invisible.
	//As (FadeOutTimeRemaining / FadeOutTime) gets closer to 0 this time decreases.
	float FadeOutThreshold = FadeOutInterval * (FadeOutTimeRemaining / FadeOutTime);

	//If its visible use FadeOutThreshold to determine if switch should occur
	if (FadeVisible && FadeOutTimeElapsed > FadeOutThreshold && FadeOutTimeElapsed > FadeInvisibleTime)
	{
		FadeVisible = false;
		FadeOutTimeElapsed = 0.f;
		for (UStaticMeshComponent* DismemberPart : DismemberPartComponents)
		{
			DismemberPart->SetVisibility(false);
		}
		return;
	}
	//If invisible use default InvisibleTme to determine when switch should occur
	if (!FadeVisible && FadeOutTimeElapsed > FadeInvisibleTime)
	{
		FadeVisible = true;
		FadeOutTimeElapsed = 0.f;
		for (UStaticMeshComponent* DismemberPart : DismemberPartComponents)
		{
			DismemberPart->SetVisibility(true);
		}
	}

	*/
}

//Interface function acts as a buffer for actual attack logic
void ABaseEnemy::AttackPrimary()
{
	AttackGeneric(1);
}

FTransform ABaseEnemy::GetAttackTraceTransform()
{
	FTransform TraceTransform = GetMesh()->GetBoneTransform("FrontFoot_R");
	return TraceTransform;
}

void ABaseEnemy::AttackDamageTrace()
{
	UE_LOG(LogTemp, Error, TEXT("AttackDamageTraceStart"));
	FTransform TraceTransform = GetAttackTraceTransform();
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	TArray<AActor*> IgnoreActors;
	TArray<AActor*> OutActors;
	bool bHit = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), TraceTransform.GetLocation(), AttackRadius, ObjectTypes, AGoobunga_Player::StaticClass(), IgnoreActors, OutActors);
	if (bHit)
	{
		for (AActor* OutActor : OutActors)
		{
			UE_LOG(LogTemp, Error, TEXT("Observing trace"));
			
			if (ICombatCallables* CombatCallablesInterface = Cast<ICombatCallables>(OutActor))
			{
				UE_LOG(LogTemp, Error, TEXT("Applying damage to: %s"), *OutActor->GetName());
				CombatCallablesInterface->CombatDamage(this, AttackDamage, AttackDamageType);
			}
		}
	}
}

void ABaseEnemy::AttackGeneric(int AttackNum)
{
	if (AttackCooldown >= AttackRate && CurrentState != EEnemyState::Attacking)
	{
		if (AttackMontages.Num() > AttackNum - 1)
		{
			if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
			{
				CurrentState = EEnemyState::Attacking;
				AnimInstance->Montage_Play(AttackMontages[AttackNum - 1]);
				UE_LOG(LogTemp, Warning, TEXT("PLAY MONTAGE"));
				FOnMontageEnded MontageEnded;
				MontageEnded.BindLambda([this](UAnimMontage* Montage, bool bInteruppted)
				{
					AttackCooldown = 0;
					CurrentState = EEnemyState::Walking;
					UE_LOG(LogTemp, Warning, TEXT("MONTAGE ENDED"));
				});
				AnimInstance->Montage_SetEndDelegate(MontageEnded, AttackMontages[AttackNum - 1]);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Anim instance not found: AttackGeneric()"));
			}
		}	
	}
}






