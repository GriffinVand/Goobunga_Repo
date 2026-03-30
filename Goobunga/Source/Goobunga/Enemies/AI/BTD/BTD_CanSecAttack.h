#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_CanSecAttack.generated.h"

UCLASS()
class GOOBUNGA_API UBTD_CanSecAttack : public UBTDecorator
{
	GENERATED_BODY()
public:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector SelfActorKey;
};
