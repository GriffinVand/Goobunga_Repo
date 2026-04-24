// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MediaSoundComponent.h"
#include "GameFramework/Actor.h"
#include "Goobunga/FireableCallables.h"
#include "Goobunga/ReloadManagerComponent.h"
#include "Goobunga/Combat/WeaponUITypes.h"

#include "Weapon.generated.h"

class UFMODEvent;
class UFMODAudioComponent;
class UNiagaraSystem;
class UCameraComponent;

UENUM(BlueprintType)
enum class EWeapon : uint8
{
	None UMETA(DisplayName = "None"),
	CatGun UMETA(DisplayName = "CatGun"),
	GooGun UMETA(DisplayName = "GooGun"),
	BananaGun UMETA(DisplayName = "BananaGun")
};

UCLASS()
class GOOBUNGA_API AWeapon : public AActor, public IFireableCallables
{
	GENERATED_BODY()
	
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAmmoChanged);
	UPROPERTY(BlueprintAssignable)
	FOnAmmoChanged OnAmmoChanged;
	
	// Sets default values for this actor's properties
	AWeapon();
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName WeaponID = "Weapon";
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EWeapon WeaponEnum = EWeapon::None;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh)
	USkeletalMeshComponent* WeaponMesh;

	bool bWeaponReady = false;

	UPROPERTY()
	AActor* WeaponOwner;

	//Pose to use for bADS
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAnimationAsset* PoseAnim;
	
	//Attaching socket name
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Context)
	FName AttachSocketName = "";

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UserInterface)
	EWeaponUItype WeaponUIType = EWeaponUItype::Thin;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	bool bGrips = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	bool bHasAlt = true;
	//bADS information
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	bool bADS = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta=(EditCondition="bADS", EditConditionHides = "true"))
	float ADSTime = 2.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta=(EditCondition="bADS", EditConditionHides = "true"))
	float ADSSpeed = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(EditCondition="bADS"))
	FTransform AimTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Reload)
	TArray<FReloadPhase> WeaponReloadPattern;
	
	//Default stats
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	float FireRate = 1.f;
	float FireCooldown = FireRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	int BaseDamage = 1.f;

	//Recoil effect applied to owner controller
	//Lower values = more control. 0 is perfect
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil")
	float HipControl = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil", meta = (EditCondition="bADS", EditConditionHides = "true"))
	float AimControl = 0.3f;
	float CurrentControl = HipControl;

	//Weapon random spread leaving barrel
	//Lower accuracy values = more accurate
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil")
	FVector2D HipSpread = FVector2D(2, 2);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil", meta = (EditCondition = "bADS", EditConditionHides = "true"))
	FVector2D AimSpread = FVector2D(.3, .3);
	FVector2D CurrentSpread = HipSpread;

	//Directions of recoil. Final recoil is direction*intensity
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil")
	FVector RecoilDirectionMin = FVector(1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil")
	FVector RecoilDirectionMax = FVector(1, 1, 1);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil")
	FVector KickDirection;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil")
	FRotator KickRotation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil")
	FVector MaxKickDirection;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil")
	FRotator MaxKickRotation;

	//Ammo
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Ammo")
	int MaxAmmo = 120;
	int CurrentAmmo = 120;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Ammo")
	int MaxMag = 30;
	int CurrentMag = 30;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Ammo", meta = (EditCondition = "bHasAlt", EditConditionHides = "true"))
	int MaxAltAmmo = 10;
	int CurrentAltAmmo = 10;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Ammo", meta = (EditCondition = "bHasAlt", EditConditionHides = "true"))
	int MaxAltMag = 1;
	int CurrentAltMag = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Icons")
	TMap<FString, UTexture2D*> Icons;
	
	//Weapon may apply physical force when fired
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	float HitForce = 0.f;

	//Effect to play when fired
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Visuals)
	UNiagaraSystem* FireEffect;
	//Sound to play when fired
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Audio)
	UFMODAudioComponent* FireSoundComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Audio)
	UFMODEvent* FireEventSound;

	//Animations are stored in two maps. Uses names to find corresponding animations
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Animation)
	TMap<FName, UAnimMontage*> WeaponAnimations;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Animation)
	TMap<FName, UAnimMontage*> OwnerAnimations;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Animation)
	UAnimSequence* WeaponStaticAnim = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Animation)
	UAnimSequence* OwnerStaticAnim = nullptr;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	
	virtual UAnimInstance* PlayAnimationSimultaneous(FName AnimationName, FOnMontageEnded& EndDelegate, float Speed);
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetAmmo(int32 Ammo, int32 Mag, int32 AltAmmo, int32 AltMag) { CurrentAmmo = Ammo; CurrentMag = Mag; CurrentAltAmmo = AltAmmo; CurrentAltMag = AltMag; }
	
	//Fireable interface functions
	virtual void FireEvent() override;
	virtual void EndFireEvent(bool Cancelled) override;
	virtual void AltFireEvent() override;
	virtual void EndAltFireEvent(bool Cancelled) override;
	virtual void ReloadEvent() override;
	
	virtual int GetMaxMag() override { return MaxMag;}
	virtual int GetCurrentMag() override { return CurrentMag;}
	virtual int GetMaxAmmo() override { return MaxAmmo;}
	virtual int GetCurrentAmmo() override { return CurrentAmmo;}
	virtual EWeaponUItype GetWeaponUItype() override{ return WeaponUIType; }
	
	virtual UTexture2D* GetIcon(FString IconName) override;
	virtual FName GetAttachSocketName() override { return AttachSocketName; }
	//Does this weapon allow ads
	virtual bool CanADS() override {return bADS;}
	virtual float GetADSSpeed() override { return ADSTime * ADSSpeed;}
	virtual void UpdateAccuracy(float NewAccuracy) override;
	virtual void EquipEvent(AActor* EquippingInstigator) override;

	//Self-explanatory
	virtual void FireWeapon();
	//Sends recoil information to owner
	virtual void ApplyRecoil();
	//Tells owner to update UI elements related to this weapon
	virtual void UpdateOwnerUI();
	virtual void UpdateWeapon();
	virtual void PlayFireEffect();
	virtual void PlayFireSound();
	virtual void Reload();
	virtual FRotator GetFireDirection(bool bTrue = false);
	
};
