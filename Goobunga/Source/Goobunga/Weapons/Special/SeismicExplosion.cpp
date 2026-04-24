#include "SeismicExplosion.h"

#include "NiagaraComponent.h"
#include "Components/SphereComponent.h"
#include "Goobunga/Enemies/BaseEnemy.h"
#include "Kismet/GameplayStatics.h"

ASeismicExplosion::ASeismicExplosion()
{
	PrimaryActorTick.bCanEverTick = true;
	ExplosionCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Explosion Collider"));
	RootComponent = ExplosionCollider;
	
	EffectSystem = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Effect System"));
	EffectSystem->SetupAttachment(RootComponent);
}

void ASeismicExplosion::BeginPlay()
{
	Super::BeginPlay();
	SetActorTickEnabled(false);
	ExplosionCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ExplosionCollider->OnComponentBeginOverlap.AddDynamic(this, &ASeismicExplosion::OnOverlapBegin);
	SetLifeSpan(5.f);
	
}

void ASeismicExplosion::Activate(EAllegiance Allegiance)
{
	ExplosionAllegiance = Allegiance;
	ExplosionCollider->SetSphereRadius(MinExtent);
	ExplosionCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	EffectSystem->Activate(true);
	EffectSystem->SetFloatParameter("Extent", MinExtent);
	CurrentTime = 0.f;
	SetActorTickEnabled(true);
	TArray<AActor*> Combatants;
	UGameplayStatics::GetAllActorsWithInterface(this, UCombatCallables::StaticClass(), Combatants);
	for (auto Combatant : Combatants)
	{
		ICombatCallables::DealDamageAndNotify(9999.f, EDamageType::Explosion, Combatant, this);
	}
	
}

void ASeismicExplosion::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

void ASeismicExplosion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateActivate(DeltaTime);
}

void ASeismicExplosion::UpdateActivate(float DeltaTime)
{
	CurrentTime += DeltaTime;
	float NewExtent = FMath::Lerp(MinExtent, MaxExtent, CurrentTime/TimeToMax);
	ExplosionCollider->SetSphereRadius(NewExtent);
	float NewDomeScale = NewExtent / MinExtent;
	EffectSystem->SetVectorParameter("User.DomeScale", FVector(NewDomeScale, NewDomeScale, NewDomeScale));
	
	if (CurrentTime >= TimeToMax) { Destroy(); }
}

