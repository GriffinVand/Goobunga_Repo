#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "CommonRichTextBlock.h"
#include "CommonTextBlock.h"
#include "BaseShopWidget.generated.h"

class UGridPanel;
class UCommonButtonBase;
class UInventoryComponent;
class IPlayerCallables;
class UUniformGridPanel;
class UItemData;
class UCommonButton;
class UBaseShopItem;
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShopCloseInput);

UCLASS(Blueprintable)
class GOOBUNGA_API UBaseShopWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	FOnShopCloseInput OnShopCloseInput;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TScriptInterface<IPlayerCallables> PCI;
	
	virtual void PopulateShop(TArray<TObjectPtr<UItemData>> Items, TObjectPtr<UObject> Player);
	virtual TOptional<FUIInputConfig> GetDesiredInputConfig() const override;
	virtual void UpdateMoneyText(int32 NewMoney) { MoneyTextBlock->SetText(FText::FromString(FString("Pepper Bux: ") + FString::FromInt(NewMoney))); }
	
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonTextBlock* MoneyTextBlock;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UGridPanel* ShopItemGrid;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonButtonBase* CloseButton;
	
protected:
	virtual void NativeConstruct() override;
	
	virtual void AddShopItem(TObjectPtr<UItemData> Item, bool bOwned);
	UFUNCTION()
	virtual void TryPurchaseItem(UBaseShopItem* ClickedItem);
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 ItemsPerRow = 5;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UBaseShopItem> ShopItemClass;
};
