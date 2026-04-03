#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "MissionEventTrigger.generated.h"

class UBoxComponent;

UCLASS()
class GOOBUNGA_API AMissionEventTrigger : public AActor
{
	GENERATED_BODY()

public:
	AMissionEventTrigger();
	
	UPROPERTY(EditAnywhere,  BlueprintReadWrite)
	UBoxComponent* BoxCollider;
	
	UPROPERTY(EditAnywhere,  BlueprintReadWrite)
	bool bIsEnterTrigger = false;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, meta=(EditCondition="bIsEnterTrigger"))
	TArray<FGameplayTag> EnterEvents;
	
	UPROPERTY(EditAnywhere,  BlueprintReadWrite)
	bool bIsExitTrigger = false;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, meta=(EditCondition="bIsExitTrigger"))
	TArray<FGameplayTag> ExitEvents;
	
	UPROPERTY(EditAnywhere,  BlueprintReadWrite)
	bool bPlayerOnly = true;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite)
	bool bTriggerOnce = true;
	bool bHasEnterTriggered = false;
	bool bHasExitTriggered = false;

protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	virtual void Tick(float DeltaTime) override;
};
