#include "BTTask_AttackSec.h"
#include "Goobunga/Enemies/BaseEnemy.h"
#include "Goobunga/Enemies/EnemyCallables.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_AttackSec::UBTTask_AttackSec()
{
	NodeName = "Attack Secondary";	
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTask_AttackSec::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetActorKey.SelectedKeyName));
	if (!TargetActor) return EBTNodeResult::Failed;
	StoredOwnerComp = &OwnerComp;
	if (IEnemyCallables* EnemyInterface = Cast<IEnemyCallables>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName)))
	{
		EnemyInterface->GetAttackFinishedDelegate().AddUniqueDynamic(this, &UBTTask_AttackSec::OnAttackFinished);
		EnemyInterface->AttackSecondary(TargetActor);
		return EBTNodeResult::InProgress;
	}
	return EBTNodeResult::Failed;
}

void UBTTask_AttackSec::OnAttackFinished()
{
	FinishLatentTask(*StoredOwnerComp, EBTNodeResult::Succeeded);
}
