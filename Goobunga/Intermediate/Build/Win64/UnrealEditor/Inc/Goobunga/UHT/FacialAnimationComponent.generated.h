// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FacialAnimationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_FacialAnimationComponent_generated_h
#error "FacialAnimationComponent.generated.h already included, missing '#pragma once' in FacialAnimationComponent.h"
#endif
#define GOOBUNGA_FacialAnimationComponent_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics; \
	GOOBUNGA_API static class UScriptStruct* StaticStruct();


template<> GOOBUNGA_API UScriptStruct* StaticStruct<struct FFacialAnimationStruct>();

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopAnimation); \
	DECLARE_FUNCTION(execPlayAnimation);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFacialAnimationComponent(); \
	friend struct Z_Construct_UClass_UFacialAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(UFacialAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UFacialAnimationComponent)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFacialAnimationComponent(UFacialAnimationComponent&&); \
	UFacialAnimationComponent(const UFacialAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFacialAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFacialAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFacialAnimationComponent) \
	NO_API virtual ~UFacialAnimationComponent();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_23_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UFacialAnimationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
