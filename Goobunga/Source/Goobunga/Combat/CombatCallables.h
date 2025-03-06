// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamageTypes.h"
#include "CombatCallables.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UCombatCallables : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GOOBUNGA_API ICombatCallables
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType) = 0;
};
