#pragma once

#include "CoreMinimal.h"
#include "PlayerCallables.h"
#include "Abilities/AbilityComponent.h"
#include "Combat/CombatCallables.h"
#include "GameFramework/Character.h"
#include "PersistentData/PersistentDataInterface.h"
#include "Weapons/Weapon.h"
#include "Weapons/WeaponComponent.h"
#include "Weapons/WeaponSwayData.h"
#include "Goobunga_Player.generated.h"

class UAbilityComponent;
class UQuestManagerComponent;
struct FInputActionValue;
class UInputMappingContext;
class UInputAction;
class UReloadManagerComponent;
class UDialogueManagerComponent;
class UFacialAnimationComponent;
class AWeapon;

UENUM(BlueprintType)
enum class ECombatAction : uint8
{
	PrimFire UMETA(DisplayName = "PrimFire"),
	SecFire UMETA(DisplayName = "SecFire"),
	Aim UMETA(DisplayName = "Aim"),
	SmallAbility UMETA(DisplayName = "SmallAbility"),
	LargeAbility UMETA(DisplayName = "LargeAbility"),
	HealAbility UMETA(DisplayName = "HealAbility"),
	Sprint UMETA(DisplayName = "Sprint"),
	Reload UMETA(DisplayName = "Reload"),
	Swap UMETA(DisplayName = "Swap")
};

UCLASS()
class GOOBUNGA_API AGoobunga_Player : public ACharacter, public IPlayerCallables, public ICombatCallables, public IPersistentDataInterface
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	
	AGoobunga_Player();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

#pragma region Components
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* FPMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCameraComponent* FPCamera;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* FPMesh_Static;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* FPEquipped_Static;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	USceneComponent* FPMesh_Align;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	UFacialAnimationComponent* FacialAnimationComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	UReloadManagerComponent* ReloadManagerComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	UQuestManagerComponent* QuestManagerComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	UDialogueManagerComponent* DialogueManagerComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWeaponComponent* WeaponComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityComponent* AbilityComponent;
#pragma endregion

	UFUNCTION()
	void EquipWeapon(AWeapon* Weapon);
	void UnequipWeapon(AWeapon* Weapon);
	
	UFUNCTION(BlueprintCallable)
	FWeaponSwayData GetWeaponSwayData();
	
	virtual TArray<FVector> GetAimDirection() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AimAlpha = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Reloading = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Grip")
	float GripAlpha = 1.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TrueWeaponSwayData = FVector::ZeroVector;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector CurrentAdsLoc;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FQuat CurrentAdsRot;
	
protected:
	//Stats
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Stats, meta =(AllowPrivateAccess=true))
	int MaxHealth = 100;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Stats, meta=(AllowPrivateAccess=true))
	int CurrHealth = MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Stats, meta=(AllowPrivateAccess=true))
	float SprintSpeed = 800.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Animation)
	UAnimMontage* HideWeaponMontage;
	//2D Animation
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	UMaterialInstance* PlayerFaceMaterial;
	
	//Lag amount of spring arm
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float MeshLag = 15.f;
	FRotator LastLookRotation = FRotator::ZeroRotator;
	
	//Aim related
	bool bAiming = false;
	//Movement
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool Sprinting = false;
	bool Busy = false;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FWeaponSwayData TargetWeaponSwayData = FWeaponSwayData();
	FWeaponSwayData CurrentWeaponSwayData = FWeaponSwayData();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponSway")
	FVector2D WeaponSwayAmounts = FVector2D(-5.f, 5.f);

	//0 to 1, 1 being full ads, 0 being full hip
	float DefaultSensitivity = 0.5;
	float Sensitivity = DefaultSensitivity;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FVector2D LookRotationOffset = FVector2D::ZeroVector;
	//Used for actual controller look offset
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FVector AimOffset = FVector::ZeroVector;
	//Used for weapon recoil visually in hand
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector CurrentWeaponKickDir;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FRotator CurrentWeaponKickRot;
	
	void UpdateFPAlign();
	
	

#pragma region Input
	
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* DefaultMappingContext;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* FireAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* AltFireAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* SprintAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ReloadAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MainAbilityAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* SecondaryAbilityAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* SwapAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* HealAction;
	
	void Move(const FInputActionValue& Value);
	void EndMove(const FInputActionValue& Value);
	
	void Look(const FInputActionValue& Value);
	void EndLook(const FInputActionValue& Value);
	
	void ReloadInputStarted() { TryStartAction(ECombatAction::Reload); }
	void StartReload();
	virtual void EndReload(bool Success) override;
	
	void FireStarted();
	void FireEnded(bool Cancelled);
	void FireInputStarted() { TryStartAction(ECombatAction::PrimFire); }
	void FireInputEnded() { FireEnded(false);}
	
	void AltFireStarted();
	void AltFireEnded(bool Cancelled);
	void AltFireInputStarted() { TryStartAction(ECombatAction::SecFire); }
	void AltFireInputEnded() { AltFireEnded(false);}
	
	void SprintStarted();
	void SprintEnded();
	void SprintInputStarted() { TryStartAction(ECombatAction::Sprint); }
	void SprintInputEnded() { SprintEnded(); }
	
	void SwapStarted();
	void SwapInputStarted() { TryStartAction(ECombatAction::Swap); }
	void SmallAbilityInputStarted() { TryStartAction(ECombatAction::SmallAbility); }
	void SmallAbilityInputEnded() { AbilityComponent->AbilityFinish(EAbilityType::Small); }
	void LargeAbilityInputStarted() { TryStartAction(ECombatAction::LargeAbility); }
	void LargeAbilityInputEnded() { AbilityComponent->AbilityFinish(EAbilityType::Large); }
	void HealAbilityInputStarted() { TryStartAction(ECombatAction::HealAbility); }
	void HealAbilityInputEnded() { AbilityComponent->AbilityFinish(EAbilityType::Heal); }
	
	void TryStartAction(ECombatAction Action);
	bool CanPerformAction(ECombatAction Action);
	void ResolveActionConflicts(ECombatAction Action);
	void StartAction(ECombatAction Action);
	
#pragma endregion
	
	virtual void UpdateAds(float Alpha) override;
	virtual void UpdateWeaponUI() override { return;}
	void UpdateWeaponSwayData(float DeltaTime);
	virtual void ApplyAimOffset(FVector AimOffsetInput) override;
	void UpdateAimOffset();
	virtual void ApplyWeaponKick(FVector KickDirection, FRotator KickRotation, FVector MaxDir, FRotator MaxRot) override;
	void UpdateWeaponKick();
	void PlayAbilityMontage(UAnimMontage* Montage);
	void PlayAbilityMontageLoop(UAnimMontage* Montage, FName StartSection);
	void NotifyAbilityMontageEnded(UAnimMontage* Montage, bool bInterrupted);
	void HideWeaponForAbility();
	//
	//combat function. Should probably be moved to a component
	//
	virtual void CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType) override;
	void DeathSequence();

	//Player callables?
	virtual void PerformAction(const FString& Action) override;
	virtual void PushWidget(FGameplayTag GameplayTag, UUserWidget* Widget) override {}
	
	//Persistent data
	virtual void LoadGameFromFile(const UGoobungaSaveFile& SaveGame) override;
	virtual void SaveGameToFile(UGoobungaSaveFile& SaveGame) override;
	
};

