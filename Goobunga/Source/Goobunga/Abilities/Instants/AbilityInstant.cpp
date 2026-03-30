#include "AbilityInstant.h"

#include "Goobunga/Goobunga_Player.h"

void UAbilityInstant::UpdateSpell(float DeltaTime)
{
	if (!bCooldownExpired) { UpdateCooldown(DeltaTime); }
}

void UAbilityInstant::UpdateCooldown(float DelaTime)
{
	CurrentCooldownTime = FMath::Max(0, CurrentCooldownTime -= DelaTime);
	if (CurrentCooldownTime <= 0.f)
	{
		bCooldownExpired = true;
	}
	OnCooldownChanged.Broadcast(CurrentCooldownTime/CooldownTime);
}

void UAbilityInstant::BeginDestroy()
{
	Super::BeginDestroy();
}

void UAbilityInstant::StartSpell()
{
	UE_LOG(LogTemp, Error, TEXT("Start instant spell"));
	bIsActive = true;
	if (StartUpAnimation)
	{
		UE_LOG(LogTemp, Error, TEXT("Startup anim exists"));
		if (Player)
		{
			UE_LOG(LogTemp, Error, TEXT("Player exists"));
			CurrActiveMontage = StartUpAnimation;
			Player->PlayAbilityMontage(StartUpAnimation);
			return;
		}
	}
	PerformSpell();
	
}

void UAbilityInstant::PerformSpell()
{
	CurrentCooldownTime = CooldownTime;
	OnCooldownChanged.Broadcast(CurrentCooldownTime/CooldownTime);
	bCooldownExpired = false;
}

void UAbilityInstant::CancelSpell()
{
	Finish();
}

void UAbilityInstant::NotifyMontageEnded(UAnimMontage* Montage)
{
	UE_LOG(LogTemp, Error, TEXT("Onmontage ended reached"));
	if (!Montage || !bIsActive) return;
	if (Montage == StartUpAnimation)
	{
		CurrActiveMontage = nullptr;
		Finish();
	}
}

bool UAbilityInstant::IsReady()
{
	return (!bIsActive && bCooldownExpired);
}
