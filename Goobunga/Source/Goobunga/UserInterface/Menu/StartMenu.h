#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "StartMenu.generated.h"

class UGenericButton;

UCLASS()
class GOOBUNGA_API UStartMenu : public UCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
	UGenericButton* StartButton;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
	UGenericButton* SettingsButton;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
	UGenericButton* QuitButton;

};
