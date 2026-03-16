#include "ProjectileWeapon.h"

#include "Goobunga/Weapons/Projectiles/GoobungaProjectile.h"
#include "Kismet/GameplayStatics.h"

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
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		AGoobungaProjectile* NewProj = GetWorld()->SpawnActor<AGoobungaProjectile>(ProjectileClass, SpawnTransform.GetLocation(), SpawnRotation, SpawnParameters);
		if (ITeamInterface* TI = Cast<ITeamInterface>(GetOwner()))
		{
			if (NewProj) { NewProj->InstigatorAllegiance = TI->GetAllegiance(); }
		}
		UE_LOG(LogTemp, Display, TEXT("Projectile created"));
		
		FireSoundComponent->Play();
		FOnMontageEnded EndDelegate;
		PlayAnimationSimultaneous("Fire", EndDelegate);
		ApplyRecoil();
		UpdateOwnerUI();
	}
	else {UE_LOG(LogTemp, Warning, TEXT("Projectile not created"));}
}

