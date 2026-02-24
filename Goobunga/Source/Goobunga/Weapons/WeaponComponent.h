// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"
#include "WeaponComponent.generated.h"

class AGoobunga_Player;
struct FWeaponSaveData;
class UGoobungaSaveFile;
DEFINE_LOG_CATEGORY_STATIC(LogWeaponComponent, Log, All);
class AWeapon;
class UTimelineComponent;




UENUM(BlueprintType)
enum class EWeaponSlot : uint8
{
	None UMETA(DisplayName = "None"),
	Primary UMETA(DisplayName = "Primary"),
	Secondary UMETA(DisplayName = "Secondary"),
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GOOBUNGA_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWeaponComponent();
	virtual void InitializeComponent() override;
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UPROPERTY(EditAnywhere)
	bool bUseDefaultWeapons = false;
	UPROPERTY(EditAnywhere)
	TMap<EWeaponSlot, FWeaponSaveData> DefaultWeapons;
	
	
	//WEAPONS
	UPROPERTY(EditAnywhere)
	AWeapon* PrimaryWeaponInstance = nullptr;
	UPROPERTY(EditAnywhere)
	AWeapon* SecondaryWeaponInstance = nullptr;
	
	EWeaponSlot EquippedWeaponSlot = EWeaponSlot::Primary;
	UFUNCTION(BlueprintCallable)
	AWeapon* GetEquippedWeapon();
	void EquipWeapon(EWeaponSlot Slot);
	void UnEquipWeapon(EWeaponSlot Slot);
	void SwapWeapons();
	void WeaponFullyDrawn(UAnimMontage* Montage, bool bInterrupted);
	void DrawWeapon(AWeapon* Weapon);
	void HolsterWeapon(AWeapon* Weapon);
	AWeapon* GetWeaponInSlot(EWeaponSlot Slot);
	void SetWeapon(const FWeaponSaveData& Weapon, EWeaponSlot Slot);
	
	UPROPERTY(EditAnywhere)
	TArray<FWeaponSaveData> OwnedWeapons;
	
	
	//SAVE-LOAD
	void InitializeFromSave(const UGoobungaSaveFile& SaveGame);
	void SaveToSaveGame(UGoobungaSaveFile& SaveGame);
	
	
	//ADS
	FTransform GetWeaponSightTransform();
	void AltFireStart();
	void AltFireStop(bool Cancelled);
	void PrimFireStart();
	void PrimFireStop(bool Cancelled);
	bool CanReload();
	void ReloadWeapon();
	bool bPrimFirePressed = false;
	bool bAltFirePressed = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAds = false;
	bool bReady = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform AimTestingTransform = FTransform::Identity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform AimRelativeTransform = FTransform::Identity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AdsAlpha = 0.f;
	
	void UpdateAds(bool bADS, float DeltaTime);
	void HandleNewAds();
	
	void SetUpAdsPoses();
	void CalculateAdsTransform();
	void UpdateAdsTransform(float Alpha);
	
	UPROPERTY(EditAnywhere)
	AGoobunga_Player* PlayerOwner = nullptr;
	
	
	
	
};
