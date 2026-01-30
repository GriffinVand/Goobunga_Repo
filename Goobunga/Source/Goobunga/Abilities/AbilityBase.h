#pragma once
#include "CoreMinimal.h"
#include "AbilityBase.generated.h"

UCLASS(Blueprintable)
class GOOBUNGA_API UAbilityBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AbilityID = "Ability";
	
};
