#pragma once

#include "CoreMinimal.h"
#include "WeaponSwayData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponSwayData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SideMovement = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LookX = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LookY = 0.f;
};
