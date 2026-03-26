// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "QuestStruct.h"
#include "Components/ActorComponent.h"
#include "CommonActivatableWidget.h"
#include "QuestListWidget.h"
#include "QuestManagerComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GOOBUNGA_API UQuestManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UQuestManagerComponent();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> QuestIDs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FQuestStruct> QuestData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCommonActivatableWidget> QuestListWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UQuestListWidget* QuestListWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* QuestTable;
	
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	bool IsQuestComplete(FName QuestID);
	
	void AddQuestToQuestList(FName QuestID);
	void RemoveQuest(FName QuestID);
	void CompleteQuest(FName QuestID);
	
	void CreateQuestIndicatorWidget();
	void CreateQuestListWidget();
	
	UFUNCTION()
	void UpdateQuestProgress(FGameplayTagContainer QuestObjTags, int ProgressIncrement);
};
