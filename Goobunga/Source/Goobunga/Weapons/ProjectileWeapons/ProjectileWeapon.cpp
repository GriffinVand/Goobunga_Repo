#include "ProjectileWeapon.h"
#include "Goobunga/PlayerCallables.h"
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
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		AActor* NewProj = GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTransform.GetLocation(), SpawnRotation, SpawnParameters);
		UE_LOG(LogTemp, Display, TEXT("Projectile created"));
		
		if (FireSound) UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		PlayAnimationSimultaneous("Fire");
		ApplyRecoil();
		UpdateOwnerUI();
	}
	else {UE_LOG(LogTemp, Warning, TEXT("Projectile not created"));}
}

