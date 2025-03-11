// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCallables.h"
#include "GameFramework/Character.h"
#include "Goobunga/Combat/CombatCallables.h"
#include "BaseEnemy.generated.h"

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
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dismember, meta = (AllowPrivateAccess = "true"))
	TMap<EDamageType, float> DamageTypeMap;

	
	virtual void Death(FVector LastMovementSpeed);
	virtual void Dismember(FVector LastMovementSpeed);
	virtual void UpdateFadeOut(float DeltaTime);

	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*> AttackMontages;

	virtual void AttackGeneric(int AttackNum);
	
	virtual void CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType) override;
	virtual void AttackPrimary() override;

};
