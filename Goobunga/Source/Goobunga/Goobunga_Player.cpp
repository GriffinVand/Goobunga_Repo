#include "Goobunga_Player.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "FacialAnimationComponent.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "Camera/CameraComponent.h"
#include "Math/UnrealMathUtility.h"
#include "FireableCallables.h"
#include "Goobunga_PlayerController.h"
#include "ReloadManagerComponent.h"
#include "Dialogue/DialogueManagerComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Quests/QuestManagerComponent.h"
#include "Weapons/Weapon.h"
#include "Abilities/AbilityComponent.h"

AGoobunga_Player::AGoobunga_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creating components and setting up attachments
	FPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPCamera"));
	FPCamera->SetupAttachment(RootComponent);
	FPMesh_Align = CreateDefaultSubobject<USceneComponent>(TEXT("FPMesh_Align"));
	FPMesh_Align->SetupAttachment(FPCamera);
	FPMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPMesh"));
	FPMesh->SetupAttachment(FPMesh_Align);
	FPMesh_Static = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPMesh_Static"));
	FPMesh_Static->SetupAttachment(FPCamera);
	FPEquipped_Static = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPEquipped_Static"));
	FPEquipped_Static->SetupAttachment(FPMesh_Static);
	
	//Base components
	FacialAnimationComponent = CreateDefaultSubobject<UFacialAnimationComponent>(TEXT("FacialAnimationComponent"));
	ReloadManagerComponent = CreateDefaultSubobject<UReloadManagerComponent>(TEXT("ReloadManagerComponent"));
	QuestManagerComponent = CreateDefaultSubobject<UQuestManagerComponent>(TEXT("QuestManagerComponent"));
	DialogueManagerComponent = CreateDefaultSubobject<UDialogueManagerComponent>(TEXT("DialogueManagerComponent"));
	WeaponComponent = CreateDefaultSubobject<UWeaponComponent>(TEXT("WeaponComponent"));
	AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("AbilityComponent"));
}
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
void AGoobunga_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateAimOffset();
	UpdateWeaponKick();
	UpdateFPAlign();
	UpdateWeaponSwayData(DeltaTime);
	if (Reloading)
	{
		ReloadManagerComponent->UpdatePhase(DeltaTime);
	}
}

