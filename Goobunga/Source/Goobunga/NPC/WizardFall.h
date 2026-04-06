#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WizardFall.generated.h"

class UFMODAudioComponent;
class UFMODEvent;

UCLASS()
class GOOBUNGA_API AWizardFall : public ACharacter
{
	GENERATED_BODY()

public:
	AWizardFall();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UFMODAudioComponent* AudioComponent;
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UFMODEvent* LandEvent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UFMODEvent* FallingEvent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AActor> ExplosionClass;
	
	void StartFall();
	void UpdateFall(float DeltaTime);
	void Land();
	bool bFalling = true;

public:
	virtual void Tick(float DeltaTime) override;
};
