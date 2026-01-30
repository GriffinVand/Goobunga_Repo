#include "MasterWidget.h"

UCommonActivatableWidget* UMasterWidget::PushWidget(TSubclassOf<UCommonActivatableWidget> WidgetClass,  ELayerType Layer)
{
	UCommonActivatableWidgetStack* TargetStack;
	switch (Layer)
	{
	case ELayerType::Game:
		TargetStack = GameStack;
		break;
	case ELayerType::Menu:
		TargetStack = MenuStack;
		break;
	case ELayerType::Prompt:
		TargetStack = PromptStack;
		break;
	case ELayerType::System:
		TargetStack = SystemStack;
		break;
	default:
		return nullptr;
	}
	if (!TargetStack) return nullptr;
	UCommonActivatableWidget* NewWidget = TargetStack->AddWidget(WidgetClass);
	if (!NewWidget) return nullptr;
	NewWidget->ActivateWidget();
	return NewWidget;
}
