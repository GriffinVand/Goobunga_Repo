#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Goobunga/Weapons/HitScanWeapons/HitScanWeapon.h"
#include "SeismicExplosion.generated.h"

enum class EAllegiance : uint8;
class USphereComponent;
class UNiagaraComponent;

UCLASS()
class GOOBUNGA_API ASeismicExplosion : public AActor, public ITeamInterface
{
	GENERATED_BODY()

public:
	ASeismicExplosion();
	
	UFUNCTION(BlueprintCallable)
	void Activate(EAllegiance Allegiance);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UNiagaraComponent* EffectSystem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* ExplosionCollider;

	EAllegiance ExplosionAllegiance = EAllegiance::None;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MinExtent = 50.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MaxExtent = 3000.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float TimeToMax = 1.f;


protected:
	virtual void BeginPlay() override;
	void UpdateActivate(float DeltaTime);
	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult);
	
	float CurrentTime = 0.f;

public:
	virtual void Tick(float DeltaTime) override;
	virtual EAllegiance GetAllegiance() const override { return ExplosionAllegiance; }
};
