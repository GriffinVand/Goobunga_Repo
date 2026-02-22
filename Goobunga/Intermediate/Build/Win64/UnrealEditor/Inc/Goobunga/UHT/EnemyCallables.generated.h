// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/EnemyCallables.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_EnemyCallables_generated_h
#error "EnemyCallables.generated.h already included, missing '#pragma once' in EnemyCallables.h"
#endif
#define GOOBUNGA_EnemyCallables_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GOOBUNGA_API UEnemyCallables(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnemyCallables(UEnemyCallables&&); \
	UEnemyCallables(const UEnemyCallables&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GOOBUNGA_API, UEnemyCallables); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyCallables); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyCallables) \
	GOOBUNGA_API virtual ~UEnemyCallables();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEnemyCallables(); \
	friend struct Z_Construct_UClass_UEnemyCallables_Statics; \
public: \
	DECLARE_CLASS(UEnemyCallables, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Goobunga"), GOOBUNGA_API) \
	DECLARE_SERIALIZER(UEnemyCallables)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEnemyCallables() {} \
public: \
	typedef UEnemyCallables UClassType; \
	typedef IEnemyCallables ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_9_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UEnemyCallables>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
