// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Goobunga/Combat/ReloadPatterns.h"
#include "ReloadManagerComponent.generated.h"

UENUM(BlueprintType)
enum class EReloadPhaseType : uint8
{
	Interactive UMETA(DisplayName = "Interactive"),
	Visual UMETA(DisplayName = "Visual")
};

USTRUCT(BlueprintType)
struct FReloadPhase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EReloadPhaseType PhaseType = EReloadPhaseType::Visual;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EReloadPattern PhasePattern = EReloadPattern::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* PhaseAnimation = nullptr;
	
	
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GOOBUNGA_API UReloadManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UReloadManagerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	TArray<FReloadPhase> ReloadSequence;
	int32 CurrentReloadPhase = 0;
	TArray<FVector2D> CurrentPattern;
	FVector2D LastPoint = FVector2D::ZeroVector;
	FVector2D NextPoint = FVector2D::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float CurrentProgress = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float TotalProgress = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentSequenceTime = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentSequenceTimeRemaining = 0.f;
	
	TMap<EReloadPattern, TArray<FVector2D>> ReloadPatternMap;
	
	
	
	
	FVector2D LastMouseLocation = FVector2D::ZeroVector;
	float ProgressRate = 20.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> ReloadWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	UUserWidget* ReloadWidget = nullptr;
	
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void StartReload(TArray<FReloadPhase>& NewReloadSequence);
	void UpdatePhase();
	void UpdateInteractivePhase(FReloadPhase& CurrPhase, float DeltaTime);
	void UpdateVisualPhase(FReloadPhase& CurrPhase, float DeltaTime);
	void StartPhase(bool bFirst = false);
	void StartInteractivePhase(FReloadPhase& CurrPhase);
	void StartVisualPhase(FReloadPhase& CurrPhase);
	void CompletePhase();
	
	void UpdateReload();
	void StopReload(bool Success);
	void CreateReloadWidget();
	void RemoveReloadWidget();
	UFUNCTION()
	void OnFirstPatternCalled();
	UFUNCTION()
	void OnNextPatternCalled();
	UFUNCTION()
	void OnPatternFinished();
	UFUNCTION()
	void OnReloadCompleted();
		
};