#pragma region INPUT FUNCTIONS
void AGoobunga_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction,ETriggerEvent::Triggered, this, &AGoobunga_Player::Move);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &AGoobunga_Player::EndMove);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AGoobunga_Player::Look);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Completed, this, &AGoobunga_Player::EndLook);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AGoobunga_Player::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AGoobunga_Player::StopJumping);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &AGoobunga_Player::FireStarted);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &AGoobunga_Player::FireInputEnded);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::FireInputEnded);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Started, this, &AGoobunga_Player::AltFireStarted);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Completed, this, &AGoobunga_Player::AltFireInputEnded);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::AltFireInputEnded);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &AGoobunga_Player::SprintStarted);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::SprintEnded);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &AGoobunga_Player::SprintEnded);
		EnhancedInputComponent->BindAction(ReloadAction, ETriggerEvent::Started, this, &AGoobunga_Player::StartReload);
		EnhancedInputComponent->BindAction(SwapAction, ETriggerEvent::Started, this, &AGoobunga_Player::SwapStarted);
	}
}
void AGoobunga_Player::Move(const FInputActionValue& Value)
{
	const FVector2d MoveVector = Value.Get<FVector2d>();
	AddMovementInput(GetActorForwardVector() * MoveVector.Y);
	AddMovementInput(GetActorRightVector() * MoveVector.X);
	TargetWeaponSwayData.Movement = FVector2D(MoveVector.X, MoveVector.Y);
}
void AGoobunga_Player::EndMove(const FInputActionValue& Value)
{
	TargetWeaponSwayData.Movement = FVector2D::ZeroVector;
}
void AGoobunga_Player::StartReload()
{
	if (Sprinting)
	{
		SprintEnded();
	}
	if (!Reloading)
	{
		if (WeaponComponent && WeaponComponent->CanReload())
		{
			if (WeaponComponent->GetEquippedWeapon())
			{
				FireEnded(true);
				AltFireEnded(true);
				WeaponComponent->StartReload();
				UE_LOG(LogTemp, Display, TEXT("PlayerStartReload"));
				ReloadManagerComponent->StartReload(WeaponComponent->GetEquippedWeapon()->WeaponReloadPattern);
				Reloading = true;
				GripAlpha = 0.f;
			}
			else { UE_LOG(LogTemp, Display, TEXT("No equipped weapon AGoobunga_Player::StartReload")); }
		}
		else { UE_LOG(LogTemp, Display, TEXT("No weapon comp or can't reload AGoobunga_Player::StartReload")); }
	}
}
void AGoobunga_Player::EndReload(bool Success)
{
	UE_LOG(LogTemp, Display, TEXT("PlayerEndReload"));
	if (Success)
	{
		if (WeaponComponent)
		{
			WeaponComponent->ReloadWeapon();
		}
	}
	Reloading = false;
	GripAlpha = 1.f;
}
void AGoobunga_Player::Look(const FInputActionValue& Value)
{
	if (Reloading) { return; }
	const FVector2d LookVector = Value.Get<FVector2d>();
	AddControllerYawInput(LookVector.X * Sensitivity);
	AddControllerPitchInput(LookVector.Y * Sensitivity * -1);
	TargetWeaponSwayData.Look = LookVector;
}
void AGoobunga_Player::EndLook(const FInputActionValue& Value)
{
	TargetWeaponSwayData.Look = FVector2D::ZeroVector;
}
void AGoobunga_Player::SprintStarted()
{
	if (Sprinting == false)
	{
		FireEnded(true);
		AltFireEnded(true);
		if (ReloadManagerComponent) { ReloadManagerComponent->StopReload(false); }
	}
	Sprinting = true;
	GetCharacterMovement()->MaxWalkSpeed = 1200.f;
}
void AGoobunga_Player::SprintEnded()
{
	Sprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = 800.f;	
}
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
	if (WeaponComponent)
	{
		WeaponComponent->PrimFireStart();
	}
	else {UE_LOG(LogTemp, Warning, TEXT("No Weapon Component Goobunga_Player::FireStarted"));}
}
void AGoobunga_Player::FireEnded(bool Cancelled)
{
	if (WeaponComponent)
	{
		WeaponComponent->PrimFireStop(Cancelled);
	}
	else {UE_LOG(LogTemp, Warning, TEXT("No Weapon Component Goobunga_Player::FireEnded"));}
}
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
	if (WeaponComponent)
	{
		WeaponComponent->AltFireStart();
	}
}
void AGoobunga_Player::AltFireEnded(bool Cancelled)
{
	if (WeaponComponent)
	{
		WeaponComponent->AltFireStop(Cancelled);
	}
}
void AGoobunga_Player::SwapStarted()
{
	if (WeaponComponent)
	{
		if (Reloading) { ReloadManagerComponent->StopReload(false); }
		WeaponComponent->SwapWeapons();
	}
}
#pragma endregion
#pragma region AIM OFFSET/ WEAPON SWAY
//Aim offset used to move control rotation accounting for recoil and others
//This function can be called through an interface
void AGoobunga_Player::ApplyAimOffset(FVector AimOffsetInput)
{
	AimOffset += (AimOffsetInput);
}
//Rotates over time to supplied aim offset. avoids snappy recoil
void AGoobunga_Player::UpdateAimOffset()
{
	if (AController* Control = GetController())
	{
		Control->SetControlRotation(GetControlRotation().Add(AimOffset.Y, AimOffset.Z, AimOffset.X));
	}
	AimOffset = FMath::VInterpTo(AimOffset, FVector::ZeroVector, GetWorld()->GetDeltaSeconds(), 20.f);
}

