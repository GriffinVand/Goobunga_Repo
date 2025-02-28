// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerCallables.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UPlayerCallables : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GOOBUNGA_API IPlayerCallables
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void StartAimDownSights() = 0;
	virtual void StopAimDownSights() = 0;
	virtual void ApplyAimOffset(FVector AimOffsetInput) = 0;
	virtual TArray<FVector> GetAimDirection() = 0;
};
