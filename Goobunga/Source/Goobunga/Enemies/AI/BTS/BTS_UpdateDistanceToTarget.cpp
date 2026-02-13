// Fill out your copyright notice in the Description page of Project Settings.


#include "BTS_UpdateDistanceToTarget.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTS_UpdateDistanceToTarget::UBTS_UpdateDistanceToTarget()
{
	NodeName = "Update Distance To TargetKey";
}


void UBTS_UpdateDistanceToTarget::TickNode(UBehaviorTreeComponent& Comp, uint8* NodeMemory, float DeltaSeconds)
{
	AActor* SelfActor = Cast<AActor>(Comp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	AActor* TargetActor = Cast<AActor>(Comp.GetBlackboardComponent()->GetValueAsObject(TargetKey.SelectedKeyName));

	if (SelfActor && TargetActor)
	{
		float Distance = FVector::Dist(SelfActor->GetActorLocation(), TargetActor->GetActorLocation());
		Comp.GetBlackboardComponent()->SetValueAsFloat(DistanceToTargetKey.SelectedKeyName,Distance);
	}
}
