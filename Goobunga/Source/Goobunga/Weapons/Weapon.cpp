
#include "Weapon.h"

#include "NiagaraFunctionLibrary.h"
#include "Goobunga/PlayerCallables.h"
#include "Goobunga/Goobunga_Player.h"
AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	//Create components
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
	RootComponent = WeaponMesh;
	FireSoundComponent = CreateDefaultSubobject<UAudioComponent>("FireSoundComponent");
	FireSoundComponent->SetupAttachment(RootComponent);
	FireSoundComponent->SetAutoActivate(false);
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateWeapon();
}

//Increase fire cooldown timer
//If firing, fire
void AWeapon::UpdateWeapon()
{
	FireCooldown+=GetWorld()->GetDeltaSeconds();
}

//
void AWeapon::FireWeapon()
{
}
//
void AWeapon::FireEvent() 
{
	if (FireCooldown >= FireRate && CurrentMag > 0)
	{
		FireWeapon();
		FireCooldown  = 0;
	}
}
//
void AWeapon::EndFireEvent(bool Cancelled)
{
	
}
//
void AWeapon::AltFireEvent() 
{
	
}
//
void AWeapon::EndAltFireEvent(bool Cancelled)
{
	
}
//
void AWeapon::ReloadEvent() 
{
	UE_LOG(LogTemp, Display, TEXT("Reload"));
}

//Called when player picks up weapon. Tell this who its owner is
void AWeapon::EquipEvent(AActor* EquippingInstigator) 
{
	if (EquippingInstigator)
	{
		WeaponOwner = EquippingInstigator;
	}
}

//Weapon can control playing animations on both itself and its owner
//Keeps logic constrained here
UAnimInstance* AWeapon::PlayAnimationSimultaneous(FName AnimationName, FOnMontageEnded& EndDelegate)
{
	UAnimInstance* ReturnIns = nullptr;
	if (UAnimMontage** OwnerMontage = OwnerAnimations.Find(AnimationName))
	{
		if (AGoobunga_Player* Player = Cast<AGoobunga_Player>(GetOwner()))
		{
			if (UAnimInstance* PlayerABP = Player->FPMesh->GetAnimInstance())
			{
				PlayerABP->Montage_Play(*OwnerMontage);
				PlayerABP->Montage_SetEndDelegate(EndDelegate, *OwnerMontage);
				ReturnIns = PlayerABP;
			}
			else { UE_LOG(LogTemp, Warning, TEXT("Anim instance of owner not found")); }
		}
		else { UE_LOG(LogTemp, Warning, TEXT("Cast to player failed")); }
	}
	else { UE_LOG(LogTemp, Warning, TEXT("Owner montage not found by name: %s"), *AnimationName.ToString()); }
	if (UAnimMontage** WeaponMontage = WeaponAnimations.Find(AnimationName))
	{
		if (UAnimInstance* WeaponABP = WeaponMesh->GetAnimInstance())
		{
			WeaponABP->Montage_Play(*WeaponMontage);
		}
		else { UE_LOG(LogTemp, Warning, TEXT("Anim instance of weapon not found")); }
	}
	else { UE_LOG(LogTemp, Warning, TEXT("Weapon montage not found by name: %s"), *AnimationName.ToString());}
	return ReturnIns;
}

//Inform owner when to apply recoil effects
void AWeapon::ApplyRecoil()
{
	if (GetOwner())
	{
		if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(GetOwner()))
		{
			FVector NewDirection = FVector (
				FMath::FRandRange(RecoilDirectionMin.X, RecoilDirectionMax.X),
				FMath::FRandRange(RecoilDirectionMin.Y, RecoilDirectionMax.Y),
				FMath::FRandRange(RecoilDirectionMin.Z, RecoilDirectionMax.Z));
			FVector NewIntensity = FVector (
			FMath::FRandRange(RecoilIntensityMin.X, RecoilIntensityMax.X),
			FMath::FRandRange(RecoilIntensityMin.Y, RecoilIntensityMax.Y),
			FMath::FRandRange(RecoilIntensityMin.Z, RecoilIntensityMax.Z));
			PlayerCallablesInterface->ApplyAimOffset(NewDirection*NewIntensity*CurrentControl);
			PlayerCallablesInterface->ApplyWeaponKick(KickDirection, KickRotation, MaxKickDirection, MaxKickRotation);
		}
		else { UE_LOG(LogTemp, Warning, TEXT("AWeapon::ApplyRecoil Player callable interface cast failed")); }
	}
	else { UE_LOG(LogTemp, Warning, TEXT("AWeapon::ApplyRecoil Weapon owner not found")); }
}

