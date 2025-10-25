#pragma once

#include "CoreMinimal.h"
#include "PlayerCallables.h"
#include "Combat/CombatCallables.h"
#include "GameFramework/Character.h"
#include "Weapons/Weapon.h"
#include "Weapons/WeaponComponent.h"
#include "Weapons/WeaponSwayData.h"
#include "Goobunga_Player.generated.h"

class UQuestManagerComponent;
struct FInputActionValue;
class UInputMappingContext;
class UInputAction;
class UReloadManagerComponent;
class UDialogueManagerComponent;
class UFacialAnimationComponent;
class AWeapon;

UCLASS()
class GOOBUNGA_API AGoobunga_Player : public ACharacter, public IPlayerCallables, public ICombatCallables
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGoobunga_Player();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	
	UFUNCTION(BlueprintCallable)
	FWeaponSwayData GetWeaponSwayData();

	//Default Components
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

	//Custom components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	UFacialAnimationComponent* FacialAnimationComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	UReloadManagerComponent* ReloadManagerComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	UQuestManagerComponent* QuestManagerComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	UDialogueManagerComponent* DialogueManagerComponent;

	//Hand rotation location
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform AimRelativeTransform = FTransform::Identity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AimAlpha = 0.f;
	
protected:
	//Stats
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Stats, meta =(AllowPrivateAccess=true))
	int MaxHealth = 100;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Stats, meta=(AllowPrivateAccess=true))
	int CurrHealth = MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Stats, meta=(AllowPrivateAccess=true))
	float SprintSpeed = 800.f;

	
	//2D Animation
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	UMaterialInterface* PlayerFaceMaterial;
	
	//Lag amount of spring arm
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float MeshLag = 15.f;
	FRotator LastLookRotation = FRotator::ZeroRotator;

	//
	//WEAPON INFORMATION
	//
	UPROPERTY(EditAnywhere)
	UWeaponComponent* WeaponComponent = nullptr;
	//Reloading?
	bool Reloading = false;
	//Aim related
	bool bAiming = false;
	//
	//Current equipped item, can be a weapon or an item
	//
	
	
	//Buffer for weapon sway data
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FWeaponSwayData TargetWeaponSwayData = FWeaponSwayData();
	FWeaponSwayData CurrentWeaponSwayData = FWeaponSwayData();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponSway")
	FVector2D WeaponSwayAmounts = FVector2D(-5.f, 5.f);

	//0 to 1, 1 being full ads, 0 being full hip
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
	float CurrentAimAlpha = 0.f;
	float DefaultSensitivity = 0.5;
	float Sensitivity = DefaultSensitivity;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FVector2D LookRotationOffset = FVector2D::ZeroVector;
	//Used for actual controller look offset
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FVector AimOffset = FVector::ZeroVector;

	//Movement
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool Sprinting = false;
	bool Busy = false;

	//
	//Input
	//
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* FireAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* AltFireAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* SprintAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* ReloadAction;

	//Basic move look
	void Move(const FInputActionValue& Value);
	//When moving stops
	void EndMove(const FInputActionValue& Value);
	
	void Look(const FInputActionValue& Value);
	void EndLook(const FInputActionValue& Value);

	//Called on fire event started
	void FireStarted();
	//Called on fire event completed or cancelled
	void FireEnded(bool Cancelled);
	//For enhanced input functionality
	void FireInputEnded() { FireEnded(false);}

	//Called on alt fire started
	void AltFireStarted();
	//Called on alt fire completed or cancelled
	void AltFireEnded(bool Cancelled);
	//For enhanced input functionality
	void AltFireInputEnded() { AltFireEnded(false);}
	
	//Called on sprint started
	void SprintStarted();
	//Called on sprint ended
	void SprintEnded();

	////
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment", meta = (AllowPrivateAccess = "true"), ReplicatedUsing = OnRep_EquippedWeapon)
	AWeapon* EquippedWeapon;
	UFUNCTION()
	void EquipWeapon(AWeapon* Weapon);
	UFUNCTION()
	void OnRep_EquippedWeapon();
	UFUNCTION()
	void CalculateAimDownSightTransform();
	UFUNCTION()
	void UpdateAimDownSightTransform();
	UFUNCTION(BlueprintCallable)
	void SpawnServerWeaponAction() { SpawnServerWeapon(); }
	UFUNCTION(Server, Reliable)
	void SpawnServerWeapon();
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ServerWeaponClass;
	////

	////
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ServerActorClass;
	UFUNCTION(BlueprintCallable)
	void SpawnServerActorAction() { SpawnServerActor(GetActorLocation() + FVector(0, 0, 300)); }
	UFUNCTION(Server, Reliable)
	void SpawnServerActor(FVector SpawnLocation);
	////
	

	UFUNCTION(BlueprintCallable)
	void UnequipCurrent();
	void StartReload();
	virtual void EndReload(bool Success) override;
	virtual void UpdateAds(float Alpha) override;
	virtual void UpdateWeaponUI() override { return;}
	void UpdateAimOffset();
	void UpdateWeaponSwayData(float DeltaTime);
	virtual void ApplyAimOffset(FVector AimOffsetInput) override;
	virtual TArray<FVector> GetAimDirection() override;

	//
	//combat function. Should probably be moved to a component
	//
	virtual void CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType) override;
	void DeathSequence();

	//
	//????
	virtual void PerformAction(const FString& Action) override;
	virtual void PushWidget(FGameplayTag GameplayTag, UUserWidget* Widget) override {}
};

