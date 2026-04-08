

#include "ReloadManagerComponent.h"

#include "Goobunga_Player.h"
#include "PlayerCallables.h"
#include "Animation/GoobungaPlayerAnimInstance.h"
#include "Blueprint/UserWidget.h"
#include "Chaos/Utilities.h"

UReloadManagerComponent::UReloadManagerComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	ReloadPatternMap.Add(EReloadPattern::Left, TArray<FVector2D>{FVector2D(0,0), FVector2D(-1, 0)});
	ReloadPatternMap.Add(EReloadPattern::Right, TArray<FVector2D>{FVector2D(0,0), FVector2D(1, 0)});
	ReloadPatternMap.Add(EReloadPattern::Up, TArray<FVector2D>{FVector2D(0,0), FVector2D(0, 1)});
	ReloadPatternMap.Add(EReloadPattern::Down, TArray<FVector2D>{FVector2D(0,0), FVector2D(0, -1)});
	TArray<FVector2D> CirclePoints = {FVector2D(0,-1), FVector2D(1, 0), FVector2D(0, 1), FVector2D(-1, 0), FVector2D(0, -1)};
	ReloadPatternMap.Add(EReloadPattern::Circle, CirclePoints);
}


void UReloadManagerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UReloadManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UReloadManagerComponent::StartReload(TArray<FReloadPhase>& NewReloadSequence)
{
	ReloadSequence = NewReloadSequence;
	CurrentReloadPhase = -1;
	
	CreateReloadWidget();
	if (ReloadWidget) { ReloadWidget->SetVisibility(ESlateVisibility::Hidden); }
	
	if (ReloadSequence.Num() == 0) { StopReload(false); return; }
	UE_LOG(LogTemp, Display, TEXT("ReloadSequence Length %d"), ReloadSequence.Num());
	StartPhase(true);
	
}

void UReloadManagerComponent::StartPhase(bool bFirst)
{
	if (bFirst) { CurrentReloadPhase = 0; } else { CurrentReloadPhase += 1; }
	FReloadPhase Curr = ReloadSequence[CurrentReloadPhase];
	switch (Curr.PhaseType)
	{
	case EReloadPhaseType::Visual:
		StartVisualPhase(Curr);
		break;
	case EReloadPhaseType::Interactive:
		StartInteractivePhase(Curr);
		break;
	default:
		break;
	}
}

void UReloadManagerComponent::StartInteractivePhase(FReloadPhase& CurrPhase)
{
	CurrentProgress = 0.f;
	TotalProgress = 0.f;
	CurrentSequenceTimeRemaining = 0.f;
	if (ReloadPatternMap.Contains(CurrPhase.PhasePattern))
	{
		CurrentPattern = ReloadPatternMap[CurrPhase.PhasePattern];
		LastPoint = CurrentPattern[0];
		NextPoint = CurrentPattern[1];
	}
	if (CurrPhase.PhaseAnimation) { CurrentSequenceTime = CurrPhase.PhaseAnimation->GetPlayLength(); }
	if (ReloadWidget) { ReloadWidget->SetVisibility(ESlateVisibility::Visible); }
	
}

void UReloadManagerComponent::StartVisualPhase(FReloadPhase& CurrPhase)
{
	if (CurrPhase.PhaseAnimation) { CurrentSequenceTime = CurrPhase.PhaseAnimation->GetPlayLength(); }
	CurrentSequenceTimeRemaining = CurrentSequenceTime;
	if (ReloadWidget) { ReloadWidget->SetVisibility(ESlateVisibility::Hidden); }
}

void UReloadManagerComponent::UpdatePhase(float DeltaTime)
{
	FReloadPhase Curr = ReloadSequence[CurrentReloadPhase];
	switch (Curr.PhaseType)
	{
	case EReloadPhaseType::Visual:
		UpdateVisualPhase(Curr, DeltaTime);
		break;
	case EReloadPhaseType::Interactive:
		UpdateInteractivePhase(Curr, DeltaTime);
		break;
	default:
		break;
	}
}

void UReloadManagerComponent::UpdateInteractivePhase(FReloadPhase& CurrPhase, float DeltaTime)
{
	if (APlayerController* PC = Cast<APlayerController>(Cast<APawn>(GetOwner())->GetController()))
	{
		FVector2D NewMouseLocation;
		int32 ScreenWidth, ScreenHeight;
		PC->GetViewportSize(ScreenWidth, ScreenHeight);
		FVector2D CenterScreen = FVector2D(ScreenWidth, ScreenHeight) * 0.5f;
		PC->GetMousePosition(NewMouseLocation.X, NewMouseLocation.Y);

		FVector2D ExpectedDirection = (NextPoint - LastPoint).GetSafeNormal();
		FVector2D ActualDirection = (NewMouseLocation - CenterScreen).GetSafeNormal();

		float MovementSpeed = (NewMouseLocation - CenterScreen).Size();
		MovementSpeed = FMath::GetMappedRangeValueClamped(FVector2D(0.f, 400.f), FVector2D(0.f, 1.f), MovementSpeed);
		
		PC->SetMouseLocation(CenterScreen.X, CenterScreen.Y);
		
		if (FVector2D::DotProduct(ExpectedDirection, ActualDirection) > 0.6)
		{
			float TotalSegs = ReloadPatternMap[CurrPhase.PhasePattern].Num();
			float CurrentSegs = TotalSegs - CurrentPattern.Num();
			CurrentProgress += DeltaTime * (ProgressRate * TotalSegs-1) * MovementSpeed;
			CurrentProgress = FMath::Clamp(CurrentProgress, 0.f, 1.f);
			TotalProgress = (CurrentSegs + CurrentProgress) / (TotalSegs - 1);
			CurrentSequenceTimeRemaining = FMath::Lerp(0.f, CurrentSequenceTime, TotalProgress);
			if (CurrentProgress >= 1.f)
			{
				LastPoint = NextPoint;
				CurrentPattern.RemoveAt(0);
				if (CurrentPattern.Num() > 1)
				{
					CurrentProgress = 0.f;
					NextPoint = CurrentPattern[1];
					UE_LOG(LogTemp, Display, TEXT("CurrentPoint: %f, %f"), LastPoint.X, LastPoint.Y);
					UE_LOG(LogTemp, Display, TEXT("NextPoint: %f, %f"), NextPoint.X, NextPoint.Y);
				}
				else { CompletePhase(); }
			}
		}
	}
}

void UReloadManagerComponent::UpdateVisualPhase(FReloadPhase& CurrPhase, float DeltaTime)
{
	CurrentSequenceTimeRemaining -= DeltaTime;
	if (CurrentSequenceTimeRemaining <= 0.f) { CompletePhase(); }
}

void UReloadManagerComponent::CompletePhase()
{
	int32 NewPhase = CurrentReloadPhase + 1;
	if ((ReloadSequence.Num()) > NewPhase) { StartPhase(false); return;}
	StopReload(true);
}

void UReloadManagerComponent::StopReload(bool Success)
{
	CurrentReloadPhase = -1;
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
		ReloadWidget = CreateWidget<UUserWidget>(GetWorld(), ReloadWidgetClass);
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

