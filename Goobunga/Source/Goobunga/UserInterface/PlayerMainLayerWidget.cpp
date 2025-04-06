// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMainLayerWidget.h"

void UPlayerMainLayerWidget::PushWidget(UUserWidget* widget)
{
	if (WidgetStack.Num() > 0)
	{
		WidgetStack[WidgetStack.Num() - 1]->SetVisibility(ESlateVisibility::Collapsed);
	}
	WidgetStack.Push(widget);
	LayerContainer->AddChild(widget);
}