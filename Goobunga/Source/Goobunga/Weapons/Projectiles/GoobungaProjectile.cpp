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

void AGoobungaProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ITeamInterface* OtherTI = Cast<ITeamInterface>(OtherActor);
	ICombatCallables* CC = Cast<ICombatCallables>(OtherActor);
	if (OtherTI && CC)
	{
		if (InstigatorAllegiance != OtherTI->GetAllegiance())
		{
			UE_LOG(LogTemp, Error, TEXT("Overlapped %s"), *OtherActor->GetName());
			const EDamageResult Result = CC->CombatDamage(GetInstigator(), DefaultDamage, DamageType, InstigatorAllegiance);
			if (GetInstigator())
			{
				if (ICombatCallables* OwnerCC = Cast<ICombatCallables>(GetInstigator())) { OwnerCC->OnDealtDamage(Result); }
			}
			Destroy();
		}
	}
	
}

