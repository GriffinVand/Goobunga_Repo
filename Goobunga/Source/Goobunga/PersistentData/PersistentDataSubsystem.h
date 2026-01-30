#pragma once
#include "CoreMinimal.h"
#include "PersistentDataSubsystem.generated.h"

class UGoobungaSaveFile;

UCLASS()
class GOOBUNGA_API UPersistentDataSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	void HandleWorldInitialized(const FActorsInitializedParams& Params) { UE_LOG(LogTemp, Error, TEXT("World initialized PDS::HandleWorldInitialized")); LoadPersistentActors(); }
	void NewSaveGame(FString FileName);
	void SetDefaultSaveGame(UGoobungaSaveFile& SaveFile);
	
	TArray<UGoobungaSaveFile*> GetAllSaves();
	
	void LoadGame(FString FileName);
	void LoadPersistentActors();
	void SaveGame(FString FileName);
	const UGoobungaSaveFile* GetCurrentSaveFile() const { return CurrentSaveFile; }
	
	FString ActiveSaveFileName = "";
	int32 ActiveUserIndex = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UGoobungaSaveFile* CurrentSaveFile;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSaves = 3;
	
	
	
};
