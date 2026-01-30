// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Quests/QuestManagerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
#ifdef GOOBUNGA_QuestManagerSubsystem_generated_h
#error "QuestManagerSubsystem.generated.h already included, missing '#pragma once' in QuestManagerSubsystem.h"
#endif
#define GOOBUNGA_QuestManagerSubsystem_generated_h

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_6_DELEGATE \
GOOBUNGA_API void FOnObjectiveEvent_DelegateWrapper(const FMulticastScriptDelegate& OnObjectiveEvent, FGameplayTagContainer EventTags, int32 EventAmount);


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyObjectiveEvent);


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestManagerSubsystem(); \
	friend struct Z_Construct_UClass_UQuestManagerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UQuestManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UQuestManagerSubsystem)


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestManagerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuestManagerSubsystem(UQuestManagerSubsystem&&); \
	UQuestManagerSubsystem(const UQuestManagerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestManagerSubsystem) \
	NO_API virtual ~UQuestManagerSubsystem();


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_8_PROLOG
#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UQuestManagerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
