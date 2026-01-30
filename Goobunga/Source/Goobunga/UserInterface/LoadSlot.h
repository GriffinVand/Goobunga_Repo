#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "LoadSlot.generated.h"
class UButton;
class UTextBlock;

UCLASS(Blueprintable, BlueprintType)
class GOOBUNGA_API ULoadSlot : public UCommonUserWidget
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* ButtonText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* LoadSlotButton;
	
	FString LoadSlotID = "";
	
	
	void InitializeLoadSlot(int32 ID);
	UFUNCTION(BlueprintCallable)
	void LoadSlot();
	UFUNCTION(BlueprintCallable)
	void LoadNewSlot();
};
