// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "Goobunga/Fireable.h"
#include "Weapon.generated.h"

class UNiagaraSystem;
class UCameraComponent;

UCLASS()
class GOOBUNGA_API AWeapon : public AActor, public IFireable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* WeaponMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* AimDownSightCam;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Context, meta = (AllowPrivateAccess = "true"))
	AActor* WeaponOwner;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	bool ADS = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float ADSTime = 2.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float ADSSpeed = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float FireRate = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	int BaseDamage = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float Accuracy = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	FVector2D Recoil = FVector2D(0, 1);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float HitForce = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Visuals, meta = (AllowPrivateAccess = "true"))
	UNiagaraSystem* FireEffect;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Animation, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* WeaponFireAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Animation, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* UserFireAnimation;
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EquipEvent(AActor* EquippingInstigator) override;
	virtual void FireEvent() override;
	virtual void AltFireEvent() override;
	virtual void ReloadEvent() override;
	virtual bool CanADS() override {return ADS;}
	virtual float GetADSSpeed() override { return ADSTime * ADSSpeed;}
	virtual UCameraComponent* GetADSCamera() override { return AimDownSightCam; }

};
