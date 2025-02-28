#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EStatusType : uint8
{
	Terror UMETA(DisplayName = "Terror"),
	Scorch UMETA(DisplayName = "Scorch"),
	Pepper UMETA(DisplayName = "Pepper"),
};
