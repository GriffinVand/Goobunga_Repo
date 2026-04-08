#include "BTTask_SetState.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Goobunga/Enemies/BaseEnemy.h"

UBTTask_SetState::UBTTask_SetState()
{
	NodeName = "Set State";
}

EBTNodeResult::Type UBTTask_SetState::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (!OwnerComp.GetBlackboardComponent()) { return EBTNodeResult::Failed; }
	IEnemyCallables* EC = Cast<IEnemyCallables>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	if (!EC) { return EBTNodeResult::Failed; }
	EC->SetCurrentState(NewState);
	
	return EBTNodeResult::Succeeded;
}
