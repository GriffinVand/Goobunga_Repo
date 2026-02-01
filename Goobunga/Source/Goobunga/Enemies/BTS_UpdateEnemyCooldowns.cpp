// Fill out your copyright notice in the Description page of Project Settings.


#include "BTS_UpdateEnemyCooldowns.h"

#include "EnemyCallables.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTS_UpdateEnemyCooldowns::UBTS_UpdateEnemyCooldowns()
{
	NodeName = "UpdateEnemyCooldowns";
}

void UBTS_UpdateEnemyCooldowns::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	if (AActor* SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName)))
	{
		if (IEnemyCallables* EnemyCallablesInterface = Cast<IEnemyCallables>(SelfActor))
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsBool(CanAttackKey.SelectedKeyName, EnemyCallablesInterface->GetCanAttack());
		}
	}
	
}
