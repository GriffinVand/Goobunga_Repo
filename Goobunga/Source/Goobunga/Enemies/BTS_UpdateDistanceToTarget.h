// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTS_UpdateDistanceToTarget.generated.h"

/**
 * 
 */
UCLASS()
class GOOBUNGA_API UBTS_UpdateDistanceToTarget : public UBTService
{
	GENERATED_BODY()

public:
	UBTS_UpdateDistanceToTarget();
protected:	
	virtual void TickNode(UBehaviorTreeComponent& Comp, uint8* NodeMemory, float DeltaSeconds) override;
	
	UPROPERTY(EditAnywhere, Category = Blackboard, meta = (AllowPrivateAccess = "true"))
	FBlackboardKeySelector SelfActorKey;
	UPROPERTY(EditAnywhere, Category = Blackboard, meta = (AllowPrivateAccess = "true"))
	FBlackboardKeySelector TargetKey;
	UPROPERTY(EditAnywhere, Category = Blackboard, meta = (AllowPrivateAccess = "true"))
	FBlackboardKeySelector DistanceToTargetKey;
	
};
