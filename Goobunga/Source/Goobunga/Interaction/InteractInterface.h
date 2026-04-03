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
	
	UFUNCTION(BlueprintNativeEvent)
	void Interact(AActor* Interactor);
	virtual void Interact_Implementation(AActor* Interactor) { }
	
	bool PlayAnim() { return true; }
	
	FText GetInteractText(AActor* Interactor) { return FText::FromString("Press 'E' to interact"); }
};
