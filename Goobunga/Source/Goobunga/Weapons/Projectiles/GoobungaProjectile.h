#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Goobunga/Combat/DamageTypes.h"
#include "Goobunga/Combat/TeamInterface.h"
#include "GoobungaProjectile.generated.h"

UCLASS()
class GOOBUNGA_API AGoobungaProjectile : public AActor
{
	GENERATED_BODY()

public:
	AGoobungaProjectile();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ProjectileMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UProjectileMovementComponent* ProjectileMovement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultDamage = 5.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EDamageType DamageType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAllegiance InstigatorAllegiance = EAllegiance::Friendly;

protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult);

public:
	virtual void Tick(float DeltaTime) override;
};
