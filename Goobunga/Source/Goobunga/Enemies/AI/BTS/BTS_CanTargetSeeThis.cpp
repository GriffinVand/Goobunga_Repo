// Fill out your copyright notice in the Description page of Project Settings.

#include "BTS_CanTargetSeeThis.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Goobunga/Goobunga_Player.h"
#include "Goobunga/PlayerCallables.h"

UBTS_CanTargetSeeThis::UBTS_CanTargetSeeThis()
{
	NodeName = "Can Target See This";
}

void UBTS_CanTargetSeeThis::TickNode(UBehaviorTreeComponent& Comp, uint8* NodeMemory, float DeltaTime)
{
	AActor* SelfActor = Cast<AActor>(Comp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	AActor* TargetActor = Cast<AActor>(Comp.GetBlackboardComponent()->GetValueAsObject(TargetActorKey.SelectedKeyName));
	
	if (!SelfActor || !TargetActor) { Comp.GetBlackboardComponent()->SetValueAsBool(LookedAt.SelectedKeyName, false); return; }
	
	bool bLookedAt = false;
	
	if (AGoobunga_Player* GP = Cast<AGoobunga_Player>(TargetActor))
	{
		FVector ToSelf = SelfActor->GetActorLocation() - GP->FPCamera->GetComponentLocation();
		ToSelf = ToSelf.GetSafeNormal();
		FVector TargetForward = GP->FPCamera->GetForwardVector();
		bLookedAt = FVector::DotProduct(ToSelf, TargetForward)  >= 0.9;
	}
	Comp.GetBlackboardComponent()->SetValueAsBool(LookedAt.SelectedKeyName, bLookedAt);
}