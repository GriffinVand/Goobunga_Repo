// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/AI/BTT/BTTask_AttackPrim.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_BTTask_AttackPrim_generated_h
#error "BTTask_AttackPrim.generated.h already included, missing '#pragma once' in BTTask_AttackPrim.h"
#endif
#define GOOBUNGA_BTTask_AttackPrim_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAttackFinished);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_AttackPrim(); \
	friend struct Z_Construct_UClass_UBTTask_AttackPrim_Statics; \
public: \
	DECLARE_CLASS(UBTTask_AttackPrim, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_AttackPrim)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_AttackPrim(UBTTask_AttackPrim&&); \
	UBTTask_AttackPrim(const UBTTask_AttackPrim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_AttackPrim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_AttackPrim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTTask_AttackPrim) \
	NO_API virtual ~UBTTask_AttackPrim();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_7_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_10_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UBTTask_AttackPrim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
