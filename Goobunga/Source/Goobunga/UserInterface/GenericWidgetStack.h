#pragma once

#include "CoreMinimal.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "GenericWidgetStack.generated.h"

UCLASS()
class GOOBUNGA_API UGenericWidgetStack : public UCommonActivatableWidgetStack
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCommonActivatableWidget* ActiveWidget;
	
	UFUNCTION(BlueprintCallable)
	//Pops specific widget
	void PopWidget(UCommonActivatableWidget* TargetWidget);
	//Unbiased pop
	void PopWidget();
	
	UCommonActivatableWidget* PushWidget(TSubclassOf<UCommonActivatableWidget> WidgetClass);
};
