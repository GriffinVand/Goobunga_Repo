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
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerMainWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerMainWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponUIContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodScreen_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GooScreen_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodFade_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GooFade_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegHitTexture_MetaData[] = {
		{ "Category", "PlayerMainWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritHitTexture_MetaData[] = {
		{ "Category", "PlayerMainWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillHitTexture_MetaData[] = {
		{ "Category", "PlayerMainWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "UserInterface/PlayerMainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FaceCamWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PepperWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponUIContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloodScreen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GooScreen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloodFade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GooFade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegHitTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CritHitTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KillHitTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMainWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_FaceCamWidget = { "FaceCamWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, FaceCamWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceCamWidget_MetaData), NewProp_FaceCamWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_PepperWidget = { "PepperWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, PepperWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PepperWidget_MetaData), NewProp_PepperWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_WeaponUIContainer = { "WeaponUIContainer", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, WeaponUIContainer), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponUIContainer_MetaData), NewProp_WeaponUIContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_BloodScreen = { "BloodScreen", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, BloodScreen), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodScreen_MetaData), NewProp_BloodScreen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_GooScreen = { "GooScreen", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, GooScreen), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GooScreen_MetaData), NewProp_GooScreen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_BloodFade = { "BloodFade", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, BloodFade), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodFade_MetaData), NewProp_BloodFade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_GooFade = { "GooFade", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, GooFade), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GooFade_MetaData), NewProp_GooFade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_HitImage = { "HitImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, HitImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitImage_MetaData), NewProp_HitImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_RegHitTexture = { "RegHitTexture", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, RegHitTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegHitTexture_MetaData), NewProp_RegHitTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_CritHitTexture = { "CritHitTexture", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, CritHitTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritHitTexture_MetaData), NewProp_CritHitTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_KillHitTexture = { "KillHitTexture", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, KillHitTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillHitTexture_MetaData), NewProp_KillHitTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_HitAnimation = { "HitAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMainWidget, HitAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitAnimation_MetaData), NewProp_HitAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMainWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_FaceCamWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_PepperWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_WeaponUIContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_BloodScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_GooScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_BloodFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_GooFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_HitImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_RegHitTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_CritHitTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_KillHitTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMainWidget_Statics::NewProp_HitAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMainWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerMainWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
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
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMainWidget, UPlayerMainWidget::StaticClass, TEXT("UPlayerMainWidget"), &Z_Registration_Info_UClass_UPlayerMainWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMainWidget), 3976661335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainWidget_h_2452542228(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerMainWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
