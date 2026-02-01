// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCallables.h"
#include "GameFramework/Character.h"
#include "Goobunga/Combat/CombatCallables.h"
#include "EnemyStates.h"
#include "BaseEnemy.generated.h"

class USplineComponent;

UCLASS()
class GOOBUNGA_API ABaseEnemy : public ACharacter, public ICombatCallables, public IEnemyCallables
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void UpdateCurrentState(float DeltaTime);

	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTree* BehaviorTree;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	int Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	int MaxHealth = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float AttackRate = 3.f;
	UPROPERTY(BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float AttackCooldown = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float AttackDamage = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float AttackRadius = 100.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	EDamageType AttackDamageType = EDamageType::Spider;
	
	bool Attacking = false;
	//
	//Fading out
	//
	bool FadingOut = false;
	bool FadeVisible = true;
	float FadeOutTime = 10.f;
	float FadeOutTimeRemaining = FadeOutTime;
	float FadeOutTimeElapsed = 0.f;
	float FadeOutInterval = 1.f;
	float FadeInvisibleTime = 0.1f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dismember, meta = (AllowPrivateAccess = "true"))
	TArray<UStaticMesh*> DismemberPartClasses;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dismember, meta = (AllowPrivateAccess = "true"))
	TArray<UStaticMeshComponent*> DismemberPartComponents;

	EEnemyState CurrentState = Walking;
	
	UFUNCTION()
	virtual void Death(FVector LastMovementSpeed);
	UFUNCTION()
	virtual void Dismember(FVector LastMovementSpeed);
	virtual void UpdateFadeOut(float DeltaTime);
	bool Dead = false;
	
	
	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*> AttackMontages;
	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	TMap<FName, UAnimMontage*> MontageMap;
	virtual void AttackGeneric(int AttackNum);

	
	

	virtual bool GetCanAttack() override { return AttackCooldown > AttackRate; }
	virtual EEnemyState GetCurrentState() override { return CurrentState; }
	
	virtual void CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType) override;
	virtual void AttackPrimary() override;

	virtual FTransform GetAttackTraceTransform();
	UFUNCTION(BlueprintCallable)
	virtual void AttackDamageTrace();

};
