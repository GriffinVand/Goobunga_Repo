// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "CommonTextBlock.h"
#include "CommonLazyImage.h"
#include "QuestItemWidget.generated.h"

/**
 * 
 */
UCLASS()
class GOOBUNGA_API UQuestItemWidget : public UCommonUserWidget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCommonLazyImage* QuestImage;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCommonLazyImage* RewardImage;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCommonTextBlock* QuestNameText;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCommonTextBlock* QuestDescriptionText;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCommonTextBlock* QuestRewardText;
	
};
