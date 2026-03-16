#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EDamageType : uint8
{
	Default UMETA(DisplayName = "Default"),
	Explosion UMETA(DisplayName = "Explosion"),
	Goo UMETA(DisplayName = "Goo"),
};
