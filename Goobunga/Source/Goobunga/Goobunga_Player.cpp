#include "Goobunga_Player.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "FacialAnimationComponent.h"
#include "FMODBlueprintStatics.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "Camera/CameraComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Goobunga_PlayerController.h"
#include "ReloadManagerComponent.h"
#include "Dialogue/DialogueManagerComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Quests/QuestManagerComponent.h"
#include "Weapons/Weapon.h"
#include "Abilities/AbilityComponent.h"
#include "Interaction/InteractInterface.h"
#include "Kismet/GameplayStatics.h"

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
	HitSoundComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("HitSoundComponent"));
	HitSoundComponent->SetupAttachment(RootComponent);
	HitSoundComponent->SetAutoActivate(false);
	
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
	
	if (UAnimInstance* FPMeshInst = FPMesh->GetAnimInstance())
	{
		FPMeshInst->OnPlayMontageNotifyBegin.AddUniqueDynamic(this, &AGoobunga_Player::OnMontageNotifyBegin);
	}
	
	if (UMaterialInstanceDynamic* FaceMat = UMaterialInstanceDynamic::Create(GetMesh()->GetMaterial(1), this))
	{
		FacialAnimationComponent->Material = FaceMat;
		GetMesh()->SetMaterial(1, FaceMat);
		FacialAnimationComponent->DefaultAnimation = "Idle";
		FacialAnimationComponent->PlayAnimation("Idle", true);
	}
	
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	
	GetWorld()->GetTimerManager().SetTimer(WalkTimer, [this]()
	{
		FootStep();
	}, WalkEventFrequency, true, 0.5);
}

void AGoobunga_Player::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearTimer(WalkTimer);
}

void AGoobunga_Player::FootStep()
{
	if (!WalkEventSound) { return; }
	UCharacterMovementComponent* MovComp = GetCharacterMovement();
	if (!MovComp || !IsValid(MovComp)) { return; }
	bool bMoving = MovComp->Velocity.Length() > 0.f;
	bool bGrounded = MovComp->IsMovingOnGround();
	if (bMoving && bGrounded && !bDashing) { UFMODBlueprintStatics::PlayEvent2D(this, WalkEventSound, true); }
}

void AGoobunga_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateAimOffset();
	UpdateWeaponKick();
	UpdateFPAlign();
	UpdateWeaponSwayData(DeltaTime);
	UpdateInteract();
	if (Reloading) { ReloadManagerComponent->UpdatePhase(DeltaTime); }
	if (bDashing) { UpdateDash(DeltaTime); }
	else if (!bCanDash)
	{
		DashElapsed = FMath::Min(DashCooldown, DashElapsed + DeltaTime);  
		if (DashElapsed >= DashCooldown) { bCanDash = true; }
		if (AGoobunga_PlayerController* PC = Cast<AGoobunga_PlayerController>(GetController()))
		{
			float Percent = DashElapsed == 0 ? 0 : DashElapsed/DashCooldown;
			Percent = 1 - Percent;
			PC->UpdateDodgeUI(Percent);
		}
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
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &AGoobunga_Player::FireInputStarted);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &AGoobunga_Player::FireInputEnded);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::FireInputEnded);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Started, this, &AGoobunga_Player::AltFireInputStarted);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Completed, this, &AGoobunga_Player::AltFireInputEnded);
		EnhancedInputComponent->BindAction(AltFireAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::AltFireInputEnded);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &AGoobunga_Player::SprintInputStarted);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Canceled, this, &AGoobunga_Player::SprintInputEnded);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &AGoobunga_Player::SprintInputEnded);
		EnhancedInputComponent->BindAction(ReloadAction, ETriggerEvent::Started, this, &AGoobunga_Player::ReloadInputStarted);
		EnhancedInputComponent->BindAction(SwapAction, ETriggerEvent::Started, this, &AGoobunga_Player::SwapInputStarted);
		EnhancedInputComponent->BindAction(HealAction, ETriggerEvent::Started, this, &AGoobunga_Player::HealAbilityInputStarted);
		EnhancedInputComponent->BindAction(HealAction, ETriggerEvent::Completed, this, &AGoobunga_Player::HealAbilityInputEnded);
		EnhancedInputComponent->BindAction(SmallAbilityAction, ETriggerEvent::Started, this, &AGoobunga_Player::SmallAbilityInputStarted);
		EnhancedInputComponent->BindAction(SmallAbilityAction, ETriggerEvent::Completed, this, &AGoobunga_Player::SmallAbilityInputEnded);
		EnhancedInputComponent->BindAction(LargeAbilityAction, ETriggerEvent::Started, this, &AGoobunga_Player::LargeAbilityInputStarted);
		EnhancedInputComponent->BindAction(LargeAbilityAction, ETriggerEvent::Completed, this, &AGoobunga_Player::LargeAbilityInputEnded);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &AGoobunga_Player::InteractInputStarted);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &AGoobunga_Player::InteractInputEnded);
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Started, this, &AGoobunga_Player::DashInputStarted);
	}
}
void AGoobunga_Player::Move(const FInputActionValue& Value)
{
	if (bDashing) { return; }
	const FVector2d MoveVector = Value.Get<FVector2d>();
	LastMovementInputValue = MoveVector;
	AddMovementInput(GetActorForwardVector() * MoveVector.Y);
	AddMovementInput(GetActorRightVector() * MoveVector.X);
	TargetWeaponSwayData.Movement = FVector2D(MoveVector.X, MoveVector.Y);
}
void AGoobunga_Player::EndMove(const FInputActionValue& Value)
{
	TargetWeaponSwayData.Movement = FVector2D::ZeroVector;
	LastMovementInputValue = FVector2D::ZeroVector;
}

