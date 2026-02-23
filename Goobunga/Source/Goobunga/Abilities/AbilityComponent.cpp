#include "AbilityComponent.h"

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
	*AbilitySlotPtr = NewObject<UAbilityBase>(this, AbilityClass);
	if (!*AbilitySlotPtr) { UE_LOG(LogTemp, Error, TEXT("Tried to create new ability but nullptr AbilityComponent::EquipAbility")); }
}

void UAbilityComponent::AbilityStart(EAbilityType Slot)
{
	UAbilityBase* Ability = GetAbility(Slot);
	if (!Ability) return;
}

void UAbilityComponent::AbilityFinish(EAbilityType Slot)
{
	UAbilityBase* Ability = GetAbility(Slot);
	if (!Ability) return;
	
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

bool UAbilityComponent::CanUseAbility(EAbilityType Slot)
{
	UAbilityBase* Ability = GetAbility(Slot);
	if (!Ability) return false;
	
	
	return false;
}
