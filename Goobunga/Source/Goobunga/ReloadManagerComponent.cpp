// Fill out your copyright notice in the Description page of Project Settings.


#include "ReloadManagerComponent.h"

#include "PlayerCallables.h"
#include "Blueprint/UserWidget.h"
#include "Chaos/Utilities.h"

// Sets default values for this component's properties
UReloadManagerComponent::UReloadManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	ReloadPatternMap.Add(EReloadPattern::Left, TArray<FVector2D>{FVector2D(0,0), FVector2D(-1, 0)});
	ReloadPatternMap.Add(EReloadPattern::Right, TArray<FVector2D>{FVector2D(0,0), FVector2D(1, 0)});
	ReloadPatternMap.Add(EReloadPattern::Up, TArray<FVector2D>{FVector2D(0,0), FVector2D(0, 1)});
	ReloadPatternMap.Add(EReloadPattern::Down, TArray<FVector2D>{FVector2D(0,0), FVector2D(0, -1)});
	TArray<FVector2D> CirclePoints = {};
	for (int i = 1; i <= 16; i++)
	{
		float X = FMath::Cos(i * (( 2* PI)/16));
		float Y = FMath::Sin(i * (( 2* PI)/16));
		CirclePoints.Add(FVector2D(X, Y));
	}
	ReloadPatternMap.Add(EReloadPattern::Circle, CirclePoints);
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
		if (ReloadPatternMap.Contains(CurrentPatternSequence[0]))
		{
			CurrentPattern = ReloadPatternMap[CurrentPatternSequence[0]];
			if (CurrentPattern.Num() > 1)
			{
				GetWorld()->GetFirstPlayerController()->GetMousePosition(LastMouseLocation.X, LastMouseLocation.Y);
				TotalProgress = 0.f;
				CurrentProgress = 0.f;
				LastPoint = CurrentPattern[0];
				NextPoint = CurrentPattern[1];
				CreateReloadWidget();
				return;
			}
		}
	}
	StopReload(false);
}

//Handles checking if actual mouse movement is inline with expected mouse direction
//Updates progress from 0 to 1
void UReloadManagerComponent::UpdateReload()
{
	//Mouse movement is based on vector from center of screen to last mouse position
	//Compare this to vector from last point to next point and see if movement is correct
	//Mouse is always set back to center of screen after UpdateReload()
	FVector2D NewMouseLocation;
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	int32 ScreenWidth, ScreenHeight;
	PC->GetViewportSize(ScreenWidth, ScreenHeight);
	FVector2D CenterScreen = FVector2D(ScreenWidth, ScreenHeight) * 0.5f;
	PC->GetMousePosition(NewMouseLocation.X, NewMouseLocation.Y);

	FVector2D ExpectedDirection = (NextPoint - LastPoint).GetSafeNormal();
	FVector2D ActualDirection = (NewMouseLocation - CenterScreen).GetSafeNormal();

	float MovementSpeed = (NewMouseLocation - CenterScreen).Size();
	UE_LOG(LogTemp, Warning, TEXT("MouseSpeedOrg: %f"), MovementSpeed);
	MovementSpeed = FMath::GetMappedRangeValueClamped(FVector2D(0.f, 400.f), FVector2D(0.f, 1.f), MovementSpeed);
	UE_LOG(LogTemp, Warning, TEXT("MouseSpeedAdj: %f"), MovementSpeed);
	
	//Reset mouse location
	PC->SetMouseLocation(CenterScreen.X, CenterScreen.Y);
	
	//Only update progress if mouse movement is in correct direction
	if (FVector2D::DotProduct(ExpectedDirection, ActualDirection) > 0.6)
	{
		//Updates current progress based on predefined progress rate and the actual speed of mouse or magnitude of traversal
		CurrentProgress += GetWorld()->GetDeltaSeconds() * ProgressRate * MovementSpeed;
		UE_LOG(LogTemp, Display, TEXT("Current progress: %f"), CurrentProgress);
		if (CurrentProgress >= 1.f)
		{
			LastPoint = NextPoint;
			CurrentPattern.RemoveAt(0);
			if (CurrentPattern.Num() > 1)
			{
				UE_LOG(LogTemp, Display, TEXT("Next Point"));
				NextPoint = CurrentPattern[0];
				return;
			}
			CurrentPatternSequence.RemoveAt(0);
			if (CurrentPatternSequence.Num() > 0)
			{
				UE_LOG(LogTemp, Display, TEXT("Next Pattern"));	
				CurrentPattern = ReloadPatternMap[CurrentPatternSequence[0]];
				if (CurrentPattern.Num() > 1)
				{
					CurrentProgress = 0.f;
					LastPoint = CurrentPattern[0];
					NextPoint = CurrentPattern[1];
					return;
				}
			}
			StopReload(true);
		}
	}
}

void UReloadManagerComponent::StopReload(bool Success)
{
	RemoveReloadWidget();
	UE_LOG(LogTemp, Display, TEXT("Successful Reload"));
	if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(GetOwner()))
	{
		PlayerCallablesInterface->EndReload(Success);
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("Failed to cast to player character"));
}

void UReloadManagerComponent::CreateReloadWidget()
{
	if (!ReloadWidget && ReloadWidgetClass)
	{
		ReloadWidget = CreateWidget<UUserWidget>(GetWorld()->GetFirstPlayerController(), ReloadWidgetClass);
		ReloadWidget->AddToViewport();
	}
}


void UReloadManagerComponent::RemoveReloadWidget()
{
	if (ReloadWidget)
	{
		ReloadWidget->RemoveFromParent();
		ReloadWidget = nullptr;
	}
}

