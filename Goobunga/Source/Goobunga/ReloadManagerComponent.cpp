// Fill out your copyright notice in the Description page of Project Settings.


#include "ReloadManagerComponent.h"
#include "Chaos/Utilities.h"

// Sets default values for this component's properties
UReloadManagerComponent::UReloadManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UReloadManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UReloadManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UReloadManagerComponent::StartReload(TArray<EReloadPattern> NewPatternSequence)
{
	if (NewPatternSequence.Num() > 0)
	{
		CurrentPatternSequence = NewPatternSequence;
		CurrentPattern = ReloadPatternMap[CurrentPatternSequence[0]];
		if (CurrentPattern.Num() > 1)
		{
			GetWorld()->GetFirstPlayerController()->GetMousePosition(LastMouseLocation.X, LastMouseLocation.Y);
			CurrentProgress = 0.f;
			LastPoint = CurrentPattern[0];
			NextPoint = CurrentPattern[1];
			return;
		}
	}
	StopReload(false);
}

void UReloadManagerComponent::UpdateReload()
{
	FVector2D NewMouseLocation;
	GetWorld()->GetFirstPlayerController()->GetMousePosition(NewMouseLocation.X, NewMouseLocation.Y);
	FVector2D ExpectedDirection = (NextPoint - LastPoint).GetSafeNormal();
	FVector2D ActualDirection = (NewMouseLocation - LastMouseLocation).GetSafeNormal();
	LastMouseLocation = NewMouseLocation;
	if (FVector2D::DotProduct(ExpectedDirection, ActualDirection) > 0.6)
	{
		CurrentProgress += CurrentPatternSequence[0] == EReloadPattern::Circle ? 0.05f : 0.2f;
		UE_LOG(LogTemp, Display, TEXT("Current progress: %f"), CurrentProgress);
		if (CurrentProgress >= 1.f)
		{
			LastPoint = NextPoint;
			CurrentPattern.RemoveAt(0);
			if (CurrentPattern.Num() > 0)
			{
				NextPoint = CurrentPattern[0];
				return;
			}
			CurrentPatternSequence.RemoveAt(0);
			if (CurrentPatternSequence.Num() > 0)
			{
				CurrentPattern = ReloadPatternMap[CurrentPatternSequence[0]];
				return;
			}
			StopReload(true);
		}
	}
}

void UReloadManagerComponent::StopReload(bool Success)
{
	
}

