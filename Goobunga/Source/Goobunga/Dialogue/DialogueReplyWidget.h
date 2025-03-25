// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueReplyWidget.generated.h"

/**
 * 
 */
class UTextBlock;
class UCommonButtonBase;

UCLASS()
class GOOBUNGA_API UDialogueReplyWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* ReplyText;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UCommonButtonBase* ReplyButton;
};
