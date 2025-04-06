// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Components/VerticalBox.h"
#include "QuestListWidget.generated.h"

/**
 * 
 */
UCLASS()
class GOOBUNGA_API UQuestListWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

	public:

	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UVerticalBox* QuestListContainer;
};