void AGoobunga_Player::StartDash()
{
	DashElapsedTime = 0.f;
	DashElapsed = 0.f;
	DashDirection = GetActorForwardVector() * LastMovementInputValue.Y + GetActorRightVector() * LastMovementInputValue.X;
	DashDirection.Normalize();
	bDashing = true;
	bCanDash = false;
	if (DashEventSound) { UFMODBlueprintStatics::PlayEvent2D(this, DashEventSound, true); }
}

void AGoobunga_Player::EndDash()
{
	bDashing = false;
}

void AGoobunga_Player::UpdateDash(float DeltaTime)
{
	DashElapsedTime = FMath::Min(DashElapsedTime + DeltaTime, DashTotalTime);
	float Alpha = DashElapsedTime / DashTotalTime;
	float Speed = DashCurve->GetFloatValue(Alpha);
	
	GetCharacterMovement()->Velocity = ((Speed * DashPeakSpeed) + GetCharacterMovement()->MaxWalkSpeed) * DashDirection;
	if (Alpha >= 1.f) { EndDash(); }
}

void AGoobunga_Player::UpdateInteract()
{
	AGoobunga_PlayerController* PC = Cast<AGoobunga_PlayerController>(GetController());
	if (!PC) { return; }
	if (bInteracting) { PC->CreateInteractUI(FText::FromString(""), true); InteractActor = nullptr; }
	FHitResult Hit;
	FVector Start = FPCamera->GetComponentLocation();
	FVector End = Start + (FPCamera->GetForwardVector() * InteractRange);
	if (bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_Visibility))
	{
		if (Hit.GetActor())
		{
			if (Hit.GetActor()->Implements<UInteractInterface>())
			{
				if (IInteractInterface::Execute_CanInteract(Hit.GetActor()))
				{
					PC->CreateInteractUI(IInteractInterface::Execute_GetInteractText(Hit.GetActor(), this), false);
					InteractActor = Hit.GetActor();
					return;
				}
			}
		}
	}
	PC->CreateInteractUI(FText::FromString(""), true);
	InteractActor = nullptr;
}

bool AGoobunga_Player::CanInteract()
{
	return InteractActor != nullptr && !bInteracting;
}

void AGoobunga_Player::InteractStarted()
{
	if (!InteractActor) { UE_LOG(LogTemp, Error, TEXT("No interact actor GB::InteractStarted")); return; }
	if (IInteractInterface::Execute_PlayAnim(InteractActor) && InteractMontage)
	{
		HideWeaponForAbility();
		FPMesh->GetAnimInstance()->OnMontageEnded.Clear();
		FPMesh->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &AGoobunga_Player::OnMontageEndedGeneric);
		FPMesh->GetAnimInstance()->Montage_Play(InteractMontage);
	}
	IInteractInterface::Execute_Interact(InteractActor, this);
}

