// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/JoshEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoshEnemy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_ABaseEnemy();
GOOBUNGA_API UClass* Z_Construct_UClass_AJoshEnemy();
GOOBUNGA_API UClass* Z_Construct_UClass_AJoshEnemy_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_ULaunchInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AJoshEnemy
void AJoshEnemy::StaticRegisterNativesAJoshEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJoshEnemy);
UClass* Z_Construct_UClass_AJoshEnemy_NoRegister()
{
	return AJoshEnemy::StaticClass();
}
struct Z_Construct_UClass_AJoshEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/JoshEnemy.h" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchSpline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JoshEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaunchSpline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJoshEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_LaunchSpline = { "LaunchSpline", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, LaunchSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchSpline_MetaData), NewProp_LaunchSpline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJoshEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_LaunchSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJoshEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJoshEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJoshEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AJoshEnemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULaunchInterface_NoRegister, (int32)VTABLE_OFFSET(AJoshEnemy, ILaunchInterface), false },  // 3748280936
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJoshEnemy_Statics::ClassParams = {
	&AJoshEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AJoshEnemy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AJoshEnemy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJoshEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AJoshEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJoshEnemy()
{
	if (!Z_Registration_Info_UClass_AJoshEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJoshEnemy.OuterSingleton, Z_Construct_UClass_AJoshEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJoshEnemy.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AJoshEnemy>()
{
	return AJoshEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJoshEnemy);
AJoshEnemy::~AJoshEnemy() {}
// End Class AJoshEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJoshEnemy, AJoshEnemy::StaticClass, TEXT("AJoshEnemy"), &Z_Registration_Info_UClass_AJoshEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJoshEnemy), 1851366735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_4051764848(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
