#include "FacialAnimationComponent.h"

UFacialAnimationComponent::UFacialAnimationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}

void UFacialAnimationComponent::BeginPlay()
{
	Super::BeginPlay();
	if (TargetSKM)
	{
		UMaterialInstanceDynamic::Create(TargetSKM->GetMaterial(MaterialIndex), Material);
		if (Material)
		{
			TargetSKM->SetMaterial(MaterialIndex, Material);
			PlayAnimation(DefaultAnimation, true);
		}
	}
	
}

void UFacialAnimationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (bPlaying) { UpdateCurrentAnimation(DeltaTime); }
}

void UFacialAnimationComponent::UpdateCurrentAnimation(float DeltaTime)
{
	if (!Animations.Contains(CurrentAnimation)) { return; }
	Animations[CurrentAnimation].FrameBuffer += DeltaTime;
	if (Animations[CurrentAnimation].FrameBuffer > 1.f / Animations[CurrentAnimation].FrameRate)
	{
		Animations[CurrentAnimation].FrameBuffer = 0;
		Animations[CurrentAnimation].CurrentFrame++;
		if (Animations[CurrentAnimation].CurrentFrame >= Animations[CurrentAnimation].Textures.Num()) { AnimationFinished(); return; }
		UpdateMaterial();
	}
}

void UFacialAnimationComponent::AnimationFinished()
{
	if (Looping) { Animations[CurrentAnimation].CurrentFrame = 0; UpdateMaterial(); return; }
	PlayAnimation(DefaultAnimation, true);
}

void UFacialAnimationComponent::UpdateMaterial()
{
	if (Animations[CurrentAnimation].CurrentFrame < Animations[CurrentAnimation].Textures.Num())
	{
		Material->SetTextureParameterValue("Param", Animations[CurrentAnimation].Textures[Animations[CurrentAnimation].CurrentFrame]);
	}
}

void UFacialAnimationComponent::PlayAnimation(FName AnimationName, bool CanLoop)
{
	if (Animations.Contains(AnimationName))
	{
		UE_LOG(LogTemp, Error, TEXT("Play Animation %s"), *AnimationName.ToString());
		CurrentAnimation = AnimationName;
		Animations[CurrentAnimation].CurrentFrame = 0;
		Animations[CurrentAnimation].FrameBuffer = 0;
		UpdateMaterial();
		Looping = CanLoop;
		bPlaying = true;
		return;
	}
	bPlaying = false;
	UE_LOG(LogTemp, Error, TEXT("Can't find animation %s"), *AnimationName.ToString());
}

void UFacialAnimationComponent::StopAnimation()
{
	bPlaying = false;
}

