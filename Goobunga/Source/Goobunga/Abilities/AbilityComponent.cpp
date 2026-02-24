#include "AbilityComponent.h"
#include "Goobunga/Goobunga_Player.h"

void UAbilityComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (ActiveAbility)
	{
		ActiveAbility->UpdateSpell(DeltaTime);
	}
}

void UAbilityComponent::InitializeFromSave(const UGoobungaSaveFile& SaveGame)
{
	OwnedAbilities = SaveGame.PlayerOwnedAbilities;
	TSubclassOf<UAbilityBase> AbilityClass = SaveGame.PlayerPrimaryAbility.AbilityClass;
	if (AbilityClass)
	{
		EquipAbility(EAbilityType::Small, AbilityClass);
	} else { UE_LOG(LogTemp, Error, TEXT("SmallAbility class is null AbilityComponent::InitializeFromSave")); }
	AbilityClass = SaveGame.PlayerSecondaryAbility.AbilityClass;
	if (AbilityClass)
	{
		EquipAbility(EAbilityType::Large, AbilityClass);
	} else { UE_LOG(LogTemp, Error, TEXT("LargeAbility class is null AbilityComponent::InitializeFromSave")); }
	AbilityClass = SaveGame.PlayerHealAbility.AbilityClass;
	if (AbilityClass)
	{
		EquipAbility(EAbilityType::Heal, AbilityClass);
	} else { UE_LOG(LogTemp, Error, TEXT("HealAbility class is null AbilityComponent::InitializeFromSave")); }
}

void UAbilityComponent::SaveToSaveGame(UGoobungaSaveFile& SaveGame)
{
	FAbilitySaveData PrimaryAbilityData;
	if (SmallAbility)
	{
		PrimaryAbilityData.AbilityClass = SmallAbility->GetClass();
	}
	SaveGame.PlayerPrimaryAbility = PrimaryAbilityData;
	FAbilitySaveData SecondaryAbilityData;
	if (LargeAbility)
	{
		SecondaryAbilityData.AbilityClass = LargeAbility->GetClass();
	}
	SaveGame.PlayerSecondaryAbility = SecondaryAbilityData;
	FAbilitySaveData HealAbilityData;
	if (HealAbility)
	{
		HealAbilityData.AbilityClass = HealAbility->GetClass();
	}
	SaveGame.PlayerHealAbility = HealAbilityData;
	
	SaveGame.PlayerOwnedAbilities = OwnedAbilities;
}

void UAbilityComponent::EquipAbility(EAbilityType Slot, TSubclassOf<UAbilityBase> AbilityClass)
{
	if (!AbilityClass) { UE_LOG(LogTemp, Error, TEXT("Passed in AbilityClass is null AbilityComponent::EquipAbility")); return; }
	UAbilityBase** AbilitySlotPtr;
	switch (Slot)
	{
	case EAbilityType::Small:
		AbilitySlotPtr = &SmallAbility;
		break;
	case EAbilityType::Large:
		AbilitySlotPtr = &LargeAbility;
		break;
	case EAbilityType::Heal:
		AbilitySlotPtr = &HealAbility;
		break;
	default:
		return;
	}
	if (UAbilityBase* NewAbility = NewObject<UAbilityBase>(this, AbilityClass))
	{
		AGoobunga_Player* Owner = Cast<AGoobunga_Player>(GetOwner());
		NewAbility->SetPlayerInstance(Owner);
		*AbilitySlotPtr = NewAbility;
	}
	
	if (!*AbilitySlotPtr) { UE_LOG(LogTemp, Error, TEXT("Tried to create new ability but nullptr AbilityComponent::EquipAbility")); }
}

void UAbilityComponent::AbilityStart(EAbilityType Slot)
{
	UAbilityBase* Ability = GetAbility(Slot);
	if (!Ability) return;
	if (!Ability->GetIsActive()) { Ability->StartSpell(); return; }
	if (Ability->GetIsToggle()) { Ability->StartSpell(); }
}

void UAbilityComponent::AbilityFinish(EAbilityType Slot)
{
	UAbilityBase* Ability = GetAbility(Slot);
	if (!Ability) return;
	if (Ability->GetIsActive()) { Ability->EndSpell(); }
}

UAbilityBase* UAbilityComponent::GetAbility(EAbilityType Slot)
{
	switch (Slot)
	{
	case EAbilityType::Small:
		return SmallAbility;
	case EAbilityType::Large:
		return LargeAbility;
	case EAbilityType::Heal:
		return HealAbility;
	default:
		return nullptr;
	}
}

void UAbilityComponent::NotifyMontageEnded(UAnimMontage* Montage)
{
	if (ActiveAbility)
	{
		ActiveAbility->NotifyMontageEnded(Montage);
	}
}

void UAbilityComponent::NotifyAbilityFinished(EAbilityType Slot)
{
	
}

bool UAbilityComponent::CanUseAbility(EAbilityType Slot)
{
	UAbilityBase* Ability = GetAbility(Slot);
	if (!Ability) return false;
	
	if (!Ability->IsReady()) return false;
	if (Ability->GetIsActive() && Ability->GetIsToggle()) return true;
	if (ActiveAbility && !Ability->GetIsPassive()) return false;
	
	return true;
	
}

bool UAbilityComponent::IsFlagBlocked(EAbilityBlockFlag Flag)
{
	if (ActiveAbility)
	{
		switch (Flag)
		{
		case EAbilityBlockFlag::Fire:
			return ActiveAbility->GetBlocksFire();
		case EAbilityBlockFlag::Aim:
			return ActiveAbility->GetBlocksADS();
		case EAbilityBlockFlag::Grip:
			return ActiveAbility->GetDisablesGrip();
		case EAbilityBlockFlag::Reload:
			return true;
		case EAbilityBlockFlag::Sprint:
			return true;
		case EAbilityBlockFlag::Swap:
			return true;
		}
	}
	return false;
}
