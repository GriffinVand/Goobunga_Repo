// Fill out your copyright notice in the Description page of Project Settings.

#include "BTS_CanPlayerSeeThis.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Goobunga/PlayerCallables.h"

UBTS_CanPlayerSeeThis::UBTS_CanPlayerSeeThis()
{
	NodeName = "Can Player See This";
}

void UBTS_CanPlayerSeeThis::TickNode(UBehaviorTreeComponent& Comp, uint8* NodeMemory, float DeltaTime)
{
	AActor* SelfActor = Cast<AActor>(Comp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	AActor* PlayerActor = Cast<AActor>(Comp.GetBlackboardComponent()->GetValueAsObject(Player.SelectedKeyName));

	IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(PlayerActor);
	if (PlayerCallablesInterface)
	{
		FVector PlayerLocation = PlayerCallablesInterface->GetAimDirection()[0];
		FVector PlayerForwardVector = PlayerCallablesInterface->GetAimDirection()[1];

		FHitResult HitResult;
		bool bHit = PlayerActor->GetWorld()->LineTraceSingleByChannel(HitResult, PlayerLocation, PlayerLocation + PlayerForwardVector*2000, ECC_Visibility);
		if (bHit)
		{
			if (HitResult.GetActor() == SelfActor) { Comp.GetBlackboardComponent()->SetValueAsBool(LookedAt.SelectedKeyName, true); return;}
		}
	}
	Comp.GetBlackboardComponent()->SetValueAsBool(LookedAt.SelectedKeyName, false);
}