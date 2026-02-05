// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/BaseEnemyAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_BaseEnemyAIController_generated_h
#error "BaseEnemyAIController.generated.h already included, missing '#pragma once' in BaseEnemyAIController.h"
#endif
#define GOOBUNGA_BaseEnemyAIController_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemyAIController(); \
	friend struct Z_Construct_UClass_ABaseEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemyAIController)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseEnemyAIController(ABaseEnemyAIController&&); \
	ABaseEnemyAIController(const ABaseEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemyAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemyAIController) \
	NO_API virtual ~ABaseEnemyAIController();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h_12_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class ABaseEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
