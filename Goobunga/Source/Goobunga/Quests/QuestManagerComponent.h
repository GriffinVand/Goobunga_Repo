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
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyKilled, FName, EnemyType);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemCollected, FName, ItemType);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLevelCompleted, FName, LevelType, float, CompletionTime);
	
	// Sets default values for this component's properties
	UQuestManagerComponent();

protected:
	// Called when the game starts
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
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	bool IsQuestComplete(FName QuestID);
	
	void RemoveQuest(FName QuestID);
	void CompleteQuest(FName QuestID);
	void CreateQuestIndicatorWidget();
	void CreateQuestListWidget();
	void AddQuestToQuestList(FName QuestID);
	void UpdateQuestProgress(FName QuestObjID, int ProgressIncrement);
};
