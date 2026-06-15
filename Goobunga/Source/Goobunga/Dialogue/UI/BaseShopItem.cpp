#include "BaseShopItem.h"

#include "CommonButtonBase.h"
#include "CommonLazyImage.h"
#include "CommonRichTextBlock.h"
#include "CommonTextBlock.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"

void UBaseShopItem::NativeConstruct()
{
	PurchaseButton->OnUnhovered().AddUObject(this, &UBaseShopItem::PurchaseUnhoveredEvent);
	PurchaseButton->OnHovered().AddUObject(this, &UBaseShopItem::PurchaseHoveredEvent);
	PurchaseButton->OnClicked().AddUObject(this, &UBaseShopItem::PurchaseClickedEvent);
	PurchaseText->SetRenderOpacity(0.f);
	PurchaseButton->SetRenderOpacity(0.f);
}

void UBaseShopItem::SetItemData(TObjectPtr<UItemData> Item)
{
	if (!Item) { UE_LOG(LogTemp, Error, TEXT("NULL Item BSI::SetItemData")) return; }
	ItemData = Item;
	ItemTitle->SetText(ItemData->ItemTitle);
	ItemCost->SetText(FText::FromString(FString::FromInt(ItemData->ItemCost)));
	PurchaseText->SetText(FText::FromString(FString("Purchase?\n") + FString::FromInt(ItemData->ItemCost)));
}

void UBaseShopItem::DisableShopItem()
{
	ItemOwnedCover->SetVisibility(ESlateVisibility::Visible);
	PurchaseButton->SetIsEnabled(false);
}

void UBaseShopItem::PurchaseHoveredEvent()
{
	PurchaseState = 0;
	PurchaseText->SetText(FText::FromString(FString("Purchase?\n") + FString::FromInt(ItemData->ItemCost)));
	PurchaseButton->SetRenderOpacity(1.f);
	PurchaseText->SetRenderOpacity(1.f);
}

void UBaseShopItem::PurchaseUnhoveredEvent()
{
	PurchaseState = 0;
	PurchaseButton->SetRenderOpacity(0.f);
	PurchaseText->SetRenderOpacity(0.f);
	
}

void UBaseShopItem::PurchaseClickedEvent()
{
	if (PurchaseState >= 1)
	{
		OnPurchaseClicked.Broadcast(this);
		
	}
	else
	{
		PurchaseText->SetText(FText::FromString(FString("Confirm?")));
	}
	PurchaseState += 1;
}
