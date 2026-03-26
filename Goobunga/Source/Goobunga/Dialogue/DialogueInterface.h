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
	virtual FName GetCurrentDialogue() { return FName(""); }
	virtual FName GetSpecializedDialogue(FName SpecialContext) { return FName(""); }
	virtual TSubclassOf<UBaseShopWidget> GetShopWidgetClass() { return nullptr; }
	virtual void SetCurrentDialogue(FName CurrentDialogue) {}
};
