#include "WeaponComponent.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"
#include "Weapon.h"
#include "Components/TimelineComponent.h"
#include "Goobunga/Goobunga_Player.h"
#include "Goobunga/PlayerCallables.h"
#include "Kismet/KismetMathLibrary.h"

UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
	PlayerOwner = Cast<AGoobunga_Player>(GetOwner());
	if (!PlayerOwner) { UE_LOG(LogTemp, Error, TEXT("No player owner. Some shit happened. WeaponComponent::BeginPlay")); return; }
	if (bUseDefaultWeapons)
	{
		for (auto& Pair : DefaultWeapons)
		{
			SetWeapon(Pair.Value, Pair.Key);
		}
	}
}

void UWeaponComponent::InitializeComponent()
{
	PlayerOwner = Cast<AGoobunga_Player>(GetOwner());
	if (!PlayerOwner) { UE_LOG(LogTemp, Error, TEXT("No player owner. Some shit happened. WeaponComponent::BeginPlay")); return; }
}

void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AWeapon* Weapon = GetEquippedWeapon();
	if (!Weapon) return;
	
	if (bReady)
	{
		if (bPrimFirePressed)
		{
			Weapon->FireEvent();
		}
		else if (bAltFirePressed)
		{
			Weapon->AltFireEvent();
		}
		UpdateAds(bAds, DeltaTime);
	}

}

bool UWeaponComponent::ShouldGrip()
{
	return (bReady && GetEquippedWeapon() && GetEquippedWeapon()->bGrips);
}

