// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/BTTask_SwerveWhileChasing.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SwerveWhileChasing() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTTask_SwerveWhileChasing();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTTask_SwerveWhileChasing_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTTask_SwerveWhileChasing
void UBTTask_SwerveWhileChasing::StaticRegisterNativesUBTTask_SwerveWhileChasing()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SwerveWhileChasing);
UClass* Z_Construct_UClass_UBTTask_SwerveWhileChasing_NoRegister()
{
	return UBTTask_SwerveWhileChasing::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemies/BTTask_SwerveWhileChasing.h" },
		{ "ModuleRelativePath", "Enemies/BTTask_SwerveWhileChasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/BTTask_SwerveWhileChasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/BTTask_SwerveWhileChasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/BTTask_SwerveWhileChasing.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SwerveWhileChasing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SwerveWhileChasing, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SwerveWhileChasing, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorKey_MetaData), NewProp_TargetActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SwerveWhileChasing, TargetLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::NewProp_SelfActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::NewProp_TargetActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::ClassParams = {
	&UBTTask_SwerveWhileChasing::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SwerveWhileChasing()
{
	if (!Z_Registration_Info_UClass_UBTTask_SwerveWhileChasing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SwerveWhileChasing.OuterSingleton, Z_Construct_UClass_UBTTask_SwerveWhileChasing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SwerveWhileChasing.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTTask_SwerveWhileChasing>()
{
	return UBTTask_SwerveWhileChasing::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SwerveWhileChasing);
UBTTask_SwerveWhileChasing::~UBTTask_SwerveWhileChasing() {}
// End Class UBTTask_SwerveWhileChasing

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTTask_SwerveWhileChasing_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SwerveWhileChasing, UBTTask_SwerveWhileChasing::StaticClass, TEXT("UBTTask_SwerveWhileChasing"), &Z_Registration_Info_UClass_UBTTask_SwerveWhileChasing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SwerveWhileChasing), 1697825855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTTask_SwerveWhileChasing_h_2515541179(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTTask_SwerveWhileChasing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTTask_SwerveWhileChasing_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
