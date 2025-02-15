
#include "Weapon.h"
#include "Goobunga/PlayerCallables.h"
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
	UpdateWeapon();
}

void AWeapon::UpdateWeapon()
{
	FireCooldown+=GetWorld()->GetDeltaSeconds();
	if (bFiring && FireCooldown>FireRate)
	{
		UE_LOG(LogTemp, Warning, TEXT("firing? %hs"), bFiring ? "true" : "false");
		FireCooldown=0;
		FireWeapon();
	}
}

void AWeapon::FireWeapon()
{
	UE_LOG(LogTemp, Display, TEXT("Fire weapon generic"));
}



void AWeapon::FireEvent() 
{
	bFiring = true;
	UE_LOG(LogTemp, Display, TEXT("Weapon Fired"));
}

void AWeapon::EndFireEvent()
{
	bFiring = false;
	UE_LOG(LogTemp, Display, TEXT("Weapon Fire Ended"));
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

void AWeapon::ReloadEvent() 
{
	UE_LOG(LogTemp, Display, TEXT("Reload"));
}

void AWeapon::PlayAnimationSimultaneous(FName AnimationName)
{
	if (UAnimMontage** OwnerMontage = OwnerAnimations.Find(AnimationName))
	{
		if (AGoobunga_Player* Player = Cast<AGoobunga_Player>(WeaponOwner))
		{
			if (UAnimInstance* PlayerABP = Player->FPMesh->GetAnimInstance())
			{
				PlayerABP->Montage_Play(*OwnerMontage);
				UE_LOG(LogTemp, Display, TEXT("Playing animation: %s on player"), *AnimationName.ToString());
			}
			else { UE_LOG(LogTemp, Warning, TEXT("Anim instance of owner not found")); }
		}
		else { UE_LOG(LogTemp, Warning, TEXT("Cast to player failed")); }
	}
	else { UE_LOG(LogTemp, Warning, TEXT("Owner montage not found by name: %s"), *AnimationName.ToString()); }
	if (UAnimMontage** WeaponMontage = WeaponAnimations.Find(AnimationName))
	{
		if (UAnimInstance* WeaponABP = WeaponMesh->GetAnimInstance())
		{
			WeaponABP->Montage_Play(*WeaponMontage);
			UE_LOG(LogTemp, Display, TEXT("Playing animation: %s on weapon"), *AnimationName.ToString());
		}
		else { UE_LOG(LogTemp, Warning, TEXT("Anim instance of weapon not found")); }
	}
	else { UE_LOG(LogTemp, Warning, TEXT("Weapon montage not found by name: %s"), *AnimationName.ToString());}
}

void AWeapon::ApplyRecoil()
{
	if (WeaponOwner)
	{
		if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(WeaponOwner))
		{
			PlayerCallablesInterface->ApplyAimOffset(RecoilDirection, RecoilIntensity);
		}
		else { UE_LOG(LogTemp, Warning, TEXT("Player callable interface cast failed")); }
	}
	else { UE_LOG(LogTemp, Warning, TEXT("Weapon owner not found")); }
}




