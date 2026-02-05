// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/BTTask_LaunchInDirection.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_LaunchInDirection() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTTask_LaunchInDirection();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTTask_LaunchInDirection_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTTask_LaunchInDirection
void UBTTask_LaunchInDirection::StaticRegisterNativesUBTTask_LaunchInDirection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_LaunchInDirection);
UClass* Z_Construct_UClass_UBTTask_LaunchInDirection_NoRegister()
{
	return UBTTask_LaunchInDirection::StaticClass();
}
struct Z_Construct_UClass_UBTTask_LaunchInDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemies/BTTask_LaunchInDirection.h" },
		{ "ModuleRelativePath", "Enemies/BTTask_LaunchInDirection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/BTTask_LaunchInDirection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/BTTask_LaunchInDirection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_LaunchInDirection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_LaunchInDirection, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorKey_MetaData), NewProp_TargetActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_LaunchInDirection, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::NewProp_TargetActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::NewProp_SelfActorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::ClassParams = {
	&UBTTask_LaunchInDirection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_LaunchInDirection()
{
	if (!Z_Registration_Info_UClass_UBTTask_LaunchInDirection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_LaunchInDirection.OuterSingleton, Z_Construct_UClass_UBTTask_LaunchInDirection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_LaunchInDirection.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTTask_LaunchInDirection>()
{
	return UBTTask_LaunchInDirection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_LaunchInDirection);
UBTTask_LaunchInDirection::~UBTTask_LaunchInDirection() {}
// End Class UBTTask_LaunchInDirection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTTask_LaunchInDirection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_LaunchInDirection, UBTTask_LaunchInDirection::StaticClass, TEXT("UBTTask_LaunchInDirection"), &Z_Registration_Info_UClass_UBTTask_LaunchInDirection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_LaunchInDirection), 4273355513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTTask_LaunchInDirection_h_627382545(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTTask_LaunchInDirection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTTask_LaunchInDirection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
