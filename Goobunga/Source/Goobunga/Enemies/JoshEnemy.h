// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "LaunchInterface.h"
#include "Goobunga/FacialAnimationComponent.h"
#include "JoshEnemy.generated.h"

UCLASS()
class GOOBUNGA_API AJoshEnemy : public ABaseEnemy, public ILaunchInterface
{
	GENERATED_BODY()

public:
	AJoshEnemy();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Attack)
	UAnimMontage* StabMontage = nullptr;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Jump)
	UAnimMontage* WindUpMontage = nullptr;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Attack)
	FName ExpectedStabNotifyName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Attack)
	FName AttackSocketName;

public:
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UFacialAnimationComponent* FacialAnimationComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float AttackRate = 3.f;
	UPROPERTY(BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float AttackCooldown = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float AttackDamage = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float AttackRadius = 100.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	
	bool Launching = false;
	FVector LaunchGoalLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USplineComponent* LaunchSpline;
	float LaunchForce = 500.f;
	float LaunchSplineAlpha = 0.f;
	float LaunchSplineTime = 0.7f;
	float LaunchRate = 12.f;
	float LaunchCooldown = 12.f;
	FOnLaunchFinished LaunchFinishedDelegate;
	
	virtual void StartLaunch(AActor* TargetActor);
	virtual void UpdateLaunchProgress(float DeltaTime);
	virtual void EndLaunch();
	virtual bool GetCanLaunch() override { return LaunchCooldown > LaunchRate; }
	virtual void LaunchTowardsLocation(AActor* TargetActor, FOnLaunchFinished InOnLaunchFinished) override;
	
	virtual void UpdateCurrentState(float DeltaTime) override;
	virtual bool GetCanAttackPrim() override { return AttackCooldown > AttackRate && CurrentState != EEnemyState::Attacking; }
	
	UFUNCTION()
	void OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& Payload);
	virtual void AttackPrimary(AActor* Target) override;
	
};
