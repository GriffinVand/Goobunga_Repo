#include "Goobunga_Player.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Fireable.h"
#include "ReloadManagerComponent.h"
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
	FacialAnimationComponent = CreateDefaultSubobject<UFacialAnimationComponent>(TEXT("FacialAnimationComponent"));
	ReloadManagerComponent = CreateDefaultSubobject<UReloadManagerComponent>(TEXT("ReloadManagerComponent"));
	
	
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
	UpdateMovement();
	UpdateLookVelocity(DeltaTime);
	
}

// Called to bind functionality to input
void AGoobunga_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveRightAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::Move);
		//EnhancedInputComponent->BindAction(MoveRightAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(MoveRightAction, ETriggerEvent::Completed, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(MoveLeftAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::Move);
		//EnhancedInputComponent->BindAction(MoveLeftAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(MoveLeftAction, ETriggerEvent::Completed, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(MoveFwdAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::Move);
		//EnhancedInputComponent->BindAction(MoveFwdAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(MoveFwdAction, ETriggerEvent::Completed, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(MoveBackAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::Move);
		//EnhancedInputComponent->BindAction(MoveBackAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(MoveBackAction, ETriggerEvent::Completed, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AGoobunga_Player::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AGoobunga_Player::StopJumping);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &AGoobunga_Player::FireStarted);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &AGoobunga_Player::FireEnded);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::FireEnded);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Started, this, &AGoobunga_Player::AltFireStarted);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Completed, this, &AGoobunga_Player::AltFireEnded);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::AltFireEnded);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &AGoobunga_Player::SprintStarted);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::SprintEnded);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &AGoobunga_Player::SprintEnded);
		EnhancedInputComponent->BindAction(ReloadAction, ETriggerEvent::Started, this, &AGoobunga_Player::StartReload);
	}
}

//Called on movement triggered
//Movement input added to a temporary move direction vector which is processed after all movement input is read
void AGoobunga_Player::Move(const FInputActionValue& Value)
{
	const FVector2d MoveVector = Value.Get<FVector2d>();
	if (Sprinting)
	{
		if (MoveVector == FVector2D(0, 1))
		{
			MovementDirection += MoveVector;
		}
	}
	else
	{
		MovementDirection += MoveVector;
	}
}

//Called when movement stops being triggered
void AGoobunga_Player::EndMove(const FInputActionValue& Value)
{
	
}

void AGoobunga_Player::StartReload()
{
	if (Sprinting)
	{
		SprintEnded();
	}
	if (!Reloading)
	{
		FireEnded();
		AltFireEnded();
		StopAimDownSights();
		UE_LOG(LogTemp, Display, TEXT("PlayerStartReload"));
		Reloading = true;
		TArray<EReloadPattern> TempReloadPattern = TArray{EReloadPattern::Left, EReloadPattern::Right, EReloadPattern::Up, EReloadPattern::Down, EReloadPattern::Circle};
		ReloadManagerComponent->StartReload(TempReloadPattern);
	}
}

void AGoobunga_Player::EndReload(bool Success)
{
	UE_LOG(LogTemp, Display, TEXT("PlayerEndReload"));
	Reloading = false;
}

//Called when look input detected. 
void AGoobunga_Player::Look(const FInputActionValue& Value)
{
	if (Reloading) { ReloadManagerComponent->UpdateReload(); return; }
	const FVector2d LookVector = Value.Get<FVector2d>();
	MouseLookDirection += LookVector;
}

//Stop weapon activity including aiming, increase move speed, as long as grounded and only moving forward
void AGoobunga_Player::SprintStarted()
{
	if (!GetCharacterMovement()->IsFalling() && MovingForward)
	{
		if (Sprinting == false)
		{
			FireEnded();
			AltFireEnded();
			StopAimDownSights();
			if (ReloadManagerComponent) { ReloadManagerComponent->StopReload(false); }
		}
		Sprinting = true;
		GetCharacterMovement()->MaxWalkSpeed = 1200.f;
	}
	else { SprintEnded(); }
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
	float NextHandTiltX = FMath::FInterpTo(HandTiltX, MoveVector.X * 5, GetWorld()->GetDeltaSeconds(), 5.f);
	HandTiltX = NextHandTiltX;
	float NextHandTiltY = FMath::FInterpTo(HandTiltY, MoveVector.Y * 5, GetWorld()->GetDeltaSeconds(), 5.f);
	HandTiltY = NextHandTiltY;
	
}

void AGoobunga_Player::UpdateMovement()
{
	AddMovementInput(GetActorForwardVector() * MovementDirection.Y);
	AddMovementInput(GetActorRightVector() * MovementDirection.X);
	ApplyMovementAffect(MovementDirection);
	MovingForward = MovementDirection == FVector2D(0, 1);
	if (Sprinting && !MovingForward) { SprintEnded(); }
	MovementDirection = FVector2d(0,0);
}

