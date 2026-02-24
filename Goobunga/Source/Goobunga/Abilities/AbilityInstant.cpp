#include "AbilityInstant.h"

#include "Goobunga/Goobunga_Player.h"

void UAbilityInstant::StartSpell()
{
	if (AbilityAnimation)
	{
		if (Player)
		{
			Player->PlayAnimMontage(AbilityAnimation);
		}
	}
}

void UAbilityInstant::UpdateSpell(float DeltaTime)
{
	
}
