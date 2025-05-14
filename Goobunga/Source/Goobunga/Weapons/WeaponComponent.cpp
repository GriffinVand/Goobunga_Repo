// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"

#include "Weapon.h"
#include "Components/TimelineComponent.h"
#include "Goobunga/PlayerCallables.h"


UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	AdsTimeline = CreateDefaultSubobject<UTimelineComponent>("AdsTimelineComponent");
}

void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
	SetAdsTimeline();
}


void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UWeaponComponent::SetAdsTimeline()
{
	if (AdsCurve && AdsTimeline)
	{
		FOnTimelineFloat AdsUpdate;
		AdsUpdate.BindUFunction(this, "OnAdsTimelineUpdate");
		AdsTimeline->AddInterpFloat(AdsCurve, AdsUpdate);
		FOnTimelineEvent AdsFinished;
		AdsFinished.BindUFunction(this, "OnAdsTimelineFinish");
		AdsTimeline->SetTimelineFinishedFunc(AdsFinished);

		float NewPlayRate = 1.f / AdsTime;
		AdsTimeline->SetPlayRate(NewPlayRate);
		AdsTimeline->SetNewTime(0.f);
	}
	else { UE_LOG(LogTemp, Warning, TEXT("Curve or timeline not valid")); }
}

void UWeaponComponent::OnAdsTimelineUpdate(float Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Ads Value: %f"), Value);
	if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(GetOwner()))
	{
		PlayerCallablesInterface->UpdateAds(Value);
	}
}

void UWeaponComponent::OnAdsTimelineFinished()
{
	UE_LOG(LogTemp, Warning, TEXT("Ads Finished"));
	bAds = false;
}

void UWeaponComponent::StartAds()
{
	bAds = true;
	AdsTimeline->Play();
}

void UWeaponComponent::StopAds()
{
	bAds = true;
	AdsTimeline->Reverse();
}

FTransform UWeaponComponent::GetWeaponSightTransform()
{
	if (EquippedWeapon)
	{
		return EquippedWeapon->WeaponMesh->GetSocketTransform("Sight_Socket");
	}
	return FTransform();
}

