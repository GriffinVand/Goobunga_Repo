// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Dialogue/DialogueStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueStructs() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueReply();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin ScriptStruct FDialogueLine
static_assert(std::is_polymorphic<FDialogueLine>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogueLine cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueLine;
class UScriptStruct* FDialogueLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueLine, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("DialogueLine"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton;
}
template<> GOOBUNGA_API UScriptStruct* StaticStruct<FDialogueLine>()
{
	return FDialogueLine::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Dialogue/DialogueStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "DialogueLine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Actual text to be shown\n" },
#endif
		{ "ModuleRelativePath", "Dialogue/DialogueStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actual text to be shown" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "Category", "DialogueLine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Audio to pair with this dialogue line\n" },
#endif
		{ "ModuleRelativePath", "Dialogue/DialogueStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio to pair with this dialogue line" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextID_MetaData[] = {
		{ "Category", "DialogueLine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ID of next dialogue->if there aren't any replies\n" },
#endif
		{ "ModuleRelativePath", "Dialogue/DialogueStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID of next dialogue->if there aren't any replies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplyIDs_MetaData[] = {
		{ "Category", "DialogueLine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//IDs of all possible replies\n" },
#endif
		{ "ModuleRelativePath", "Dialogue/DialogueStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IDs of all possible replies" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReplyIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplyIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueLine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, Audio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_NextID = { "NextID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, NextID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextID_MetaData), NewProp_NextID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_ReplyIDs_Inner = { "ReplyIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_ReplyIDs = { "ReplyIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, ReplyIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplyIDs_MetaData), NewProp_ReplyIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Audio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_NextID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_ReplyIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_ReplyIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueLine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DialogueLine",
	Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers),
	sizeof(FDialogueLine),
	alignof(FDialogueLine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton, Z_Construct_UScriptStruct_FDialogueLine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton;
}
// End ScriptStruct FDialogueLine

// Begin ScriptStruct FDialogueReply
static_assert(std::is_polymorphic<FDialogueReply>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogueReply cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueReply;
class UScriptStruct* FDialogueReply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueReply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueReply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueReply, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("DialogueReply"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueReply.OuterSingleton;
}
template<> GOOBUNGA_API UScriptStruct* StaticStruct<FDialogueReply>()
{
	return FDialogueReply::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueReply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Dialogue/DialogueStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "DialogueReply" },
		{ "ModuleRelativePath", "Dialogue/DialogueStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextID_MetaData[] = {
		{ "Category", "DialogueReply" },
		{ "ModuleRelativePath", "Dialogue/DialogueStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "DialogueReply" },
		{ "ModuleRelativePath", "Dialogue/DialogueStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestRequirement_MetaData[] = {
		{ "Category", "DialogueReply" },
		{ "ModuleRelativePath", "Dialogue/DialogueStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestRequirement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueReply>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueReply_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueReply, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueReply_Statics::NewProp_NextID = { "NextID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueReply, NextID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextID_MetaData), NewProp_NextID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueReply_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueReply_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueReply, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueReply_Statics::NewProp_QuestRequirement = { "QuestRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueReply, QuestRequirement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestRequirement_MetaData), NewProp_QuestRequirement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueReply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueReply_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueReply_Statics::NewProp_NextID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueReply_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueReply_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueReply_Statics::NewProp_QuestRequirement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueReply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueReply_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DialogueReply",
	Z_Construct_UScriptStruct_FDialogueReply_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueReply_Statics::PropPointers),
	sizeof(FDialogueReply),
	alignof(FDialogueReply),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueReply_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueReply_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueReply()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueReply.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueReply.InnerSingleton, Z_Construct_UScriptStruct_FDialogueReply_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueReply.InnerSingleton;
}
// End ScriptStruct FDialogueReply

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueLine::StaticStruct, Z_Construct_UScriptStruct_FDialogueLine_Statics::NewStructOps, TEXT("DialogueLine"), &Z_Registration_Info_UScriptStruct_DialogueLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueLine), 28802444U) },
		{ FDialogueReply::StaticStruct, Z_Construct_UScriptStruct_FDialogueReply_Statics::NewStructOps, TEXT("DialogueReply"), &Z_Registration_Info_UScriptStruct_DialogueReply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueReply), 3764006071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueStructs_h_2833279812(TEXT("/Script/Goobunga"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
