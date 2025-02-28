#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"


UENUM(BlueprintType)
enum class EPlayerMovementState : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	Walking UMETA(DisplayName = "Walking"),
	Sprinting UMETA(DisplayName = "Sprinting"),
};

UENUM(BlueprintType)
enum class EPlayerCombatState : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	Firing UMETA(DisplayName = "Firing"),
	Reloading UMETA(DisplayName = "Reloading"),
};