#include "AbilityFireball.h"

#include "Goobunga/Goobunga_Player.h"

void UAbilityFireball::PerformSpell()
{
	Super::PerformSpell();
	if (FireballClass == nullptr) { return; }
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = Player;
	FVector Dir = Player->GetAimDirection()[1];
	FVector Loc = Player->FPMesh->GetSocketLocation(FireballSocket);
	FTransform SpawnTransform = FTransform();
	SpawnTransform.SetRotation(Dir.ToOrientationQuat());
	SpawnTransform.SetLocation(Loc);
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
