// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Quests/QuestItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestItemWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestItemWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestItemWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UQuestItemWidget
void UQuestItemWidget::StaticRegisterNativesUQuestItemWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestItemWidget);
UClass* Z_Construct_UClass_UQuestItemWidget_NoRegister()
{
	return UQuestItemWidget::StaticClass();
}
struct Z_Construct_UClass_UQuestItemWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Quests/QuestItemWidget.h" },
		{ "ModuleRelativePath", "Quests/QuestItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Quests/QuestItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Quests/QuestItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Quests/QuestItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDescriptionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Quests/QuestItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestRewardText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Quests/QuestItemWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RewardImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDescriptionText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestRewardText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestItemWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestItemWidget_Statics::NewProp_QuestImage = { "QuestImage", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestItemWidget, QuestImage), Z_Construct_UClass_UCommonLazyImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestImage_MetaData), NewProp_QuestImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestItemWidget_Statics::NewProp_RewardImage = { "RewardImage", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestItemWidget, RewardImage), Z_Construct_UClass_UCommonLazyImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardImage_MetaData), NewProp_RewardImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestItemWidget_Statics::NewProp_QuestNameText = { "QuestNameText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestItemWidget, QuestNameText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestNameText_MetaData), NewProp_QuestNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestItemWidget_Statics::NewProp_QuestDescriptionText = { "QuestDescriptionText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestItemWidget, QuestDescriptionText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDescriptionText_MetaData), NewProp_QuestDescriptionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestItemWidget_Statics::NewProp_QuestRewardText = { "QuestRewardText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestItemWidget, QuestRewardText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestRewardText_MetaData), NewProp_QuestRewardText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestItemWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestItemWidget_Statics::NewProp_QuestImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestItemWidget_Statics::NewProp_RewardImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestItemWidget_Statics::NewProp_QuestNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestItemWidget_Statics::NewProp_QuestDescriptionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestItemWidget_Statics::NewProp_QuestRewardText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItemWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestItemWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItemWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestItemWidget_Statics::ClassParams = {
	&UQuestItemWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestItemWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItemWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestItemWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestItemWidget()
{
	if (!Z_Registration_Info_UClass_UQuestItemWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestItemWidget.OuterSingleton, Z_Construct_UClass_UQuestItemWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestItemWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UQuestItemWidget>()
{
	return UQuestItemWidget::StaticClass();
}
UQuestItemWidget::UQuestItemWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestItemWidget);
UQuestItemWidget::~UQuestItemWidget() {}
// End Class UQuestItemWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestItemWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestItemWidget, UQuestItemWidget::StaticClass, TEXT("UQuestItemWidget"), &Z_Registration_Info_UClass_UQuestItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestItemWidget), 3127738714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestItemWidget_h_1320943791(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestItemWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