void AGoobunga_Player::ApplyWeaponKick(FVector KickDirection, FRotator KickRotation, FVector MaxDir, FRotator MaxRot)
{
	CurrentWeaponKickDir += KickDirection;
	CurrentWeaponKickRot += KickRotation;
	float DirX = CurrentWeaponKickDir.X;
	float DirY = CurrentWeaponKickDir.Y;
	float DirZ = CurrentWeaponKickDir.Z;
	DirX = FMath::Clamp(DirX, -MaxDir.X, MaxDir.X);
	DirY = FMath::Clamp(DirY, -MaxDir.Y, MaxDir.Y);
	DirZ = FMath::Clamp(DirZ, -MaxDir.Z, MaxDir.Z);
	CurrentWeaponKickDir = FVector(DirX, DirY, DirZ);
	
}

void AGoobunga_Player::UpdateWeaponKick()
{
	CurrentWeaponKickDir = FMath::VInterpTo(CurrentWeaponKickDir, FVector::ZeroVector, GetWorld()->GetDeltaSeconds(), 20.f);
}

void AGoobunga_Player::UpdateFPAlign()
{
	FTransform NewTransform;
	NewTransform.SetLocation(CurrentWeaponKickDir + CurrentAdsLoc);
	NewTransform.SetRotation(CurrentAdsRot);
	FPMesh_Align->SetRelativeTransform(NewTransform);
}


//Return location and rotation of true look direction
TArray<FVector> AGoobunga_Player::GetAimDirection()
{
	return {FPCamera->GetComponentLocation(), FPCamera->GetForwardVector()};
}
void AGoobunga_Player::UpdateWeaponSwayData(float DeltaTime)
{
	float NewMoveX = FMath::GetMappedRangeValueClamped(
	   FVector2D(-1.f, 1.f),
	   WeaponSwayAmounts,
	   TargetWeaponSwayData.Movement.X);
	CurrentWeaponSwayData.Movement.X = FMath::FInterpTo(
		CurrentWeaponSwayData.Movement.X,
		NewMoveX,
		DeltaTime,
		5.f);
	//
	float NewMoveY = FMath::GetMappedRangeValueClamped(
		FVector2D(-1.f, 1.f),
		WeaponSwayAmounts,
		TargetWeaponSwayData.Movement.Y);
	CurrentWeaponSwayData.Movement.Y = FMath::FInterpTo(
		CurrentWeaponSwayData.Movement.Y,
		NewMoveY,
		DeltaTime,
		5.f);
	//
	float NewLookX = FMath::GetMappedRangeValueClamped(
		FVector2D(-1.f, 1.f),
		WeaponSwayAmounts,
		TargetWeaponSwayData.Look.X);
	CurrentWeaponSwayData.Look.X = FMath::FInterpTo(
		CurrentWeaponSwayData.Look.X,
		NewLookX,
		DeltaTime,
		5.f);
	//
	float NewLookY = FMath::GetMappedRangeValueClamped(
		FVector2D(-1.f, 1.f),
		WeaponSwayAmounts,
		TargetWeaponSwayData.Look.Y);
	CurrentWeaponSwayData.Look.Y = FMath::FInterpTo(
		CurrentWeaponSwayData.Look.Y,
		NewLookY,
		DeltaTime,
		5.f);
	
	FVector CamRight = FPCamera->GetRightVector();
	FVector CamUp = FPCamera->GetUpVector();
	FVector CamForward = FPCamera->GetForwardVector();
	FVector ModifiedOffset = CamRight * CurrentWeaponSwayData.Look.X + CamUp * CurrentWeaponSwayData.Look.Y + CamForward * CurrentWeaponSwayData.Movement.X;
	TrueWeaponSwayData = FPMesh_Align->GetComponentTransform().InverseTransformVector(ModifiedOffset);
}
FWeaponSwayData AGoobunga_Player::GetWeaponSwayData()
{
	return CurrentWeaponSwayData;
}
#pragma endregion
#pragma region SAVE/LOAD
void AGoobunga_Player::LoadGameFromFile(const UGoobungaSaveFile& SaveGame)
{
	if (!WeaponComponent) { UE_LOG(LogTemp, Error, TEXT("No WeaponComponent AGoobunga_Player::SaveGameToFile")); return; }
	if (!AbilityComponent) { UE_LOG(LogTemp, Error, TEXT("No AbilityComponent AGoobunga_Player::SaveGameToFile")); return; }
	WeaponComponent->InitializeFromSave(SaveGame);
	AbilityComponent->InitializeFromSave(SaveGame);
}
void AGoobunga_Player::SaveGameToFile(UGoobungaSaveFile& SaveGame)
{
	if (!WeaponComponent) { UE_LOG(LogTemp, Error, TEXT("No WeaponComponent AGoobunga_Player::SaveGameToFile")); return; }
	if (!AbilityComponent) { UE_LOG(LogTemp, Error, TEXT("No AbilityComponent AGoobunga_Player::SaveGameToFile")); return; }
	WeaponComponent->SaveToSaveGame(SaveGame);
	AbilityComponent->SaveToSaveGame(SaveGame);
}
#pragma endregion SAVE/LOAD

