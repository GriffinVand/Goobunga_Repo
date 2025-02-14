#include "Goobunga_Player.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Fireable.h"
// Sets default values
AGoobunga_Player::AGoobunga_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	GetMesh()->SetupAttachment(CameraMeshOffset);
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
}

// Called to bind functionality to input
void AGoobunga_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AGoobunga_Player::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AGoobunga_Player::StopJumping);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &AGoobunga_Player::FireStarted);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &AGoobunga_Player::FireEnded);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::FireEnded);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Started, this, &AGoobunga_Player::AltFireStarted);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Completed, this, &AGoobunga_Player::AltFireEnded);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::AltFireEnded);
	}
}

void AGoobunga_Player::Move(const FInputActionValue& Value)
{
	const FVector2d MoveVector = Value.Get<FVector2d>();
	AddMovementInput(GetActorForwardVector() * MoveVector.Y);
	AddMovementInput(GetActorRightVector() * MoveVector.X);
}

void AGoobunga_Player::Look(const FInputActionValue& Value)
{
	const FVector2d LookVector = Value.Get<FVector2d>();
	AddControllerPitchInput(LookVector.Y * -1);
	AddControllerYawInput(LookVector.X);
}

void AGoobunga_Player::ApplyMovementAffect(FVector2D MoveVector)
{
	FRotator CurrentRotation = FPCamera->GetRelativeRotation();
	float TargetPitch = FMath::FInterpTo(CurrentRotation.Roll, MoveVector.X * 10, GetWorld()->GetDeltaSeconds(), 5.f);
	FRotator NewRotation = FRotator(CurrentRotation.Pitch, CurrentRotation.Yaw, TargetPitch);
	FPCamera->SetRelativeRotation(NewRotation);

	float CurrentFOV = FPCamera->FieldOfView;
	float TargetFOV = 90 + (MoveVector.Y * 10);
	float NewFOV = FMath::FInterpTo(CurrentFOV, TargetFOV, GetWorld()->GetDeltaSeconds(), 5.f);
	FPCamera->SetFieldOfView(NewFOV);
}

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
void AGoobunga_Player::FireEnded()
{
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
		}
		else { UE_LOG(LogTemp, Warning, TEXT("Cast to fireable interface failed")); }
	}
	else { UE_LOG(LogTemp, Warning, TEXT("Equipped item not found")); }

	CurrentAimAlpha = FMath::FInterpConstantTo(CurrentAimAlpha, TargetAimAlpha, GetWorld()->GetDeltaSeconds(), TargetAimSpeed);
	float NewFOV = FMath::Lerp(90, 70, CurrentAimAlpha);
	FPCamera->SetFieldOfView(NewFOV);
	float NewVignette = FMath::Lerp(0.f, 0.5f, CurrentAimAlpha);
	FPCamera->PostProcessSettings.VignetteIntensity = NewVignette;
	CameraMeshOffset->CameraRotationLagSpeed = FMath::Lerp(MeshLag, 100.f, CurrentAimAlpha);
}




