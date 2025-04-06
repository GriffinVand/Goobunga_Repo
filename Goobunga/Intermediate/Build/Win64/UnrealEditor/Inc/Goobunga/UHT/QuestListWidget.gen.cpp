// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Quests/QuestListWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestListWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestListWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestListWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UQuestListWidget
void UQuestListWidget::StaticRegisterNativesUQuestListWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestListWidget);
UClass* Z_Construct_UClass_UQuestListWidget_NoRegister()
{
	return UQuestListWidget::StaticClass();
}
struct Z_Construct_UClass_UQuestListWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Quests/QuestListWidget.h" },
		{ "ModuleRelativePath", "Quests/QuestListWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestListContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestListWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Quests/QuestListWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestListContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestListWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestListWidget_Statics::NewProp_QuestListContainer = { "QuestListContainer", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestListWidget, QuestListContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestListContainer_MetaData), NewProp_QuestListContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestListWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListWidget_Statics::NewProp_QuestListContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestListWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestListWidget_Statics::ClassParams = {
	&UQuestListWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestListWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestListWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestListWidget()
{
	if (!Z_Registration_Info_UClass_UQuestListWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestListWidget.OuterSingleton, Z_Construct_UClass_UQuestListWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestListWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UQuestListWidget>()
{
	return UQuestListWidget::StaticClass();
}
UQuestListWidget::UQuestListWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestListWidget);
UQuestListWidget::~UQuestListWidget() {}
// End Class UQuestListWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestListWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestListWidget, UQuestListWidget::StaticClass, TEXT("UQuestListWidget"), &Z_Registration_Info_UClass_UQuestListWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestListWidget), 2515633858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestListWidget_h_652626641(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestListWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestListWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
