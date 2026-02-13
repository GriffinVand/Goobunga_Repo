// Fill out your copyright notice in the Description page of Project Settings.


#include "JoshEnemy.h"

#include "AIController.h"
#include "Goobunga/Enemies/AI/BaseEnemyAIController.h"
#include "BrainComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SplineComponent.h"
#include "Engine/OverlapResult.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Goobunga/Goobunga_Player.h"
#include "Kismet/GameplayStatics.h"

AJoshEnemy::AJoshEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	
	LaunchSpline = CreateDefaultSubobject<USplineComponent>(TEXT("LaunchSpline"));
	LaunchSpline->bDrawDebug = true;
}

void AJoshEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AJoshEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
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
		UpdateFadeOut(DeltaTime);
	}
	AttackCooldown += DeltaTime;
	LaunchCooldown += DeltaTime;
}

// Called to bind functionality to input
void AJoshEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AJoshEnemy::LaunchTowardsLocation(AActor* TargetActor, FOnLaunchFinished InOnLaunchFinished)
{
	LaunchFinishedDelegate = InOnLaunchFinished;
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
				return;
			}
		}
	}
	if (LaunchFinishedDelegate.IsBound()) LaunchFinishedDelegate.Execute();
}

void AJoshEnemy::StartLaunch(AActor* TargetActor)
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

void AJoshEnemy::UpdateLaunchProgress(float DeltaTime)
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

void AJoshEnemy::EndLaunch()
{
	UE_LOG(LogTemp, Warning, TEXT("Ending Launch"));
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController) AIController->SetFocus(UGameplayStatics::GetPlayerCharacter(this, 0), EAIFocusPriority::Gameplay);
	LaunchCooldown = 0;
	CurrentState = EEnemyState::Walking;
	if (LaunchFinishedDelegate.IsBound()) LaunchFinishedDelegate.Execute();
}

void AJoshEnemy::AttackGeneric(int AttackNum)
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

