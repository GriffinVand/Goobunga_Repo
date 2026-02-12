// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserInterface/LoadSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_LoadSlot_generated_h
#error "LoadSlot.generated.h already included, missing '#pragma once' in LoadSlot.h"
#endif
#define GOOBUNGA_LoadSlot_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadNewSlot); \
	DECLARE_FUNCTION(execLoadSlot);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadSlot(); \
	friend struct Z_Construct_UClass_ULoadSlot_Statics; \
public: \
	DECLARE_CLASS(ULoadSlot, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(ULoadSlot)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULoadSlot(ULoadSlot&&); \
	ULoadSlot(const ULoadSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadSlot) \
	NO_API virtual ~ULoadSlot();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_9_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_12_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class ULoadSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
