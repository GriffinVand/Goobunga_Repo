#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "InteractWidget.generated.h"

class UCommonTextBlock;
class UCommonLazyImage;

UCLASS()
class GOOBUNGA_API UInteractWidget : public UCommonUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonLazyImage* BackGroundImage;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonTextBlock* InteractText;
};
