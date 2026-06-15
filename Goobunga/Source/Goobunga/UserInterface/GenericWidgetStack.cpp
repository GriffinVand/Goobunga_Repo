#include "GenericWidgetStack.h"

#include "CommonActivatableWidget.h"

UCommonActivatableWidget* UGenericWidgetStack::PushWidget(TSubclassOf<UCommonActivatableWidget> WidgetClass)
{
	UCommonActivatableWidget* NewWidget = AddWidget(WidgetClass);
	NewWidget->ActivateWidget();
	if (NewWidget) { ActiveWidget = NewWidget; }
	return NewWidget;
}

void UGenericWidgetStack::PopWidget()
{
	if (ActiveWidget) { ActiveWidget->DeactivateWidget(); return; }
	UE_LOG(LogTemp, Error, TEXT("Active Widget DNE UGenericWidgetStack::PopWidget"));
}

void UGenericWidgetStack::PopWidget(UCommonActivatableWidget* TargetWidget)
{
	if (TargetWidget) { TargetWidget->DeactivateWidget(); return; }
	UE_LOG(LogTemp, Error, TEXT("Target Widget DNE UGenericWidgetStack::PopWidget"));
}
