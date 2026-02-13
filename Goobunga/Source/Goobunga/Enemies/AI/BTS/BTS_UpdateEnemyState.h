// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTS_UpdateEnemyState.generated.h"

/**
 * 
 */
UCLASS()
class GOOBUNGA_API UBTS_UpdateEnemyState : public UBTService
{
	GENERATED_BODY()

public:
	UBTS_UpdateEnemyState();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blackboard")
	FBlackboardKeySelector SelfActorKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blackboard")
	FBlackboardKeySelector SelfActorStateKey;
};
