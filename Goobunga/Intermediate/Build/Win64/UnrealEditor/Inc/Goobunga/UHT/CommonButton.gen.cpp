// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/CommonUI/CommonButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonButton() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
GOOBUNGA_API UClass* Z_Construct_UClass_UCommonButton();
GOOBUNGA_API UClass* Z_Construct_UClass_UCommonButton_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UCommonButton
void UCommonButton::StaticRegisterNativesUCommonButton()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonButton);
UClass* Z_Construct_UClass_UCommonButton_NoRegister()
{
	return UCommonButton::StaticClass();
}
struct Z_Construct_UClass_UCommonButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonUI/CommonButton.h" },
		{ "ModuleRelativePath", "CommonUI/CommonButton.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCommonButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonButton_Statics::ClassParams = {
	&UCommonButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommonButton()
{
	if (!Z_Registration_Info_UClass_UCommonButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonButton.OuterSingleton, Z_Construct_UClass_UCommonButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommonButton.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UCommonButton>()
{
	return UCommonButton::StaticClass();
}
UCommonButton::UCommonButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonButton);
UCommonButton::~UCommonButton() {}
// End Class UCommonButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_CommonUI_CommonButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommonButton, UCommonButton::StaticClass, TEXT("UCommonButton"), &Z_Registration_Info_UClass_UCommonButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonButton), 1752638612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_CommonUI_CommonButton_h_2581708876(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_CommonUI_CommonButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_CommonUI_CommonButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
