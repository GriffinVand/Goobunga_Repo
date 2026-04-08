// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Quests/QuestData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestData();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UQuestData
void UQuestData::StaticRegisterNativesUQuestData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestData);
UClass* Z_Construct_UClass_UQuestData_NoRegister()
{
	return UQuestData::StaticClass();
}
struct Z_Construct_UClass_UQuestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Quests/QuestData.h" },
		{ "ModuleRelativePath", "Quests/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Quests/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxQuestProgress_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Quests/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestProgressTags_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Quests/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestRewardID_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Quests/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestRewardAmount_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Quests/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestIcon_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Quests/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestRewardIcon_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Quests/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestObjIcon_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Quests/QuestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxQuestProgress;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestProgressTags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestRewardID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestRewardID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuestRewardAmount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestRewardAmount;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestIcon;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestRewardIcon;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestObjIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_MaxQuestProgress = { "MaxQuestProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, MaxQuestProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxQuestProgress_MetaData), NewProp_MaxQuestProgress_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestProgressTags = { "QuestProgressTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestProgressTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestProgressTags_MetaData), NewProp_QuestProgressTags_MetaData) }; // 3352185621
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestRewardID_Inner = { "QuestRewardID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestRewardID = { "QuestRewardID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestRewardID), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestRewardID_MetaData), NewProp_QuestRewardID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestRewardAmount_Inner = { "QuestRewardAmount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestRewardAmount = { "QuestRewardAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestRewardAmount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestRewardAmount_MetaData), NewProp_QuestRewardAmount_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestIcon = { "QuestIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestIcon_MetaData), NewProp_QuestIcon_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestRewardIcon = { "QuestRewardIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestRewardIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestRewardIcon_MetaData), NewProp_QuestRewardIcon_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestObjIcon = { "QuestObjIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestObjIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestObjIcon_MetaData), NewProp_QuestObjIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_MaxQuestProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestProgressTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestRewardID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestRewardID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestRewardAmount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestRewardAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestRewardIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestObjIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestData_Statics::ClassParams = {
	&UQuestData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestData()
{
	if (!Z_Registration_Info_UClass_UQuestData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestData.OuterSingleton, Z_Construct_UClass_UQuestData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestData.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UQuestData>()
{
	return UQuestData::StaticClass();
}
UQuestData::UQuestData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestData);
UQuestData::~UQuestData() {}
// End Class UQuestData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestData, UQuestData::StaticClass, TEXT("UQuestData"), &Z_Registration_Info_UClass_UQuestData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestData), 1116221896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestData_h_830528519(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
