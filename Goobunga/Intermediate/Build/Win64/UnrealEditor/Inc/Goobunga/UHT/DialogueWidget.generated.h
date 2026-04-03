// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dialogue/UI/DialogueWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_DialogueWidget_generated_h
#error "DialogueWidget.generated.h already included, missing '#pragma once' in DialogueWidget.h"
#endif
#define GOOBUNGA_DialogueWidget_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueWidget(); \
	friend struct Z_Construct_UClass_UDialogueWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidget)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueWidget(UDialogueWidget&&); \
	UDialogueWidget(const UDialogueWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidget) \
	NO_API virtual ~UDialogueWidget();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueWidget_h_16_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UDialogueWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
