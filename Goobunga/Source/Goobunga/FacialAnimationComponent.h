#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FacialAnimationComponent.generated.h"

USTRUCT(BlueprintType)
struct FFacialAnimationStruct
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTexture2D*> Textures;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FrameRate = 15.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CurrentFrame = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FrameBuffer = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Looping = true;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GOOBUNGA_API UFacialAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UFacialAnimationComponent();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstanceDynamic* Material = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* TargetSKM = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaterialIndex = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DefaultAnimation = "Idle";
protected:
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FFacialAnimationStruct> Animations;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CurrentAnimation = "Idle";
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Looping = false;
	
	bool bPlaying = true;
	int32 CurrPriority = -1;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void UpdateMaterial();
	void UpdateCurrentAnimation(float DeltaTime);
	void AnimationFinished();
	UFUNCTION(BlueprintCallable)
	void PlayAnimation(FName AnimationName, bool CanLoop);
	void PlayAnimation(FName AnimationName, bool CanLoop, int32 Priority) { if (Priority >= CurrPriority) { PlayAnimation(AnimationName, CanLoop); } }
	void PlayDefaultAnimation() { PlayAnimation(DefaultAnimation, true); }
	UFUNCTION(BlueprintCallable)
	void StopAnimation();
		
};
