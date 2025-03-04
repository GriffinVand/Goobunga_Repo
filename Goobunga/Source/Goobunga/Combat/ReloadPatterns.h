#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EReloadPattern : uint8
{
	Left UMETA(DisplayName = "Left"),
	Right UMETA(DisplayName = "Right"),
	Up UMETA(DisplayName = "Up"),
	Down UMETA(DisplayName = "Down"),
	Circle UMETA(DisplayName = "Circle"),
};
