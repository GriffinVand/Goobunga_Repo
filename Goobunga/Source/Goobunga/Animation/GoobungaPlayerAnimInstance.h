#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GoobungaPlayerAnimInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFirstPatternCalled);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNextPatternCalled);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReloadCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPatternFinished);

UCLASS()
class GOOBUNGA_API UGoobungaPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnFirstPatternCalled OnFirstPatternCalled;
	UPROPERTY(BlueprintAssignable)
	FOnNextPatternCalled OnNextPatternCalled;
	UPROPERTY(BlueprintAssignable)
	FOnReloadCompleted OnReloadCompleted;
	UPROPERTY(BlueprintAssignable)
	FOnPatternFinished OnPatternFinished;
	
	UFUNCTION(BlueprintCallable)
	void BroadcastOnFirstPatternCalled() { OnFirstPatternCalled.Broadcast(); }
	UFUNCTION( BlueprintCallable )
	void BroadcastOnNextPatternCalled() { OnNextPatternCalled.Broadcast(); }
	UFUNCTION( BlueprintCallable )
	void BroadcastOnReloadCompleted() { OnReloadCompleted.Broadcast(); }
	UFUNCTION( BlueprintCallable )
	void BroadcastOnPatternFinished() { OnPatternFinished.Broadcast(); }
	
	
};
