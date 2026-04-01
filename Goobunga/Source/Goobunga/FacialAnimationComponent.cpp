#include "FacialAnimationComponent.h"

UFacialAnimationComponent::UFacialAnimationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}

void UFacialAnimationComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UFacialAnimationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UpdateCurrentAnimation(DeltaTime);
}

void UFacialAnimationComponent::UpdateCurrentAnimation(float DeltaTime)
{
	Animations[CurrentAnimation].FrameBuffer += DeltaTime;
	if (Animations[CurrentAnimation].FrameBuffer > 1.f / Animations[CurrentAnimation].FrameRate)
	{
		Animations[CurrentAnimation].FrameBuffer = 0;
		Animations[CurrentAnimation].CurrentFrame++;
		if (Animations[CurrentAnimation].CurrentFrame >= Animations[CurrentAnimation].Textures.Num()) { AnimationFinished(); return; }
		if (Animations[CurrentAnimation].CurrentFrame < Animations[CurrentAnimation].Textures.Num())
		{
			Material->SetTextureParameterValue("Param", Animations[CurrentAnimation].Textures[Animations[CurrentAnimation].CurrentFrame]);
		}
	}
}

void UFacialAnimationComponent::AnimationFinished()
{
	if (Looping) { Animations[CurrentAnimation].CurrentFrame = 0; return; }
	PlayAnimation(DefaultAnimation, true);
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

