// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Goobunga/FireableCallables.h"
#include "Goobunga/ReloadManagerComponent.h"
#include "Goobunga/Combat/WeaponUITypes.h"

#include "Weapon.generated.h"

class UNiagaraSystem;
class UCameraComponent;

UENUM(BlueprintType)
enum class EWeapon : uint8
{
	None UMETA(DisplayName = "None"),
	CatGun UMETA(DisplayName = "CatGun"),
	GooGun UMETA(DisplayName = "GooGun")
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName WeaponID = "Weapon";
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EWeapon WeaponEnum = EWeapon::None;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* WeaponMesh;

	//Owning actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Context, meta = (AllowPrivateAccess = "true"))
	AActor* WeaponOwner;

	//Pose to use for ADS
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimationAsset* PoseAnim;
	
	//Attaching socket name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Context, meta = (AllowPrivateAccess = "true"))
	FName AttachSocketName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface, meta = (AllowPrivateAccess = "true"))
	EWeaponUItype WeaponUIType = EWeaponUItype::Thin;
	//ADS information
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	bool ADS = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float ADSTime = 2.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float ADSSpeed = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	FVector ADSOffsetLoc = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	FRotator ADSOffsetRot = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Reload)
	TArray<FReloadPhase> WeaponReloadPattern;
	
	//Default stats
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float FireRate = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float FireCooldown = FireRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	int BaseDamage = 1.f;

	//Recoil effect applied to owner controller
	//Lower values = more control. 0 is perfect
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float HipControl = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float AimControl = 0.3f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float CurrentControl = 1.f;

	//Weapon random spread leaving barrel
	//Lower accuracy values = more accurate
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	FVector2D HipSpread = FVector2D(2, 2);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	FVector2D AimSpread = FVector2D(.3, .3);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	FVector2D CurrentSpread = FVector2D(.3, .3);

	//Directions of recoil. Final recoil is direction*intensity
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil", meta = (AllowPrivateAccess = "true"))
	FVector RecoilDirectionMin = FVector(1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil", meta = (AllowPrivateAccess = "true"))
	FVector RecoilDirectionMax = FVector(1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil", meta = (AllowPrivateAccess = "true"))
	FVector RecoilIntensityMin = FVector(1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Recoil", meta = (AllowPrivateAccess = "true"))
	FVector RecoilIntensityMax = FVector(1, 1, 1);

	//Ammo
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Ammo", meta = (AllowPrivateAccess = "true"))
	int MaxAmmo = 120;
	int CurrentAmmo = MaxAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Ammo", meta = (AllowPrivateAccess = "true"))
	int MaxMag = 30;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Ammo", meta = (AllowPrivateAccess = "true"))
	int CurrentMag = 30;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Ammo", meta = (AllowPrivateAccess = "true"))
	int MaxAltAmmo = 10;
	int CurrentAltAmmo = MaxAltAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Ammo", meta = (AllowPrivateAccess = "true"))
	int MaxAltMag = 1;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Ammo", meta = (AllowPrivateAccess = "true"))
	int CurrentAltMag = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Icons", meta = (AllowPrivateAccess = "true"))
	TMap<FString, UTexture2D*> Icons;
	
	//Weapon may apply physical force when fired
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float HitForce = 0.f;

	//Effect to play when fired
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Visuals, meta = (AllowPrivateAccess = "true"))
	UNiagaraSystem* FireEffect;
	//Sound to play when fired
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Audio, meta = (AllowPrivateAccess = "true"))
	USoundBase* FireSound;

	//Animations are stored in two maps. Uses names to find corresponding animations
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation, meta = (AllowPrivateAccess = "true"))
	TMap<FName, UAnimMontage*> WeaponAnimations;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation, meta = (AllowPrivateAccess = "true"))
	TMap<FName, UAnimMontage*> OwnerAnimations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Animation)
	UAnimSequence* WeaponStaticAnim = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Animation)
	UAnimSequence* OwnerStaticAnim = nullptr;
	//Controlled by owner input
	bool bFiring = false;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	
	virtual void PlayAnimationSimultaneous(FName AnimationName);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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
	virtual bool CanADS() override {return ADS;}
	virtual float GetADSSpeed() override { return ADSTime * ADSSpeed;}
	virtual void UpdateAccuracy(float NewAccuracy) override;
	virtual void EquipEvent(AActor* EquippingInstigator) override;

	//Self-explanatory
	virtual void FireWeapon();
	virtual void DealDamage(AActor* DamagedActor, float Damage);
	//Sends recoil information to owner
	virtual void ApplyRecoil();
	//Tells owner to update UI elements related to this weapon
	virtual void UpdateOwnerUI();
	virtual void UpdateWeapon();
	virtual void PlayFireEffect();
	virtual void Reload();
	virtual FRotator GetFireDirection(bool bTrue = false);
	
};
