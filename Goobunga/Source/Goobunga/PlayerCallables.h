// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "PlayerCallables.generated.h"

class UFacialAnimationComponent;
class UDialogueManagerComponent;
class UInventoryComponent;
class UItemData;
enum class EItemDataType : uint8;
// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UPlayerCallables : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GOOBUNGA_API IPlayerCallables
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void UpdateAds(float Alpha) = 0;
	virtual void EndReload(bool Success) = 0;
	virtual void ApplyAimOffset(FVector AimOffsetInput) = 0;
	virtual void ApplyWeaponKick(FVector KickDirection, FRotator KickRotation, FVector MaxDir, FRotator MaxRot) = 0;
	virtual void UpdateWeaponUI() = 0;
	virtual TArray<FVector> GetAimDirection() = 0;
	virtual void PerformAction(const FString& Action) = 0;
	virtual void PushWidget(FGameplayTag GameplayTag, UUserWidget* Widget) = 0;
	virtual TArray<FName> GetOwnedItemIDs() = 0;
	virtual void RecieveItem(EItemDataType Type, TObjectPtr<UItemData> ItemData, bool bEquip = false) = 0;
	virtual UInventoryComponent* GetInventory() = 0;
	virtual void StartDialogue(AActor* DialogueActor) = 0;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EndInteract(AActor* InteractedActor);
	virtual UFacialAnimationComponent* GetFacialAnimation() = 0;
};
