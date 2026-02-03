#include "PersistentDataSubsystem.h"

#include "GoobungaSaveFile.h"
#include "PersistentDataInterface.h"
#include "Goobunga/GoobungaGameInstance.h"
#include "Goobunga/Weapons/Weapon.h"
#include "Kismet/GameplayStatics.h"

void UPersistentDataSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UGameplayStatics::DeleteGameInSlot("1", 0);
	UGameplayStatics::DeleteGameInSlot("2", 0);
	UGameplayStatics::DeleteGameInSlot("3", 0);
}

void UPersistentDataSubsystem::NewSaveGame(FString FileName)
{
	if (UGoobungaSaveFile* NewSaveFile = Cast<UGoobungaSaveFile>(UGameplayStatics::CreateSaveGameObject(UGoobungaSaveFile::StaticClass())))
	{
		NewSaveFile->ID = FileName;
		SetDefaultSaveGame(*NewSaveFile);
		UGameplayStatics::SaveGameToSlot(NewSaveFile, FileName, 0);
		TSubclassOf<AWeapon> Subclass = NewSaveFile->PlayerPrimaryWeapon.WeaponClass;
		if (!Subclass) { UE_LOG(LogTemp, Error, TEXT("Weapon class is null after new save creation PDS::NewSavwGame")); return;}
		UE_LOG(LogTemp, Error, TEXT("Weapon subclass: %s"), *Subclass->GetName());
	}
	LoadGame(FileName);
}

void UPersistentDataSubsystem::SetDefaultSaveGame(UGoobungaSaveFile& SaveFile)
{
	if (UGoobungaGameInstance* GI = Cast<UGoobungaGameInstance>(GetGameInstance()))
	{
		GI->SetDefaultSaveFile(SaveFile);
	}
}

void UPersistentDataSubsystem::LoadGame(FString FileName)
{
	if (UGoobungaSaveFile* LoadedGameFile = Cast<UGoobungaSaveFile>(UGameplayStatics::LoadGameFromSlot(FileName, 0)))
	{
		CurrentSaveFile = LoadedGameFile;
	}
	UGameplayStatics::OpenLevel(this, CurrentSaveFile->CurrentHub);
}

void UPersistentDataSubsystem::SaveGame(FString FileName)
{
	if (!CurrentSaveFile) return;
	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsWithInterface(GetWorld(), UPersistentDataInterface::StaticClass(), Actors);
	for (AActor* Actor : Actors)
	{
		if (IPersistentDataInterface* PDI = Cast<IPersistentDataInterface>(Actor))
		{
			PDI->SaveGameToFile(*CurrentSaveFile);
		}
	}
}

void UPersistentDataSubsystem::LoadPersistentActors()
{
	if (!CurrentSaveFile) return;
	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsWithInterface(GetWorld(), UPersistentDataInterface::StaticClass(), Actors);
	for (AActor* Actor : Actors)
	{
		if (IPersistentDataInterface* PDI = Cast<IPersistentDataInterface>(Actor))
		{
			PDI->LoadGameFromFile(*CurrentSaveFile);
		}
	}
}

TArray<UGoobungaSaveFile*> UPersistentDataSubsystem::GetAllSaves()
{
	TArray<UGoobungaSaveFile*> Saves;
	for (int i = 0; i < MaxSaves; i++)
	{
		if (UGoobungaSaveFile* Save = Cast<UGoobungaSaveFile>(UGameplayStatics::LoadGameFromSlot(FString::FromInt(i), i)))
		{
			Saves.Add(Save);
		}
	}
	return Saves;
}

