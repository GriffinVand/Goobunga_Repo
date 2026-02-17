// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/GoobungaPlayerAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_GoobungaPlayerAnimInstance_generated_h
#error "GoobungaPlayerAnimInstance.generated.h already included, missing '#pragma once' in GoobungaPlayerAnimInstance.h"
#endif
#define GOOBUNGA_GoobungaPlayerAnimInstance_generated_h

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_7_DELEGATE \
GOOBUNGA_API void FOnFirstPatternCalled_DelegateWrapper(const FMulticastScriptDelegate& OnFirstPatternCalled);


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_8_DELEGATE \
GOOBUNGA_API void FOnNextPatternCalled_DelegateWrapper(const FMulticastScriptDelegate& OnNextPatternCalled);


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_9_DELEGATE \
GOOBUNGA_API void FOnReloadCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnReloadCompleted);


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_10_DELEGATE \
GOOBUNGA_API void FOnPatternFinished_DelegateWrapper(const FMulticastScriptDelegate& OnPatternFinished);


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastOnPatternFinished); \
	DECLARE_FUNCTION(execBroadcastOnReloadCompleted); \
	DECLARE_FUNCTION(execBroadcastOnNextPatternCalled); \
	DECLARE_FUNCTION(execBroadcastOnFirstPatternCalled);


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoobungaPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UGoobungaPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UGoobungaPlayerAnimInstance)


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoobungaPlayerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGoobungaPlayerAnimInstance(UGoobungaPlayerAnimInstance&&); \
	UGoobungaPlayerAnimInstance(const UGoobungaPlayerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoobungaPlayerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoobungaPlayerAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoobungaPlayerAnimInstance) \
	NO_API virtual ~UGoobungaPlayerAnimInstance();


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_12_PROLOG
#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UGoobungaPlayerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
