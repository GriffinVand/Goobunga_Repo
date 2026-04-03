// Fill out your copyright notice in the Description page of Project Settings.


#include "JoshEnemy.h"

#include "AIController.h"
#include "FMODBlueprintStatics.h"
#include "Components/SplineComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Goobunga/Goobunga_Player.h"
#include "Kismet/GameplayStatics.h"

AJoshEnemy::AJoshEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	
	FacialAnimationComponent = CreateDefaultSubobject<UFacialAnimationComponent>(TEXT("FacialAnimationComponent"));
	
	LaunchSpline = CreateDefaultSubobject<USplineComponent>(TEXT("LaunchSpline"));
	LaunchSpline->bDrawDebug = true;
}

void AJoshEnemy::BeginPlay()
{
	Super::BeginPlay();
	if (FacialAnimationComponent)
	{
		FacialAnimationComponent->Material = GetMesh()->CreateAndSetMaterialInstanceDynamic(1);
		FacialAnimationComponent->PlayAnimation("Idle", true);
	}
	if (UAnimInstance* AnimInst = GetMesh()->GetAnimInstance())
	{
		AnimInst->OnPlayMontageNotifyBegin.AddUniqueDynamic(this, &AJoshEnemy::OnMontageNotifyBegin);
	}
	
}

void AJoshEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateCurrentState(DeltaTime);
}

void AJoshEnemy::UpdateCurrentState(float DeltaTime)
{
	switch (CurrentState)
	{
	default:
		break;
	case EEnemyState::Launching:
		UpdateLaunchProgress(DeltaTime);
		break;
	case EEnemyState::Death:
		return;
	}
	AttackCooldown += DeltaTime;
	LaunchCooldown += DeltaTime;
}

void AJoshEnemy::LaunchTowardsLocation(AActor* TargetActor, FOnLaunchFinished InOnLaunchFinished)
{
	LaunchFinishedDelegate = InOnLaunchFinished;
	if (LaunchCooldown >= LaunchRate && CurrentState != EEnemyState::Launching)
	{
		if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
		{
			if (WindUpMontage)
			{
				CurrentState = EEnemyState::Busy;
				AnimInstance->Montage_Play(WindUpMontage);
				FOnMontageEnded MontageEnded;
				MontageEnded.BindLambda([this, TargetActor](UAnimMontage* Montage, bool bInteruppted)
				{
					StartLaunch(TargetActor);
				});
				AnimInstance->Montage_SetEndDelegate(MontageEnded, WindUpMontage);
				return;
			}
		}
	}
	if (LaunchFinishedDelegate.IsBound()) LaunchFinishedDelegate.Execute();
}

void AJoshEnemy::StartLaunch(AActor* TargetActor)
{
	//UE_LOG(LogTemp, Warning, TEXT("Starting Launch"));
	if (LaunchSpline && TargetActor)
	{
		LaunchGoalLocation = TargetActor->GetActorLocation();
		FVector PlayerVelocity = TargetActor->GetVelocity();
		FVector DirTowardsLocation = LaunchGoalLocation - GetActorLocation();
		float DistTo = FVector::Dist(LaunchGoalLocation, GetActorLocation());
		NormalizedLaunchSplineTime = (DistTo / ExpectedLaunchRange) * (MaxLaunchSplineTime);
		DirTowardsLocation.Normalize();
		//DrawDebugSphere(GetWorld(), LaunchGoalLocation, 100, 20, FColor::Green, true);
		LaunchSplineAlpha = 0;
		LaunchCooldown = 0.f;
		AAIController* AIController = Cast<AAIController>(GetController());
		if (AIController) { AIController->ClearFocus(EAIFocusPriority::Gameplay); }
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
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->SetMovementMode(MOVE_Flying);
		GetCharacterMovement()->GravityScale = 0.f;
	}
}

