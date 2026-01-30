// Fill out your copyright notice in the Description page of Project Settings.


#include "FacialAnimationComponent.h"

// Sets default values for this component's properties
UFacialAnimationComponent::UFacialAnimationComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFacialAnimationComponent::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Called every frame
void UFacialAnimationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UpdateCurrentAnimation(DeltaTime);
	// ...
}

void UFacialAnimationComponent::UpdateCurrentAnimation(float DeltaTime)
{
	Animations[CurrentAnimation].FrameBuffer += DeltaTime;
	if (Animations[CurrentAnimation].FrameBuffer > 1.f / Animations[CurrentAnimation].FrameRate)
	{
		Animations[CurrentAnimation].FrameBuffer = 0;
		Animations[CurrentAnimation].CurrentFrame++;
		if (Animations[CurrentAnimation].CurrentFrame >= Animations[CurrentAnimation].Textures.Num()) { Animations[CurrentAnimation].CurrentFrame = 0; }
		if (Animations[CurrentAnimation].CurrentFrame < Animations[CurrentAnimation].Textures.Num())
		{
			Material->SetTextureParameterValue("Param", Animations[CurrentAnimation].Textures[Animations[CurrentAnimation].CurrentFrame]);
		}
	}
}

void UFacialAnimationComponent::PlayAnimation(FName AnimationName, bool CanLoop)
{
	for (const TPair<FName, FFacialAnimationStruct>& Pair : Animations)
	{
		UE_LOG(LogTemp, Error, TEXT("Animation %s"), *Pair.Key.ToString());
	}
	if (Animations.Contains(AnimationName))
	{
		UE_LOG(LogTemp, Error, TEXT("Play Animation %s"), *AnimationName.ToString());
		CurrentAnimation = AnimationName;
		Animations[CurrentAnimation].CurrentFrame = 0;
		Animations[CurrentAnimation].FrameBuffer = 0;
		if (CanLoop)
		{
			Looping = true;
			DefaultAnimation = CurrentAnimation;
		}
		else { Looping = false; }
		return;
	}
	UE_LOG(LogTemp, Error, TEXT("Can't find animation %s"), *AnimationName.ToString());
}

