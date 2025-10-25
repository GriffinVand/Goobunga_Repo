// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/PlayerStates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStates() {}

// Begin Cross Module References
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EPlayerCombatState();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EPlayerMovementState();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EPlayerMovementState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerMovementState;
static UEnum* EPlayerMovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerMovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EPlayerMovementState, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EPlayerMovementState"));
	}
	return Z_Registration_Info_UEnum_EPlayerMovementState.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EPlayerMovementState>()
{
	return EPlayerMovementState_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EPlayerMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EPlayerMovementState::Idle" },
		{ "ModuleRelativePath", "PlayerStates.h" },
		{ "Sprinting.DisplayName", "Sprinting" },
		{ "Sprinting.Name", "EPlayerMovementState::Sprinting" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EPlayerMovementState::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerMovementState::Idle", (int64)EPlayerMovementState::Idle },
		{ "EPlayerMovementState::Walking", (int64)EPlayerMovementState::Walking },
		{ "EPlayerMovementState::Sprinting", (int64)EPlayerMovementState::Sprinting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EPlayerMovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EPlayerMovementState",
	"EPlayerMovementState",
	Z_Construct_UEnum_Goobunga_EPlayerMovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EPlayerMovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EPlayerMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EPlayerMovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EPlayerMovementState()
{
	if (!Z_Registration_Info_UEnum_EPlayerMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerMovementState.InnerSingleton, Z_Construct_UEnum_Goobunga_EPlayerMovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerMovementState.InnerSingleton;
}
// End Enum EPlayerMovementState

// Begin Enum EPlayerCombatState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerCombatState;
static UEnum* EPlayerCombatState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerCombatState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerCombatState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EPlayerCombatState, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EPlayerCombatState"));
	}
	return Z_Registration_Info_UEnum_EPlayerCombatState.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EPlayerCombatState>()
{
	return EPlayerCombatState_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EPlayerCombatState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Firing.DisplayName", "Firing" },
		{ "Firing.Name", "EPlayerCombatState::Firing" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EPlayerCombatState::Idle" },
		{ "ModuleRelativePath", "PlayerStates.h" },
		{ "Reloading.DisplayName", "Reloading" },
		{ "Reloading.Name", "EPlayerCombatState::Reloading" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerCombatState::Idle", (int64)EPlayerCombatState::Idle },
		{ "EPlayerCombatState::Firing", (int64)EPlayerCombatState::Firing },
		{ "EPlayerCombatState::Reloading", (int64)EPlayerCombatState::Reloading },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EPlayerCombatState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EPlayerCombatState",
	"EPlayerCombatState",
	Z_Construct_UEnum_Goobunga_EPlayerCombatState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EPlayerCombatState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EPlayerCombatState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EPlayerCombatState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EPlayerCombatState()
{
	if (!Z_Registration_Info_UEnum_EPlayerCombatState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerCombatState.InnerSingleton, Z_Construct_UEnum_Goobunga_EPlayerCombatState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerCombatState.InnerSingleton;
}
// End Enum EPlayerCombatState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PlayerStates_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerMovementState_StaticEnum, TEXT("EPlayerMovementState"), &Z_Registration_Info_UEnum_EPlayerMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3616529744U) },
		{ EPlayerCombatState_StaticEnum, TEXT("EPlayerCombatState"), &Z_Registration_Info_UEnum_EPlayerCombatState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3502827863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PlayerStates_h_562362734(TEXT("/Script/Goobunga"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PlayerStates_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PlayerStates_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
