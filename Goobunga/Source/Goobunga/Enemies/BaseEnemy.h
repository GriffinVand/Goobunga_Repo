// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Goobunga/Combat/CombatCallables.h"
#include "BaseEnemy.generated.h"

UCLASS()
class GOOBUNGA_API ABaseEnemy : public ACharacter, public ICombatCallables
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

	virtual void CombatDamage(float Damage, TArray<EDamageType> DamageTypes) override {};

};
