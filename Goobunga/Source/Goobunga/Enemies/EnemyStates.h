#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum EEnemyState : uint8
{
	Default UMETA(DisplayName = "Default State"),
	Walking UMETA(DisplayName = "Walking State"),
	Chasing UMETA(DisplayName = "Chasing State"),
	Attacking UMETA(DisplayName = "Attacking State"),
	Launching UMETA(DisplayName = "Launching State"),
	Busy UMETA(DisplayName = "Busy State"),
	Death UMETA(DisplayName = "Death State"),
};
