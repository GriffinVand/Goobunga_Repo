#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EDamageType : uint8
{
	Sharp UMETA(DisplayName = "Sharp"),
	Blunt  UMETA(DisplayName = "Blunt"),
	Holy    UMETA(DisplayName = "Holy"),
};
