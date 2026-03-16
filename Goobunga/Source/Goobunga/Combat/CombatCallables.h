#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamageTypes.h"
#include "TeamInterface.h"
#include "CombatCallables.generated.h"

UENUM(BlueprintType)
enum class EDamageResult : uint8
{
	None UMETA(DisplayName = "None"),
	Default UMETA(DisplayName = "Default"),
	Critical UMETA(DisplayName = "Critical"),
	Kill UMETA(DisplayName = "Kill"),
};

UINTERFACE(MinimalAPI, NotBlueprintable)
class UCombatCallables : public UInterface
{
	GENERATED_BODY()
};


class GOOBUNGA_API ICombatCallables
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	virtual EDamageResult CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType, EAllegiance Allegiance) = 0;
	virtual void OnDealtDamage(EDamageResult DamageResult) {}
};
