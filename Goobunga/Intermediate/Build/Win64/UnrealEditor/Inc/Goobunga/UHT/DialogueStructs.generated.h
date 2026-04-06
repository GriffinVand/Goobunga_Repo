// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dialogue/DialogueStructs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_DialogueStructs_generated_h
#error "DialogueStructs.generated.h already included, missing '#pragma once' in DialogueStructs.h"
#endif
#define GOOBUNGA_DialogueStructs_generated_h

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueStructs_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueActionStruct_Statics; \
	GOOBUNGA_API static class UScriptStruct* StaticStruct();


template<> GOOBUNGA_API UScriptStruct* StaticStruct<struct FDialogueActionStruct>();

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueStructs_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueLine_Statics; \
	GOOBUNGA_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GOOBUNGA_API UScriptStruct* StaticStruct<struct FDialogueLine>();

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueStructs_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueReply_Statics; \
	GOOBUNGA_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GOOBUNGA_API UScriptStruct* StaticStruct<struct FDialogueReply>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueStructs_h


#define FOREACH_ENUM_EDIALOGUEACTIONTYPE(op) \
	op(EDialogueActionType::None) \
	op(EDialogueActionType::OPEN_SHOP) \
	op(EDialogueActionType::TRUE_DIALOGUE) \
	op(EDialogueActionType::ADD_QUEST) \
	op(EDialogueActionType::COMPLETE_QUEST) \
	op(EDialogueActionType::REMOVE_QUEST) \
	op(EDialogueActionType::GIVE_REWARD) \
	op(EDialogueActionType::SET_DIALOGUE) \
	op(EDialogueActionType::END_DIALOGUE) 

enum class EDialogueActionType : uint8;
template<> struct TIsUEnumClass<EDialogueActionType> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<EDialogueActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
