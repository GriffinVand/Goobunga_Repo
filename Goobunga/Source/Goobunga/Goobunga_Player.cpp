#include "Goobunga_Player.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Math/UnrealMathUtility.h"
// Sets default values
AGoobunga_Player::AGoobunga_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	FPMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPMesh"));
	FPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPCamera"));
	FPMesh->SetupAttachment(FPCamera);
	FPCamera->SetupAttachment(CameraBoom);
	
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
	ApplyMovementAffect(FVector2d(0,0));
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
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &AGoobunga_Player::Fire);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Started, this, &AGoobunga_Player::AltFire);
	}
}

void AGoobunga_Player::Move(const FInputActionValue& Value)
{
	const FVector2d MoveVector = Value.Get<FVector2d>();
	AddMovementInput(GetActorForwardVector() * MoveVector.Y);
	AddMovementInput(GetActorRightVector() * MoveVector.X);
	ApplyMovementAffect(MoveVector);
}

void AGoobunga_Player::Look(const FInputActionValue& Value)
{
	const FVector2d MoveVector = Value.Get<FVector2d>();
	AddControllerPitchInput(MoveVector.Y * -1);
	AddControllerYawInput(MoveVector.X);
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

void AGoobunga_Player::Fire()
{
	
}

void AGoobunga_Player::AltFire()
{
	
}

