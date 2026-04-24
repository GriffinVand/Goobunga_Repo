#pragma once

#include "CoreMinimal.h"
#include "NPCData.generated.h"

UENUM(BlueprintType)
enum class ENonCombatantState : uint8
{
	None UMETA(DisplayName ="None"),
	Busy UMETA(DisplayName ="Busy"),
	Idle UMETA(DisplayName ="Idle"),
	Walking UMETA(DisplayName ="Walking"),
	Talking UMETA(DisplayName ="Talking"),
};