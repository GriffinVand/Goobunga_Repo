// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Fireable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UFireable();
GOOBUNGA_API UClass* Z_Construct_UClass_UFireable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface UFireable
void UFireable::StaticRegisterNativesUFireable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFireable);
UClass* Z_Construct_UClass_UFireable_NoRegister()
{
	return UFireable::StaticClass();
}
struct Z_Construct_UClass_UFireable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fireable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFireable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFireable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireable_Statics::ClassParams = {
	&UFireable::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams), Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFireable()
{
	if (!Z_Registration_Info_UClass_UFireable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireable.OuterSingleton, Z_Construct_UClass_UFireable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFireable.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UFireable>()
{
	return UFireable::StaticClass();
}
UFireable::UFireable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFireable);
UFireable::~UFireable() {}
// End Interface UFireable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFireable, UFireable::StaticClass, TEXT("UFireable"), &Z_Registration_Info_UClass_UFireable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireable), 87394280U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_4248294653(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
