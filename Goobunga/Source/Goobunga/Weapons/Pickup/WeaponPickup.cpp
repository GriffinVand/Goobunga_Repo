#include "WeaponPickup.h"

#include "Components/BoxComponent.h"
#include "Goobunga/Goobunga_Player.h"

AWeaponPickup::AWeaponPickup()
{
	PrimaryActorTick.bCanEverTick = true;
	
	InteractComp = CreateDefaultSubobject<UBoxComponent>(FName("InteractComp"));
	RootComponent = InteractComp;
	SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(FName("SkeletalMeshComp"));
	SkeletalMeshComp->SetupAttachment(RootComponent);
}

void AWeaponPickup::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeaponPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeaponPickup::Interact_Implementation(AActor* Actor)
{
	if (AGoobunga_Player* Player = Cast<AGoobunga_Player>(Actor))
	{
		bInteracted = true;
		Player->PickUpWeapon(WeaponData);
		Player->EndInteract_Implementation(this);
		Destroy();
	}
}

