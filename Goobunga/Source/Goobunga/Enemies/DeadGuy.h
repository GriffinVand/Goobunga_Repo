// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Goobunga/Dialogue/DialogueInterface.h"
#include "Goobunga/Interaction/InteractInterface.h"
#include "Goobunga/NPC/BaseNPC.h"
#include "DeadGuy.generated.h"

class UFacialAnimationComponent;
class UFMODEvent;
class UFMODAudioComponent;
class UBoxComponent;

UCLASS()
class GOOBUNGA_API ADeadGuy : public ABaseNPC
{
	GENERATED_BODY()

public:
	ADeadGuy();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSpeaking = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* SkeletalMeshComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	FName CurrentDialogue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	UFMODAudioComponent* AudioComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	UFMODEvent* DeathEvent;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void DialogueEnded_Implementation() override;
	virtual FName GetCurrentDialogue_Implementation() override;
	virtual void Interact_Implementation(AActor* Interactor) override;
	virtual FText GetInteractText_Implementation(AActor* Interactor) override { return FText::FromString("Press 'E' to talk"); }
};
