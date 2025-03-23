// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"

#include "BaseEnemyAIController.h"
#include "BrainComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SplineComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
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
	if (DamageTypeMap.Contains(DamageType))
	{
		float DamageMultiplier = DamageTypeMap[DamageType];
		Health -= DamageMultiplier * Damage;
	}
	else
	{
		Health -= Damage;
	}
	if (Health <= 0)
	{
		FVector LastMovementSpeed = GetCharacterMovement()->GetLastUpdateVelocity();
		Death(LastMovementSpeed);
	}
}

void ABaseEnemy::Death(FVector LastMovementSpeed)
{
	CurrentState = EEnemyState::Death;
	ABaseEnemyAIController* AIController = Cast<ABaseEnemyAIController>(Controller);
	if (AIController)
	{
		AIController->GetBrainComponent()->StopLogic("Dead");
		Dismember(LastMovementSpeed);
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("Couldn't access AI Controller"));
	Destroy();
}

void ABaseEnemy::Dismember(FVector LastMovementSpeed)
{
	GetMesh()->SetVisibility(false);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	if (DismemberPartComponents.Num() > 0)
	{
		for (UStaticMeshComponent* DismemberPart : DismemberPartComponents)
		{
			DismemberPart->SetVisibility(true);
			DismemberPart->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			DismemberPart->SetSimulatePhysics(true);
			DismemberPart->AddRadialImpulse(GetActorLocation(), 1000.f, 700.f, RIF_Constant, true);
			DismemberPart->AddImpulse(LastMovementSpeed, NAME_None,true);
		}
		FadingOut = true;
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("No dismember parts"));
	Destroy();
}

void ABaseEnemy::UpdateFadeOut(float DeltaTime)
{
	FadeOutTimeRemaining -= DeltaTime;
	//If no fadeout time left destroy
	if (FadeOutTimeRemaining <= 0) { Destroy(); }
	
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
}

//Interface functino acts as a buffer for actual attack logic
void ABaseEnemy::AttackPrimary()
{
	AttackGeneric(1);
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

void ABaseEnemy::LaunchTowardsLocation(FVector TargetLocation)
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
				MontageEnded.BindLambda([this](UAnimMontage* Montage, bool bInteruppted)
				{
					StartLaunch();
				});
				AnimInstance->Montage_SetEndDelegate(MontageEnded, MontageMap["WindUp"]);
			}
		}
	}	
}

void ABaseEnemy::StartLaunch()
{
	UE_LOG(LogTemp, Warning, TEXT("Starting Launch"));
	if (LaunchSpline)
	{

		ACharacter* PlayerCharacter = GetWorld()->GetFirstPlayerController()->GetCharacter();
		LaunchGoalLocation = PlayerCharacter->GetActorLocation();
		FVector PlayerVelocity = PlayerCharacter->GetVelocity();
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
	UE_LOG(LogTemp, Display, TEXT("Prog: %f"), LaunchSplineAlpha);
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






