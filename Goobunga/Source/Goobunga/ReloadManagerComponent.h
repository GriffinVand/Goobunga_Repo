// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Goobunga/Combat/ReloadPatterns.h"
#include "ReloadManagerComponent.generated.h"

class UFMODEvent;
class UNiagaraSystem;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReloadPhaseStarted, int32, Phase);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReloadPhaseFinished, int32, Phase);

UENUM(BlueprintType)
enum class EReloadPhaseType : uint8
{
	Interactive UMETA(DisplayName = "Interactive"),
	Visual UMETA(DisplayName = "Visual")
};

USTRUCT(BlueprintType)
struct FReloadPhaseAction
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UFMODEvent* AudioEvent = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UNiagaraSystem* EffectSystem = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName EffectSocket = "FireEffect_Socket";
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
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bStartAction = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(EditCondition="bStartAction", EditConditionHides=true))
	FReloadPhaseAction StartAction = FReloadPhaseAction();
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bFinishAction = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(EditCondition="bFinishAction", EditConditionHides=true))
	FReloadPhaseAction FinishAction = FReloadPhaseAction();
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GOOBUNGA_API UReloadManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	FOnReloadPhaseStarted OnReloadPhaseStarted;
	FOnReloadPhaseFinished OnReloadPhaseFinished;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressRate = 5.f;
	UReloadManagerComponent();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FReloadPhase> ReloadSequence;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentReloadPhase = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
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
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> ReloadWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	UUserWidget* ReloadWidget = nullptr;
	
	
public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void StartReload(TArray<FReloadPhase>& NewReloadSequence);
	void UpdatePhase(float DeltaTime);
	void UpdateInteractivePhase(FReloadPhase& CurrPhase, float DeltaTime);
	void UpdateVisualPhase(FReloadPhase& CurrPhase, float DeltaTime);
	void StartPhase(bool bFirst = false);
	void StartInteractivePhase(FReloadPhase& CurrPhase);
	void StartVisualPhase(FReloadPhase& CurrPhase);
	void CompletePhase();
	
	void StopReload(bool Success);
	void CreateReloadWidget();
	void RemoveReloadWidget();
	
	bool ConsumeInput() { return CurrentReloadPhase >= 0 && ReloadSequence.Num() > CurrentReloadPhase && ReloadSequence[CurrentReloadPhase].PhaseType == EReloadPhaseType::Interactive; }
		
};
