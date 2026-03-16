// Fill out your copyright notice in the Description page of Project Settings.


#include "GoobungaGameInstance.h"

void UGoobungaGameInstance::SetDefaultSaveFile(UGoobungaSaveFile& SaveFile)
{
	SaveFile.CurrentHub = "L_Forest";
	SaveFile.PlayerPrimaryWeapon = DefPrimaryWeapon;
	SaveFile.PlayerSecondaryWeapon = DefSecondaryWeapon;
	SaveFile.PlayerHealAbility = DefHealAbility;
	SaveFile.PlayerSmallAbility = DefSmallAbility;
	SaveFile.PlayerLargeAbility = DefLargeAbility;
}
