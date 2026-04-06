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
	
	UFUNCTION(BlueprintNativeEvent)
	bool PlayAnim();
	virtual bool PlayAnim_Implementation() { return true; }
	
	UFUNCTION(BlueprintNativeEvent)
	bool CanInteract();
	virtual bool CanInteract_Implementation() { return true;}
	
	UFUNCTION(BlueprintNativeEvent)
	FText GetInteractText(AActor* Interactor);
	virtual FText GetInteractText_Implementation(AActor* Interactor) { return FText::FromString("Press 'E' to interact"); }
};
