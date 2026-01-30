// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"

#include "BaseEnemyAIController.h"
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

	LaunchSpline = CreateDefaultSubobject<USplineComponent>(TEXT("LaunchSpline"));
	LaunchSpline->bDrawDebug = true;
	
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

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	switch (CurrentState)
	{
	default:
		break;
	case EEnemyState::Launching:
		UpdateLaunchProgress(DeltaTime);
		break;
	case EEnemyState::Death:
		UpdateFadeOut(DeltaTime);
	}
	AttackCooldown += DeltaTime;
	LaunchCooldown += DeltaTime;
}

// Take damage
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
		if (HasAuthority())
		{
			Destroy();
		}
		else { UE_LOG(LogTemp, Warning, TEXT("ABaseEnemy::Dismember tried to destroy actor but no authority")); }
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
	if (CurrentState == EEnemyState::Launching) { EndLaunch(); }
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

void ABaseEnemy::LaunchTowardsLocation(AActor* TargetActor, FOnLaunchFinished InOnLaunchFinished)
{
	if (LaunchCooldown >= LaunchRate && CurrentState != EEnemyState::Launching)
	{
		if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
		{
			if (MontageMap.Contains("WindUp"))
			{
				CurrentState = EEnemyState::Busy;
				AnimInstance->Montage_Play(MontageMap["WindUp"]);
				FOnMontageEnded MontageEnded;
				MontageEnded.BindLambda([this, TargetActor](UAnimMontage* Montage, bool bInteruppted)
				{
					StartLaunch(TargetActor);
				});
				AnimInstance->Montage_SetEndDelegate(MontageEnded, MontageMap["WindUp"]);
			}
		}
	}	
}

void ABaseEnemy::StartLaunch(AActor* TargetActor)
{
	UE_LOG(LogTemp, Warning, TEXT("Starting Launch"));
	if (LaunchSpline && TargetActor)
	{
		LaunchGoalLocation = TargetActor->GetActorLocation();
		FVector PlayerVelocity = TargetActor->GetVelocity();
		FVector DirTowardsLocation = LaunchGoalLocation - GetActorLocation();
		DirTowardsLocation.Normalize();
		LaunchGoalLocation = LaunchGoalLocation + (DirTowardsLocation * 250.f) + (PlayerVelocity);
		DrawDebugSphere(GetWorld(), LaunchGoalLocation, 100, 20, FColor::Green, true);
		LaunchSplineAlpha = 0;
		LaunchCooldown = 0.f;
		AAIController* AIController = Cast<AAIController>(GetController());
		if (AIController) { AIController->ClearFocus(EAIFocusPriority::Gameplay);}
		LaunchSpline->ClearSplinePoints(true);
		LaunchSpline->AddSplinePoint(GetActorLocation(), ESplineCoordinateSpace::World, true);
		FVector Midpoint = (LaunchGoalLocation + GetActorLocation()) / 2.f;
		Midpoint.Z += 250.f;
		LaunchSpline->AddSplinePoint(Midpoint, ESplineCoordinateSpace::World, true);
		LaunchSpline->AddSplinePoint(LaunchGoalLocation, ESplineCoordinateSpace::World, true);
		FVector CurrentEndTangent = LaunchSpline->GetTangentAtSplinePoint(2, ESplineCoordinateSpace::World);
		FVector NewTangent = CurrentEndTangent;
		NewTangent.Z = FMath::Lerp(CurrentEndTangent.Z, 0, 0.5f);
		LaunchSpline->SetTangentAtSplinePoint(2, NewTangent, ESplineCoordinateSpace::World);
		LaunchSplineAlpha = 0.f;
		CurrentState = EEnemyState::Launching;
		Jump();
	}
}

void ABaseEnemy::UpdateLaunchProgress(float DeltaTime)
{
	LaunchSplineAlpha += DeltaTime / LaunchSplineTime;
	if (LaunchSplineAlpha >= 1) { EndLaunch(); return; }
	
	LaunchSplineAlpha = FMath::Clamp(LaunchSplineAlpha, 0, 1);
	float TotalDist = LaunchSpline->GetSplineLength();
	FVector NextPoint = LaunchSpline->GetLocationAtDistanceAlongSpline(LaunchSplineAlpha * TotalDist, ESplineCoordinateSpace::World);
	DrawDebugSphere(GetWorld(), NextPoint, 10.f, 12, FColor::Red);
	
	FVector Direction = NextPoint - GetActorLocation();
	float Speed = FVector::Dist(GetActorLocation(), NextPoint) * 50.f;
	FVector Velocity = Direction * 5.f;
	GetCharacterMovement()->Velocity = Velocity;
	AddMovementInput(Velocity, true);
}

void ABaseEnemy::EndLaunch()
{
	UE_LOG(LogTemp, Warning, TEXT("Ending Launch"));
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController) AIController->SetFocus(UGameplayStatics::GetPlayerCharacter(this, 0), EAIFocusPriority::Gameplay);
	LaunchCooldown = 0;
	CurrentState = EEnemyState::Walking;
}






