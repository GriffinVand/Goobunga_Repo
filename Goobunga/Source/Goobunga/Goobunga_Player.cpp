#include "Goobunga_Player.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Fireable.h"
#include "GameFramework/CharacterMovementComponent.h"
// Sets default values
AGoobunga_Player::AGoobunga_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creating components and setting up attachments
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	FPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPCamera"));
	FPCamera->SetupAttachment(CameraBoom);
	CameraMeshOffset = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraMeshOffset"));
	CameraMeshOffset->SetupAttachment(FPCamera);
	CameraMeshOffset->bEnableCameraRotationLag = true;
	CameraMeshOffset->CameraRotationLagSpeed = MeshLag;
	TrueLookDirection = CreateDefaultSubobject<USceneComponent>(TEXT("TrueLookDirection"));
	TrueLookDirection->SetupAttachment(CameraMeshOffset);
	FPMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPMesh"));
	FPMesh->SetupAttachment(CameraMeshOffset);
}

// Called when the game starts or when spawned
void AGoobunga_Player::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

// Called every frame
void AGoobunga_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateAimDownSights();
	UpdateAimOffset();
	ApplyMovementAffect(FVector2D(0,0));
}

// Called to bind functionality to input
void AGoobunga_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::Move);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AGoobunga_Player::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AGoobunga_Player::StopJumping);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &AGoobunga_Player::FireStarted);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &AGoobunga_Player::FireEnded);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::FireEnded);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Started, this, &AGoobunga_Player::AltFireStarted);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Completed, this, &AGoobunga_Player::AltFireEnded);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::AltFireEnded);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::SprintStarted);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::SprintEnded);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &AGoobunga_Player::SprintEnded);
	}
}

void AGoobunga_Player::Move(const FInputActionValue& Value)
{
	const FVector2d MoveVector = Value.Get<FVector2d>();
	MovingForward = MoveVector.Y > 0;
	if (Sprinting == true && MovingForward)
	{
		AddMovementInput(GetActorForwardVector() * MoveVector.Y);
		ApplyMovementAffect(MoveVector);
		return;
	}
	AddMovementInput(GetActorForwardVector() * MoveVector.Y);
	AddMovementInput(GetActorRightVector() * MoveVector.X);
	ApplyMovementAffect(MoveVector);
}

void AGoobunga_Player::EndMove()
{
	MovingForward = false;
}


void AGoobunga_Player::Look(const FInputActionValue& Value)
{
	const FVector2d LookVector = Value.Get<FVector2d>();
	AddControllerPitchInput(LookVector.Y * -1 * Sensitivity);
	AddControllerYawInput(LookVector.X * Sensitivity);
}

//Stop weapon activity including aiming, increase move speed, and lock movement to forward
void AGoobunga_Player::SprintStarted()
{
	if (!GetCharacterMovement()->IsFalling() && MovingForward)
	{
		Sprinting = true;
		GetCharacterMovement()->MaxWalkSpeed = 1200.f;
	}
	else
	{
		Sprinting = false;
		GetCharacterMovement()->MaxWalkSpeed = 800.f;
	}
}

//Decrease movement speed, release movement direction
void AGoobunga_Player::SprintEnded()
{
	Sprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = 800.f;
}

//Rolls FPCamera when moving right or left //Alters FPCamera FOV when moving forward or backwards
void AGoobunga_Player::ApplyMovementAffect(FVector2D MoveVector)
{
	float NextHandTilt = FMath::FInterpTo(HandTilt, MoveVector.X * 10, GetWorld()->GetDeltaSeconds(), 5.f);
	HandTilt = NextHandTilt;

	float CurrentFOV = FPCamera->FieldOfView;
	float TargetFOV = 90 + (MoveVector.Y * 10);
	float NewFOV = FMath::FInterpTo(CurrentFOV, TargetFOV, GetWorld()->GetDeltaSeconds(), 5.f);
	FPCamera->SetFieldOfView(NewFOV);
}

