// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/BaseEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_ABaseEnemy();
GOOBUNGA_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UCombatCallables_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UEnemyCallables_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EDamageType();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class ABaseEnemy
void ABaseEnemy::StaticRegisterNativesABaseEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemy);
UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
{
	return ABaseEnemy::StaticClass();
}
struct Z_Construct_UClass_ABaseEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/BaseEnemy.h" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismemberPartClasses_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dismember" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismemberPartComponents_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dismember" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeMap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dismember" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontages_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageMap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchSpline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BaseEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DismemberPartClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DismemberPartClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DismemberPartComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DismemberPartComponents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTypeMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageTypeMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageTypeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DamageTypeMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackMontages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MontageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MontageMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaunchSpline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackRate = { "AttackRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, AttackRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRate_MetaData), NewProp_AttackRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DismemberPartClasses_Inner = { "DismemberPartClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DismemberPartClasses = { "DismemberPartClasses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, DismemberPartClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismemberPartClasses_MetaData), NewProp_DismemberPartClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DismemberPartComponents_Inner = { "DismemberPartComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DismemberPartComponents = { "DismemberPartComponents", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, DismemberPartComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismemberPartComponents_MetaData), NewProp_DismemberPartComponents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageTypeMap_ValueProp = { "DamageTypeMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageTypeMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageTypeMap_Key_KeyProp = { "DamageTypeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Goobunga_EDamageType, METADATA_PARAMS(0, nullptr) }; // 3422830928
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageTypeMap = { "DamageTypeMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, DamageTypeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeMap_MetaData), NewProp_DamageTypeMap_MetaData) }; // 3422830928
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackMontages_Inner = { "AttackMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackMontages = { "AttackMontages", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, AttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontages_MetaData), NewProp_AttackMontages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_MontageMap_ValueProp = { "MontageMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_MontageMap_Key_KeyProp = { "MontageMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_MontageMap = { "MontageMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, MontageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageMap_MetaData), NewProp_MontageMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_LaunchSpline = { "LaunchSpline", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, LaunchSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchSpline_MetaData), NewProp_LaunchSpline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DismemberPartClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DismemberPartClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DismemberPartComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DismemberPartComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageTypeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageTypeMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageTypeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageTypeMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_MontageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_MontageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_MontageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_LaunchSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseEnemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatCallables_NoRegister, (int32)VTABLE_OFFSET(ABaseEnemy, ICombatCallables), false },  // 1814843369
	{ Z_Construct_UClass_UEnemyCallables_NoRegister, (int32)VTABLE_OFFSET(ABaseEnemy, IEnemyCallables), false },  // 3217297164
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
	&ABaseEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseEnemy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseEnemy()
{
	if (!Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<ABaseEnemy>()
{
	return ABaseEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
ABaseEnemy::~ABaseEnemy() {}
// End Class ABaseEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 421772562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_4000218626(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
