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
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_ENPCState();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum ENPCState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENPCState;
static UEnum* ENPCState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENPCState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENPCState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_ENPCState, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("ENPCState"));
	}
	return Z_Registration_Info_UEnum_ENPCState.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<ENPCState>()
{
	return ENPCState_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_ENPCState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attacking.DisplayName", "Attacking State" },
		{ "Attacking.Name", "ENPCState::Attacking" },
		{ "BlueprintType", "true" },
		{ "Busy.DisplayName", "Busy" },
		{ "Busy.Name", "ENPCState::Busy" },
		{ "Calling.DisplayName", "Calling State" },
		{ "Calling.Name", "ENPCState::Calling" },
		{ "Death.DisplayName", "Death State" },
		{ "Death.Name", "ENPCState::Death" },
		{ "Default.DisplayName", "Default State" },
		{ "Default.Name", "ENPCState::Default" },
		{ "Launching.DisplayName", "Launching State" },
		{ "Launching.Name", "ENPCState::Launching" },
		{ "ModuleRelativePath", "Enemies/EnemyStates.h" },
		{ "Passive.DisplayName", "Passive" },
		{ "Passive.Name", "ENPCState::Passive" },
		{ "Walking.DisplayName", "Walking State" },
		{ "Walking.Name", "ENPCState::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENPCState::Default", (int64)ENPCState::Default },
		{ "ENPCState::Passive", (int64)ENPCState::Passive },
		{ "ENPCState::Busy", (int64)ENPCState::Busy },
		{ "ENPCState::Calling", (int64)ENPCState::Calling },
		{ "ENPCState::Walking", (int64)ENPCState::Walking },
		{ "ENPCState::Attacking", (int64)ENPCState::Attacking },
		{ "ENPCState::Launching", (int64)ENPCState::Launching },
		{ "ENPCState::Death", (int64)ENPCState::Death },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_ENPCState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"ENPCState",
	"ENPCState",
	Z_Construct_UEnum_Goobunga_ENPCState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_ENPCState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_ENPCState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_ENPCState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_ENPCState()
{
	if (!Z_Registration_Info_UEnum_ENPCState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENPCState.InnerSingleton, Z_Construct_UEnum_Goobunga_ENPCState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENPCState.InnerSingleton;
}
// End Enum ENPCState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyStates_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENPCState_StaticEnum, TEXT("ENPCState"), &Z_Registration_Info_UEnum_ENPCState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3004927669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyStates_h_231032750(TEXT("/Script/Goobunga"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyStates_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyStates_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
