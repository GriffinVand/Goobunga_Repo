// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/AbilityBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_AbilityBase_generated_h
#error "AbilityBase.generated.h already included, missing '#pragma once' in AbilityBase.h"
#endif
#define GOOBUNGA_AbilityBase_generated_h

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityBase(); \
	friend struct Z_Construct_UClass_UAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UAbilityBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UAbilityBase)


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityBase(UAbilityBase&&); \
	UAbilityBase(const UAbilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityBase) \
	NO_API virtual ~UAbilityBase();


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_5_PROLOG
#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_8_INCLASS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UAbilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
