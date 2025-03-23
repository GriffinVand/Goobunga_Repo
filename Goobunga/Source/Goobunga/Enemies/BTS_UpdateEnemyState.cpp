// Fill out your copyright notice in the Description page of Project Settings.


#include "BTS_UpdateEnemyState.h"

#include "EnemyCallables.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTS_UpdateEnemyState::UBTS_UpdateEnemyState()
{
	NodeName = "UpdateEnemyState";
	bNotifyTick = true;
}

void UBTS_UpdateEnemyState::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	if (AActor* SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName)))
	{
		if (IEnemyCallables* EnemyCallablesInterface = Cast<IEnemyCallables>(SelfActor))
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsEnum(SelfActorStateKey.SelectedKeyName, EnemyCallablesInterface->GetCurrentState());
		}
	}
}

