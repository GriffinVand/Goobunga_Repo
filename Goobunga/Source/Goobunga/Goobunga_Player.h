#pragma once

#include "CoreMinimal.h"
#include "FacialAnimationComponent.h"
#include "InputActionValue.h"
#include "PlayerCallables.h"
#include "Abilities/AbilityComponent.h"
#include "Combat/CombatCallables.h"
#include "Combat/TeamInterface.h"
#include "Dialogue/DialogueManagerComponent.h"
#include "GameFramework/Character.h"
#include "PersistentData/PersistentDataInterface.h"
#include "Weapons/Weapon.h"
#include "Weapons/WeaponComponent.h"
#include "Weapons/WeaponSwayData.h"
#include "Goobunga_Player.generated.h"

class UInventoryComponent;
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
	Swap UMETA(DisplayName = "Swap"),
	Interact UMETA(DisplayName = "Interact"),
	Dash UMETA(DisplayName = "Dash"),
	Pickup UMETA(DisplayName = "Pickup"),
};

UCLASS()
class GOOBUNGA_API AGoobunga_Player : public ACharacter, public IPlayerCallables, public ICombatCallables, public IPersistentDataInterface, public ITeamInterface
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	
	AGoobunga_Player();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	
	virtual EAllegiance GetAllegiance() const override { return PlayerAllegiance; }
	UFUNCTION(BlueprintCallable)
	bool ShouldGrip();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAllegiance PlayerAllegiance = EAllegiance::Friendly;

#pragma region Components
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneCaptureComponent2D* FacialCaptureComponent;
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
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AActor> FacialAnimationActorClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AActor* FacialAnimationActor;
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInventoryComponent* InventoryComponent;
#pragma endregion

	UFUNCTION()
	void EquipWeapon(AWeapon* Weapon);
	void UnequipWeapon(AWeapon* Weapon);
	
	virtual TArray<FVector> GetAimDirection() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AimAlpha = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Reloading = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Grip")
	float GripAlpha = 1.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TrueWeaponSwayData = FVector::ZeroVector;
	//Used for weapon recoil visually in hand
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector CurrentWeaponKickDir;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FRotator CurrentWeaponKickRot;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector TrueWeaponKickDir = FVector::ZeroVector;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector CurrentAdsLoc;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FQuat CurrentAdsRot;
	
	UFUNCTION(BlueprintCallable, Category="Interact")
	void PickUpWeapon(const FWeaponSaveData& WeaponData);
	
	void PlayAbilityMontage(UAnimMontage* Montage);
	void PlayAbilityMontageLoop(UAnimMontage* Montage, FName StartSection);
	void NotifyAbilityMontageEnded(UAnimMontage* Montage, bool bInterrupted);
	void HideWeaponForAbility();
	void ShowWeaponAfterAbility();
	void StopAbilityMontage(UAnimMontage* Montage);
	//UI Related
	void EquippedAbility(UAbilityBase* NewAbility);
	void EquippedDash();
	UFUNCTION()
	void OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& Payload);
	
	virtual void EndInteract_Implementation(AActor* InteractedActor) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAudioComponent* HitSoundComponent;
	
protected:
	
	//Sound
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Sound)
	USoundBase* CriticalHitSound;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Sound)
	USoundBase* RegularHitSound;
	
	//Stats
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Stats, meta =(AllowPrivateAccess=true))
	int MaxHealth = 100;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Stats, meta=(AllowPrivateAccess=true))
	int CurrHealth = MaxHealth;
	FName GetFacialAnimationByHealth(float HealthRatio);
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
	
	void UpdateReticle();
	void UpdateFPAlign();
	
	

