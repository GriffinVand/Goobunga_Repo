// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTS_UpdateEnemyCooldowns.generated.h"

/**
 * 
 */
UCLASS()
class GOOBUNGA_API UBTS_UpdateEnemyCooldowns : public UBTService
{
	GENERATED_BODY()
public:
	UBTS_UpdateEnemyCooldowns();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector SelfActorKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector CanAttackKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector CanLaunchKey;
};
