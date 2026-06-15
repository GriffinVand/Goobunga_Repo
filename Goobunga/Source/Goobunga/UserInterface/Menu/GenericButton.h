#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "GenericButton.generated.h"

class UFMODEvent;
class UCommonTextBlock;

UCLASS()
class GOOBUNGA_API UGenericButton : public UCommonButtonBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
	UCommonTextBlock* ButtonText;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UFMODEvent* HoverSound;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UFMODEvent* ClickSound;
	
protected:
	virtual void NativeConstruct() override;
	UFUNCTION()
	void HandleHovered();
	UFUNCTION()
	void HandleClicked();
};