//On fire event started alert equipped item, allowing it to handle necessary logic
void AGoobunga_Player::FireStarted()
{
	if (Reloading)
	{
		ReloadManagerComponent->StopReload(false);
	}
	if (Sprinting)
	{
		SprintEnded();
	}
	if (EquippedItem && EquippedItem->Implements<UFireable>() && !Sprinting)
	{
		IFireable* FireableInterface = Cast<IFireable>(EquippedItem);
		if (FireableInterface)
		{
			FireableInterface->FireEvent();
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
	}
	else {UE_LOG(LogTemp, Warning, TEXT("Could not call endfire event"));}
	UE_LOG(LogTemp, Display, TEXT("Fire ended"));
}

//On alt-fire(right mouse) started, check if the equipped item can ADS
//If so just perform ADS. If not, allow the equipped item to handle alt-fire
void AGoobunga_Player::AltFireStarted()
{
	if (Reloading)
	{
		ReloadManagerComponent->StopReload(false);
	}
	if (Sprinting)
	{
		SprintEnded();
	}
	if (EquippedItem && EquippedItem->Implements<UFireable>() && !Sprinting)
	{
		IFireable* FireableInterface = Cast<IFireable>(EquippedItem);
		if (FireableInterface)
		{
			FireableInterface->AltFireEvent();
		}
	}
}

//On alt-fire(right mouse) ended
//Generic call to stop ads. Has no effect if weapon does not allow ads
void AGoobunga_Player::AltFireEnded()
{
	if (EquippedItem && EquippedItem->Implements<UFireable>() && !Sprinting)
	{
		IFireable* FireableInterface = Cast<IFireable>(EquippedItem);
		if (FireableInterface)
		{
			FireableInterface->EndAltFireEvent();
		}
	}
}

//Start aiming, cancels sprinting
void AGoobunga_Player::StartAimDownSights()
{
	if (Sprinting)
	{
		SprintEnded();
	}
	bAiming = true;
}

//Stop aiming
void AGoobunga_Player::StopAimDownSights()
{
	bAiming = false;
}

//Lerps towards either full ads or full hip based on bAiming variable
//Decreases fov, increase vignette, and minimizes mesh offset
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
	float NewVignette = FMath::Lerp(0.f, 1.f, CurrentAimAlpha);
	FPCamera->PostProcessSettings.VignetteIntensity = NewVignette;
	CameraMeshOffset->CameraRotationLagSpeed = FMath::Lerp(MeshLag, 100.f, CurrentAimAlpha);
}

//Aim offset used to move control rotation accounting for recoil and others
//This function can be called through an interface
void AGoobunga_Player::ApplyAimOffset(FVector AimOffsetInput)
{
	AimOffset += (AimOffsetInput);
}

//Rotates over time to supplied aim offset. avoids snappy recoil
void AGoobunga_Player::UpdateAimOffset()
{
	GetController()->SetControlRotation(GetControlRotation().Add(AimOffset.Y, AimOffset.Z, AimOffset.X));
	AimOffset = FMath::VInterpTo(AimOffset, FVector::ZeroVector, GetWorld()->GetDeltaSeconds(), 20.f);
}

//Return location and rotation of true look direction
TArray<FVector> AGoobunga_Player::GetAimDirection()
{
	return {TrueLookDirection->GetComponentLocation(), TrueLookDirection->GetForwardVector()};
}

//Stop any active combat actions ie:fire,aim.
//Typically used for sprinting
void AGoobunga_Player::StopCombatActions()
{
	
}

//Get change in rotation of camera between frames
//Used in hand overshoot(gun rotates in hand to match look velocity)
void AGoobunga_Player::UpdateLookVelocity(float DeltaTime)
{
	float TargetLookRotationOffsetX = FMath::GetMappedRangeValueClamped(FVector2D(-1.f, 1.f), FVector2D(-15.f, 15.f), MouseLookDirection.X);
	float TargetLookRotationOffsetY = FMath::GetMappedRangeValueClamped(FVector2D(-1.f, 1.f), FVector2D(15.f, -15.f), MouseLookDirection.Y);
	//LookRotationOffset.X = FMath::FInterpConstantTo(LookRotationOffset.X, TargetLookRotationOffsetX, GetWorld()->GetDeltaSeconds(), 10.f);
	//LookRotationOffset.Y = FMath::FInterpConstantTo(LookRotationOffset.Y, TargetLookRotationOffsetY, GetWorld()->GetDeltaSeconds(), 10.f);
	AddControllerPitchInput(MouseLookDirection.Y * -1 * Sensitivity);
	AddControllerYawInput(MouseLookDirection.X * Sensitivity);
	MouseLookDirection = FVector2D::ZeroVector;
}