//On fire event started alert equipped item, allowing it to handle necessary logic
void AGoobunga_Player::FireStarted()
{
	if (EquippedItem && EquippedItem->Implements<UFireable>())
	{
		IFireable* FireableInterface = Cast<IFireable>(EquippedItem);
		if (FireableInterface)
		{
			FireableInterface->FireEvent();
			UE_LOG(LogTemp, Display, TEXT("Called fire event"));
		}
		else {UE_LOG(LogTemp, Warning, TEXT("Could not call fire event"));}
	}
	else {UE_LOG(LogTemp, Warning, TEXT("Could not call fire event"));}
}
//On fire event ended alert equipped item, allowing it to handle necessary logic
void AGoobunga_Player::FireEnded()
{
	IFireable* FireableInterface = Cast<IFireable>(EquippedItem);
	if (FireableInterface)
	{
		FireableInterface->EndFireEvent();
		UE_LOG(LogTemp, Display, TEXT("Called endfire event"));
	}
	else {UE_LOG(LogTemp, Warning, TEXT("Could not call endfire event"));}
	UE_LOG(LogTemp, Display, TEXT("Fire ended"));
}

//On alt-fire(right mouse) started, check if the equipped item can ADS
//If so just perform ADS. If not, allow the equipped item to handle alt-fire
void AGoobunga_Player::AltFireStarted()
{
	if (EquippedItem && EquippedItem->Implements<UFireable>())
	{
		IFireable* FireableInterface = Cast<IFireable>(EquippedItem);
		if (FireableInterface)
		{
			if (FireableInterface->CanADS())
			{
				StartAimDownSights();
				UE_LOG(LogTemp, Display, TEXT("Call start ADS"))
			}
			else { FireableInterface->AltFireEvent(); }
		}
	}
	UE_LOG(LogTemp, Display, TEXT("Alt fire started"))
}

//On alt-fire(right mouse) ended
//Generic call to stop ads. Has no effect if weapon does not allow ads
void AGoobunga_Player::AltFireEnded()
{
	StopAimDownSights();
	UE_LOG(LogTemp, Display, TEXT("Alt fire ended"))
}

void AGoobunga_Player::StartAimDownSights()
{
	bAiming = true;
}

void AGoobunga_Player::StopAimDownSights()
{
	bAiming = false;
}

void AGoobunga_Player::UpdateAimDownSights()
{
	
	float TargetAimAlpha = bAiming ? 1.f : 0.f;
	float TargetAimSpeed = 1.f;
	if (EquippedItem && EquippedItem->Implements<UFireable>())
	{
		if (IFireable* FireableInterface = Cast<IFireable>(EquippedItem))
		{
			TargetAimSpeed = FireableInterface->GetADSSpeed();
			FireableInterface->UpdateAccuracy(CurrentAimAlpha);
		}
		else { UE_LOG(LogTemp, Warning, TEXT("Cast to fireable interface failed")); }
	}
	else { UE_LOG(LogTemp, Warning, TEXT("Equipped item not found")); }

	CurrentAimAlpha = FMath::FInterpConstantTo(CurrentAimAlpha, TargetAimAlpha, GetWorld()->GetDeltaSeconds(), TargetAimSpeed);
	float NewFOV = FMath::Lerp(90, 70, CurrentAimAlpha);
	Sensitivity = DefaultSensitivity * NewFOV / 90;
	FPCamera->SetFieldOfView(NewFOV);
	float NewVignette = FMath::Lerp(0.f, 0.5f, CurrentAimAlpha);
	FPCamera->PostProcessSettings.VignetteIntensity = NewVignette;
	CameraMeshOffset->CameraRotationLagSpeed = FMath::Lerp(MeshLag, 100.f, CurrentAimAlpha);
}

void AGoobunga_Player::ApplyAimOffset(FVector AimOffsetInput)
{
	UE_LOG(LogTemp, Display, TEXT("Apply Aim offset: %s"), *(AimOffsetInput).ToString());
	AimOffset += (AimOffsetInput);
}

//Rotates over time to supplied aim offset. avoids snappy recoil
void AGoobunga_Player::UpdateAimOffset()
{
	GetController()->SetControlRotation(GetControlRotation().Add(AimOffset.Y, AimOffset.Z, AimOffset.X));
	AimOffset = FMath::VInterpTo(AimOffset, FVector::ZeroVector, GetWorld()->GetDeltaSeconds(), 20.f);
	if (AimOffset != FVector::ZeroVector) { UE_LOG(LogTemp, Display, TEXT("Update Aim offset: %s"), *AimOffset.ToString()); }
}

//Return location and rotation of true look direction
TArray<FVector> AGoobunga_Player::GetAimDirection()
{
	return {TrueLookDirection->GetComponentLocation(), TrueLookDirection->GetForwardVector()};
}





