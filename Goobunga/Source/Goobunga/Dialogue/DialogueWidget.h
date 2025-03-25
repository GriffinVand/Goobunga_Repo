// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DialogueReplyWidget.h"
#include "Blueprint/UserWidget.h"
#include "DialogueWidget.generated.h"

/**
 * 
 */
class UTextBlock;
class UDialogueManagerComponent;
UCLASS()
class GOOBUNGA_API UDialogueWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* DialogueText;

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
	
	virtual void NativeConstruct() override;
	void SetDialogueManager(UDialogueManagerComponent* NewManager) { DialogueManager = NewManager; };
	void BindReplyWidgets();
	void DisplayDialogue(const FText& Text);
	void DisplayReplies(TArray<FText> Texts);
};
