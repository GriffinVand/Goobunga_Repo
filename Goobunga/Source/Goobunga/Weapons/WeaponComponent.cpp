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
	AdsTimeline = CreateDefaultSubobject<UTimelineComponent>("AdsTimelineComponent");
}
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
	PlayerOwner = Cast<AGoobunga_Player>(GetOwner());
	if (!PlayerOwner) { UE_LOG(LogTemp, Error, TEXT("No player owner. Some shit happened. WeaponComponent::BeginPlay")); return; }
	SetAdsTimeline();
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
	UE_LOG(LogTemp, Error, TEXT("Set weapon in slot %s to %s"), *UEnum::GetValueAsString(Slot), *NewWeapon->GetName());
	NewWeapon->SetActorHiddenInGame(true);
	if (EquippedWeaponSlot == Slot)
	{
		EquipWeapon(Slot);
	}
}
void UWeaponComponent::EquipWeapon(EWeaponSlot Slot)
{
	PlayerOwner = Cast<AGoobunga_Player>(GetOwner());
	if (!PlayerOwner) { UE_LOG(LogTemp, Error, TEXT("No player owner. Some shit happened. WeaponComponent::BeginPlay")); return; }

	AWeapon* Weapon = GetWeaponInSlot(Slot);
	if (!Weapon) return;
	UE_LOG(LogTemp, Error, TEXT("Equipped weapon name %s"), *Weapon->GetName());
	EquippedWeaponSlot = Slot;
	Weapon->SetActorHiddenInGame(false);
	PlayerOwner->GripAlpha = 0.f;
	SetUpAdsPoses();
	CalculateAdsTransform();
	FOnMontageEnded OnMontageEndedDelegate;
	OnMontageEndedDelegate.BindUObject(this, &UWeaponComponent::WeaponFullyDrawn);
	bReady = false;
	Weapon->PlayAnimationSimultaneous(FName("Draw"), OnMontageEndedDelegate);
	PlayerOwner->EquipWeapon(Weapon);
}
void UWeaponComponent::UnEquipWeapon(EWeaponSlot Slot)
{
	PlayerOwner = Cast<AGoobunga_Player>(GetOwner());
	if (!PlayerOwner) { UE_LOG(LogTemp, Error, TEXT("No player owner. Some shit happened. WeaponComponent::BeginPlay")); return; }
	
	AWeapon* Weapon = GetWeaponInSlot(Slot);
	if (!Weapon) return;
	Weapon->SetActorHiddenInGame(true);
	EquippedWeaponSlot = EWeaponSlot::None;
	PlayerOwner->UnequipWeapon(Weapon);
}

void UWeaponComponent::WeaponFullyDrawn(UAnimMontage* Montage, bool bInterrupted)
{
	bReady = !bInterrupted;
	if (AGoobunga_Player* Player = Cast<AGoobunga_Player>(GetOwner()))
	{
		Player->GripAlpha = bInterrupted ? 0.f : 1.f;
	}
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
void UWeaponComponent::ReloadWeapon()
{
	AWeapon* EquippedWeapon = GetEquippedWeapon();
	if (!EquippedWeapon) return;
	EquippedWeapon->Reload();
}
void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AWeapon* Weapon = GetEquippedWeapon();
	if (!Weapon) return;
	if (!bReady) return;
	if (bPrimFirePressed)
	{
		Weapon->FireEvent();
		return;
	}
	if (bAltFirePressed)
	{
		if (Weapon->CanADS()) return;
		Weapon->AltFireEvent();
		return;
	}

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
	bPrimFirePressed=false;
	bAltFirePressed=true;
	AWeapon* EquippedWeapon = GetEquippedWeapon();
	if (!EquippedWeapon) return;
	if (EquippedWeapon->CanADS()) { StartAds(); return; }
}
void UWeaponComponent::AltFireStop(bool Cancelled)
{
	bAltFirePressed=false;
	AWeapon* EquippedWeapon = GetEquippedWeapon();
	if (!EquippedWeapon) return;
	if (EquippedWeapon->CanADS()) { StopAds(); return; }
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
void UWeaponComponent::SetAdsTimeline()
{
	if (AdsCurve && AdsTimeline)
	{
		FOnTimelineFloat AdsUpdate;
		AdsUpdate.BindUFunction(this, "OnAdsTimelineUpdate");
		AdsTimeline->AddInterpFloat(AdsCurve, AdsUpdate);
		FOnTimelineEvent AdsFinished;
		AdsFinished.BindUFunction(this, "OnAdsTimelineFinish");
		AdsTimeline->SetTimelineFinishedFunc(AdsFinished);

		float NewPlayRate = 1.f / AdsTime;
		AdsTimeline->SetPlayRate(NewPlayRate);
		AdsTimeline->SetNewTime(0.f);
	}
	else { UE_LOG(LogWeaponComponent, Warning, TEXT("Curve or timeline not valid")); }
}
void UWeaponComponent::OnAdsTimelineUpdate(float Value)
{
	UE_LOG(LogWeaponComponent, Warning, TEXT("Ads Value: %f"), Value);
	if (GetEquippedWeapon())
	{
		GetEquippedWeapon()->UpdateAccuracy(Value);
	}
	if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(GetOwner()))
	{
		UpdateAdsTransform(Value);
		PlayerCallablesInterface->UpdateAds(Value);
	}
}
void UWeaponComponent::SetUpAdsPoses()
{
	UE_LOG(LogTemp, Error, TEXT("WeaponMesh: %s"), *GetNameSafe(GetEquippedWeapon()->WeaponMesh->GetSkinnedAsset()));
	if (!PlayerOwner) { UE_LOG(LogTemp, Error, TEXT("No player")); return; }
	if (!PlayerOwner->FPEquipped_Static) { UE_LOG(LogTemp, Error, TEXT("No player fpequippedstatic")); return; }
	if (!GetEquippedWeapon()) { UE_LOG(LogTemp, Error, TEXT("No equipped weapon")); return; }
	if (!GetEquippedWeapon()->WeaponMesh->GetSkeletalMeshAsset()) { UE_LOG(LogTemp, Error, TEXT("No weapon skm")); return; }
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
	AimRelativeTransform = RelativeTransform.Inverse();
	AimRelativeTransform.SetLocation(FVector(-10, AimRelativeTransform.GetLocation().Y, AimRelativeTransform.GetLocation().Z));
}
void UWeaponComponent::UpdateAdsTransform(float Alpha)
{
	FTransform NewTransform = UKismetMathLibrary::TLerp(FTransform::Identity, AimRelativeTransform, Alpha);
	PlayerOwner->FPMesh_Align->SetRelativeTransform(NewTransform);
}
void UWeaponComponent::OnAdsTimelineFinished()
{
	UE_LOG(LogTemp, Warning, TEXT("Ads Finished"));
	bAds = false;
}
void UWeaponComponent::StartAds()
{
	bAds = true;
	AdsTimeline->Play();
}
void UWeaponComponent::StopAds()
{
	bAds = true;
	AdsTimeline->Reverse();
}
#pragma endregion
#pragma region SAVE/LOAD
void UWeaponComponent::InitializeFromSave(const UGoobungaSaveFile& SaveGame)
{
	OwnedWeapons = SaveGame.PlayerOwnedWeapons;
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
	TArray<FWeaponSaveData> Weapons;
	for (auto& Weapon : OwnedWeapons)
	{
		Weapons.Add(Weapon);
	}
	SaveGame.PlayerOwnedWeapons = Weapons;
}
#pragma endregion