#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "LoadSlot.h"
#include "Components/Overlay.h"
#include "LoadMenu.generated.h"

class UButton;
class UVerticalBox;

UCLASS(Blueprintable, BlueprintType)
class GOOBUNGA_API ULoadMenu : public UCommonActivatableWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> LoadSlotClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* LoadSlotContainer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	ULoadSlot* LoadSlot1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	ULoadSlot* LoadSlot2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	ULoadSlot* LoadSlot3;
	
	virtual void NativeConstruct() override;
	
};
