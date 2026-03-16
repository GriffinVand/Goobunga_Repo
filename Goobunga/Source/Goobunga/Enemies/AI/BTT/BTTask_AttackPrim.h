#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_AttackPrim.generated.h"

UCLASS()
class GOOBUNGA_API UBTTask_AttackPrim : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_AttackPrim();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	UFUNCTION()
	virtual void OnAttackFinished();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBehaviorTreeComponent* StoredOwnerComp;
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector SelfActorKey;
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector TargetActorKey;
};
