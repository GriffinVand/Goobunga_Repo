// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/UserInterface/PlayerMainWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMainWidget() {}

// Begin Cross Module References
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerMainWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerMainWidget_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UPlayerMainWidget
void UPlayerMainWidget::StaticRegisterNativesUPlayerMainWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMainWidget);
UClass* Z_Construct_UClass_UPlayerMainWidget_NoRegister()
{
	return UPlayerMainWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerMainWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserInterface/PlayerMainWidget.h" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceCamWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PepperWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FaceCamWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PepperWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAmmoWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMainWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_FaceCamWidget = { "FaceCamWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, FaceCamWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceCamWidget_MetaData), NewProp_FaceCamWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_PepperWidget = { "PepperWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, PepperWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PepperWidget_MetaData), NewProp_PepperWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_WeaponAmmoWidget = { "WeaponAmmoWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, WeaponAmmoWidget), Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAmmoWidget_MetaData), NewProp_WeaponAmmoWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMainWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_FaceCamWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_PepperWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_WeaponAmmoWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMainWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerMainWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMainWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMainWidget_Statics::ClassParams = {
	&UPlayerMainWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerMainWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMainWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMainWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerMainWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerMainWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerMainWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMainWidget.OuterSingleton, Z_Construct_UClass_UPlayerMainWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerMainWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UPlayerMainWidget>()
{
	return UPlayerMainWidget::StaticClass();
}
UPlayerMainWidget::UPlayerMainWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMainWidget);
UPlayerMainWidget::~UPlayerMainWidget() {}
// End Class UPlayerMainWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMainWidget, UPlayerMainWidget::StaticClass, TEXT("UPlayerMainWidget"), &Z_Registration_Info_UClass_UPlayerMainWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMainWidget), 1940162664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainWidget_h_2766351454(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
