// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Combat/ReloadPatterns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadPatterns() {}

// Begin Cross Module References
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EReloadPattern();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EReloadPattern
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReloadPattern;
static UEnum* EReloadPattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReloadPattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReloadPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EReloadPattern, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EReloadPattern"));
	}
	return Z_Registration_Info_UEnum_EReloadPattern.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EReloadPattern>()
{
	return EReloadPattern_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EReloadPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Circle.DisplayName", "Circle" },
		{ "Circle.Name", "EReloadPattern::Circle" },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "EReloadPattern::Down" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EReloadPattern::Left" },
		{ "ModuleRelativePath", "Combat/ReloadPatterns.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EReloadPattern::None" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EReloadPattern::Right" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "EReloadPattern::Up" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReloadPattern::None", (int64)EReloadPattern::None },
		{ "EReloadPattern::Left", (int64)EReloadPattern::Left },
		{ "EReloadPattern::Right", (int64)EReloadPattern::Right },
		{ "EReloadPattern::Up", (int64)EReloadPattern::Up },
		{ "EReloadPattern::Down", (int64)EReloadPattern::Down },
		{ "EReloadPattern::Circle", (int64)EReloadPattern::Circle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EReloadPattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EReloadPattern",
	"EReloadPattern",
	Z_Construct_UEnum_Goobunga_EReloadPattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EReloadPattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EReloadPattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EReloadPattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EReloadPattern()
{
	if (!Z_Registration_Info_UEnum_EReloadPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReloadPattern.InnerSingleton, Z_Construct_UEnum_Goobunga_EReloadPattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReloadPattern.InnerSingleton;
}
// End Enum EReloadPattern

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_ReloadPatterns_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EReloadPattern_StaticEnum, TEXT("EReloadPattern"), &Z_Registration_Info_UEnum_EReloadPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2653009470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_ReloadPatterns_h_2584313694(TEXT("/Script/Goobunga"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_ReloadPatterns_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_ReloadPatterns_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
