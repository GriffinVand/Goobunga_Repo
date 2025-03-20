// Fill out your copyright notice in the Description page of Project Settings.


#include "HitScanWeapon.h"

#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Goobunga/PlayerCallables.h"
#include "Goobunga/Combat/CombatCallables.h"
#include "Kismet/GameplayStatics.h"

AHitScanWeapon::AHitScanWeapon()
{
	
}


void AHitScanWeapon::FireWeapon()
{
	CurrentMag--;
	if (WeaponOwner)
	{
		if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(WeaponOwner))
		{

			//Line trace from player cam forward. If hit, line trace from gun barrel to that location
			//Uses owner true look location
			FVector OwnerStart = PlayerCallablesInterface->GetAimDirection()[0];
			FVector OwnerDirection = PlayerCallablesInterface->GetAimDirection()[1];
			FHitResult HitResult;
			FCollisionQueryParams QueryParams;
			QueryParams.AddIgnoredActor(this);
			QueryParams.AddIgnoredActor(WeaponOwner);

			bool OwnerTrace = GetWorld()->LineTraceSingleByChannel(HitResult, OwnerStart, OwnerStart + OwnerDirection*10000, ECollisionChannel::ECC_WorldDynamic, QueryParams);

			FVector HitLocation = OwnerStart + OwnerDirection*10000;
			if (OwnerTrace)
			{
				HitLocation = HitResult.Location;
			}
			FTransform FireTransform = WeaponMesh->GetSocketTransform("Fire_Location");
			FVector WeaponStart = FireTransform.GetLocation();
			FVector FireDirection = HitLocation - WeaponStart;
			float FirePitchOffset = FMath::FRandRange(-CurrentSpread.X, CurrentSpread.X);
			float FireYawOffset = FMath::FRandRange(-CurrentSpread.Y, CurrentSpread.Y);
			FRotator FireOffset = FRotator(FirePitchOffset, FireYawOffset, 0.f) * CurrentControl;
			FireDirection = FireOffset.RotateVector(FireDirection);
			bool WeaponTrace = GetWorld()->LineTraceSingleByChannel(HitResult, WeaponStart, WeaponStart + FireDirection*10000, ECollisionChannel::ECC_WorldDynamic, QueryParams);
			HitLocation = WeaponStart + FireDirection*10000;
			if (WeaponTrace)
			{
				HitLocation = HitResult.Location;
				AActor* HitActor = HitResult.GetActor();
				if (HitActor)
				{
					if (ICombatCallables* CombatCallablesInterface = Cast<ICombatCallables>(HitActor))
					{
						CombatCallablesInterface->CombatDamage(GetOwner(), BaseDamage, EDamageType::None);
						UE_LOG(LogTemp, Display, TEXT("Apply Damage to Actor"));
					}
					else { UE_LOG(LogTemp, Display, TEXT("No damage to Actor")); }
				}
				else { UE_LOG(LogTemp, Display, TEXT("No hit Actor")); }
			}
			else { DrawDebugLine(GetWorld(), WeaponStart, HitLocation, FColor::Red); }
			
			//Play fire sound if possible
			if (FireSound)
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());

			//Try play fire animation
			PlayAnimationSimultaneous("Fire");

			//Apply recoil to owner after firing has stopped
			ApplyRecoil();

			//Update UI
			UpdateOwnerUI();
		}
	}
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

