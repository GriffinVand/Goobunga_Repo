#include "BTD_CanSecAttack.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "Goobunga/Enemies/EnemyCallables.h"

bool UBTD_CanSecAttack::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	if (IEnemyCallables* EnemyInterface = Cast<IEnemyCallables>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName)))
	{
		return EnemyInterface->GetCanAttackSec();
	}
	UE_LOG(LogTemp, Error, TEXT("Self actor not valid or no EnemyInterface"));
	return false;
}
