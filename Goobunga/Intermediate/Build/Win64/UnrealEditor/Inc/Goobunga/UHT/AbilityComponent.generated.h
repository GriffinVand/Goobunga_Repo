// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/AbilityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_AbilityComponent_generated_h
#error "AbilityComponent.generated.h already included, missing '#pragma once' in AbilityComponent.h"
#endif
#define GOOBUNGA_AbilityComponent_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityLoadout_Statics; \
	GOOBUNGA_API static class UScriptStruct* StaticStruct();


template<> GOOBUNGA_API UScriptStruct* StaticStruct<struct FAbilityLoadout>();

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityComponent(); \
	friend struct Z_Construct_UClass_UAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UAbilityComponent)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityComponent(UAbilityComponent&&); \
	UAbilityComponent(const UAbilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityComponent) \
	NO_API virtual ~UAbilityComponent();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_19_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UAbilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
