// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Combat/StatusTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusTypes() {}

// Begin Cross Module References
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EStatusType();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EStatusType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatusType;
static UEnum* EStatusType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStatusType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStatusType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EStatusType, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EStatusType"));
	}
	return Z_Registration_Info_UEnum_EStatusType.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EStatusType>()
{
	return EStatusType_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EStatusType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Combat/StatusTypes.h" },
		{ "Pepper.DisplayName", "Pepper" },
		{ "Pepper.Name", "EStatusType::Pepper" },
		{ "Scorch.DisplayName", "Scorch" },
		{ "Scorch.Name", "EStatusType::Scorch" },
		{ "Terror.DisplayName", "Terror" },
		{ "Terror.Name", "EStatusType::Terror" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStatusType::Terror", (int64)EStatusType::Terror },
		{ "EStatusType::Scorch", (int64)EStatusType::Scorch },
		{ "EStatusType::Pepper", (int64)EStatusType::Pepper },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EStatusType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EStatusType",
	"EStatusType",
	Z_Construct_UEnum_Goobunga_EStatusType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EStatusType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EStatusType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EStatusType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EStatusType()
{
	if (!Z_Registration_Info_UEnum_EStatusType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatusType.InnerSingleton, Z_Construct_UEnum_Goobunga_EStatusType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStatusType.InnerSingleton;
}
// End Enum EStatusType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_StatusTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStatusType_StaticEnum, TEXT("EStatusType"), &Z_Registration_Info_UEnum_EStatusType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 995406604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_StatusTypes_h_1487639950(TEXT("/Script/Goobunga"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_StatusTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_StatusTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
