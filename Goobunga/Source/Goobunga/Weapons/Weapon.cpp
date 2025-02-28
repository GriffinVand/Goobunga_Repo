
#include "Weapon.h"

#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Goobunga/PlayerCallables.h"
#include "Camera/CameraComponent.h"
#include "Goobunga/Goobunga_Player.h"
// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create components
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
	RootComponent = WeaponMesh;
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
	if (bFiring && FireCooldown>FireRate)
	{
		UE_LOG(LogTemp, Warning, TEXT("firing? %hs"), bFiring ? "true" : "false");
		FireCooldown=0;
		FireWeapon();
	}
}

//
void AWeapon::FireWeapon()
{
	UE_LOG(LogTemp, Display, TEXT("Fire weapon generic"));
}
//
void AWeapon::FireEvent() 
{
	bFiring = true;
	UE_LOG(LogTemp, Display, TEXT("Weapon Fired"));
}
//
void AWeapon::EndFireEvent()
{
	bFiring = false;
	UE_LOG(LogTemp, Display, TEXT("Weapon Fire Ended"));
}
//
void AWeapon::AltFireEvent() 
{
	if (ADS)
	{
		if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(WeaponOwner))
		{
			PlayerCallablesInterface->StartAimDownSights();
		}
	}
	UE_LOG(LogTemp, Display, TEXT("Weapon Alt Fired"));
}
//
void AWeapon::EndAltFireEvent()
{
	if (ADS)
	{
		if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(WeaponOwner))
		{
			PlayerCallablesInterface->StopAimDownSights();
		}
	}
	UE_LOG(LogTemp, Display, TEXT("Weapon Alt Fire Ended"));
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
void AWeapon::PlayAnimationSimultaneous(FName AnimationName)
{
	if (UAnimMontage** OwnerMontage = OwnerAnimations.Find(AnimationName))
	{
		if (AGoobunga_Player* Player = Cast<AGoobunga_Player>(WeaponOwner))
		{
			if (UAnimInstance* PlayerABP = Player->FPMesh->GetAnimInstance())
			{
				PlayerABP->Montage_Play(*OwnerMontage);
				UE_LOG(LogTemp, Display, TEXT("Playing animation: %s on player"), *AnimationName.ToString());
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
			UE_LOG(LogTemp, Display, TEXT("Playing animation: %s on weapon"), *AnimationName.ToString());
		}
		else { UE_LOG(LogTemp, Warning, TEXT("Anim instance of weapon not found")); }
	}
	else { UE_LOG(LogTemp, Warning, TEXT("Weapon montage not found by name: %s"), *AnimationName.ToString());}
}

//Inform owner when to apply recoil effects
void AWeapon::ApplyRecoil()
{
	if (WeaponOwner)
	{
		if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(WeaponOwner))
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
		}
		else { UE_LOG(LogTemp, Warning, TEXT("Player callable interface cast failed")); }
	}
	else { UE_LOG(LogTemp, Warning, TEXT("Weapon owner not found")); }
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
	UNiagaraComponent* NewFireEffect = UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FireEffect, FVector(0, 0, 0));
}






