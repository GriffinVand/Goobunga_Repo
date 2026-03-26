#include "BaseShopWidget.h"

#include "Goobunga/CommonUI/CommonButton.h"

void UBaseShopWidget::NativeConstruct()
{
	if (CloseButton) { CloseButton->OnClicked().AddLambda([this]()
	{
		OnShopCloseInput.Broadcast();
	}); }
}