void AJoshEnemy::UpdateLaunchProgress(float DeltaTime)
{
	LaunchSplineAlpha += DeltaTime / NormalizedLaunchSplineTime;
	if (LaunchSplineAlpha >= 1) { EndLaunch(); return; }
	
	LaunchSplineAlpha = FMath::Clamp(LaunchSplineAlpha, 0, 1);
	float TotalDist = LaunchSpline->GetSplineLength();
	float DistAlongSpline = LaunchSplineAlpha * TotalDist;
	
	FVector TargetLocation = LaunchSpline->GetLocationAtDistanceAlongSpline(DistAlongSpline, ESplineCoordinateSpace::World);
	
	FVector Tangent = LaunchSpline->GetTangentAtDistanceAlongSpline(DistAlongSpline, ESplineCoordinateSpace::World);
	
	float DesiredSpeed = TotalDist / NormalizedLaunchSplineTime;
	GetCharacterMovement()->Velocity = Tangent.GetSafeNormal() * DesiredSpeed;
	
	FHitResult Hit;
	SetActorLocation(TargetLocation, true, &Hit);
	if (Hit.IsValidBlockingHit())
	{
		if (Hit.GetComponent()->GetCollisionObjectType() == ECC_WorldStatic)
		{
			EndLaunch();	
		}
	}
}

void AJoshEnemy::EndLaunch()
{
	//UE_LOG(LogTemp, Warning, TEXT("Ending Launch"));
	GetCharacterMovement()->bOrientRotationToMovement = false;
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController) AIController->SetFocus(UGameplayStatics::GetPlayerCharacter(this, 0), EAIFocusPriority::Gameplay);
	LaunchCooldown = 0;
	CurrentState = EEnemyState::Walking;
	GetCharacterMovement()->GravityScale = 1.f;
	GetCharacterMovement()->SetMovementMode(MOVE_Falling);
	if (LaunchFinishedDelegate.IsBound()) LaunchFinishedDelegate.Execute();
}

void AJoshEnemy::AttackPrimary(AActor* Target)
{
	if (AttackCooldown >= AttackRate && CurrentState != EEnemyState::Attacking)
	{
		if (StabMontage != nullptr)
		{
			if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
			{
				CurrentState = EEnemyState::Attacking;
				AnimInstance->Montage_Play(StabMontage);
				//UE_LOG(LogTemp, Warning, TEXT("PLAY MONTAGE"));
				FOnMontageEnded MontageEnded;
				MontageEnded.BindLambda([this](UAnimMontage* Montage, bool bInteruppted)
				{
					AttackCooldown = 0;
					CurrentState = EEnemyState::Walking;
					OnAttackFinished.Broadcast();
					//UE_LOG(LogTemp, Warning, TEXT("MONTAGE ENDED"));
				});
				AnimInstance->Montage_SetEndDelegate(MontageEnded, StabMontage);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Anim instance not found: AttackGeneric()"));
			}
		}	
	}
}

void AJoshEnemy::AttackSecondary(AActor* Target)
{
	//UE_LOG(LogTemp, Error, TEXT("Try attack sec"));
	if (FallingStabMontage != nullptr && CurrentState != EEnemyState::Attacking)
	{
		if (CurrentState == EEnemyState::Launching) { EndLaunch(); }
		if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
		{
			CurrentState = EEnemyState::Attacking;
			AnimInstance->Montage_Play(FallingStabMontage);
			//UE_LOG(LogTemp, Warning, TEXT("PLAY MONTAGE"));
			FOnMontageEnded MontageEnded;
			MontageEnded.BindLambda([this](UAnimMontage* Montage, bool bInteruppted)
			{
				AttackCooldown = 0;
				CurrentState = EEnemyState::Walking;
				OnAttackFinished.Broadcast();
				//UE_LOG(LogTemp, Warning, TEXT("MONTAGE ENDED"));
			});
			AnimInstance->Montage_SetEndDelegate(MontageEnded, FallingStabMontage);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Anim instance not found: AttackGeneric()"));
		}
	}
}

void AJoshEnemy::OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& Payload)
{
	if (NotifyName == ExpectedStabNotifyName)
	{
		FVector TraceLoc = FVector::ZeroVector;
		if (GetMesh()) { TraceLoc = GetMesh()->GetSocketLocation(AttackSocketName); }
		//DrawDebugSphere(GetWorld(), TraceLoc, 10.f, 12, FColor::Red, true, 3.f);
		AttackDamageTrace(TraceLoc, AttackRadius, AttackDamage, EDamageType::Default);
	}
}

