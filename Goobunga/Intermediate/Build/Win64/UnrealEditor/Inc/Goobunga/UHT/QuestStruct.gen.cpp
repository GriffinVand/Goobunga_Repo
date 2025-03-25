// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Quests/QuestStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestStruct() {}

// Begin Cross Module References
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin ScriptStruct FQuestStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestStruct;
class UScriptStruct* FQuestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestStruct, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("QuestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_QuestStruct.OuterSingleton;
}
template<> GOOBUNGA_API UScriptStruct* StaticStruct<FQuestStruct>()
{
	return FQuestStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuestStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDescription_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestProgress_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuestProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestName_MetaData), NewProp_QuestName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDescription_MetaData), NewProp_QuestDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestProgress = { "QuestProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestProgress_MetaData), NewProp_QuestProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	&NewStructOps,
	"QuestStruct",
	Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers),
	sizeof(FQuestStruct),
	alignof(FQuestStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestStruct.InnerSingleton, Z_Construct_UScriptStruct_FQuestStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuestStruct.InnerSingleton;
}
// End ScriptStruct FQuestStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestStruct::StaticStruct, Z_Construct_UScriptStruct_FQuestStruct_Statics::NewStructOps, TEXT("QuestStruct"), &Z_Registration_Info_UScriptStruct_QuestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestStruct), 690842456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestStruct_h_2007507658(TEXT("/Script/Goobunga"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
