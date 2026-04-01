#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "EventInterface.generated.h"
UINTERFACE(MinimalAPI, Blueprintable)
class UEventInterface : public UInterface
{
	GENERATED_BODY()
};

class GOOBUNGA_API IEventInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void ReceiveEvent(const FGameplayTag Tag);
	
	virtual void ReceiveEvent_Implementation(const FGameplayTag Tag) {}
};
