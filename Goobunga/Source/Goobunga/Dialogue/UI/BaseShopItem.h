#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "BaseShopItem.generated.h"

class UCommonTextBlock;
class UOverlay;
class UItemData;
class UCommonLazyImage;
class UCommonButtonBase;
class UCommonRichTextBlock;

UCLASS()
class GOOBUNGA_API UBaseShopItem : public UCommonUserWidget
{
	GENERATED_BODY()
	
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPurchaseClicked, UBaseShopItem*, ShopItem);
	
	virtual void SetItemData(TObjectPtr<UItemData> Item);
	virtual void DisableShopItem();
	virtual void PurchaseFailed() { PlayAnimation(PurchaseFailedAnim); }
	FOnPurchaseClicked OnPurchaseClicked;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UItemData> ItemData;
	
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonLazyImage* ItemOwnedCover;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonTextBlock* ItemTitle;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonTextBlock* ItemCost;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonLazyImage* ItemImage;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonButtonBase* PurchaseButton;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonTextBlock* PurchaseText;
	
	UPROPERTY(EditAnywhere, Transient, meta=(BindWidgetAnim))
	UWidgetAnimation* PurchaseFailedAnim;
	
protected:
	virtual void NativeConstruct();
	virtual void PurchaseHoveredEvent();
	virtual void PurchaseClickedEvent();
	virtual void PurchaseUnhoveredEvent();
	
	int32  PurchaseState = 0;
};