AWeapon* UWeaponComponent::GetEquippedWeapon()
{
	switch (EquippedWeaponSlot)
	{
	case EWeaponSlot::None:
		return nullptr;
	case EWeaponSlot::Primary:
		return PrimaryWeaponInstance;
	case EWeaponSlot::Secondary:
		return SecondaryWeaponInstance;
	default:
		return nullptr;
	}
}
void UWeaponComponent::SetWeapon(const FWeaponSaveData& Weapon, EWeaponSlot Slot)
{
	if (!Weapon.WeaponClass) { UE_LOG(LogTemp, Error, TEXT("Null weapon class in save data WeaponComponent::SetWeapon")); return;}
	AWeapon** SelectedWeaponPtr;
	switch (Slot)
	{
	case EWeaponSlot::None:
		return;
	case EWeaponSlot::Primary:
		SelectedWeaponPtr = &PrimaryWeaponInstance;
		break;
	case EWeaponSlot::Secondary:
		SelectedWeaponPtr = &SecondaryWeaponInstance;
		break;
	default:
		return;
	}
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Owner = GetOwner();
	SpawnParams.Instigator = GetOwner()->GetInstigator();
	
	AWeapon* NewWeapon = GetWorld()->SpawnActor<AWeapon>(Weapon.WeaponClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	if (!NewWeapon) { UE_LOG(LogTemp, Error, TEXT("Tried to create new weapon but null WeaponComponent::SetWeapon")); return; }
	if (AWeapon* ExWeapon = GetWeaponInSlot(Slot)) { ExWeapon->Destroy(); }
	*SelectedWeaponPtr = NewWeapon;
	if (!Weapon.bFillAmmo) { NewWeapon->SetAmmo(Weapon.CurrAmmo, Weapon.CurrMag, Weapon.CurrAltAmmo, Weapon.CurrAltMag); }
	UE_LOG(LogTemp, Error, TEXT("Set weapon in slot %s to %s"), *UEnum::GetValueAsString(Slot), *NewWeapon->GetName());
	NewWeapon->SetActorHiddenInGame(true);
	if (EquippedWeaponSlot == Slot)
	{
		EquipWeapon(Slot);
	}
}

void UWeaponComponent::PickupWeapon(const FWeaponSaveData& Weapon)
{
	if (!PrimaryWeaponInstance) { SetWeapon(Weapon, EWeaponSlot::Primary); UnEquipWeapon(EWeaponSlot::Secondary); EquipWeapon(EWeaponSlot::Primary); }
	else if (!SecondaryWeaponInstance) { SetWeapon(Weapon, EWeaponSlot::Secondary); UnEquipWeapon(EWeaponSlot::Primary); EquipWeapon(EWeaponSlot::Secondary); }
	else { SetWeapon(Weapon, EquippedWeaponSlot); }
}

void UWeaponComponent::EquipWeapon(EWeaponSlot Slot)
{
	PlayerOwner = Cast<AGoobunga_Player>(GetOwner());
	if (!PlayerOwner) { UE_LOG(LogTemp, Error, TEXT("No player owner. Some shit happened. WeaponComponent::BeginPlay")); return; }

	AWeapon* Weapon = GetWeaponInSlot(Slot);
	if (!Weapon) return;
	UE_LOG(LogTemp, Error, TEXT("Equipped weapon name %s"), *Weapon->GetName());
	EquippedWeaponSlot = Slot;
	SetUpAdsPoses();
	PlayerOwner->EquipWeapon(Weapon);
	DrawWeapon(Weapon);
}
void UWeaponComponent::UnEquipWeapon(EWeaponSlot Slot)
{
	PlayerOwner = Cast<AGoobunga_Player>(GetOwner());
	if (!PlayerOwner) { UE_LOG(LogTemp, Error, TEXT("No player owner. Some shit happened. WeaponComponent::BeginPlay")); return; }
	AWeapon* Weapon = GetWeaponInSlot(Slot);
	if (!Weapon) return;
	HolsterWeapon(Weapon);
	EquippedWeaponSlot = EWeaponSlot::None;
	PlayerOwner->UnequipWeapon(Weapon);
}

void UWeaponComponent::HolsterWeapon(AWeapon* Weapon)
{
	if (Weapon)
	{
		bReady = false;
		Weapon->SetActorHiddenInGame(true);
		AdsAlpha = 0.f;
		HandleNewAds();
	}
}

void UWeaponComponent::UnholsterWeapon(AWeapon* Weapon)
{
	if (Weapon)
	{
		bReady = true;
		Weapon->SetActorHiddenInGame(false);
		AdsAlpha = 0.f;
		HandleNewAds();
	}
}

void UWeaponComponent::DrawWeapon(AWeapon* Weapon)
{
	if (Weapon)
	{
		Weapon->SetActorHiddenInGame(false);
		FOnMontageEnded OnMontageEndedDelegate;
		OnMontageEndedDelegate.BindUObject(this, &UWeaponComponent::WeaponFullyDrawn);
		bReady = false;
		AdsAlpha = 0.f;
		HandleNewAds();
		Weapon->PlayAnimationSimultaneous(FName("Draw"), OnMontageEndedDelegate, DrawSpeed);
	}
}

void UWeaponComponent::WeaponFullyDrawn(UAnimMontage* Montage, bool bInterrupted)
{
	bReady = !bInterrupted;
}

void UWeaponComponent::SwapWeapons()
{
	switch (EquippedWeaponSlot)
	{
	case EWeaponSlot::None:
		UE_LOG(LogTemp, Error, TEXT("Called SwapWeapons but active slot is None WeaponComponent::SwapWeapons"));
		return;
	case EWeaponSlot::Primary:
		UnEquipWeapon(EWeaponSlot::Primary);
		EquipWeapon(EWeaponSlot::Secondary);
		break;
	case EWeaponSlot::Secondary:
		UnEquipWeapon(EWeaponSlot::Secondary);
		EquipWeapon(EWeaponSlot::Primary);
		break;
	default:
		UE_LOG(LogTemp, Error, TEXT("Called SwapWeapons but hit default somehow WeaponComponent::SwapWeapons"));
		return;
	}
}
AWeapon* UWeaponComponent::GetWeaponInSlot(EWeaponSlot Slot)
{
	switch (Slot)
	{
	case EWeaponSlot::None:
		return nullptr;
	case EWeaponSlot::Primary:
		return PrimaryWeaponInstance;
	case EWeaponSlot::Secondary:
		return SecondaryWeaponInstance;
	default:
		return nullptr;
	}
}
bool UWeaponComponent::CanReload()
{
	//say no if weapon is not ready
	AWeapon* EquippedWeapon = GetEquippedWeapon();
	if (!EquippedWeapon) return false;
	bool bMagFull = EquippedWeapon->CurrentMag == EquippedWeapon->MaxMag;
	UE_LOG(LogTemp, Error, TEXT("CurrentMag = %d"), EquippedWeapon->CurrentMag);
	bool bAmmoReserves = (EquippedWeapon->CurrentAmmo) > 0;
	UE_LOG(LogTemp, Error, TEXT("CurrentReserves = %d"), EquippedWeapon->CurrentAmmo);
	return !bMagFull && bAmmoReserves && bReady;
}

void UWeaponComponent::OnReloadPhaseStarted(int32 Phase)
{
	if (AWeapon* Weapon = GetEquippedWeapon()) { Weapon->HandleReloadPhaseStart(Phase); }	
}
void UWeaponComponent::OnReloadPhaseFinished(int32 Phase)
{
	if (AWeapon* Weapon = GetEquippedWeapon())
	{
		if (Phase < 0) { Weapon->HandleReloadFinished(); return; }
		Weapon->HandleReloadPhaseFinish(Phase);
	}	
}
void UWeaponComponent::ReloadWeapon()
{
	AWeapon* EquippedWeapon = GetEquippedWeapon();
	if (!EquippedWeapon) return;
	EquippedWeapon->Reload();
}

bool UWeaponComponent::GetShowReticle()
{
	return GetEquippedWeapon() != nullptr && bReady && AdsAlpha <= 0.3;
}

float UWeaponComponent::GetScaleReticle()
{
	if (GetEquippedWeapon()) { return GetEquippedWeapon()->ReticleCurrentScale; }
	return 1.f;
}

#pragma region FIRING
void UWeaponComponent::PrimFireStart()
{
	bAltFirePressed=false;
	bPrimFirePressed=true;
}
void UWeaponComponent::PrimFireStop(bool Cancelled)
{
	bPrimFirePressed=false;
}
void UWeaponComponent::AltFireStart()
{
	bAltFirePressed=true;
	if (AWeapon* Weapon = GetEquippedWeapon())
	{
		if (Weapon->CanADS()) { bAds = true; return; }
	}
	bPrimFirePressed=false;
}
void UWeaponComponent::AltFireStop(bool Cancelled)
{
	bAltFirePressed=false;
	bAds=false;
}

bool UWeaponComponent::CanAltFire()
{
	if (!GetEquippedWeapon()) return false;
	return (GetEquippedWeapon()->bHasAlt);
}
#pragma endregion
#pragma region ADS
FTransform UWeaponComponent::GetWeaponSightTransform()
{
	if (PrimaryWeaponInstance)
	{
		return PrimaryWeaponInstance->WeaponMesh->GetSocketTransform("Sight_Socket");
	}
	return FTransform();
}
void UWeaponComponent::UpdateAds(bool bADS, float DeltaTime)
{
	AWeapon* Weapon = GetEquippedWeapon();
	if (!Weapon) return;
	float Target = bADS ? 1.f : -1.f;
	AdsAlpha = AdsAlpha + (DeltaTime * Weapon->GetADSSpeed() * Target);
	AdsAlpha = FMath::Clamp(AdsAlpha, 0.f, 1.f);
	HandleNewAds();
}

void UWeaponComponent::HandleNewAds()
{
	//UE_LOG(LogWeaponComponent, Warning, TEXT("Ads Value: %f"), AdsAlpha);
	if (GetEquippedWeapon())
	{
		GetEquippedWeapon()->UpdateAccuracy(AdsAlpha);
	}
	if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(GetOwner()))
	{
		UpdateAdsTransform(AdsAlpha);
		PlayerCallablesInterface->UpdateAds(AdsAlpha);
	}
}

