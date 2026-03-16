// Fill out your copyright notice in the Description page of Project Settings.


#include "HitScanWeapon.h"

#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Goobunga/Combat/CombatCallables.h"
#include "Kismet/GameplayStatics.h"

AHitScanWeapon::AHitScanWeapon()
{
	
}


void AHitScanWeapon::FireWeapon()
{
	CurrentMag--;
	OnAmmoChanged.Broadcast();
	
	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.AddIgnoredActor(GetOwner());
	
	FTransform SpawnTransform = WeaponMesh->GetSocketTransform("Fire_Location");
	FRotator SpawnRotation = GetFireDirection(true);
	FVector FireDirection = SpawnRotation.Vector();
	bool WeaponTrace = GetWorld()->LineTraceSingleByChannel(HitResult, SpawnTransform.GetLocation(), SpawnTransform.GetLocation() + FireDirection*10000, ECollisionChannel::ECC_Visibility, QueryParams);
	FVector HitLocation = SpawnTransform.GetLocation() + FireDirection*10000;
	FireSoundComponent->Play();
	FOnMontageEnded EndDelegate;
	PlayAnimationSimultaneous("Fire", EndDelegate);
	ApplyRecoil();
	UpdateOwnerUI();
	if (WeaponTrace)
	{
		HitLocation = HitResult.Location;
		AActor* HitActor = HitResult.GetActor();
		if (HitActor)
		{
			DealDamage(HitActor, BaseDamage);
			UE_LOG(LogTemp, Display, TEXT("Apply Damage to Actor"));
		}
	}
	SpawnTrailSystem(HitLocation);
}

//Self-explanatory
void AHitScanWeapon::SpawnTrailProjectile(FVector Direction)
{
	FRotator Rotation = Direction.GetSafeNormal().Rotation();
	if (TrailProjectileClass)
	{
		FTransform SpawnTransform = WeaponMesh->GetSocketTransform("Fire_Location");
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
		GetWorld()->SpawnActor<AActor>(TrailProjectileClass, SpawnTransform.GetLocation(), Rotation, SpawnParameters);
	}
	else {UE_LOG(LogTemp, Warning, TEXT("Could not spawn trail projectile"))}
}

//Self-explanatory
void AHitScanWeapon::SpawnTrailSystem(FVector TrailEnd)
{
	if (TrailSystem)
	{
		FTransform TrailStart = WeaponMesh->GetSocketTransform("Fire_Location");
		UNiagaraComponent* Trail = UNiagaraFunctionLibrary::SpawnSystemAttached(TrailSystem, WeaponMesh, "Fire_Location", TrailStart.GetLocation(), FRotator(0, 0, 0), EAttachLocation::KeepWorldPosition, true, true);
		Trail->SetVectorParameter("BeamEnd", TrailEnd);
		//DrawDebugSphere(GetWorld(), TrailEnd, 10, 10, FColor::Blue, false, 3);
		Trail->Activate(true);
	}
}

