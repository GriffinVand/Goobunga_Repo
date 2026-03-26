#include "GoobungaProjectile.h"

#include "Goobunga/Combat/CombatCallables.h"
#include "Goobunga/Combat/TeamInterface.h"

AGoobungaProjectile::AGoobungaProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(FName("BoxComponent"));
	SetRootComponent(BoxComponent);
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("ProjectileMesh"));
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(FName("ProjectileMovementComponent"));
	BoxComponent->OnComponentBeginOverlap.AddUniqueDynamic(this, &AGoobungaProjectile::OnOverlapBegin);
}

void AGoobungaProjectile::BeginPlay()
{
	Super::BeginPlay();
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

void AGoobungaProjectile::DealDamageAndNotify(int32 Damage, EDamageType Type, AActor* OtherActor)
{
	ICombatCallables* CC = Cast<ICombatCallables>(OtherActor);
	if (!CC) return;
	
	const EDamageResult Result = CC->CombatDamage(GetInstigator(), DefaultDamage, Type, InstigatorAllegiance);
	if (GetInstigator())
	{
		if (ICombatCallables* OwnerCC = Cast<ICombatCallables>(GetInstigator())) { OwnerCC->OnDealtDamage(Result); }
	}
}

void AGoobungaProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	EAllegiance OtherAllegiance;
	if (DoesHaveTeam(OtherActor, OtherAllegiance))
	{
		if (InstigatorAllegiance != OtherAllegiance)
		{
			UE_LOG(LogTemp, Error, TEXT("Overlapped %s"), *OtherActor->GetName());
			DealDamageAndNotify(DefaultDamage, DamageType, OtherActor);
			Destroy();
			return;
		}
	}
}

