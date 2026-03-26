// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Quests/QuestManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
#ifdef GOOBUNGA_QuestManagerComponent_generated_h
#error "QuestManagerComponent.generated.h already included, missing '#pragma once' in QuestManagerComponent.h"
#endif
#define GOOBUNGA_QuestManagerComponent_generated_h

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateQuestProgress);


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestManagerComponent(); \
	friend struct Z_Construct_UClass_UQuestManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UQuestManagerComponent)


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuestManagerComponent(UQuestManagerComponent&&); \
	UQuestManagerComponent(const UQuestManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestManagerComponent) \
	NO_API virtual ~UQuestManagerComponent();


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_12_PROLOG
#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UQuestManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
