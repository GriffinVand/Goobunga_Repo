#include "BTTask_AttackGeneric.h"

#include "Goobunga/Enemies/EnemyCallables.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_AttackGeneric::UBTTask_AttackGeneric()
{
	NodeName = "Attack Generic";
}


EBTNodeResult::Type UBTTask_AttackGeneric::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AActor* SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	if (SelfActor)
	{
		if (IEnemyCallables* EnemyCallableInterface = Cast<IEnemyCallables>(SelfActor))
		{
			EnemyCallableInterface->AttackPrimary();
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
