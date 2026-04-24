#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class ECombatantState : uint8
{
	Default UMETA(DisplayName = "Default State"),
	Passive UMETA(DisplayName = "Passive"),
	Busy UMETA(DisplayName = "Busy"),
	Calling UMETA(DisplayName = "Calling State"),
	Walking UMETA(DisplayName = "Walking State"),
	Attacking UMETA(DisplayName = "Attacking State"),
	Launching UMETA(DisplayName = "Launching State"),
	Death UMETA(DisplayName = "Death State"),
};
