// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

AProjectileWeapon::AProjectileWeapon()
{
}


void AProjectileWeapon::FireEvent()
{
	if (ProjectileClass && WeaponMesh)
	{
		FTransform SpawnTransform = WeaponMesh->GetSocketTransform("Fire_Location");
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTransform.GetLocation(), SpawnTransform.Rotator(), SpawnParameters);
		UE_LOG(LogTemp, Display, TEXT("Projectile created"));
	}
	else {UE_LOG(LogTemp, Warning, TEXT("Projectile not created"));}
}

