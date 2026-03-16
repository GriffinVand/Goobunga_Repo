// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_CanPrimAttack.generated.h"

UCLASS()
class GOOBUNGA_API UBTD_CanPrimAttack : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FBlackboardKeySelector SelfActorKey;
};
