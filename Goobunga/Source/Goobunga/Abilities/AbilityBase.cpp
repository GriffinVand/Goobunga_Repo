#include "AbilityBase.h"

#include "AbilityComponent.h"
#include "Goobunga/Goobunga_Player.h"

void UAbilityBase::SetPlayerInstance(AGoobunga_Player* PlayerInst)
{
	if (PlayerInst)
	{
		Player = PlayerInst;
		return;
	}
	UE_LOG(LogTemp, Log, TEXT("Playerinst invalid AbilityBase::SetPlayerInstance"));
}

void UAbilityBase::SetAbilityCompInstance(UAbilityComponent* AbilityCompInst)
{
	if (AbilityCompInst)
	{
		AbilityComponent = AbilityCompInst;
	}
}

void UAbilityBase::Finish()
{
	bIsActive = false;
	if (AbilityComponent)
	{
		AbilityComponent->NotifyAbilityActiveFinished(AbilityType);
	}
	if (Player && CurrActiveMontage)
	{
		Player->StopAbilityMontage(CurrActiveMontage);
	}
}
