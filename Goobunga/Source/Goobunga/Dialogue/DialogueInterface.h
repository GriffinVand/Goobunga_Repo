#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DialogueInterface.generated.h"

class UBaseShopWidget;

UINTERFACE()
class UDialogueInterface : public UInterface
{
	GENERATED_BODY()
};

class GOOBUNGA_API IDialogueInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	FName GetCurrentDialogue();
	virtual FName GetCurrentDialogue_Implementation() { return FName(""); }
	
	virtual FName GetSpecializedDialogue(FName SpecialContext) { return FName(""); }
	virtual TSubclassOf<UBaseShopWidget> GetShopWidgetClass() { return nullptr; }
	
	UFUNCTION(BlueprintNativeEvent)
	void SetCurrentDialogue(FName CurrentDialogue);
	virtual void SetCurrentDialogue_Implementation(FName CurrentDialogue) {}
	
	UFUNCTION(BlueprintNativeEvent)
	void DialogueEnded();
	virtual void DialogueEnded_Implementation() {}
};
