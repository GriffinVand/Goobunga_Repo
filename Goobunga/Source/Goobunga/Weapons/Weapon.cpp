
#include "Weapon.h"
#include "Camera/CameraComponent.h"
// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
	AimDownSightCam = CreateDefaultSubobject<UCameraComponent>("AimDownSightCam");
	AimDownSightCam->SetupAttachment(WeaponMesh, "Camera_Location");
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapon::FireEvent()
{
	UE_LOG(LogTemp, Display, TEXT("Weapon Fired"));
}

void AWeapon::AltFireEvent()
{
	UE_LOG(LogTemp, Display, TEXT("Weapon Alt Fired"));
}

void AWeapon::EquipEvent(AActor* EquippingInstigator)
{
	if (EquippingInstigator)
	{
		WeaponOwner = EquippingInstigator;
	}
}



