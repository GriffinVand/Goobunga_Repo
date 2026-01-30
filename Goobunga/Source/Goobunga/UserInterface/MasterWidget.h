#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "MasterWidget.generated.h"

struct FGameplayTag;

UENUM(BlueprintType)
enum class ELayerType : uint8
{
	Game UMETA(DisplayName = "Game"),
	Menu UMETA(DisplayName = "Menu"),
	Prompt UMETA(DisplayName = "Prompt"),
	System UMETA(DisplayName = "System"),
};

UCLASS(Blueprintable)
class GOOBUNGA_API UMasterWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	UCommonActivatableWidget* PushWidget(TSubclassOf<UCommonActivatableWidget> WidgetClass, ELayerType Layer);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCommonActivatableWidgetStack* GameStack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCommonActivatableWidgetStack* MenuStack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCommonActivatableWidgetStack* PromptStack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCommonActivatableWidgetStack* SystemStack;
	
};

