// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Item_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem_Base() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GOOBUNGA_API UClass* Z_Construct_UClass_AItem_Base();
GOOBUNGA_API UClass* Z_Construct_UClass_AItem_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AItem_Base
void AItem_Base::StaticRegisterNativesAItem_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem_Base);
UClass* Z_Construct_UClass_AItem_Base_NoRegister()
{
	return AItem_Base::StaticClass();
}
struct Z_Construct_UClass_AItem_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item_Base.h" },
		{ "ModuleRelativePath", "Item_Base.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItem_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Base_Statics::ClassParams = {
	&AItem_Base::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AItem_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItem_Base()
{
	if (!Z_Registration_Info_UClass_AItem_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem_Base.OuterSingleton, Z_Construct_UClass_AItem_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItem_Base.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AItem_Base>()
{
	return AItem_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItem_Base);
AItem_Base::~AItem_Base() {}
// End Class AItem_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Item_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItem_Base, AItem_Base::StaticClass, TEXT("AItem_Base"), &Z_Registration_Info_UClass_AItem_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem_Base), 450350319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Item_Base_h_2424053387(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Item_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Item_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
