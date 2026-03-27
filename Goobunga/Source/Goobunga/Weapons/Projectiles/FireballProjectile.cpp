#include "FireballProjectile.h"

#include "Goobunga/Combat/CombatCallables.h"

void AFireballProjectile::SpawnGroundActor()
{
	if (GroundActorClass == nullptr) return;
	FHitResult Result;
	FTransform SpawnTransform;
	FVector Start = GetActorLocation();
	FVector End = GetActorLocation() - (FVector::DownVector * 500.0f);
	if (bool bHit = GetWorld()->LineTraceSingleByChannel(Result, Start, End, ECC_WorldStatic))
	{
		SpawnTransform.SetLocation(Result.ImpactPoint);
		SpawnTransform.SetRotation(FRotationMatrix::MakeFromZ(Result.ImpactNormal).ToQuat());
	} else { return;}
	
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Instigator = GetInstigator();
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	GetWorld()->SpawnActor<AActor>(GroundActorClass, SpawnTransform, SpawnInfo);
}

void AFireballProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	EAllegiance OtherAllegiance;
	if (DoesHaveTeam(OtherActor, OtherAllegiance))
	{
		if (InstigatorAllegiance != OtherAllegiance)
		{
			ICombatCallables::DealDamageAndNotify(DefaultDamage, DamageType, OtherActor, GetInstigator());
			PlayHitEffect();
			SpawnGroundActor();
			Destroy();
		}
	}
}