void AGoobunga_Player::PerformAction(const FString& Action)
{
	TArray<FString> ActionArguments = UKismetStringLibrary::ParseIntoArray(Action, "x", true);
	for (auto string : ActionArguments)
	{
		UE_LOG(LogTemp, Warning, TEXT("Action: %s"), *string);
	}
	if (ActionArguments.Num() == 2)
	{
		if (ActionArguments[0] == "ADD_QUEST")
		{
			UE_LOG(LogTemp, Display, TEXT("Recieved add quest command"));
			FName QuestID = FName(ActionArguments[1]);
			QuestManagerComponent->AddQuestToQuestList(QuestID);
		}
		else if (ActionArguments[0] == "SET_DIALOGUE")
		{
			UE_LOG(LogTemp, Display, TEXT("Set current dialogue command"));
			TArray<FString> Arguments = UKismetStringLibrary::ParseIntoArray(ActionArguments[1], "-", true);
			for (auto string : Arguments)
			{
				UE_LOG(LogTemp, Warning, TEXT("Action: %s"), *string);
			}
			if (Arguments.Num() == 2)
			{
				FName CharacterName = FName(ActionArguments[0]);
				FName DialogueID = FName(ActionArguments[1]);
				UE_LOG(LogTemp, Display, TEXT("Tell dialogue manager set character dialogue"));
				DialogueManagerComponent->SetCharacterDialogue(CharacterName, DialogueID);
			}
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Performing Action: %s"), *Action);
}
void AGoobunga_Player::UpdateAds(float Alpha)
{
	AimAlpha = Alpha;
	float NewFOV = FMath::Lerp(90, 60, Alpha);
	Sensitivity = DefaultSensitivity * NewFOV / 90;
	FPCamera->SetFieldOfView(NewFOV);
	FPCamera->PostProcessSettings.bOverride_VignetteIntensity = true;
	FPCamera->PostProcessSettings.VignetteIntensity = FMath::Lerp(0.f, 1.f, Alpha);
	UE_LOG(LogTemp, Warning, TEXT("AimAlpha: %f"), Alpha);
}
void AGoobunga_Player::CombatDamage(AActor* DamageCauser, float Damage, EDamageType DamageType)
{
	CurrHealth -= Damage;
	UE_LOG(LogTemp, Error, TEXT("PLAYER WAS HURT"))
	if (CurrHealth <= 0) { DeathSequence(); }
}
void AGoobunga_Player::DeathSequence()
{
	UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}
void AGoobunga_Player::EquipWeapon(AWeapon* Weapon)
{
	if (!Weapon) { UE_LOG(LogTemp, Error, TEXT("Weapon is null Goobunga_Player::EquipWeapon")); return;}
	FName AttachSocketName = Weapon->GetAttachSocketName();
	if (!FPMesh) { UE_LOG(LogTemp, Error, TEXT("No FPMesh Goobunga_Player::EquipWeapon")); return;}
	Weapon->AttachToComponent(FPMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, AttachSocketName);
	if (AGoobunga_PlayerController* Goobunga_Controller = Cast<AGoobunga_PlayerController>(GetController()))
	{
		Goobunga_Controller->CreateWeaponUI(Weapon);
	}
	else { UE_LOG(LogTemp, Error, TEXT("Not goobunga_controller"));}
}

void AGoobunga_Player::UnequipWeapon(AWeapon* Weapon)
{

}
