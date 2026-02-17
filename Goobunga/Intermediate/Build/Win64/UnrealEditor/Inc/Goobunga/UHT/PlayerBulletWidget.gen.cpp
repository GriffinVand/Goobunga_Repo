// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/UserInterface/PlayerBulletWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBulletWidget() {}

// Begin Cross Module References
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerBulletWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerBulletWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UPlayerBulletWidget
void UPlayerBulletWidget::StaticRegisterNativesUPlayerBulletWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerBulletWidget);
UClass* Z_Construct_UClass_UPlayerBulletWidget_NoRegister()
{
	return UPlayerBulletWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerBulletWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/PlayerBulletWidget.h" },
		{ "ModuleRelativePath", "UserInterface/PlayerBulletWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerBulletWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerBulletWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerBulletWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BufferBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerBulletWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerBulletWidget_Statics::NewProp_BulletBox = { "BulletBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerBulletWidget, BulletBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletBox_MetaData), NewProp_BulletBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerBulletWidget_Statics::NewProp_BufferBox = { "BufferBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerBulletWidget, BufferBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferBox_MetaData), NewProp_BufferBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerBulletWidget_Statics::NewProp_BulletImage = { "BulletImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerBulletWidget, BulletImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletImage_MetaData), NewProp_BulletImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerBulletWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBulletWidget_Statics::NewProp_BulletBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBulletWidget_Statics::NewProp_BufferBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBulletWidget_Statics::NewProp_BulletImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBulletWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerBulletWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBulletWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerBulletWidget_Statics::ClassParams = {
	&UPlayerBulletWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerBulletWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBulletWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBulletWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerBulletWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerBulletWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerBulletWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerBulletWidget.OuterSingleton, Z_Construct_UClass_UPlayerBulletWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerBulletWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UPlayerBulletWidget>()
{
	return UPlayerBulletWidget::StaticClass();
}
UPlayerBulletWidget::UPlayerBulletWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerBulletWidget);
UPlayerBulletWidget::~UPlayerBulletWidget() {}
// End Class UPlayerBulletWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerBulletWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerBulletWidget, UPlayerBulletWidget::StaticClass, TEXT("UPlayerBulletWidget"), &Z_Registration_Info_UClass_UPlayerBulletWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerBulletWidget), 2179845699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerBulletWidget_h_157128994(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerBulletWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerBulletWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
