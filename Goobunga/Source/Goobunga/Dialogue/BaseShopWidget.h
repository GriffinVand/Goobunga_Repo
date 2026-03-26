#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "BaseShopWidget.generated.h"

class UCommonButton;
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShopCloseInput);

UCLASS(Blueprintable)
class GOOBUNGA_API UBaseShopWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	FOnShopCloseInput OnShopCloseInput;
	
	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonButton* CloseButton;
	
	
};