void UWeaponComponent::SetUpAdsPoses()
{
	UE_LOG(LogTemp, Error, TEXT("WeaponMesh: %s"), *GetNameSafe(GetEquippedWeapon()->WeaponMesh->GetSkinnedAsset()));
	if (!PlayerOwner) { UE_LOG(LogTemp, Error, TEXT("No player")); return; }
	if (!PlayerOwner->FPEquipped_Static) { UE_LOG(LogTemp, Error, TEXT("No player fpequippedstatic")); return; }
	AWeapon* Weapon = GetEquippedWeapon();
	if (!Weapon) { UE_LOG(LogTemp, Error, TEXT("No equipped weapon")); return; }
	if (!GetEquippedWeapon()->WeaponMesh->GetSkeletalMeshAsset()) { UE_LOG(LogTemp, Error, TEXT("No weapon skm")); return; }
	UAnimationAsset* FPMesh_Anim = Weapon->OwnerStaticAnim;
	UAnimationAsset* FPEquipped_Anim = Weapon->WeaponStaticAnim;
	if (!FPMesh_Anim || !FPEquipped_Anim) { UE_LOG(LogTemp, Error, TEXT("Weapon missing static animations")); return; }
	UE_LOG(LogTemp, Error, TEXT("Made it here"));
	PlayerOwner->FPEquipped_Static->SetSkeletalMeshAsset(GetEquippedWeapon()->WeaponMesh->GetSkeletalMeshAsset());
	PlayerOwner->FPEquipped_Static->AttachToComponent(PlayerOwner->FPMesh_Static, FAttachmentTransformRules::SnapToTargetIncludingScale, GetEquippedWeapon()->AttachSocketName);
	PlayerOwner->FPEquipped_Static->SetRelativeTransform(FTransform::Identity);
	CalculateAdsTransform();
}
void UWeaponComponent::CalculateAdsTransform()
{
	UE_LOG(LogTemp, Display, TEXT("CALCULATEADSTRANSFORM"));
	if (!PlayerOwner) { UE_LOG(LogTemp, Error, TEXT("No player")); return; }
	if (!PlayerOwner->FPEquipped_Static) { UE_LOG(LogTemp, Error, TEXT("No player fpequippedstatic")); return; }
	FTransform CamTransform = PlayerOwner->FPCamera->GetComponentTransform();
	FTransform SightTransform = PlayerOwner->FPEquipped_Static->GetSocketTransform("Sight_Socket");
	FTransform RelativeTransform = SightTransform.GetRelativeTransform(CamTransform);
	AimTestingTransform = RelativeTransform.Inverse();
	AimTestingTransform.SetLocation(FVector(-10, AimRelativeTransform.GetLocation().Y, AimRelativeTransform.GetLocation().Z));
	if (AWeapon* Weapon = GetEquippedWeapon())
	{
		AimRelativeTransform = Weapon->AimTransform;
	}
}
void UWeaponComponent::UpdateAdsTransform(float Alpha)
{
	FTransform NewTransform = UKismetMathLibrary::TLerp(FTransform::Identity, AimRelativeTransform, Alpha);
	//PlayerOwner->FPMesh_Align->SetRelativeTransform(NewTransform);
	PlayerOwner->CurrentAdsLoc = NewTransform.GetLocation();
	PlayerOwner->CurrentAdsRot = NewTransform.GetRotation();
}
#pragma endregion
#pragma region SAVE/LOAD
void UWeaponComponent::InitializeFromSave(const UGoobungaSaveFile& SaveGame)
{
	SetWeapon(SaveGame.PlayerPrimaryWeapon, EWeaponSlot::Primary);
	SetWeapon(SaveGame.PlayerSecondaryWeapon, EWeaponSlot::Secondary);
}

void UWeaponComponent::SaveToSaveGame(UGoobungaSaveFile& SaveGame)
{
	FWeaponSaveData PrimaryWeaponData;
	if (PrimaryWeaponInstance)
	{
		PrimaryWeaponData.WeaponClass = PrimaryWeaponInstance->GetClass();
	}
	SaveGame.PlayerPrimaryWeapon = PrimaryWeaponData;
	FWeaponSaveData SecondaryWeaponData;
	if (SecondaryWeaponInstance)
	{
		SecondaryWeaponData.WeaponClass = SecondaryWeaponInstance->GetClass();
	}
	SaveGame.PlayerSecondaryWeapon = SecondaryWeaponData;
}
#pragma endregion