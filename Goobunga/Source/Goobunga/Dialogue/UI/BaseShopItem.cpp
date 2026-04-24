#include "BaseShopItem.h"

#include "CommonButtonBase.h"
#include "CommonLazyImage.h"

void UBaseShopItem::NativeConstruct()
{
	PurchaseButton->OnUnhovered().AddUObject(this, &UBaseShopItem::PurchaseUnhoveredEvent);
	PurchaseButton->OnHovered().AddUObject(this, &UBaseShopItem::PurchaseHoveredEvent);
	PurchaseButton->OnClicked().AddUObject(this, &UBaseShopItem::PurchaseClickedEvent);
}

void UBaseShopItem::SetItemData(TObjectPtr<UItemData> Item)
{
	ItemData = Item;
}

void UBaseShopItem::DisableShopItem()
{
	PurchaseButton->SetIsEnabled(false);
}

void UBaseShopItem::PurchaseHoveredEvent()
{
	
}

void UBaseShopItem::PurchaseUnhoveredEvent()
{
	
}

void UBaseShopItem::PurchaseClickedEvent()
{
	if (PurchaseState++ > 1)
	{
		OnPurchaseClicked.Broadcast(this);
	}
}
