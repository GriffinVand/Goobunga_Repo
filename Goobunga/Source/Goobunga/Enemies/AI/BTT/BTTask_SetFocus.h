#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetFocus.generated.h"

UCLASS()
class GOOBUNGA_API UBTTask_SetFocus : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_SetFocus();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
protected:
	
	UPROPERTY(editAnywhere, BlueprintReadOnly)
	bool bClearFocus = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FBlackboardKeySelector SelfActorKey;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "!bClearFocus"))
	FBlackboardKeySelector TargetActorKey;
};
