// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponComponent, Log, All);

class AWeapon;
class UTimelineComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GOOBUNGA_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWeaponComponent();
	//Single timeline stretched based on current weapon ads time
	UPROPERTY(EditAnywhere)
	UTimelineComponent* AdsTimeline;
	UPROPERTY(EditAnywhere)
	AWeapon* EquippedWeapon = nullptr;
	UPROPERTY(EditAnywhere)
	AWeapon* SecondaryWeapon = nullptr;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AltFireStart() { StartAds(); }
	void AltFireStop() { StopAds(); }
	
	FTransform GetWeaponSightTransform();


protected:
	virtual void BeginPlay() override;

	//Temp ads test vars
	UPROPERTY(EditAnywhere)
	float AdsTime = 1.f;
	UPROPERTY(EditAnywhere)
	bool bAds = false;
	UPROPERTY(EditAnywhere)
	UCurveFloat* AdsCurve = nullptr;
	//
	
	
	UFUNCTION()
	void OnAdsTimelineUpdate(float Value);
	UFUNCTION()
	void OnAdsTimelineFinished();
	
	void StartAds();
	void StopAds();

private:
	void SetAdsTimeline();
	
	
};
