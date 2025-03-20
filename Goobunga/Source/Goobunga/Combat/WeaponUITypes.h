#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EWeaponUItype: uint8
{
	Thin UMETA(DisplayName = "Thin"),
	Thick UMETA(DisplayName = "Thick"),
	Barrage UMETA(DisplayName = "Barrage"),
};