#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Components/ProgressBar.h"
#include "DodgeWidgetBase.generated.h"

class UCommonLazyImage;
class UCommonTextBlock;

UCLASS()
class GOOBUNGA_API UDodgeWidgetBase : public UCommonUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonLazyImage* AbilityIcon;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UProgressBar* AbilityProgressBar;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonTextBlock* AbilityTextBlock;
	
	void UpdateUI(float Percent) { AbilityProgressBar->SetPercent(Percent); }
};
