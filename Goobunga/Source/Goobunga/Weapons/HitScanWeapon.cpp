// Fill out your copyright notice in the Description page of Project Settings.


#include "HitScanWeapon.h"

#include "Goobunga/Goobunga_Player.h"

AHitScanWeapon::AHitScanWeapon()
{
	
}

void AHitScanWeapon::FireEvent()
{
	FHitResult HitResult;
	FTransform FireTransform = WeaponMesh->GetSocketTransform("Fire_Location");
	FVector Start = FireTransform.GetLocation();
	FVector End = Start + (FireTransform.GetRotation().GetForwardVector() * 2500);

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility, QueryParams);
	if (bHit)
	{
		DrawDebugLine(GetWorld(), Start, HitResult.ImpactPoint, FColor::Red);
		UE_LOG(LogTemp, Display, TEXT("Hit: %s"), *HitResult.GetActor()->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Hit"));
	}
	if (Owner)
	{
		if (AGoobunga_Player* OwnerRef = Cast<AGoobunga_Player>(Owner))
		{
			OwnerRef->PlayAnimMontage(OwnerFireAnimation);
		}
		
	}
	WeaponMesh->GetAnimInstance()->Montage_Play(WeaponFireAnimation);
}

void AHitScanWeapon::SpawnTrailProjectile()
{
	if (TrailProjectileClass)
	{
		FTransform SpawnTransform = WeaponMesh->GetSocketTransform("Fire_Location");
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
		GetWorld()->SpawnActor<AActor>(TrailProjectileClass, SpawnTransform.GetLocation(), SpawnTransform.Rotator(), SpawnParameters);
		UE_LOG(LogTemp, Display, TEXT("Spawned trail projectile"));
	}
	else {UE_LOG(LogTemp, Warning, TEXT("Could not spawn trail projectile"))}
}
