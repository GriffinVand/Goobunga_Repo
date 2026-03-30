// Fill out your copyright notice in the Description page of Project Settings.

#include "BTS_CanTargetSeeThis.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Goobunga/PlayerCallables.h"

UBTS_CanTargetSeeThis::UBTS_CanTargetSeeThis()
{
	NodeName = "Can Target See This";
}

void UBTS_CanTargetSeeThis::TickNode(UBehaviorTreeComponent& Comp, uint8* NodeMemory, float DeltaTime)
{
	AActor* SelfActor = Cast<AActor>(Comp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	AActor* TargetActor = Cast<AActor>(Comp.GetBlackboardComponent()->GetValueAsObject(TargetActorKey.SelectedKeyName));

	IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(TargetActor);
	if (PlayerCallablesInterface)
	{
		FVector PlayerLocation = PlayerCallablesInterface->GetAimDirection()[0];
		FVector PlayerForwardVector = PlayerCallablesInterface->GetAimDirection()[1];

		FHitResult HitResult;
		bool bHit = TargetActor->GetWorld()->LineTraceSingleByChannel(HitResult, PlayerLocation, PlayerLocation + PlayerForwardVector*5000, ECC_Visibility);
		//DrawDebugLine(PlayerActor->GetWorld(), PlayerLocation, PlayerLocation + PlayerForwardVector*2000, FColor::Red);
		if (bHit)
		{
			if (HitResult.GetActor() == SelfActor) { Comp.GetBlackboardComponent()->SetValueAsBool(LookedAt.SelectedKeyName, true); return;}
		}
	}
	Comp.GetBlackboardComponent()->SetValueAsBool(LookedAt.SelectedKeyName, false);
}