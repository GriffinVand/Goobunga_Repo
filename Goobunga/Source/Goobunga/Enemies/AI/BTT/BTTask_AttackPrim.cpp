#include "BTTask_AttackPrim.h"
#include "Goobunga/Enemies/BaseEnemy.h"
#include "Goobunga/Enemies/EnemyCallables.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_AttackPrim::UBTTask_AttackPrim()
{
	NodeName = "Attack Primary";
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTask_AttackPrim::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetActorKey.SelectedKeyName));
	if (!TargetActor) return EBTNodeResult::Failed;
	StoredOwnerComp = &OwnerComp;
	if (AActor* SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName)))
	{
		if (IEnemyCallables* EnemyCallableInterface = Cast<IEnemyCallables>(SelfActor))
		{
			EnemyCallableInterface->GetAttackFinishedDelegate().RemoveDynamic(this, &UBTTask_AttackPrim::OnAttackFinished);
			EnemyCallableInterface->GetAttackFinishedDelegate().AddUniqueDynamic(this, &UBTTask_AttackPrim::OnAttackFinished);
			EnemyCallableInterface->AttackPrimary(TargetActor);
			return EBTNodeResult::InProgress;
		}
	}
	return EBTNodeResult::Failed;
}

void UBTTask_AttackPrim::OnAttackFinished()
{
	FinishLatentTask(*StoredOwnerComp, EBTNodeResult::Succeeded);
}
