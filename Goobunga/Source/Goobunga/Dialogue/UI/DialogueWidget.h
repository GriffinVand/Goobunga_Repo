// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "DialogueReplyWidget.h"
#include "DialogueWidget.generated.h"

class URichTextBlock;
class UCommonButtonStyle;
/**
 * 
 */
class UTextBlock;
class UDialogueManagerComponent;
UCLASS()
class GOOBUNGA_API UDialogueWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	URichTextBlock* DialogueText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DialogueStyle = "<Wiggle>";
	FString DialogueStyleTail = "</>";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCommonButtonStyle> SelectableStyle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCommonButtonStyle> UnselectableStyle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UDialogueReplyWidget* ReplyWidget1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UDialogueReplyWidget* ReplyWidget2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UDialogueReplyWidget* ReplyWidget3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UDialogueReplyWidget* ReplyWidget4;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	TArray<UDialogueReplyWidget*> ReplyWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintReadWrite)
	UDialogueManagerComponent* DialogueManager;
	
	void SetDialogueManager(UDialogueManagerComponent* NewManager) { DialogueManager = NewManager; };
	void BindReplyWidgets();
	void DisplayDialogue(const FText& Text);
	void DisplayReplies(TArray<FText> Texts, TArray<bool> Selectable);
	
protected:
	virtual void NativeConstruct() override;
	virtual void NativeOnActivated() override;
};
