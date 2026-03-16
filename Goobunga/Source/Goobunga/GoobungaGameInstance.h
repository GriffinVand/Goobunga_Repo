#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PersistentData/GoobungaSaveFile.h"
#include "GoobungaGameInstance.generated.h"

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
	
	
	void SetDefaultSaveFile(UGoobungaSaveFile& SaveFile);
};
