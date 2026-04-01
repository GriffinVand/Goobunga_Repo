// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Dialogue/UI/DialogueReplyWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueReplyWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueReplyWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueReplyWidget_NoRegister();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Delegate FOnReplySelected
struct Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics
{
	struct _Script_Goobunga_eventOnReplySelected_Parms
	{
		int32 ReplyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dialogue/UI/DialogueReplyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::NewProp_ReplyIndex = { "ReplyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Goobunga_eventOnReplySelected_Parms, ReplyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::NewProp_ReplyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Goobunga, nullptr, "OnReplySelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::_Script_Goobunga_eventOnReplySelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::_Script_Goobunga_eventOnReplySelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Goobunga_OnReplySelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReplySelected_DelegateWrapper(const FMulticastScriptDelegate& OnReplySelected, int32 ReplyIndex)
{
	struct _Script_Goobunga_eventOnReplySelected_Parms
	{
		int32 ReplyIndex;
	};
	_Script_Goobunga_eventOnReplySelected_Parms Parms;
	Parms.ReplyIndex=ReplyIndex;
	OnReplySelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnReplySelected

// Begin Class UDialogueReplyWidget
void UDialogueReplyWidget::StaticRegisterNativesUDialogueReplyWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueReplyWidget);
UClass* Z_Construct_UClass_UDialogueReplyWidget_NoRegister()
{
	return UDialogueReplyWidget::StaticClass();
}
struct Z_Construct_UClass_UDialogueReplyWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dialogue/UI/DialogueReplyWidget.h" },
		{ "ModuleRelativePath", "Dialogue/UI/DialogueReplyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplyIndex_MetaData[] = {
		{ "Category", "DialogueReplyWidget" },
		{ "ModuleRelativePath", "Dialogue/UI/DialogueReplyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplyText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DialogueReplyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/UI/DialogueReplyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DialogueReplyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/UI/DialogueReplyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplyIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplyText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplyButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueReplyWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueReplyWidget_Statics::NewProp_ReplyIndex = { "ReplyIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueReplyWidget, ReplyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplyIndex_MetaData), NewProp_ReplyIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueReplyWidget_Statics::NewProp_ReplyText = { "ReplyText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueReplyWidget, ReplyText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplyText_MetaData), NewProp_ReplyText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueReplyWidget_Statics::NewProp_ReplyButton = { "ReplyButton", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueReplyWidget, ReplyButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplyButton_MetaData), NewProp_ReplyButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueReplyWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueReplyWidget_Statics::NewProp_ReplyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueReplyWidget_Statics::NewProp_ReplyText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueReplyWidget_Statics::NewProp_ReplyButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueReplyWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueReplyWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueReplyWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueReplyWidget_Statics::ClassParams = {
	&UDialogueReplyWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueReplyWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueReplyWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueReplyWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueReplyWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueReplyWidget()
{
	if (!Z_Registration_Info_UClass_UDialogueReplyWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueReplyWidget.OuterSingleton, Z_Construct_UClass_UDialogueReplyWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueReplyWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UDialogueReplyWidget>()
{
	return UDialogueReplyWidget::StaticClass();
}
UDialogueReplyWidget::UDialogueReplyWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueReplyWidget);
UDialogueReplyWidget::~UDialogueReplyWidget() {}
// End Class UDialogueReplyWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueReplyWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueReplyWidget, UDialogueReplyWidget::StaticClass, TEXT("UDialogueReplyWidget"), &Z_Registration_Info_UClass_UDialogueReplyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueReplyWidget), 3160323547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueReplyWidget_h_3180538390(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueReplyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_DialogueReplyWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
