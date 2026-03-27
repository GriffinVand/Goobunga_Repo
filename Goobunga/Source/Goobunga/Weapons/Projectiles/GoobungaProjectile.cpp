#include "GoobungaProjectile.h"

#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Goobunga/Combat/CombatCallables.h"
#include "Goobunga/Combat/TeamInterface.h"

AGoobungaProjectile::AGoobungaProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(FName("BoxComponent"));
	SetRootComponent(BoxComponent);
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("ProjectileMesh"));
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(FName("ProjectileMovementComponent"));
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	BoxComponent->OnComponentBeginOverlap.AddUniqueDynamic(this, &AGoobungaProjectile::OnOverlapBegin);
	TrailEffectComponent = CreateDefaultSubobject<UNiagaraComponent>("TrailEffectComponent");
	TrailEffectComponent->SetupAttachment(ProjectileMesh);
}

void AGoobungaProjectile::BeginPlay()
{
	Super::BeginPlay();
	if (GetInstigator())
	{
		if (ITeamInterface* TI = Cast<ITeamInterface>(GetInstigator()))
		{
			InstigatorAllegiance = TI->GetAllegiance();
		}
	}
	SetLifeSpan(5.f);
	
}

void AGoobungaProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool AGoobungaProjectile::DoesHaveTeam(AActor* OtherActor, EAllegiance& OutAllegiance)
{	
	if (ITeamInterface* TI = Cast<ITeamInterface>(OtherActor))
	{
		OutAllegiance = TI->GetAllegiance();
		return true;
	}
	return false;
}

void AGoobungaProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	EAllegiance OtherAllegiance;
	if (DoesHaveTeam(OtherActor, OtherAllegiance))
	{
		if (InstigatorAllegiance != OtherAllegiance)
		{
			ICombatCallables::DealDamageAndNotify(DefaultDamage, DamageType, OtherActor, GetInstigator());
			PlayHitEffect();
			Destroy();
		}
	}
}

void AGoobungaProjectile::PlayHitEffect()
{
	if (HitEffect)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), HitEffect, GetActorLocation(), GetActorRotation());
	}
}

