#pragma once

#include "CoreMinimal.h"
#include "PlayerCallables.h"
#include "GameFramework/Character.h"
#include "Goobunga_Player.generated.h"

struct FInputActionValue;
class UInputMappingContext;
class UInputAction;
class UCameraComponent;
class USpringArmComponent;
;
UCLASS()
class GOOBUNGA_API AGoobunga_Player : public ACharacter, public IPlayerCallables
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGoobunga_Player();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

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

protected:

	//Lag amount of spring arm
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float MeshLag = 10.f;

	//Aim related
	bool bAiming = false;
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
	float CurrentAimAlpha = 0.f;
	float DefaultSensitivity = 0.5;
	float Sensitivity = DefaultSensitivity;

	//Used for actual controller look offset
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FVector AimOffset = FVector::ZeroVector;
	//Hand rotation matching movement direction
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float HandTilt = 0.f;

	//Movement
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool Sprinting = false;
	bool MovingForward = false;
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

	//Current equipped item, can be a weapon or an item
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
	AActor* EquippedItem;

	//Basic move look
	void Move(const FInputActionValue& Value);
	//When moving stops
	void EndMove();
	void Look(const FInputActionValue& Value);

	//Called on fire event started
	void FireStarted();
	//Called on fire event completed or cancelled
	void FireEnded();

	//Called on alt fire started
	void AltFireStarted();
	//Called on alt fire completed or cancelled
	void AltFireEnded();
	//Called on sprint started
	void SprintStarted();
	//Called on sprint ended
	void SprintEnded();
	
	void ApplyMovementAffect(FVector2D Movement);
	void StartAimDownSights();
	void StopAimDownSights();
	void UpdateAimDownSights();

	virtual void ApplyAimOffset(FVector AimOffsetInput) override;
	virtual TArray<FVector> GetAimDirection() override;
	void UpdateAimOffset();
};
