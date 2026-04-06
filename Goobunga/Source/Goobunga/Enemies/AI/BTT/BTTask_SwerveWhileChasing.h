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

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinDist = 500.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxDist = 1300.f;
	
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector SelfActorKey;
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector TargetActorKey;
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector TargetLocation;
};
