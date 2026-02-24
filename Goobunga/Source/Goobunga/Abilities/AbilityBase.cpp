#include "AbilityBase.h"

#include "AbilityComponent.h"

void UAbilityBase::SetPlayerInstance(AGoobunga_Player* PlayerInst)
{
	if (PlayerInst)
	{
		Player = PlayerInst;
	}
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
		AbilityComponent->NotifyAbilityFinished(AbilityType);
	}
}
