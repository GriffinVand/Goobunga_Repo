// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "LaunchInterface.h"
#include "JoshEnemy.generated.h"

UCLASS()
class GOOBUNGA_API AJoshEnemy : public ABaseEnemy, public ILaunchInterface
{
	GENERATED_BODY()

public:
	AJoshEnemy();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	
	
	bool Launching = false;
	FVector LaunchGoalLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USplineComponent* LaunchSpline;
	float LaunchForce = 500.f;
	float LaunchSplineAlpha = 0.f;
	float LaunchSplineTime = 0.7f;
	float LaunchRate = 8.f;
	float LaunchCooldown = 8.f;
	FOnLaunchFinished LaunchFinishedDelegate;
	virtual void StartLaunch(AActor* TargetActor);
	virtual void UpdateLaunchProgress(float DeltaTime);
	virtual void EndLaunch();
	virtual void UpdateCurrentState(float DeltaTime) override;
	
	virtual bool GetCanLaunch() override { return LaunchCooldown > LaunchRate; }
	virtual void LaunchTowardsLocation(AActor* TargetActor, FOnLaunchFinished InOnLaunchFinished) override;
	virtual void AttackGeneric(int AttackNum) override;
};
