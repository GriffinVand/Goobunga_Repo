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
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Defaults)
	FWeaponSaveData DefPrimaryWeapon = FWeaponSaveData();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Defaults)
	FWeaponSaveData DefSecondaryWeapon = FWeaponSaveData();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Defaults)
	FAbilitySaveData DefHealAbility;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Defaults)
	FAbilitySaveData DefSmallAbility;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Defaults)
	FAbilitySaveData DefLargeAbility;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMissionData* SelectedMission = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> LoadingScreenClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Inventory)
	int32 CurrentMoney = 0;
	
	virtual void Init() override;
	
	UFUNCTION()
	void StartLoadingScreen(const FString& MapName);
	UFUNCTION()
	void EndLoadingScreen(UWorld* World);
	
	void SetDefaultSaveFile(UGoobungaSaveFile& SaveFile);
	void ClearMission() { SelectedMission = nullptr; }
	UFUNCTION(BlueprintCallable)
	void SelectMission(UMissionData* MissionData) { SelectedMission = MissionData; }
};
