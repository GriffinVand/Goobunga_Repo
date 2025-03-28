// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Combat/DamageTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageTypes() {}

// Begin Cross Module References
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EDamageType();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EDamageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageType;
static UEnum* EDamageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDamageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EDamageType, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EDamageType"));
	}
	return Z_Registration_Info_UEnum_EDamageType.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EDamageType>()
{
	return EDamageType_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Blunt.DisplayName", "Blunt" },
		{ "Blunt.Name", "EDamageType::Blunt" },
		{ "Holy.DisplayName", "Holy" },
		{ "Holy.Name", "EDamageType::Holy" },
		{ "ModuleRelativePath", "Combat/DamageTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDamageType::None" },
		{ "Sharp.DisplayName", "Sharp" },
		{ "Sharp.Name", "EDamageType::Sharp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDamageType::None", (int64)EDamageType::None },
		{ "EDamageType::Sharp", (int64)EDamageType::Sharp },
		{ "EDamageType::Blunt", (int64)EDamageType::Blunt },
		{ "EDamageType::Holy", (int64)EDamageType::Holy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EDamageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EDamageType",
	"EDamageType",
	Z_Construct_UEnum_Goobunga_EDamageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EDamageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EDamageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EDamageType()
{
	if (!Z_Registration_Info_UEnum_EDamageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageType.InnerSingleton, Z_Construct_UEnum_Goobunga_EDamageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDamageType.InnerSingleton;
}
// End Enum EDamageType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_DamageTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDamageType_StaticEnum, TEXT("EDamageType"), &Z_Registration_Info_UEnum_EDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3422830928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_DamageTypes_h_1813540178(TEXT("/Script/Goobunga"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_DamageTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_DamageTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
