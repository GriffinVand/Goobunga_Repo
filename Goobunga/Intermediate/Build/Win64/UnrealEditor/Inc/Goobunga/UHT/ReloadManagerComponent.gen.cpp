// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/ReloadManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UReloadManagerComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UReloadManagerComponent_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EReloadPattern();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EReloadPhaseType();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FReloadPhase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EReloadPhaseType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReloadPhaseType;
static UEnum* EReloadPhaseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReloadPhaseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReloadPhaseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EReloadPhaseType, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EReloadPhaseType"));
	}
	return Z_Registration_Info_UEnum_EReloadPhaseType.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EReloadPhaseType>()
{
	return EReloadPhaseType_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EReloadPhaseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Interactive.DisplayName", "Interactive" },
		{ "Interactive.Name", "EReloadPhaseType::Interactive" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
		{ "Visual.DisplayName", "Visual" },
		{ "Visual.Name", "EReloadPhaseType::Visual" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReloadPhaseType::Interactive", (int64)EReloadPhaseType::Interactive },
		{ "EReloadPhaseType::Visual", (int64)EReloadPhaseType::Visual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EReloadPhaseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EReloadPhaseType",
	"EReloadPhaseType",
	Z_Construct_UEnum_Goobunga_EReloadPhaseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EReloadPhaseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EReloadPhaseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EReloadPhaseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EReloadPhaseType()
{
	if (!Z_Registration_Info_UEnum_EReloadPhaseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReloadPhaseType.InnerSingleton, Z_Construct_UEnum_Goobunga_EReloadPhaseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReloadPhaseType.InnerSingleton;
}
// End Enum EReloadPhaseType

// Begin ScriptStruct FReloadPhase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReloadPhase;
class UScriptStruct* FReloadPhase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReloadPhase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReloadPhase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReloadPhase, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("ReloadPhase"));
	}
	return Z_Registration_Info_UScriptStruct_ReloadPhase.OuterSingleton;
}
template<> GOOBUNGA_API UScriptStruct* StaticStruct<FReloadPhase>()
{
	return FReloadPhase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FReloadPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseType_MetaData[] = {
		{ "Category", "ReloadPhase" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhasePattern_MetaData[] = {
		{ "Category", "ReloadPhase" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseAnimation_MetaData[] = {
		{ "Category", "ReloadPhase" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PhaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PhaseType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PhasePattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PhasePattern;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhaseAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReloadPhase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReloadPhase_Statics::NewProp_PhaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReloadPhase_Statics::NewProp_PhaseType = { "PhaseType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReloadPhase, PhaseType), Z_Construct_UEnum_Goobunga_EReloadPhaseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseType_MetaData), NewProp_PhaseType_MetaData) }; // 3046883593
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReloadPhase_Statics::NewProp_PhasePattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReloadPhase_Statics::NewProp_PhasePattern = { "PhasePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReloadPhase, PhasePattern), Z_Construct_UEnum_Goobunga_EReloadPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhasePattern_MetaData), NewProp_PhasePattern_MetaData) }; // 2653009470
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReloadPhase_Statics::NewProp_PhaseAnimation = { "PhaseAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReloadPhase, PhaseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseAnimation_MetaData), NewProp_PhaseAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReloadPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReloadPhase_Statics::NewProp_PhaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReloadPhase_Statics::NewProp_PhaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReloadPhase_Statics::NewProp_PhasePattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReloadPhase_Statics::NewProp_PhasePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReloadPhase_Statics::NewProp_PhaseAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReloadPhase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	&NewStructOps,
	"ReloadPhase",
	Z_Construct_UScriptStruct_FReloadPhase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadPhase_Statics::PropPointers),
	sizeof(FReloadPhase),
	alignof(FReloadPhase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadPhase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReloadPhase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReloadPhase()
{
	if (!Z_Registration_Info_UScriptStruct_ReloadPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReloadPhase.InnerSingleton, Z_Construct_UScriptStruct_FReloadPhase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ReloadPhase.InnerSingleton;
}
// End ScriptStruct FReloadPhase

// Begin Class UReloadManagerComponent
void UReloadManagerComponent::StaticRegisterNativesUReloadManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReloadManagerComponent);
UClass* Z_Construct_UClass_UReloadManagerComponent_NoRegister()
{
	return UReloadManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UReloadManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ReloadManagerComponent.h" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSequence_MetaData[] = {
		{ "Category", "ReloadManagerComponent" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentReloadPhase_MetaData[] = {
		{ "Category", "ReloadManagerComponent" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPattern_MetaData[] = {
		{ "Category", "ReloadManagerComponent" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReloadManagerComponent" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReloadManagerComponent" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSequenceTime_MetaData[] = {
		{ "Category", "ReloadManagerComponent" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSequenceTimeRemaining_MetaData[] = {
		{ "Category", "ReloadManagerComponent" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReloadManagerComponent" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReloadManagerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadSequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReloadSequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentReloadPhase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPattern_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPattern;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalProgress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSequenceTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSequenceTimeRemaining;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReloadWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReloadManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_ReloadSequence_Inner = { "ReloadSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReloadPhase, METADATA_PARAMS(0, nullptr) }; // 2585317397
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_ReloadSequence = { "ReloadSequence", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReloadManagerComponent, ReloadSequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadSequence_MetaData), NewProp_ReloadSequence_MetaData) }; // 2585317397
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentReloadPhase = { "CurrentReloadPhase", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReloadManagerComponent, CurrentReloadPhase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentReloadPhase_MetaData), NewProp_CurrentReloadPhase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentPattern_Inner = { "CurrentPattern", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentPattern = { "CurrentPattern", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReloadManagerComponent, CurrentPattern), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPattern_MetaData), NewProp_CurrentPattern_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReloadManagerComponent, CurrentProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProgress_MetaData), NewProp_CurrentProgress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_TotalProgress = { "TotalProgress", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReloadManagerComponent, TotalProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalProgress_MetaData), NewProp_TotalProgress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentSequenceTime = { "CurrentSequenceTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReloadManagerComponent, CurrentSequenceTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSequenceTime_MetaData), NewProp_CurrentSequenceTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentSequenceTimeRemaining = { "CurrentSequenceTimeRemaining", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReloadManagerComponent, CurrentSequenceTimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSequenceTimeRemaining_MetaData), NewProp_CurrentSequenceTimeRemaining_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_ReloadWidgetClass = { "ReloadWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReloadManagerComponent, ReloadWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadWidgetClass_MetaData), NewProp_ReloadWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_ReloadWidget = { "ReloadWidget", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReloadManagerComponent, ReloadWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadWidget_MetaData), NewProp_ReloadWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReloadManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_ReloadSequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_ReloadSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentReloadPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentPattern_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_TotalProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentSequenceTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_CurrentSequenceTimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_ReloadWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadManagerComponent_Statics::NewProp_ReloadWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReloadManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReloadManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReloadManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReloadManagerComponent_Statics::ClassParams = {
	&UReloadManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReloadManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReloadManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReloadManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReloadManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReloadManagerComponent()
{
	if (!Z_Registration_Info_UClass_UReloadManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReloadManagerComponent.OuterSingleton, Z_Construct_UClass_UReloadManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReloadManagerComponent.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UReloadManagerComponent>()
{
	return UReloadManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReloadManagerComponent);
UReloadManagerComponent::~UReloadManagerComponent() {}
// End Class UReloadManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EReloadPhaseType_StaticEnum, TEXT("EReloadPhaseType"), &Z_Registration_Info_UEnum_EReloadPhaseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3046883593U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FReloadPhase::StaticStruct, Z_Construct_UScriptStruct_FReloadPhase_Statics::NewStructOps, TEXT("ReloadPhase"), &Z_Registration_Info_UScriptStruct_ReloadPhase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReloadPhase), 2585317397U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReloadManagerComponent, UReloadManagerComponent::StaticClass, TEXT("UReloadManagerComponent"), &Z_Registration_Info_UClass_UReloadManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReloadManagerComponent), 1078013205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_798425112(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
