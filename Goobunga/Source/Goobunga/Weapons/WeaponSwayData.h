#pragma once

#include "CoreMinimal.h"
#include "WeaponSwayData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponSwayData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Movement = FVector2D::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Look = FVector2D::ZeroVector;
};
