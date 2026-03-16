#include "BTD_CanPrimAttack.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Goobunga/Enemies/EnemyCallables.h"

bool UBTD_CanPrimAttack::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	if (IEnemyCallables* EnemyInterface = Cast<IEnemyCallables>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName)))
	{
		return EnemyInterface->GetCanAttackPrim();
	}
	UE_LOG(LogTemp, Error, TEXT("Self actor not valid or no EnemyInterface"));
	return false;
}
