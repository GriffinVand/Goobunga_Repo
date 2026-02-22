// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Goobunga_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_Goobunga_PlayerController_generated_h
#error "Goobunga_PlayerController.generated.h already included, missing '#pragma once' in Goobunga_PlayerController.h"
#endif
#define GOOBUNGA_Goobunga_PlayerController_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_16_DELEGATE \
GOOBUNGA_API void FOnMasterWidgetCreated_DelegateWrapper(const FMulticastScriptDelegate& OnMasterWidgetCreated);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoobunga_PlayerController(); \
	friend struct Z_Construct_UClass_AGoobunga_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AGoobunga_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(AGoobunga_PlayerController)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoobunga_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGoobunga_PlayerController(AGoobunga_PlayerController&&); \
	AGoobunga_PlayerController(const AGoobunga_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoobunga_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoobunga_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoobunga_PlayerController) \
	NO_API virtual ~AGoobunga_PlayerController();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_18_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class AGoobunga_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