void AGoobunga_Player::InteractFinished()
{
	bInteracting = false;
	ShowWeaponAfterAbility();
}

void AGoobunga_Player::InteractEnded(bool Cancelled)
{
	
}

void AGoobunga_Player::StartReload()
{
	if (!WeaponComponent && !WeaponComponent->GetEquippedWeapon()) return;
	Reloading = true;
	WeaponComponent->AdsAlpha = 0.f;
	WeaponComponent->HandleNewAds();
	GripAlpha = 0.f;
	ReloadManagerComponent->StartReload(WeaponComponent->GetEquippedWeapon()->WeaponReloadPattern);
}
void AGoobunga_Player::EndReload(bool Success)
{
	if (!WeaponComponent) return;
	if (Success)
	{
		WeaponComponent->ReloadWeapon();
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
	if (!Sprinting)
	{
		Sprinting = true;
		GetCharacterMovement()->MaxWalkSpeed = 1200.f;
	}
}
void AGoobunga_Player::SprintEnded()
{
	if (Sprinting)
	{
		Sprinting = false;
		GetCharacterMovement()->MaxWalkSpeed = 800.f;	
	}
}
void AGoobunga_Player::FireStarted()
{
	if (!WeaponComponent) return;
	
	WeaponComponent->PrimFireStart();
}
void AGoobunga_Player::FireEnded(bool Cancelled)
{
	if (!WeaponComponent) return;
	
	WeaponComponent->PrimFireStop(Cancelled);
}

void AGoobunga_Player::AltFireInputStarted()
{
	if (!WeaponComponent || !WeaponComponent->GetEquippedWeapon()) { return; }
	WeaponComponent->GetEquippedWeapon()->bADS ? TryStartAction(ECombatAction::Aim) : TryStartAction(ECombatAction::SecFire);
}

void AGoobunga_Player::AltFireStarted()
{
	if (!WeaponComponent) return;
	
	WeaponComponent->AltFireStart();
}
void AGoobunga_Player::AltFireEnded(bool Cancelled)
{
	if (!WeaponComponent) return;
	
	WeaponComponent->AltFireStop(Cancelled);
}
void AGoobunga_Player::SwapStarted()
{
	if (!WeaponComponent) return;
	
	WeaponComponent->SwapWeapons();
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
	UpdateWeaponKick();
	
}

void AGoobunga_Player::UpdateWeaponKick()
{
	CurrentWeaponKickDir = FMath::VInterpTo(CurrentWeaponKickDir, FVector::ZeroVector, GetWorld()->GetDeltaSeconds(), 20.f);
	if (!WeaponComponent || !WeaponComponent->GetEquippedWeapon()) { TrueWeaponKickDir = FVector::ZeroVector; return; }
	if (!WeaponComponent->GetEquippedWeapon()->WeaponMesh) { TrueWeaponKickDir = FVector::ZeroVector; return; }
	FTransform WeaponTransform = WeaponComponent->GetEquippedWeapon()->WeaponMesh->GetSocketTransform("Fire_Location");
	FVector GunFwd = WeaponTransform.GetUnitAxis(EAxis::X);
	FVector GunRight = WeaponTransform.GetUnitAxis(EAxis::Y);
	FVector GunUp = WeaponTransform.GetUnitAxis(EAxis::Z);
	FVector ModifiedOffset = GunFwd * CurrentWeaponKickDir.X;
	TrueWeaponKickDir = FPMesh->GetComponentTransform().InverseTransformVector(ModifiedOffset);
}

void AGoobunga_Player::UpdateFPAlign()
{
	FTransform NewTransform;
	NewTransform.SetLocation(CurrentAdsLoc);
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
	
}

void AGoobunga_Player::UpdateAds(float Alpha)
{
	AimAlpha = Alpha;
	float NewFOV = FMath::Lerp(90, 60, Alpha);
	Sensitivity = DefaultSensitivity * NewFOV / 90;
	FPCamera->SetFieldOfView(NewFOV);
	FPCamera->PostProcessSettings.bOverride_VignetteIntensity = true;
	FPCamera->PostProcessSettings.VignetteIntensity = FMath::Lerp(0.f, 1.f, Alpha);
	//UE_LOG(LogTemp, Warning, TEXT("AimAlpha: %f"), Alpha);
}
EDamageResult AGoobunga_Player::CombatDamage(AActor* DamageCauser, float Damage, EDamageType DamageType, EAllegiance Allegiance)
{
	if (Allegiance == PlayerAllegiance) { return EDamageResult::None; }
	CurrHealth -= Damage;
	FacialAnimationComponent->PlayAnimation("Hurt1", false);
	if (HurtEventSound) { UFMODBlueprintStatics::PlayEvent2D(this, HurtEventSound, true); }
	HandleDamageEffect(DamageType);
	UE_LOG(LogTemp, Error, TEXT("PLAYER WAS HURT"))
	if (CurrHealth <= 0) { DeathSequence(); return EDamageResult::Kill; }
	return EDamageResult::Default;
}

void AGoobunga_Player::OnDealtDamage(EDamageResult DamageResult)
{
	AGoobunga_PlayerController* PC = Cast<AGoobunga_PlayerController>(GetController());
	if (!PC || !PC->MainHUD) { return; }
	USoundBase* HitSound;
	switch (DamageResult)
	{
	case EDamageResult::None:
		return;
	case EDamageResult::Default:
		HitSound = RegularHitSound;
		break;
	case EDamageResult::Critical:
		HitSound = CriticalHitSound;
		break;
	case EDamageResult::Kill:
		HitSound = CriticalHitSound;
		break;
	default:
		return;
	}
	PC->MainHUD->HandleHitEffect(DamageResult);
	UGameplayStatics::PlaySound2D(this, HitSound);
	HitSoundComponent->Stop();
	HitSoundComponent->SetSound(HitSound);
	HitSoundComponent->Play();
}

void AGoobunga_Player::HandleDamageEffect(EDamageType Type)
{
	if (AGoobunga_PlayerController* PC = Cast<AGoobunga_PlayerController>(GetController()))
	{
		if (PC->MainHUD) { PC->MainHUD->HandleDamageEffect(Type); }
	}
}

void AGoobunga_Player::DeathSequence()
{
	UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}

void AGoobunga_Player::PickUpWeapon(const FWeaponSaveData& WeaponData)
{
	if (!WeaponComponent) { return; }
	if (TryStartAction(ECombatAction::Pickup)) { WeaponComponent->PickupWeapon(WeaponData); }
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

bool AGoobunga_Player::ShouldGrip()
{
	if (!WeaponComponent || !AbilityComponent || !ReloadManagerComponent) { return false; }
	return (!Reloading && WeaponComponent->ShouldGrip() && !AbilityComponent->IsFlagBlocked(EAbilityBlockFlag::Grip));
}

#pragma region ACTIONS
bool AGoobunga_Player::TryStartAction(ECombatAction Action)
{
	if (CanPerformAction(Action))
	{
		ResolveActionConflicts(Action);
		StartAction(Action);
		return true;
	}
	return false;
}

bool AGoobunga_Player::CanPerformAction(ECombatAction Action)
{
	
	const bool WeaponDrawn = (WeaponComponent->bReady);
	switch (Action)
	{
	case ECombatAction::PrimFire:
		return (!AbilityComponent->IsFlagBlocked(EAbilityBlockFlag::Fire));
	case ECombatAction::SecFire:
		return (!AbilityComponent->IsFlagBlocked(EAbilityBlockFlag::Fire));
	case ECombatAction::Reload:
		return (!AbilityComponent->IsFlagBlocked(EAbilityBlockFlag::Reload) && WeaponComponent->CanReload());	
	case ECombatAction::Aim:
		return (!AbilityComponent->IsFlagBlocked(EAbilityBlockFlag::Aim));
	case ECombatAction::SmallAbility:
		UE_LOG(LogTemp, Error, TEXT("Can perform small ability"));
		return (AbilityComponent->CanUseAbility(EAbilityType::Small) && WeaponComponent->bReady);
	case ECombatAction::LargeAbility:
		return (AbilityComponent->CanUseAbility(EAbilityType::Large) && WeaponComponent->bReady);
	case ECombatAction::HealAbility:
		return (AbilityComponent->CanUseAbility(EAbilityType::Heal) && WeaponComponent->bReady);
	case ECombatAction::Swap:
		return (!AbilityComponent->IsFlagBlocked(EAbilityBlockFlag::Swap)) && (WeaponComponent->PrimaryWeaponInstance && WeaponComponent->SecondaryWeaponInstance);
	case ECombatAction::Sprint:
		return (!AbilityComponent->IsFlagBlocked(EAbilityBlockFlag::Sprint) && !Sprinting && WeaponDrawn);
	case ECombatAction::Interact:
		return CanInteract() && (!AbilityComponent->ActiveAbility);
	case ECombatAction::Dash:
		return !bDashing && bCanDash && (WeaponDrawn || !WeaponComponent->GetEquippedWeapon());
	case ECombatAction::Pickup:
		return (!AbilityComponent->IsFlagBlocked(EAbilityBlockFlag::Swap));
	default:
		return false;
	}
}

void AGoobunga_Player::ResolveActionConflicts(ECombatAction Action)
{
	switch (Action)
	{
	case ECombatAction::PrimFire:
		if (Reloading) { ReloadManagerComponent->StopReload(false); }
		if (Sprinting) { SprintEnded(); }
		break;
	case ECombatAction::SecFire:
		if (Reloading) { ReloadManagerComponent->StopReload(false); }
		if (Sprinting) { SprintEnded(); }
		break;
	case ECombatAction::Aim:
		if (Reloading) { ReloadManagerComponent->StopReload(false); }
		if (Sprinting) { SprintEnded(); }
		break;
	case ECombatAction::Reload:
		FireEnded(true);
		AltFireEnded(true);
		if (Sprinting) { SprintEnded(); }
		break;
	case ECombatAction::Sprint:
		FireEnded(true);
		AltFireEnded(true);
		if (Reloading) { ReloadManagerComponent->StopReload(false); }
		WeaponComponent->AdsAlpha = 0.f;
		WeaponComponent->HandleNewAds();
		break;
	case ECombatAction::Swap:
		FireEnded(true);
		AltFireEnded(true);
		if (Reloading) { ReloadManagerComponent->StopReload(false); }
		if (Sprinting) { SprintEnded(); }
		WeaponComponent->AdsAlpha = 0.f;
		WeaponComponent->HandleNewAds();
		break;
	case ECombatAction::SmallAbility:
		UE_LOG(LogTemp, Error, TEXT("Resolve conflicts small ability"));
		if (UAbilityBase* Ability = AbilityComponent->GetAbility(EAbilityType::Small))
		{
			if (Ability->GetBlocksFire()) { FireEnded(true); AltFireEnded(true); }
			if (Ability->GetBlocksADS() && WeaponComponent->GetEquippedWeapon() && WeaponComponent->GetEquippedWeapon()->bADS) { AltFireEnded(true); }
			if (Reloading) { ReloadManagerComponent->StopReload(false); }
			if (Ability->GetDisablesGrip()) { GripAlpha = 0.f; }
			if (Sprinting) { SprintEnded(); }
		}
		break;
	case ECombatAction::LargeAbility:
		if (UAbilityBase* Ability = AbilityComponent->GetAbility(EAbilityType::Large))
		{
			if (Ability->GetBlocksFire()) { FireEnded(true); AltFireEnded(true); }
			if (Ability->GetBlocksADS() && WeaponComponent->GetEquippedWeapon() && WeaponComponent->GetEquippedWeapon()->bADS) { AltFireEnded(true); }
			if (Reloading) { ReloadManagerComponent->StopReload(false); }
			if (Ability->GetDisablesGrip()) { GripAlpha = 0.f; }
			if (Sprinting) { SprintEnded(); }
		}
		break;
	case ECombatAction::HealAbility:
		if (UAbilityBase* Ability = AbilityComponent->GetAbility(EAbilityType::Heal))
		{
			if (Ability->GetBlocksFire()) { FireEnded(true); AltFireEnded(true); }
			if (Ability->GetBlocksADS() && WeaponComponent->GetEquippedWeapon() && WeaponComponent->GetEquippedWeapon()->bADS) { AltFireEnded(true); }
			if (Reloading) { ReloadManagerComponent->StopReload(false); }
			if (Ability->GetDisablesGrip()) { GripAlpha = 0.f; }
			if (Sprinting) { SprintEnded(); }
		}
		break;
	case ECombatAction::Interact:
		if (Sprinting) { SprintEnded(); }
		if (Reloading) { ReloadManagerComponent->StopReload(false); }
		FireEnded(true);
		AltFireEnded(true);
		break;
	case ECombatAction::Dash:
		if (Sprinting) { SprintEnded(); }
		if (Reloading) { ReloadManagerComponent->StopReload(false); }
		break;
	case ECombatAction::Pickup:
		if (Sprinting) { SprintEnded(); }
		if (Reloading) { ReloadManagerComponent->StopReload(false); }
		FireEnded(true);
		AltFireEnded(true);
		break;
	default:
		break;
	}
}

void AGoobunga_Player::StartAction(ECombatAction Action)
{
	switch (Action)
	{
	case ECombatAction::PrimFire:
		FireStarted();
		break;
	case ECombatAction::SecFire:
		AltFireStarted();
		break;
	case ECombatAction::Aim:
		AltFireStarted();
		break;
	case ECombatAction::Swap:
		SwapStarted();
		break;
	case ECombatAction::Reload:
		StartReload();
		break;
	case ECombatAction::Sprint:
		SprintStarted();
		break;
	case ECombatAction::SmallAbility:
		UE_LOG(LogTemp, Error, TEXT("Start action small ability"));
		AbilityComponent->AbilityStart(EAbilityType::Small);
		break;
	case ECombatAction::LargeAbility:
		AbilityComponent->AbilityStart(EAbilityType::Large);
		break;
	case ECombatAction::HealAbility:
		AbilityComponent->AbilityStart(EAbilityType::Heal);
		break;
	case ECombatAction::Interact:
		InteractStarted();
		break;
	case ECombatAction::Dash:
		StartDash();
	default:
		break;
	}
}
#pragma endregion ACTIONS

#pragma region Ability

void AGoobunga_Player::HideWeaponForAbility()
{
	if (!WeaponComponent) return;
	if (AWeapon* Weapon = WeaponComponent->GetEquippedWeapon())
	{
		WeaponComponent->HolsterWeapon(Weapon);
	}
}

void AGoobunga_Player::ShowWeaponAfterAbility()
{
	if (!WeaponComponent) return;
	if (AWeapon* Weapon = WeaponComponent->GetEquippedWeapon())
	{
		WeaponComponent->UnholsterWeapon(Weapon);
	}
}

void AGoobunga_Player::PlayAbilityMontage(UAnimMontage* Montage)
{
	if (UAnimInstance* AnimInst = FPMesh->GetAnimInstance())
	{
		UE_LOG(LogTemp, Error, TEXT("Player playability montage"));
		FOnMontageEnded EndDelegate;
		EndDelegate.BindUObject(this, &AGoobunga_Player::NotifyAbilityMontageEnded);
		AnimInst->Montage_Play(Montage);
		AnimInst->Montage_SetEndDelegate(EndDelegate);
	}
}

void AGoobunga_Player::StopAbilityMontage(UAnimMontage* Montage)
{
	if (UAnimInstance* AnimInst = FPMesh->GetAnimInstance())
	{
		AnimInst->Montage_Stop(0.f, Montage);
	}
}

void AGoobunga_Player::OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& Payload)
{
	if (AbilityComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("AGoobunga_Player::OnMontageNotifyBegin"));
		AbilityComponent->NotifyMontageNotifyRecieved(NotifyName);
	}
}

void AGoobunga_Player::PlayAbilityMontageLoop(UAnimMontage* Montage, FName StartSection)
{
	if (UAnimInstance* AnimInst = FPMesh->GetAnimInstance())
	{
		AnimInst->Montage_Play(Montage);
		AnimInst->Montage_JumpToSection(StartSection);
	}
}

void AGoobunga_Player::OnMontageEndedGeneric(UAnimMontage* Montage, bool bInterrupted)
{
	if (Montage == InteractMontage)
	{
		InteractFinished();
		return;
	}
}

void AGoobunga_Player::NotifyAbilityMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (AbilityComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("AGoobunga_Player::NotifyAbilityMontageEnded"));
		AbilityComponent->NotifyMontageEnded(Montage);
	}
}

#pragma endregion Ability

#pragma region UI

void AGoobunga_Player::EquippedAbility(UAbilityBase* NewAbility)
{
	if (AGoobunga_PlayerController* PC = Cast<AGoobunga_PlayerController>(GetController()))
	{
		PC->CreateAbilityUI(NewAbility);
	}
}

#pragma endregion
