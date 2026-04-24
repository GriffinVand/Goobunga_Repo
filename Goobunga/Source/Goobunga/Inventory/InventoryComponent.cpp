#include "InventoryComponent.h"

#include "Goobunga/PersistentData/GoobungaSaveFile.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();	
}

void UInventoryComponent::InitializeFromSave(const UGoobungaSaveFile& SaveGame)
{
	OwnedItemData.Empty();
	for (TSoftObjectPtr<UItemData> SoftItem : SaveGame.PlayerOwnedItems)
	{
		OwnedItemData.Add(SoftItem.Get());
	}
	CurrentMoney = SaveGame.PlayerMoney;
}

void UInventoryComponent::SaveToSaveGame(UGoobungaSaveFile& SaveGame)
{
	SaveGame.PlayerOwnedItems.Empty();
	for (auto& Item : OwnedItemData) { SaveGame.PlayerOwnedItems.Add(Item); }
	SaveGame.PlayerMoney = CurrentMoney;
}

void UInventoryComponent::GetOwnedItemsByType(EItemDataType Type, TArray<TObjectPtr<UItemData>>& OutArray)
{
	OutArray.Empty();
	for (auto& Item : OwnedItemData)
	{
		if (Item->ItemType == Type) { OutArray.Add(Item); }
	}
}


