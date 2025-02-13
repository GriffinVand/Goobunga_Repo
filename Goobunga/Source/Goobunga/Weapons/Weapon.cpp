
#include "Weapon.h"
#include "Camera/CameraComponent.h"
#include "Goobunga/Goobunga_Player.h"
// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
	RootComponent = WeaponMesh;
	AimDownSightCam = CreateDefaultSubobject<UCameraComponent>("AimDownSightCam");
	AimDownSightCam->SetupAttachment(WeaponMesh, TEXT("Camera_Location"));
	AimDownSightCam->SetRelativeLocation(FVector(0, 0, 0));
	AimDownSightCam->SetRelativeRotation(FRotator(0, 0, 0));
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
	if (Owner)
	{
		if (AGoobunga_Player* OwnerRef = Cast<AGoobunga_Player>(Owner))
		{
			OwnerRef->PlayAnimMontage(OwnerFireAnimation);
		}
		
	}
	WeaponMesh->GetAnimInstance()->Montage_Play(WeaponFireAnimation);
	UE_LOG(LogTemp, Display, TEXT("Weapon Fired"));
}

void AWeapon::AltFireEvent() 
{
	UE_LOG(LogTemp, Display, TEXT("Weapon Alt Fired"));
}

void AWeapon::EquipEvent(ACharacter* EquippingInstigator) 
{
	if (EquippingInstigator)
	{
		WeaponOwner = EquippingInstigator;
	}
}

void AWeapon::ReloadEvent() 
{
	UE_LOG(LogTemp, Display, TEXT("Reload"));
}



