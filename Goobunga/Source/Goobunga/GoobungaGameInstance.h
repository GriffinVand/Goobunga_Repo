#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PersistentData/GoobungaSaveFile.h"
#include "GoobungaGameInstance.generated.h"

class UMissionData;
class UGoobungaSaveFile;

UCLASS()
class GOOBUNGA_API UGoobungaGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWeaponSaveData DefPrimaryWeapon = FWeaponSaveData();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWeaponSaveData DefSecondaryWeapon = FWeaponSaveData();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAbilitySaveData DefHealAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAbilitySaveData DefSmallAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAbilitySaveData DefLargeAbility;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMissionData* SelectedMission = nullptr;
	
	
	void SetDefaultSaveFile(UGoobungaSaveFile& SaveFile);
	void ClearMission() { SelectedMission = nullptr; }
	UFUNCTION(BlueprintCallable)
	void SelectMission(UMissionData* MissionData) { SelectedMission = MissionData; }
};
