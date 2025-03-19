// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/UserInterface/PlayerWeaponAmmoWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWeaponAmmoWidget() {}

// Begin Cross Module References
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UPlayerWeaponAmmoWidget
void UPlayerWeaponAmmoWidget::StaticRegisterNativesUPlayerWeaponAmmoWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerWeaponAmmoWidget);
UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister()
{
	return UPlayerWeaponAmmoWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponIcon_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletWidget_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVerticalContainer_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletWidgets_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletVerticalContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BulletWidgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWeaponAmmoWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponIcon = { "WeaponIcon", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, WeaponIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponIcon_MetaData), NewProp_WeaponIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidget = { "BulletWidget", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletWidget_MetaData), NewProp_BulletWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletVerticalContainer = { "BulletVerticalContainer", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletVerticalContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVerticalContainer_MetaData), NewProp_BulletVerticalContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidgets_Inner = { "BulletWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidgets = { "BulletWidgets", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletWidgets_MetaData), NewProp_BulletWidgets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletVerticalContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::ClassParams = {
	&UPlayerWeaponAmmoWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerWeaponAmmoWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerWeaponAmmoWidget.OuterSingleton, Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerWeaponAmmoWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UPlayerWeaponAmmoWidget>()
{
	return UPlayerWeaponAmmoWidget::StaticClass();
}
UPlayerWeaponAmmoWidget::UPlayerWeaponAmmoWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWeaponAmmoWidget);
UPlayerWeaponAmmoWidget::~UPlayerWeaponAmmoWidget() {}
// End Class UPlayerWeaponAmmoWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerWeaponAmmoWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerWeaponAmmoWidget, UPlayerWeaponAmmoWidget::StaticClass, TEXT("UPlayerWeaponAmmoWidget"), &Z_Registration_Info_UClass_UPlayerWeaponAmmoWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerWeaponAmmoWidget), 2853318097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerWeaponAmmoWidget_h_3237252244(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerWeaponAmmoWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerWeaponAmmoWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
