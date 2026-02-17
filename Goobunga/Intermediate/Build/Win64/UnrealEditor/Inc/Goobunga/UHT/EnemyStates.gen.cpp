// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/EnemyStates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyStates() {}

// Begin Cross Module References
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EEnemyState();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EEnemyState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
static UEnum* EEnemyState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EEnemyState, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EEnemyState"));
	}
	return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EEnemyState>()
{
	return EEnemyState_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EEnemyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attacking.DisplayName", "Attacking State" },
		{ "Attacking.Name", "Attacking" },
		{ "BlueprintType", "true" },
		{ "Busy.DisplayName", "Busy State" },
		{ "Busy.Name", "Busy" },
		{ "Death.DisplayName", "Death State" },
		{ "Death.Name", "Death" },
		{ "Default.DisplayName", "Default State" },
		{ "Default.Name", "Default" },
		{ "Launching.DisplayName", "Launching State" },
		{ "Launching.Name", "Launching" },
		{ "ModuleRelativePath", "Enemies/EnemyStates.h" },
		{ "Walking.DisplayName", "Walking State" },
		{ "Walking.Name", "Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Default", (int64)Default },
		{ "Walking", (int64)Walking },
		{ "Attacking", (int64)Attacking },
		{ "Launching", (int64)Launching },
		{ "Busy", (int64)Busy },
		{ "Death", (int64)Death },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EEnemyState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EEnemyState",
	"EEnemyState",
	Z_Construct_UEnum_Goobunga_EEnemyState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EEnemyState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EEnemyState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EEnemyState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EEnemyState()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_Goobunga_EEnemyState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
}
// End Enum EEnemyState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyStates_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2100093602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyStates_h_3769430326(TEXT("/Script/Goobunga"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyStates_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyStates_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
