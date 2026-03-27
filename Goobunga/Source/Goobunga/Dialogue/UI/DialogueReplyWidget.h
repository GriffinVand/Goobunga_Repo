#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueReplyWidget.generated.h"

class UTextBlock;
class UCommonButtonBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplySelected, int32, ReplyIndex);

UCLASS()
class GOOBUNGA_API UDialogueReplyWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	virtual void NativeConstruct() override;
	
	FOnReplySelected OnReplySelected;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ReplyIndex = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* ReplyText;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UCommonButtonBase* ReplyButton;
};
