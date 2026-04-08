// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Dialogue/UI/BaseShopWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseShopWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UBaseShopWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UBaseShopWidget_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UCommonButton_NoRegister();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnShopCloseInput__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Delegate FOnShopCloseInput
struct Z_Construct_UDelegateFunction_Goobunga_OnShopCloseInput__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dialogue/UI/BaseShopWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Goobunga_OnShopCloseInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Goobunga, nullptr, "OnShopCloseInput__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnShopCloseInput__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Goobunga_OnShopCloseInput__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Goobunga_OnShopCloseInput__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Goobunga_OnShopCloseInput__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnShopCloseInput_DelegateWrapper(const FMulticastScriptDelegate& OnShopCloseInput)
{
	OnShopCloseInput.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnShopCloseInput

// Begin Class UBaseShopWidget
void UBaseShopWidget::StaticRegisterNativesUBaseShopWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseShopWidget);
UClass* Z_Construct_UClass_UBaseShopWidget_NoRegister()
{
	return UBaseShopWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseShopWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Dialogue/UI/BaseShopWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Dialogue/UI/BaseShopWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BaseShopWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/UI/BaseShopWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseShopWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseShopWidget_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseShopWidget, CloseButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseButton_MetaData), NewProp_CloseButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseShopWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseShopWidget_Statics::NewProp_CloseButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseShopWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseShopWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseShopWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseShopWidget_Statics::ClassParams = {
	&UBaseShopWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseShopWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseShopWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseShopWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseShopWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseShopWidget()
{
	if (!Z_Registration_Info_UClass_UBaseShopWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseShopWidget.OuterSingleton, Z_Construct_UClass_UBaseShopWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseShopWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBaseShopWidget>()
{
	return UBaseShopWidget::StaticClass();
}
UBaseShopWidget::UBaseShopWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseShopWidget);
UBaseShopWidget::~UBaseShopWidget() {}
// End Class UBaseShopWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_BaseShopWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseShopWidget, UBaseShopWidget::StaticClass, TEXT("UBaseShopWidget"), &Z_Registration_Info_UClass_UBaseShopWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseShopWidget), 1327581592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_BaseShopWidget_h_2488664946(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_BaseShopWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_UI_BaseShopWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
