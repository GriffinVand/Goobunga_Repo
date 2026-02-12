// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/TeamInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UTeamInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UTeamInterface_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EAllegiance();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EAllegiance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAllegiance;
static UEnum* EAllegiance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAllegiance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAllegiance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EAllegiance, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EAllegiance"));
	}
	return Z_Registration_Info_UEnum_EAllegiance.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EAllegiance>()
{
	return EAllegiance_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EAllegiance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Enemy.DisplayName", "Enemy" },
		{ "Enemy.Name", "EAllegiance::Enemy" },
		{ "Friendly.DisplayName", "Friendly" },
		{ "Friendly.Name", "EAllegiance::Friendly" },
		{ "ModuleRelativePath", "Enemies/TeamInterface.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAllegiance::Enemy", (int64)EAllegiance::Enemy },
		{ "EAllegiance::Friendly", (int64)EAllegiance::Friendly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EAllegiance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EAllegiance",
	"EAllegiance",
	Z_Construct_UEnum_Goobunga_EAllegiance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EAllegiance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EAllegiance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EAllegiance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EAllegiance()
{
	if (!Z_Registration_Info_UEnum_EAllegiance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAllegiance.InnerSingleton, Z_Construct_UEnum_Goobunga_EAllegiance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAllegiance.InnerSingleton;
}
// End Enum EAllegiance

// Begin Interface UTeamInterface
void UTeamInterface::StaticRegisterNativesUTeamInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTeamInterface);
UClass* Z_Construct_UClass_UTeamInterface_NoRegister()
{
	return UTeamInterface::StaticClass();
}
struct Z_Construct_UClass_UTeamInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/TeamInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITeamInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTeamInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeamInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTeamInterface_Statics::ClassParams = {
	&UTeamInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTeamInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTeamInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTeamInterface()
{
	if (!Z_Registration_Info_UClass_UTeamInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTeamInterface.OuterSingleton, Z_Construct_UClass_UTeamInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTeamInterface.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UTeamInterface>()
{
	return UTeamInterface::StaticClass();
}
UTeamInterface::UTeamInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTeamInterface);
UTeamInterface::~UTeamInterface() {}
// End Interface UTeamInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAllegiance_StaticEnum, TEXT("EAllegiance"), &Z_Registration_Info_UEnum_EAllegiance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2493907960U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTeamInterface, UTeamInterface::StaticClass, TEXT("UTeamInterface"), &Z_Registration_Info_UClass_UTeamInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTeamInterface), 3556794993U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_3044435670(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
