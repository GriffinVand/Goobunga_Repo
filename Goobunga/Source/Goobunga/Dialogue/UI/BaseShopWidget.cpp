#include "BaseShopWidget.h"

#include <string>

#include "BaseShopItem.h"
#include "CommonRichTextBlock.h"
#include "Components/GridPanel.h"
#include "Components/UniformGridPanel.h"
#include "Goobunga/PlayerCallables.h"
#include "Goobunga/CommonUI/CommonButton.h"
#include "Goobunga/Inventory/InventoryComponent.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"

void UBaseShopWidget::NativeConstruct()
{
	if (CloseButton) { CloseButton->OnClicked().Clear(); CloseButton->OnClicked().AddLambda([this]()
	{
		OnShopCloseInput.Broadcast();
	}); }
	for (auto Child : ShopItemGrid->GetAllChildren())
	{
		if (Child) ShopItemGrid->RemoveChild(Child);
	}
}

void UBaseShopWidget::PopulateShop(TArray<TObjectPtr<UItemData>> Items, TObjectPtr<UObject> Player)
{
	if (!Player) { return; }
	PCI.SetObject(Player);
	PCI.SetInterface(Cast<IPlayerCallables>(Player));
	if (!PCI) { return; }
	TArray<FName> OwnedItems = PCI->GetOwnedItemIDs();
	for (auto Item : Items)
	{
		AddShopItem(Item, OwnedItems.Contains(Item->ID));
	}
	UpdateMoneyText(PCI->GetInventory()->CurrentMoney);
}

void UBaseShopWidget::AddShopItem(TObjectPtr<UItemData> Item, bool bOwned)
{
	if (ShopItemClass)
	{
		UBaseShopItem* NewItem = CreateWidget<UBaseShopItem>(this, ShopItemClass);
		if (!NewItem) { return; }
		int32 ChildCount = ShopItemGrid->GetChildrenCount();
		ShopItemGrid->AddChildToGrid(NewItem, ChildCount/ItemsPerRow, ChildCount%ItemsPerRow );
		NewItem->SetItemData(Item);
		if (bOwned) { NewItem->DisableShopItem(); }
		NewItem->OnPurchaseClicked.Clear();
		NewItem->OnPurchaseClicked.AddDynamic(this, &UBaseShopWidget::TryPurchaseItem);
	}
}

void UBaseShopWidget::TryPurchaseItem(UBaseShopItem* ClickedItem)
{
	if (!ClickedItem || !PCI || !ClickedItem->ItemData) { return; }
	if (PCI->GetInventory()->CurrentMoney >= ClickedItem->ItemData->ItemCost)
	{
		UpdateMoneyText(PCI->GetInventory()->DeductMoney(ClickedItem->ItemData->ItemCost));
		ClickedItem->ItemData->OnPurchased(Cast<AActor>(PCI.GetObject()));
		ClickedItem->DisableShopItem();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Insufficient funds to purchase item BSW::TryPurchaseItem"));
		//Play error sound maybe play anim on item
	}
	
}

TOptional<FUIInputConfig> UBaseShopWidget::GetDesiredInputConfig() const
{
	return FUIInputConfig(ECommonInputMode::Menu, EMouseCaptureMode::NoCapture, EMouseLockMode::DoNotLock);
};
