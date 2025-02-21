// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SwerveWhileChasing.generated.h"

/**
 * 
 */
UCLASS()
class GOOBUNGA_API UBTTask_SwerveWhileChasing : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_SwerveWhileChasing();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector SelfActorKey;
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector Player;
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector TargetLocation;
};
