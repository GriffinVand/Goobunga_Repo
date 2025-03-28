// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Components/Overlay.h"
#include "PlayerMainLayerWidget.generated.h"

/**
 * 
 */
UCLASS()
class GOOBUNGA_API UPlayerMainLayerWidget : public UCommonUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UOverlay* LayerContainer;
	
	void PushWidget(UUserWidget* Widget);
	UUserWidget* PopWidget() {return NULL;}
	UUserWidget* PeekWidget() {return NULL;}
	bool IsEmpty() const { return WidgetStack.Num() == 0; }
	void ClearStack() { for (auto Widget : WidgetStack) PopWidget(); }
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UUserWidget*> WidgetStack;
};
