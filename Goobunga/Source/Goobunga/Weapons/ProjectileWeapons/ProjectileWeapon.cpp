#include "ProjectileWeapon.h"

#include "FMODBlueprintStatics.h"
#include "Goobunga/Weapons/Projectiles/GoobungaProjectile.h"

AProjectileWeapon::AProjectileWeapon()
{
}


void AProjectileWeapon::FireWeapon()
{
	CurrentMag--;
	OnAmmoChanged.Broadcast();
	if (ProjectileClass && WeaponMesh)
	{
		FTransform SpawnTransform = WeaponMesh->GetSocketTransform("Fire_Location");
		FRotator SpawnRotation = GetFireDirection(true);
		
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Instigator = Cast<APawn>(GetOwner());
		SpawnParameters.Owner = this;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		AGoobungaProjectile* NewProj = GetWorld()->SpawnActor<AGoobungaProjectile>(ProjectileClass, SpawnTransform.GetLocation(), SpawnRotation, SpawnParameters);
		UE_LOG(LogTemp, Display, TEXT("Projectile created"));
		
		PlayFireSound();
		PlayFireEffect();
		
		FOnMontageEnded EndDelegate;
		PlayAnimationSimultaneous("Fire", EndDelegate, 1.f);
		ApplyRecoil();
		UpdateOwnerUI();
	}
	else {UE_LOG(LogTemp, Warning, TEXT("Projectile not created"));}
}

