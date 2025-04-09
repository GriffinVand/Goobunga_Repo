#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EDamageType : uint8
{
	None UMETA(DisplayName = "None"),
	Spider UMETA(DisplayName = "Spider"),
	Player UMETA(DisplayName = "Player"),
	Slug UMETA(DisplayName = "Slug"),
};