#pragma region Input
	
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* DefaultMappingContext;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* InteractAction;
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
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* SmallAbilityAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LargeAbilityAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* DashAction;
	
	void Move(const FInputActionValue& Value);
	void EndMove(const FInputActionValue& Value);
	
	void DashInputStarted(const FInputActionValue& Value) { TryStartAction(ECombatAction::Dash); }
	
	void Look(const FInputActionValue& Value);
	void EndLook(const FInputActionValue& Value);
	
	void InteractInputStarted(const FInputActionValue& Value) { TryStartAction(ECombatAction::Interact); }
	void InteractInputEnded(const FInputActionValue& Value) { InteractEnded(false); }
	void InteractStarted();
	void InteractFinished();
	
	void InteractEnded(bool Cancelled);
	void UpdateInteract();
	bool CanInteract();
	
	UFUNCTION()
	void OnMontageEndedGeneric(UAnimMontage* Montage, bool bInterrupted);
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Interact")
	UAnimMontage* InteractMontage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Interact")
	AActor* InteractActor;
	bool bInteracting = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Interact")
	float InteractRange = 400.f;
	
	void ReloadInputStarted() { TryStartAction(ECombatAction::Reload); }
	void StartReload();
	virtual void EndReload(bool Success) override;
	
	void FireStarted();
	void FireEnded(bool Cancelled);
	void FireInputStarted() { TryStartAction(ECombatAction::PrimFire); }
	void FireInputEnded() { FireEnded(false);}
	
	void AltFireStarted();
	void AltFireEnded(bool Cancelled);
	void AltFireInputStarted();
	void AltFireInputEnded() { AltFireEnded(false);}
	
	void SprintStarted();
	void SprintEnded();
	void SprintInputStarted() { TryStartAction(ECombatAction::Sprint); }
	void SprintInputEnded() { SprintEnded(); }
	
	void SwapStarted();
	void SwapInputStarted() { TryStartAction(ECombatAction::Swap); }
	void SmallAbilityInputStarted() { TryStartAction(ECombatAction::SmallAbility); }
	void SmallAbilityInputEnded() { AbilityComponent->AbilityFinish(EAbilityType::Small); }
	void SmallAbilityInputCancelled() {}
	void LargeAbilityInputStarted() { TryStartAction(ECombatAction::LargeAbility); }
	void LargeAbilityInputEnded() { AbilityComponent->AbilityFinish(EAbilityType::Large); }
	void HealAbilityInputStarted() { TryStartAction(ECombatAction::HealAbility); }
	void HealAbilityInputEnded() { AbilityComponent->AbilityFinish(EAbilityType::Heal); }
	
	bool TryStartAction(ECombatAction Action);
	bool CanPerformAction(ECombatAction Action);
	void ResolveActionConflicts(ECombatAction Action);
	void StartAction(ECombatAction Action);
	
#pragma endregion
	
#pragma region Dash
	
	void StartDash();
	void EndDash();
	void UpdateDash(float DeltaTime);
	FVector2D LastMovementInputValue;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dash")
	UCurveFloat* DashCurve;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dash")
	float DashTotalTime = 0.35;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dash")
	float DashPeakSpeed = 2500.f;
	float DashElapsedTime = 0.f;
	FVector DashDirection = FVector::ZeroVector;
	bool bDashUnlocked = false;
	bool bDashing = false;
	bool bCanDash = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dash")
	float DashElapsed = 0.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dash")
	float DashCooldown = 1.5;
	
#pragma endregion Dash
	
#pragma region Audio
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Audio")
	UFMODEvent* DashEventSound;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Audio")
	UFMODEvent* HurtEventSound;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Audio")
	UFMODEvent* WalkEventSound;
	FTimerHandle WalkTimer;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Audio")
	float WalkEventFrequency = 0.3;
	UFUNCTION(BlueprintCallable, Category="Audio")
	void FootStep();
#pragma endregion Audio
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fade")
	float FadeTime = 1.5f;
	UFUNCTION(BlueprintCallable)
	void FadeAndLoad(FName LevelName);
	FName FadeLevel = NAME_None;
	UFUNCTION()
	void FadeFinished();
	virtual void UpdateAds(float Alpha) override;
	virtual void UpdateWeaponUI() override { return;}
	void UpdateWeaponSwayData(float DeltaTime);
	virtual void ApplyAimOffset(FVector AimOffsetInput) override;
	void UpdateAimOffset();
	virtual void ApplyWeaponKick(FVector KickDirection, FRotator KickRotation, FVector MaxDir, FRotator MaxRot) override;
	void UpdateWeaponKick();
	virtual TArray<FName> GetOwnedItemIDs() override;
	virtual void RecieveItem(EItemDataType Type, TObjectPtr<UItemData> ItemData, bool bEquip = false) override;
	virtual UInventoryComponent* GetInventory() override { return InventoryComponent; }
	virtual void StartDialogue(AActor* DialogueActor) override { if (DialogueManagerComponent) { DialogueManagerComponent->StartDialogue(DialogueActor); } }
	virtual UFacialAnimationComponent* GetFacialAnimation() override { return FacialAnimationComponent; }
	//
	//combat function. Should probably be moved to a component
	//
	virtual EDamageResult CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType, EAllegiance Allegiance) override;
	virtual void OnDealtDamage(EDamageResult DamageResult) override;
	
	void HandleDamageEffect(EDamageType DamageType);
	void DeathSequence();

	//Player callables?
	virtual void PerformAction(const FString& Action) override;
	virtual void PushWidget(FGameplayTag GameplayTag, UUserWidget* Widget) override {}
	
	//Persistent data
	virtual void LoadGameFromFile(const UGoobungaSaveFile& SaveGame) override;
	virtual void SaveGameToFile(UGoobungaSaveFile& SaveGame) override;
	
};

