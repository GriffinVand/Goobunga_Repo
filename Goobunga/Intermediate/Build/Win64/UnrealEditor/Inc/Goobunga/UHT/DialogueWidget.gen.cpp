// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Dialogue/DialogueWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonStyle_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueManagerComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueReplyWidget_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UDialogueWidget
void UDialogueWidget::StaticRegisterNativesUDialogueWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueWidget);
UClass* Z_Construct_UClass_UDialogueWidget_NoRegister()
{
	return UDialogueWidget::StaticClass();
}
struct Z_Construct_UClass_UDialogueWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dialogue/DialogueWidget.h" },
		{ "ModuleRelativePath", "Dialogue/DialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DialogueWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/DialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectableStyle_MetaData[] = {
		{ "Category", "DialogueWidget" },
		{ "ModuleRelativePath", "Dialogue/DialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnselectableStyle_MetaData[] = {
		{ "Category", "DialogueWidget" },
		{ "ModuleRelativePath", "Dialogue/DialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplyWidget1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DialogueWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/DialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplyWidget2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DialogueWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/DialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplyWidget3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DialogueWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/DialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplyWidget4_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DialogueWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/DialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplyWidgets_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DialogueWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/DialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueManager_MetaData[] = {
		{ "Category", "DialogueWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/DialogueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectableStyle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnselectableStyle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplyWidget1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplyWidget2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplyWidget3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplyWidget4;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplyWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplyWidgets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidget, DialogueText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueText_MetaData), NewProp_DialogueText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_SelectableStyle = { "SelectableStyle", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidget, SelectableStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectableStyle_MetaData), NewProp_SelectableStyle_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_UnselectableStyle = { "UnselectableStyle", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidget, UnselectableStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnselectableStyle_MetaData), NewProp_UnselectableStyle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidget1 = { "ReplyWidget1", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidget, ReplyWidget1), Z_Construct_UClass_UDialogueReplyWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplyWidget1_MetaData), NewProp_ReplyWidget1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidget2 = { "ReplyWidget2", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidget, ReplyWidget2), Z_Construct_UClass_UDialogueReplyWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplyWidget2_MetaData), NewProp_ReplyWidget2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidget3 = { "ReplyWidget3", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidget, ReplyWidget3), Z_Construct_UClass_UDialogueReplyWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplyWidget3_MetaData), NewProp_ReplyWidget3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidget4 = { "ReplyWidget4", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidget, ReplyWidget4), Z_Construct_UClass_UDialogueReplyWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplyWidget4_MetaData), NewProp_ReplyWidget4_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidgets_Inner = { "ReplyWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueReplyWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidgets = { "ReplyWidgets", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidget, ReplyWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplyWidgets_MetaData), NewProp_ReplyWidgets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueManager = { "DialogueManager", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidget, DialogueManager), Z_Construct_UClass_UDialogueManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueManager_MetaData), NewProp_DialogueManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_SelectableStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_UnselectableStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidget1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidget2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidget3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidget4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ReplyWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWidget_Statics::ClassParams = {
	&UDialogueWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueWidget()
{
	if (!Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton, Z_Construct_UClass_UDialogueWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UDialogueWidget>()
{
	return UDialogueWidget::StaticClass();
}
UDialogueWidget::UDialogueWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWidget);
UDialogueWidget::~UDialogueWidget() {}
// End Class UDialogueWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueWidget, UDialogueWidget::StaticClass, TEXT("UDialogueWidget"), &Z_Registration_Info_UClass_UDialogueWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueWidget), 3118177108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueWidget_h_435708309(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
