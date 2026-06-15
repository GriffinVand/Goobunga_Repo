#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "MainMenu.generated.h"

class UStartMenu;
class ULoadMenu;
class UGenericButton;
class UGenericWidgetStack;

UCLASS()
class GOOBUNGA_API UMainMenu : public UCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGenericWidgetStack* MainMenuStack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGenericButton* BackButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ULoadMenu> LoadMenuClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStartMenu> StartMenuClass;
	//Settings menu
	
protected:
	
	int32 DesiredStackCount = 0;
	
	virtual void NativeConstruct() override;
	virtual void NativeOnActivated() override;
	virtual void NativeOnDeactivated() override;
	
	void HandleBackClicked();
	
	void UpdateBackButton();
	void DisplayStartMenu();
	
	void HandleStartClicked();
	void HandleQuitClicked();
	void HandleSettingsClicked();
};
