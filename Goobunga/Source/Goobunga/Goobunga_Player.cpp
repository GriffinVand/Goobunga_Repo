#include "Goobunga_Player.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "FacialAnimationComponent.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Math/UnrealMathUtility.h"
#include "FireableCallables.h"
#include "ReloadManagerComponent.h"
#include "SNegativeActionButton.h"
#include "Dialogue/DialogueManagerComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Quests/QuestManagerComponent.h"
#include "Weapons/CatGun.h"
#include "Weapons/Weapon.h"
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
	CameraMeshOffset->bEnableCameraRotationLag = false;
	CameraMeshOffset->CameraRotationLagSpeed = MeshLag;
	TrueLookDirection = CreateDefaultSubobject<USceneComponent>(TEXT("TrueLookDirection"));
	TrueLookDirection->SetupAttachment(CameraMeshOffset);
	FPMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPMesh"));
	FPMesh->SetupAttachment(CameraMeshOffset);
	//Base components
	FacialAnimationComponent = CreateDefaultSubobject<UFacialAnimationComponent>(TEXT("FacialAnimationComponent"));
	ReloadManagerComponent = CreateDefaultSubobject<UReloadManagerComponent>(TEXT("ReloadManagerComponent"));
	QuestManagerComponent = CreateDefaultSubobject<UQuestManagerComponent>(TEXT("QuestManagerComponent"));
	DialogueManagerComponent = CreateDefaultSubobject<UDialogueManagerComponent>(TEXT("DialogueManagerComponent"));
	WeaponComponent = CreateDefaultSubobject<UWeaponComponent>(TEXT("WeaponComponent"));
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

	UUserWidget* TempWidget = CreateWidget(GetWorld(), PlayerMainWidgetSubclass);
	PlayerMainWidget = Cast<UPlayerMainWidget>(TempWidget);
	if (PlayerMainWidget)
	{
		PlayerMainWidget->AddToViewport();
	}
	else { UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true); }

	if (AActor* CatGun = UGameplayStatics::GetActorOfClass(GetWorld(), ACatGun::StaticClass()))
	{
		EquipWeapon(CatGun);
	}
}

// Called every frame
void AGoobunga_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	UpdateAimOffset();
	UpdateWeaponSwayData(DeltaTime);
}

// Called to bind functionality to input
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
	}
}

//Called on movement triggered
//Movement input added to a temporary move direction vector which is processed after all movement input is read
void AGoobunga_Player::Move(const FInputActionValue& Value)
{
	const FVector2d MoveVector = Value.Get<FVector2d>();
	AddMovementInput(GetActorForwardVector() * MoveVector.Y);
	AddMovementInput(GetActorRightVector() * MoveVector.X);
	TargetWeaponSwayData.Movement = FVector2D(MoveVector.X, MoveVector.Y);
}

//Called when movement stops being triggered
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
		if (EquippedWeapon && EquippedWeapon->CurrentMag < EquippedWeapon->MaxMag && EquippedWeapon->CurrentAmmo > 0)
		{
			FireEnded(true);
			UE_LOG(LogTemp, Display, TEXT("PlayerStartReload"));
			Reloading = true;
			TArray<EReloadPattern> TempReloadPattern = TArray{EReloadPattern::Left, EReloadPattern::Right, EReloadPattern::Up, EReloadPattern::Down, EReloadPattern::Circle};
			ReloadManagerComponent->StartReload(TempReloadPattern);
		}
	}
}

void AGoobunga_Player::EndReload(bool Success)
{
	UE_LOG(LogTemp, Display, TEXT("PlayerEndReload"));
	if (Success)
	{
		if (EquippedWeapon)
		{
			int CurrMag = EquippedWeapon->CurrentMag;
			int MaxMag = EquippedWeapon->MaxMag;
			int CurrAmmo = EquippedWeapon->CurrentAmmo;
			int Target = MaxMag - CurrMag;
			if (CurrAmmo >= Target)
			{
				EquippedWeapon->CurrentAmmo -= Target;
				EquippedWeapon->CurrentMag += Target;
			}
			else
			{
				EquippedWeapon->CurrentMag += CurrAmmo;
				EquippedWeapon->CurrentAmmo = 0;
			}
			UpdateWeaponUI();
		}
	}
	Reloading = false;
}

