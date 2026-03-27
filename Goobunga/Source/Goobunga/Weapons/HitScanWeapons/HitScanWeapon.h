// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Goobunga/Combat/TeamInterface.h"
#include "Goobunga/Weapons/Weapon.h"
#include "HitScanWeapon.generated.h"

enum class EAllegiance : uint8;
enum class EDamageType : uint8;
/**
 * 
 */
UCLASS()
class GOOBUNGA_API AHitScanWeapon : public AWeapon
{
	GENERATED_BODY()

public:

	DECLARE_MULTICAST_DELEGATE_TwoParams(ApplyCombatDamage, AActor*, float);
	
	AHitScanWeapon();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> TrailProjectileClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Visual", meta = (AllowPrivateAccess = "true"))
	UNiagaraSystem* TrailSystem;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EDamageType DamageType;

	virtual void FireWeapon() override;
	
	void SpawnTrailProjectile(FVector Direction);
	//System to mimic bullet trail although damage is hitscan
	void SpawnTrailSystem(FVector TrailEnd);
};
