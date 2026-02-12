// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Goobunga/Combat/ReloadPatterns.h"
#include "ReloadManagerComponent.generated.h"

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
	
	TMap<EReloadPattern, TArray<FVector2D>> ReloadPatternMap;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<EReloadPattern> CurrentPatternSequence;
	TArray<FVector2D> CurrentPattern;
	FVector2D LastPoint = FVector2D::ZeroVector;
	FVector2D NextPoint = FVector2D::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float CurrentProgress = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float TotalProgress = 0.f;
	FVector2D LastMouseLocation = FVector2D::ZeroVector;
	float ProgressRate = 20.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TSubclassOf<UUserWidget> ReloadWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	UUserWidget* ReloadWidget = nullptr;
	
	bool bActive = false;
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void StartReload(TArray<EReloadPattern> NewPatternSequence);
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
