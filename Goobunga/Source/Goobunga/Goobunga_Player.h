#pragma once

#include "CoreMinimal.h"
#include "PlayerCallables.h"
#include "Combat/CombatCallables.h"
#include "GameFramework/Character.h"
#include "UserInterface/PlayerMainWidget.h"
#include "Weapons/Weapon.h"
#include "Weapons/WeaponSwayData.h"
#include "Goobunga_Player.generated.h"

class UQuestManagerComponent;
struct FInputActionValue;
class UInputMappingContext;
class UInputAction;
class UCameraComponent;
class USpringArmComponent;
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
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	
	UFUNCTION(BlueprintCallable)
	FWeaponSwayData GetWeaponSwayData();

	//Default Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* FPMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	USpringArmComponent* CameraBoom;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	UCameraComponent* FPCamera;
	//Offsets FPMesh from FPCamera
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	USpringArmComponent* CameraMeshOffset;
	//Maintains camera location but inherits mesh offset
	//Used to calculate where player is truly aiming(not always center screen)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	USceneComponent* TrueLookDirection;

	//Custom components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	UFacialAnimationComponent* FacialAnimationComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	UReloadManagerComponent* ReloadManagerComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	UQuestManagerComponent* QuestManagerComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	UDialogueManagerComponent* DialogueManagerComponent;
	//UI
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	TSubclassOf<UUserWidget> PlayerMainWidgetSubclass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	UPlayerMainWidget* PlayerMainWidget;
	
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
	//Reloading?
	bool Reloading = false;
	//Aim related
	bool bAiming = false;
	//
	//Current equipped item, can be a weapon or an item
	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
	AActor* EquippedItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
	AWeapon* EquippedWeapon;
	//Stores current frame weapon sway data to be accessed easily. Represents look velocity and directional movement
	FWeaponSwayData LastWeaponSwayData = FWeaponSwayData();
	//Buffer for weapon sway data
	FWeaponSwayData CurrentWeaponSwayData = FWeaponSwayData();

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
	//Hand rotation matching movement direction
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float HandTiltX = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float HandTiltY = 0.f;

	//Movement
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool Sprinting = false;
	bool MovingForward = false;
	bool Busy = false;
	FVector2d MovementDirection = FVector2d(0,0);

	//
	//Input
	//
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveRightAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveLeftAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveFwdAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveBackAction;
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

	UFUNCTION(BlueprintCallable)
	void EquipWeapon(AActor* Weapon);
	UFUNCTION(BlueprintCallable)
	void UnequipCurrent();
	
	void ApplyMovementAffect(FVector2D Movement);
	void UpdateMovement();
	virtual void StartAimDownSights() override;
	virtual void StopAimDownSights() override;
	void StartReload();
	virtual void EndReload(bool Success) override;
	void UpdateAimDownSights();
	void UpdateAimOffset();
	void UpdateWeaponSwayData(float DeltaTime);

	virtual void CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType) override;
	void DeathSequence();
	
	virtual void ApplyAimOffset(FVector AimOffsetInput) override;
	virtual TArray<FVector> GetAimDirection() override;
	virtual void UpdateWeaponUI() override;
	virtual void PerformAction(const FString& Action) override;
	virtual void PushWidget(FGameplayTag GameplayTag, UUserWidget* Widget) override {}
};

