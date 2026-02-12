// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReloadManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_ReloadManagerComponent_generated_h
#error "ReloadManagerComponent.generated.h already included, missing '#pragma once' in ReloadManagerComponent.h"
#endif
#define GOOBUNGA_ReloadManagerComponent_generated_h

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnReloadCompleted); \
	DECLARE_FUNCTION(execOnPatternFinished); \
	DECLARE_FUNCTION(execOnNextPatternCalled); \
	DECLARE_FUNCTION(execOnFirstPatternCalled);


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReloadManagerComponent(); \
	friend struct Z_Construct_UClass_UReloadManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UReloadManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UReloadManagerComponent)


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReloadManagerComponent(UReloadManagerComponent&&); \
	UReloadManagerComponent(const UReloadManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReloadManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReloadManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReloadManagerComponent) \
	NO_API virtual ~UReloadManagerComponent();


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_10_PROLOG
#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UReloadManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
