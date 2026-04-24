#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


class UGoobungaSaveFile;
enum class EItemDataType : uint8;
class UItemData;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GOOBUNGA_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInventoryComponent();
	virtual void BeginPlay() override;
	void AddItem(const TObjectPtr<UItemData> Item) { OwnedItemData.AddUnique(Item); }
	bool OwnsItem(const TObjectPtr<UItemData>& Item) const { return OwnedItemData.Contains(Item); }
	const TArray<TObjectPtr<UItemData>>& GetAllOwnedItems() const { return OwnedItemData; }
	void GetOwnedItemsByType(EItemDataType Type, TArray<TObjectPtr<UItemData>>& OutArray); 
	void InitializeFromSave(const UGoobungaSaveFile& SaveGame);
	void SaveToSaveGame(UGoobungaSaveFile& SaveGame);
	int32 DeductMoney(const int32 Deduction) { return CurrentMoney -= Deduction; }
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 CurrentMoney = 0;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<UItemData>> OwnedItemData;

public:
};
