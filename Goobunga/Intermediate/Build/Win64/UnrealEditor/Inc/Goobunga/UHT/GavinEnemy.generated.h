// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/GavinEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBranchingPointNotifyPayload;
#ifdef GOOBUNGA_GavinEnemy_generated_h
#error "GavinEnemy.generated.h already included, missing '#pragma once' in GavinEnemy.h"
#endif
#define GOOBUNGA_GavinEnemy_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMontageNotifyBegin);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGavinEnemy(); \
	friend struct Z_Construct_UClass_AGavinEnemy_Statics; \
public: \
	DECLARE_CLASS(AGavinEnemy, ABaseEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(AGavinEnemy)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGavinEnemy(AGavinEnemy&&); \
	AGavinEnemy(const AGavinEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGavinEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGavinEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGavinEnemy) \
	NO_API virtual ~AGavinEnemy();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_9_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class AGavinEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
