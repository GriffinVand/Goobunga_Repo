#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_AttackGeneric.generated.h"

UCLASS()
class GOOBUNGA_API UBTTask_AttackGeneric : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_AttackGeneric();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector SelfActorKey;
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector AttackNumKey;
};
