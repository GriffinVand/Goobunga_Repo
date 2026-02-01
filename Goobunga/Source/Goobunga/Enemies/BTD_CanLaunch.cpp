#include "BTD_CanLaunch.h"

#include "LaunchInterface.h"
#include "BehaviorTree/BlackboardComponent.h"

bool UBTD_CanLaunch::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool Result = false;
	AActor* SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	if (SelfActor)
	{
		if (ILaunchInterface* LI = Cast<ILaunchInterface>(SelfActor))
		{
			Result = LI->GetCanLaunch();
		}
	}
	return Result;
}
