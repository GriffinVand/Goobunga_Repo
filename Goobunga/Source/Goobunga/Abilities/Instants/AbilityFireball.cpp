#include "AbilityFireball.h"

#include "Goobunga/Goobunga_Player.h"

void UAbilityFireball::PerformSpell()
{
	Super::PerformSpell();
	if (FireballClass == nullptr) { return; }
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = Player;
	FHitResult Result;
	FVector CamLoc = Player->FPCamera->GetComponentLocation();
	FVector CamDir = Player->FPCamera->GetForwardVector();
	FVector Final = CamLoc + (CamDir * 5000);
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(Player);
	FVector SpawnLoc = Player->FPMesh->GetSocketLocation(FireballSocket);
	FVector SpawnDir;
	bool bHit = GetWorld()->LineTraceSingleByChannel(Result, CamLoc, Final, ECollisionChannel::ECC_Visibility, QueryParams);
	SpawnDir = bHit ? (Result.ImpactPoint - SpawnLoc) : (Final - SpawnLoc);
	SpawnDir.Normalize();
	FTransform SpawnTransform = FTransform();
	SpawnTransform.SetRotation(SpawnDir.ToOrientationQuat());
	SpawnTransform.SetLocation(SpawnLoc);
	GetWorld()->SpawnActor<AActor>(FireballClass, SpawnTransform, SpawnParams);
}

void UAbilityFireball::NotifyMontageNotifyBegin(FName NotifyName)
{
	if (NotifyName == LaunchNotifyName)
	{
		UE_LOG(LogTemp, Error, TEXT("Peform spell"));
		PerformSpell();
		return;
	}
	UE_LOG(LogTemp, Error, TEXT("Wrong notify name"));
}
