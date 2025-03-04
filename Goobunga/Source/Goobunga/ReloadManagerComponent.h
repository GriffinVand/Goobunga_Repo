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
	TArray<EReloadPattern> CurrentPatternSequence;
	TArray<FVector2D> CurrentPattern;
	FVector2D LastPoint = FVector2D::ZeroVector;
	FVector2D NextPoint = FVector2D::ZeroVector;
	float CurrentProgress = 0.0f;
	FVector2D LastMouseLocation = FVector2D::ZeroVector;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void StartReload(TArray<EReloadPattern> NewPatternSequence);
	void UpdateReload();
	void StopReload(bool Success);
		
};
