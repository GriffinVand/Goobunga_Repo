#include "BTTask_AttackGeneric.h"

#include "EnemyCallables.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTask_AttackGeneric::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	if (AActor* SelfActor = OwnerComp.GetOwner())
	{
		if (IEnemyCallables* EnemyCallableInterface = Cast<IEnemyCallables>(SelfActor))
		{
			EnemyCallableInterface->AttackPrimary();
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
