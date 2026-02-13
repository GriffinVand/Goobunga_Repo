// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_RandomChance.generated.h"

/**
 * 
 */
UCLASS()
class GOOBUNGA_API UBTD_RandomChance : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RangeStart = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RangeEnd = 1;
	
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
