// Fill out your copyright notice in the Description page of Project Settings.


#include "ReloadManagerComponent.h"

#include "Goobunga_Player.h"
#include "PlayerCallables.h"
#include "Animation/GoobungaPlayerAnimInstance.h"
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
	TArray<FVector2D> CirclePoints = {FVector2D(0,-1), FVector2D(1, 0), FVector2D(0, 1), FVector2D(-1, 0), FVector2D(0, -1)};
	ReloadPatternMap.Add(EReloadPattern::Circle, CirclePoints);
}


// Called when the game starts
void UReloadManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	AGoobunga_Player* Player = Cast<AGoobunga_Player>(GetOwner());
	if (!Player) return;
	USkeletalMeshComponent* SKM = Player->FPMesh;
	if (!SKM) return;
	UGoobungaPlayerAnimInstance* PlayerAnimInstance = Cast<UGoobungaPlayerAnimInstance>(SKM->GetAnimInstance());
	if (PlayerAnimInstance)
	{
		PlayerAnimInstance->OnFirstPatternCalled.AddUniqueDynamic(this, &UReloadManagerComponent::OnFirstPatternCalled);
		PlayerAnimInstance->OnNextPatternCalled.AddUniqueDynamic(this, &UReloadManagerComponent::OnNextPatternCalled);
		PlayerAnimInstance->OnReloadCompleted.AddUniqueDynamic(this, &UReloadManagerComponent::OnReloadCompleted);
		PlayerAnimInstance->OnPatternFinished.AddUniqueDynamic(this, &UReloadManagerComponent::OnPatternFinished);
	}
	
}



void UReloadManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UReloadManagerComponent::StartReload(TArray<FReloadPhase>& NewReloadSequence)
{
	ReloadSequence = NewReloadSequence;
	CurrentReloadPhase = -1;
	
	CreateReloadWidget();
	if (ReloadWidget) { ReloadWidget->SetVisibility(ESlateVisibility::Hidden); }
	
	if (ReloadSequence.Num() == 0) { OnReloadCompleted(); return; }
	
	StartPhase(true);
	
}

void UReloadManagerComponent::StartPhase(bool bFirst)
{
	if (bFirst) { CurrentReloadPhase = 0; }
	FReloadPhase Curr = ReloadSequence[CurrentReloadPhase];
	switch (Curr.PhaseType)
	{
	case EReloadPhaseType::Visual:
		break;
	case EReloadPhaseType::Interactive:
		break;
	default:
		break;
	}
}

void UReloadManagerComponent::StartInteractivePhase(FReloadPhase& CurrPhase)
{
	CurrentProgress = 0.f;
	TotalProgress = 0.f;
	if (ReloadPatternMap.Contains(CurrPhase.PhasePattern))
	{
		CurrentPattern = ReloadPatternMap[CurrPhase.PhasePattern];
		LastPoint = CurrentPattern[0];
		NextPoint = CurrentPattern[1];
	}
	if (CurrPhase.PhaseAnimation) { CurrentSequenceTime = CurrPhase.PhaseAnimation->GetPlayLength(); }
	
}

void UReloadManagerComponent::StartVisualPhase(FReloadPhase& CurrPhase)
{
	if (CurrPhase.PhaseAnimation) { CurrentSequenceTime = CurrPhase.PhaseAnimation->GetPlayLength(); }
	CurrentSequenceTimeRemaining = CurrentSequenceTime;
}

void UReloadManagerComponent::UpdatePhase()
{
	
}

void UReloadManagerComponent::UpdateInteractivePhase(FReloadPhase& CurrPhase, float DeltaTime)
{
	
}

void UReloadManagerComponent::UpdateVisualPhase(FReloadPhase& CurrPhase, float DeltaTime)
{
	
}

void UReloadManagerComponent::CompletePhase()
{
	
}


void UReloadManagerComponent::UpdateReload()
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
			float TotalSegs = ReloadPatternMap[CurrentPatternSequence[0]].Num();
			float CurrentSegs = TotalSegs - CurrentPattern.Num();
			CurrentProgress += GetWorld()->GetDeltaSeconds() * (ProgressRate * TotalSegs-1) * MovementSpeed;
			CurrentProgress = FMath::Clamp(CurrentProgress, 0.f, 1.f);
			TotalProgress = (CurrentSegs + CurrentProgress) / (TotalSegs - 1);
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
			}
		}
	}
	
}

void UReloadManagerComponent::OnFirstPatternCalled()
{
	if (CurrentPatternSequence.Num() == 0) return;
	CurrentPattern = ReloadPatternMap[CurrentPatternSequence[0]];
	if (CurrentPattern.Num() > 1)
	{
		TotalProgress = 0.f;
		CurrentProgress = 0.f;
		LastPoint = CurrentPattern[0];
		NextPoint = CurrentPattern[1];
		UE_LOG(LogTemp, Display, TEXT("CurrentPoint: %f, %f"), LastPoint.X, LastPoint.Y);
		UE_LOG(LogTemp, Display, TEXT("NextPoint: %f, %f"), NextPoint.X, NextPoint.Y);
		bActive = true;
		if (ReloadWidget) { ReloadWidget->SetVisibility(ESlateVisibility::Visible); }
	}
}

void UReloadManagerComponent::OnNextPatternCalled()
{
	if (CurrentPatternSequence.Num() == 0) return;
	CurrentPatternSequence.RemoveAt(0);
	TotalProgress = 0.f;
	CurrentProgress = 0.f;
	if (CurrentPatternSequence.Num() > 0)
	{
		CurrentPattern = ReloadPatternMap[CurrentPatternSequence[0]];
		if (CurrentPattern.Num() > 1)
		{
			LastPoint = CurrentPattern[0];
			NextPoint = CurrentPattern[1];
			UE_LOG(LogTemp, Display, TEXT("CurrentPoint: %f, %f"), LastPoint.X, LastPoint.Y);
			UE_LOG(LogTemp, Display, TEXT("NextPoint: %f, %f"), NextPoint.X, NextPoint.Y);
			bActive = true;
		}
	}
	if (ReloadWidget) { ReloadWidget->SetVisibility(ESlateVisibility::Visible); }
}

void UReloadManagerComponent::OnPatternFinished()
{
	bActive = false;
	if (ReloadWidget) { ReloadWidget->SetVisibility(ESlateVisibility::Hidden); }
}

void UReloadManagerComponent::OnReloadCompleted()
{
	StopReload(true);
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

