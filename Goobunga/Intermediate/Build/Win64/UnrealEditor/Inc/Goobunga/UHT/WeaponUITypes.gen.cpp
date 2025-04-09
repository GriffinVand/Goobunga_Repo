// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Combat/WeaponUITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponUITypes() {}

// Begin Cross Module References
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EWeaponUItype();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EWeaponUItype
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponUItype;
static UEnum* EWeaponUItype_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponUItype.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponUItype.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EWeaponUItype, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EWeaponUItype"));
	}
	return Z_Registration_Info_UEnum_EWeaponUItype.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EWeaponUItype>()
{
	return EWeaponUItype_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EWeaponUItype_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Barrage.DisplayName", "Barrage" },
		{ "Barrage.Name", "EWeaponUItype::Barrage" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Combat/WeaponUITypes.h" },
		{ "Thick.DisplayName", "Thick" },
		{ "Thick.Name", "EWeaponUItype::Thick" },
		{ "Thin.DisplayName", "Thin" },
		{ "Thin.Name", "EWeaponUItype::Thin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponUItype::Thin", (int64)EWeaponUItype::Thin },
		{ "EWeaponUItype::Thick", (int64)EWeaponUItype::Thick },
		{ "EWeaponUItype::Barrage", (int64)EWeaponUItype::Barrage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EWeaponUItype_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EWeaponUItype",
	"EWeaponUItype",
	Z_Construct_UEnum_Goobunga_EWeaponUItype_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EWeaponUItype_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EWeaponUItype_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EWeaponUItype_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EWeaponUItype()
{
	if (!Z_Registration_Info_UEnum_EWeaponUItype.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponUItype.InnerSingleton, Z_Construct_UEnum_Goobunga_EWeaponUItype_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponUItype.InnerSingleton;
}
// End Enum EWeaponUItype

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_WeaponUITypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponUItype_StaticEnum, TEXT("EWeaponUItype"), &Z_Registration_Info_UEnum_EWeaponUItype, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 105456784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_WeaponUITypes_h_2687741014(TEXT("/Script/Goobunga"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_WeaponUITypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_WeaponUITypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
