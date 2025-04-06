// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/UserInterface/PlayerMainLayerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMainLayerWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerMainLayerWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerMainLayerWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UPlayerMainLayerWidget
void UPlayerMainLayerWidget::StaticRegisterNativesUPlayerMainLayerWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMainLayerWidget);
UClass* Z_Construct_UClass_UPlayerMainLayerWidget_NoRegister()
{
	return UPlayerMainLayerWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerMainLayerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserInterface/PlayerMainLayerWidget.h" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainLayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerMainLayerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainLayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStack_MetaData[] = {
		{ "Category", "PlayerMainLayerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainLayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMainLayerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainLayerWidget_Statics::NewProp_LayerContainer = { "LayerContainer", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainLayerWidget, LayerContainer), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerContainer_MetaData), NewProp_LayerContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainLayerWidget_Statics::NewProp_WidgetStack_Inner = { "WidgetStack", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerMainLayerWidget_Statics::NewProp_WidgetStack = { "WidgetStack", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainLayerWidget, WidgetStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStack_MetaData), NewProp_WidgetStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMainLayerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainLayerWidget_Statics::NewProp_LayerContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainLayerWidget_Statics::NewProp_WidgetStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainLayerWidget_Statics::NewProp_WidgetStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMainLayerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerMainLayerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMainLayerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMainLayerWidget_Statics::ClassParams = {
	&UPlayerMainLayerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerMainLayerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMainLayerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMainLayerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerMainLayerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerMainLayerWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerMainLayerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMainLayerWidget.OuterSingleton, Z_Construct_UClass_UPlayerMainLayerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerMainLayerWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UPlayerMainLayerWidget>()
{
	return UPlayerMainLayerWidget::StaticClass();
}
UPlayerMainLayerWidget::UPlayerMainLayerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMainLayerWidget);
UPlayerMainLayerWidget::~UPlayerMainLayerWidget() {}
// End Class UPlayerMainLayerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainLayerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMainLayerWidget, UPlayerMainLayerWidget::StaticClass, TEXT("UPlayerMainLayerWidget"), &Z_Registration_Info_UClass_UPlayerMainLayerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMainLayerWidget), 2385238784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainLayerWidget_h_3343568225(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainLayerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainLayerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
