#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

UINTERFACE(BlueprintType)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

class GOOBUNGA_API IInteractInterface
{
	GENERATED_BODY()
public:
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Interact(AActor* Interactor);
};
