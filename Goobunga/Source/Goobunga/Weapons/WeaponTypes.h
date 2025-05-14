#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EWeaponType: uint8
{
	None UMETA(DisplayName = "None"),
	CatGun UMETA(DisplayName = "CatGun")
};