//Changed during ads. Called by owner since ads logic is handled by owner
void AWeapon::UpdateAccuracy(float NewAccuracy)
{
	CurrentControl = FMath::Lerp(HipControl, AimControl, NewAccuracy);
	CurrentSpread = FMath::Lerp(HipSpread, AimSpread, NewAccuracy);
}

//
void AWeapon::PlayFireEffect()
{
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FireEffect, FVector(0, 0, 0));
}

void AWeapon::UpdateOwnerUI()
{
	if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(GetOwner()))
	{
		PlayerCallablesInterface->UpdateWeaponUI();
	}
	else { UE_LOG(LogTemp, Warning, TEXT("AWeapon::UpdateOwnerUI Player callable interface cast failed")); }
}

UTexture2D* AWeapon::GetIcon(FString IconName)
{
	if (Icons.Contains(IconName))
	{
		return Icons[IconName];
	}
	return nullptr;
}

void AWeapon::DealDamage(AActor* DamagedActor, float Damage)
{
	if (!DamagedActor) { return; }
	if (ICombatCallables* CombatCallablesInterface = Cast<ICombatCallables>(DamagedActor))
	{
		if (ITeamInterface* TI = Cast<ITeamInterface>(GetOwner()))
		{
			const EDamageResult Result = CombatCallablesInterface->CombatDamage(GetOwner(), Damage, EDamageType::Default, TI->GetAllegiance());
			if (ICombatCallables* OwnerCC = Cast<ICombatCallables>(GetOwner())) { OwnerCC->OnDealtDamage(Result); }
		}
	}
}

void AWeapon::Reload()
{
	int Target = MaxMag - CurrentMag;
	if (CurrentAmmo >= Target)
	{
		CurrentAmmo -= Target;
		CurrentMag += Target;
	}
	else
	{
		CurrentMag += CurrentAmmo;
		CurrentAmmo = 0;
	}
	OnAmmoChanged.Broadcast();
}

FRotator AWeapon::GetFireDirection(bool bTrue)
{
	AGoobunga_Player* GPlayer = Cast<AGoobunga_Player>(GetOwner());
	if (!GPlayer) return FRotator();
	
	FVector OwnerStart = GPlayer->GetAimDirection()[0];
	FVector OwnerDirection = GPlayer->GetAimDirection()[1];
	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.AddIgnoredActor(GetOwner());

	FVector TrueStart = OwnerStart;
	FVector TrueDirection = OwnerDirection;
	if (bTrue && ADS && GPlayer->AimAlpha >= 1.f)
	{
		FTransform SightTransform = WeaponMesh->GetSocketTransform("Sight_Socket");
		FVector SightLocation = SightTransform.GetLocation();
		FVector SightDirection = SightTransform.GetUnitAxis(EAxis::X);
		TrueDirection = SightDirection;
		TrueStart = SightLocation;
	}
	
	bool OwnerTrace = GetWorld()->LineTraceSingleByChannel(HitResult, TrueStart, TrueStart + TrueDirection*10000, ECollisionChannel::ECC_WorldDynamic, QueryParams);
	FVector HitLocation = TrueStart + TrueDirection*10000;
	if (OwnerTrace)
	{
		HitLocation = HitResult.Location;
	}
	FTransform FireTransform = WeaponMesh->GetSocketTransform("Fire_Location");
	FVector WeaponStart = FireTransform.GetLocation();
	FVector FireDirection = (HitLocation - WeaponStart).GetSafeNormal();
	
	float FirePitchOffset = FMath::FRandRange(-CurrentSpread.X, CurrentSpread.X);
	float FireYawOffset = FMath::FRandRange(-CurrentSpread.Y, CurrentSpread.Y);
	FRotator FireOffset = FRotator(FirePitchOffset, FireYawOffset, 0.f) * CurrentControl;
	FireDirection = FireOffset.RotateVector(FireDirection);
	
	FRotator FireRotation = FireDirection.Rotation();
	DrawDebugLine(GetWorld(), TrueStart, TrueStart + (FireDirection * 10000), FColor::Red);
	return FireRotation;
	
	
	
}