//Called when look input detected. 
void AGoobunga_Player::Look(const FInputActionValue& Value)
{
	if (Reloading) { ReloadManagerComponent->UpdateReload(); return; }
	const FVector2d LookVector = Value.Get<FVector2d>();
	AddControllerYawInput(LookVector.X * Sensitivity);
	AddControllerPitchInput(LookVector.Y * Sensitivity * -1);
	TargetWeaponSwayData.Look = LookVector;
}

void AGoobunga_Player::EndLook(const FInputActionValue& Value)
{
	TargetWeaponSwayData.Look = FVector2D::ZeroVector;
}

//Stop weapon activity including aiming, increase move speed, as long as grounded and only moving forward
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

//Decrease movement speed, release movement direction
void AGoobunga_Player::SprintEnded()
{
	Sprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = 800.f;	
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
	if (EquippedItem && EquippedItem->Implements<UFireableCallables>() && !Sprinting)
	{
		IFireableCallables* FireableInterface = Cast<IFireableCallables>(EquippedItem);
		if (FireableInterface)
		{
			FireableInterface->FireEvent();
		}
		else {UE_LOG(LogTemp, Warning, TEXT("Could not call fire event"));}
	}
	else {UE_LOG(LogTemp, Warning, TEXT("Could not call fire event"));}
}
//On fire event ended alert equipped item, allowing it to handle necessary logic
void AGoobunga_Player::FireEnded(bool Cancelled)
{
	IFireableCallables* FireableInterface = Cast<IFireableCallables>(EquippedItem);
	if (FireableInterface)
	{
		FireableInterface->EndFireEvent(Cancelled);
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
	if (WeaponComponent)
	{
		WeaponComponent->AltFireStart();
	}
}

//On alt-fire(right mouse) ended
//Generic call to stop ads. Has no effect if weapon does not allow ads
void AGoobunga_Player::AltFireEnded(bool Cancelled)
{
	if (WeaponComponent)
	{
		WeaponComponent->AltFireStop();
	}
}

//Lerps towards either full ads or full hip based on bAiming variable
//Decreases fov, increase vignette, and minimizes mesh offset
void AGoobunga_Player::UpdateAds(float Alpha)
{
	float NewFOV = FMath::Lerp(90, 70, CurrentAimAlpha);
	Sensitivity = DefaultSensitivity * NewFOV / 90;
	FPCamera->SetFieldOfView(NewFOV);
	CameraMeshOffset->CameraRotationLagSpeed = FMath::Lerp(MeshLag, 100.f, CurrentAimAlpha);
	AimAlpha = Alpha;
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

void AGoobunga_Player::UpdateWeaponUI()
{
	UE_LOG(LogTemp, Display, TEXT("Update Weapon UI"));
	UPlayerWeaponAmmoWidget* WeaponAmmoWidget = PlayerMainWidget->WeaponAmmoWidget;
	if (EquippedItem && WeaponAmmoWidget)
	{
		if (IFireableCallables* FireableCallablesInterface = Cast<IFireableCallables>(EquippedItem))
		{
			int MaxMag = FireableCallablesInterface->GetMaxMag();
			int CurrMag = FireableCallablesInterface->GetCurrentMag();
			int MaxAmmo = FireableCallablesInterface->GetMaxAmmo();
			int CurrAmmo = FireableCallablesInterface->GetCurrentAmmo();
			WeaponAmmoWidget->UpdateAmmoCounter(MaxMag, CurrMag, MaxAmmo, CurrAmmo);
			if (CurrMag == 0)
			{
				if (UTexture2D* EmptyTexture = FireableCallablesInterface->GetIcon("Empty"))
				{
					WeaponAmmoWidget->SetWeaponIcon(EmptyTexture);
					return;
				}
				UE_LOG(LogTemp, Warning, TEXT("Could not get icon for empty"));
				return;
			}
			else
			{
				if (UTexture2D* FilledTexture = FireableCallablesInterface->GetIcon("Filled"))
				{
					WeaponAmmoWidget->SetWeaponIcon(FilledTexture);
					return;
				}
				UE_LOG(LogTemp, Warning, TEXT("Could not get icon for filled"));
				return;
			}
		}
		UE_LOG(LogTemp, Warning, TEXT("Could not get fireables interface for equipped"));
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("Ammo widget DNE or equipped item DNE"));
}

void AGoobunga_Player::EquipWeapon(AActor* Weapon)
{
	UnequipCurrent();
	if (PlayerMainWidget)
	{
		if (IFireableCallables* FireableCallablesInterface = Cast<IFireableCallables>(Weapon))
        {
        	FName AttachSocketName = FireableCallablesInterface->GetAttachSocketName();
        	Weapon->AttachToComponent(FPMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, AttachSocketName);
        	EquippedItem = Weapon;
        	EquippedWeapon = Cast<AWeapon>(EquippedItem);
        	FireableCallablesInterface->EquipEvent(this);
        	int MaxMag = FireableCallablesInterface->GetMaxMag();
        	int CurrMag = FireableCallablesInterface->GetCurrentMag();
        	int MaxAmmo = FireableCallablesInterface->GetMaxAmmo();
        	int CurrAmmo = FireableCallablesInterface->GetCurrentAmmo();
        	EWeaponUItype WeaponUItype = FireableCallablesInterface->GetWeaponUItype();
        	UPlayerWeaponAmmoWidget* WeaponAmmoWidget = PlayerMainWidget->WeaponAmmoWidget;
        	WeaponAmmoWidget->InitializeAmmoCounter(MaxMag, CurrMag, MaxAmmo, CurrAmmo, WeaponUItype);
        	UpdateWeaponUI();
			CalculateAimOffset();
        }
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Player main widget doesn't exist"));
	}
	
}


void AGoobunga_Player::UnequipCurrent()
{
	if (EquippedWeapon) { EquippedWeapon->Destroy(); }
}

void AGoobunga_Player::CalculateAimOffset()
{
	if (WeaponComponent)
	{
		WeaponComponent->EquippedWeapon = EquippedWeapon;
		FTransform WeaponSightTransform = WeaponComponent->GetWeaponSightTransform();
		FTransform CameraTransform = FPCamera->GetComponentTransform();
		FTransform RightHandBoneTransform = FPMesh->GetBoneTransform("hand_R");

		FQuat SightRot = WeaponSightTransform.GetRotation();
		FQuat CameraRot = CameraTransform.GetRotation();
		FQuat SightToCamRot = CameraRot * SightRot.Inverse();

		FVector HandToSightOffset = WeaponSightTransform.GetLocation() - RightHandBoneTransform.GetLocation();
		FVector RotatedHandToSightOffset = SightToCamRot.RotateVector(HandToSightOffset);
			
		FVector RotatedSightLocation = RightHandBoneTransform.GetLocation() + RotatedHandToSightOffset;

		FVector SightWorldOffset = CameraTransform.GetLocation() - RotatedSightLocation;
		FVector HandLocRelativeComp = FPMesh->GetComponentTransform().InverseTransformPosition(RightHandBoneTransform.GetLocation());
		FVector HandLocOffset = FPMesh->GetComponentTransform().InverseTransformVector(SightWorldOffset);
		FVector HandGoalLoc = HandLocRelativeComp + HandLocOffset;
		UE_LOG(LogTemp, Warning, TEXT("Hand relative location: %s"), *HandLocRelativeComp.ToString());
		UE_LOG(LogTemp, Warning, TEXT("Hand relative offset: %s"), *HandLocOffset.ToString());
		UE_LOG(LogTemp, Warning, TEXT("Hand targ location: %s"), *HandGoalLoc.ToString());
		AimLocationOffset = HandGoalLoc;
		UE_LOG(LogTemp, Warning, TEXT("SightWorldOffset: %s"), *SightWorldOffset.ToString());
		UE_LOG(LogTemp, Warning, TEXT("AimLocationOffset: %s"), *AimLocationOffset.ToString());
		AimRotationOffset = SightToCamRot.Rotator();
	}
}


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
}


FWeaponSwayData AGoobunga_Player::GetWeaponSwayData()
{
	return CurrentWeaponSwayData;
}










