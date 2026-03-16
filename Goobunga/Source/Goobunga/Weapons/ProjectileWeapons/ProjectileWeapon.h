// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Goobunga/Weapons/Weapon.h"
#include "ProjectileWeapon.generated.h"

class AGoobungaProjectile;

UCLASS()
class GOOBUNGA_API AProjectileWeapon : public AWeapon
{
	GENERATED_BODY()

public:
	AProjectileWeapon();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AGoobungaProjectile> ProjectileClass;

public:
	virtual void FireWeapon() override;
	
	
	
};
