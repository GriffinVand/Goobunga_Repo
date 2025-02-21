// Fill out your copyright notice in the Description page of Project Settings.


#include "BTS_UpdateDistanceToPlayer.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTS_UpdateDistanceToPlayer::UBTS_UpdateDistanceToPlayer()
{
	NodeName = "Update Distance To Player";
}


void UBTS_UpdateDistanceToPlayer::TickNode(UBehaviorTreeComponent& Comp, uint8* NodeMemory, float DeltaSeconds)
{
	AActor* SelfActor = Cast<AActor>(Comp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	AActor* PlayerActor = Cast<AActor>(Comp.GetBlackboardComponent()->GetValueAsObject(Player.SelectedKeyName));

	if (SelfActor && PlayerActor)
	{
		float Distance = FVector::Dist(SelfActor->GetActorLocation(), PlayerActor->GetActorLocation());
		Comp.GetBlackboardComponent()->SetValueAsFloat(DistanceToPlayer.SelectedKeyName,Distance);
	}
}
