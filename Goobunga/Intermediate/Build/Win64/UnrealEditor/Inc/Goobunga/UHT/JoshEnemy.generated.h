// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/JoshEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_JoshEnemy_generated_h
#error "JoshEnemy.generated.h already included, missing '#pragma once' in JoshEnemy.h"
#endif
#define GOOBUNGA_JoshEnemy_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJoshEnemy(); \
	friend struct Z_Construct_UClass_AJoshEnemy_Statics; \
public: \
	DECLARE_CLASS(AJoshEnemy, ABaseEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(AJoshEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<AJoshEnemy*>(this); }


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AJoshEnemy(AJoshEnemy&&); \
	AJoshEnemy(const AJoshEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJoshEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJoshEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJoshEnemy) \
	NO_API virtual ~AJoshEnemy();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_10_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_13_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class AJoshEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
