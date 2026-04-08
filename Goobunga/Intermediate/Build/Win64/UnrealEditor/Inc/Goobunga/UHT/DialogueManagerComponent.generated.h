// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dialogue/DialogueManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GOOBUNGA_DialogueManagerComponent_generated_h
#error "DialogueManagerComponent.generated.h already included, missing '#pragma once' in DialogueManagerComponent.h"
#endif
#define GOOBUNGA_DialogueManagerComponent_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execContinueDialogue); \
	DECLARE_FUNCTION(execOnReplySelected); \
	DECLARE_FUNCTION(execStartDialogue);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueManagerComponent(); \
	friend struct Z_Construct_UClass_UDialogueManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UDialogueManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UDialogueManagerComponent)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueManagerComponent(UDialogueManagerComponent&&); \
	UDialogueManagerComponent(const UDialogueManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueManagerComponent) \
	NO_API virtual ~UDialogueManagerComponent();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_14_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UDialogueManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
