#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetState.generated.h"

enum class ECombatantState : uint8;

UCLASS()
class GOOBUNGA_API UBTTask_SetState : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_SetState();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FBlackboardKeySelector SelfActorKey;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ECombatantState NewState;
	
};
