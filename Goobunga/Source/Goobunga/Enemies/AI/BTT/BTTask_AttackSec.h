#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_AttackSec.generated.h"
UCLASS()
class GOOBUNGA_API UBTTask_AttackSec : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_AttackSec();
	
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	UFUNCTION()
	virtual void OnAttackFinished();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bWaitForFinish = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBehaviorTreeComponent* StoredOwnerComp;
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector SelfActorKey;
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector TargetActorKey;
	
	
};
