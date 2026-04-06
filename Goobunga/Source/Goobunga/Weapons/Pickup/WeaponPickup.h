#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Goobunga/Interaction/InteractInterface.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"
#include "WeaponPickup.generated.h"

class UBoxComponent;

UCLASS()
class GOOBUNGA_API AWeaponPickup : public AActor, public IInteractInterface
{
	GENERATED_BODY()

public:
	AWeaponPickup();

protected:
	virtual void BeginPlay() override;

	bool bInteracted = false;
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UBoxComponent* InteractComp;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	USkeletalMeshComponent* SkeletalMeshComp;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
	FWeaponSaveData WeaponData;
	
	virtual void Tick(float DeltaTime) override;
	virtual FText GetInteractText_Implementation(AActor* Actor) override { return FText::FromString("Press 'E' to pick up"); }
	virtual bool CanInteract_Implementation() override { return !bInteracted; }
	virtual bool PlayAnim_Implementation() override { return false; }
	virtual void Interact_Implementation(AActor* Actor) override;
};
