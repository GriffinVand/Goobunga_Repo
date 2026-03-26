// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Quests/QuestManagerComponent.h"
#include "Goobunga/Quests/QuestStruct.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManagerComponent() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestListWidget_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestManagerComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UQuestManagerComponent Function UpdateQuestProgress
struct Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics
{
	struct QuestManagerComponent_eventUpdateQuestProgress_Parms
	{
		FGameplayTagContainer QuestObjTags;
		int32 ProgressIncrement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestObjTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProgressIncrement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::NewProp_QuestObjTags = { "QuestObjTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManagerComponent_eventUpdateQuestProgress_Parms, QuestObjTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::NewProp_ProgressIncrement = { "ProgressIncrement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManagerComponent_eventUpdateQuestProgress_Parms, ProgressIncrement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::NewProp_QuestObjTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::NewProp_ProgressIncrement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "UpdateQuestProgress", nullptr, nullptr, Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::QuestManagerComponent_eventUpdateQuestProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::QuestManagerComponent_eventUpdateQuestProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManagerComponent::execUpdateQuestProgress)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_QuestObjTags);
	P_GET_PROPERTY(FIntProperty,Z_Param_ProgressIncrement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateQuestProgress(Z_Param_QuestObjTags,Z_Param_ProgressIncrement);
	P_NATIVE_END;
}
// End Class UQuestManagerComponent Function UpdateQuestProgress

// Begin Class UQuestManagerComponent
void UQuestManagerComponent::StaticRegisterNativesUQuestManagerComponent()
{
	UClass* Class = UQuestManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateQuestProgress", &UQuestManagerComponent::execUpdateQuestProgress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestManagerComponent);
UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister()
{
	return UQuestManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UQuestManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Quests/QuestManagerComponent.h" },
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestIDs_MetaData[] = {
		{ "Category", "QuestManagerComponent" },
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestData_MetaData[] = {
		{ "Category", "QuestManagerComponent" },
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestListWidgetClass_MetaData[] = {
		{ "Category", "QuestManagerComponent" },
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestListWidget_MetaData[] = {
		{ "Category", "QuestManagerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestTable_MetaData[] = {
		{ "Category", "QuestManagerComponent" },
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestListWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestListWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestManagerComponent_UpdateQuestProgress, "UpdateQuestProgress" }, // 3571505344
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestIDs_Inner = { "QuestIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestIDs = { "QuestIDs", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManagerComponent, QuestIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestIDs_MetaData), NewProp_QuestIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestData_Inner = { "QuestData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestStruct, METADATA_PARAMS(0, nullptr) }; // 436812053
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestData = { "QuestData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManagerComponent, QuestData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestData_MetaData), NewProp_QuestData_MetaData) }; // 436812053
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestListWidgetClass = { "QuestListWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManagerComponent, QuestListWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestListWidgetClass_MetaData), NewProp_QuestListWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestListWidget = { "QuestListWidget", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManagerComponent, QuestListWidget), Z_Construct_UClass_UQuestListWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestListWidget_MetaData), NewProp_QuestListWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestTable = { "QuestTable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManagerComponent, QuestTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestTable_MetaData), NewProp_QuestTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestListWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestListWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestManagerComponent_Statics::ClassParams = {
	&UQuestManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuestManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestManagerComponent()
{
	if (!Z_Registration_Info_UClass_UQuestManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestManagerComponent.OuterSingleton, Z_Construct_UClass_UQuestManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestManagerComponent.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UQuestManagerComponent>()
{
	return UQuestManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestManagerComponent);
UQuestManagerComponent::~UQuestManagerComponent() {}
// End Class UQuestManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestManagerComponent, UQuestManagerComponent::StaticClass, TEXT("UQuestManagerComponent"), &Z_Registration_Info_UClass_UQuestManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestManagerComponent), 3172314912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_3401301199(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
