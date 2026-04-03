// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Quests/QuestStruct.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestStruct() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin ScriptStruct FQuestStruct
static_assert(std::is_polymorphic<FQuestStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestProgress_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxQuestProgress_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestObjIcon_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestRewardID_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestRewardAmount_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestIcon_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestRewardIcon_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestProgressTags_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Quests/QuestStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuestProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxQuestProgress;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestObjIcon;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestRewardID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestRewardID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuestRewardAmount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestRewardAmount;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestIcon;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestRewardIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestProgressTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestProgress = { "QuestProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestProgress_MetaData), NewProp_QuestProgress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_MaxQuestProgress = { "MaxQuestProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, MaxQuestProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxQuestProgress_MetaData), NewProp_MaxQuestProgress_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestObjIcon = { "QuestObjIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestObjIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestObjIcon_MetaData), NewProp_QuestObjIcon_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestRewardID_Inner = { "QuestRewardID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestRewardID = { "QuestRewardID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestRewardID), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestRewardID_MetaData), NewProp_QuestRewardID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestRewardAmount_Inner = { "QuestRewardAmount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestRewardAmount = { "QuestRewardAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestRewardAmount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestRewardAmount_MetaData), NewProp_QuestRewardAmount_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestIcon = { "QuestIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestIcon_MetaData), NewProp_QuestIcon_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestRewardIcon = { "QuestRewardIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestRewardIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestRewardIcon_MetaData), NewProp_QuestRewardIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestProgressTags = { "QuestProgressTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestStruct, QuestProgressTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestProgressTags_MetaData), NewProp_QuestProgressTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_MaxQuestProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestObjIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestRewardID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestRewardID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestRewardAmount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestRewardAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestRewardIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestProgressTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
	Z_Construct_UScriptStruct_FTableRowBase,
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
		{ FQuestStruct::StaticStruct, Z_Construct_UScriptStruct_FQuestStruct_Statics::NewStructOps, TEXT("QuestStruct"), &Z_Registration_Info_UScriptStruct_QuestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestStruct), 436812053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestStruct_h_2644729458(TEXT("/Script/Goobunga"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
