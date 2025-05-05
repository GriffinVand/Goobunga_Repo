// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Quests/QuestManagerComponent.h"
#include "Goobunga/Quests/QuestStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManagerComponent() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestListWidget_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestManagerComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Delegate FOnEnemyKilled
struct Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics
{
	struct QuestManagerComponent_eventOnEnemyKilled_Parms
	{
		FName EnemyType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EnemyType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManagerComponent_eventOnEnemyKilled_Parms, EnemyType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::NewProp_EnemyType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "OnEnemyKilled__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::QuestManagerComponent_eventOnEnemyKilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::QuestManagerComponent_eventOnEnemyKilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UQuestManagerComponent::FOnEnemyKilled_DelegateWrapper(const FMulticastScriptDelegate& OnEnemyKilled, FName EnemyType)
{
	struct QuestManagerComponent_eventOnEnemyKilled_Parms
	{
		FName EnemyType;
	};
	QuestManagerComponent_eventOnEnemyKilled_Parms Parms;
	Parms.EnemyType=EnemyType;
	OnEnemyKilled.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEnemyKilled

// Begin Delegate FOnItemCollected
struct Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics
{
	struct QuestManagerComponent_eventOnItemCollected_Parms
	{
		FName ItemType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManagerComponent_eventOnItemCollected_Parms, ItemType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::NewProp_ItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "OnItemCollected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::QuestManagerComponent_eventOnItemCollected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::QuestManagerComponent_eventOnItemCollected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UQuestManagerComponent::FOnItemCollected_DelegateWrapper(const FMulticastScriptDelegate& OnItemCollected, FName ItemType)
{
	struct QuestManagerComponent_eventOnItemCollected_Parms
	{
		FName ItemType;
	};
	QuestManagerComponent_eventOnItemCollected_Parms Parms;
	Parms.ItemType=ItemType;
	OnItemCollected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemCollected

// Begin Delegate FOnLevelCompleted
struct Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics
{
	struct QuestManagerComponent_eventOnLevelCompleted_Parms
	{
		FName LevelType;
		float CompletionTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompletionTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::NewProp_LevelType = { "LevelType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManagerComponent_eventOnLevelCompleted_Parms, LevelType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::NewProp_CompletionTime = { "CompletionTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManagerComponent_eventOnLevelCompleted_Parms, CompletionTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::NewProp_LevelType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::NewProp_CompletionTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "OnLevelCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::QuestManagerComponent_eventOnLevelCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::QuestManagerComponent_eventOnLevelCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UQuestManagerComponent::FOnLevelCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnLevelCompleted, FName LevelType, float CompletionTime)
{
	struct QuestManagerComponent_eventOnLevelCompleted_Parms
	{
		FName LevelType;
		float CompletionTime;
	};
	QuestManagerComponent_eventOnLevelCompleted_Parms Parms;
	Parms.LevelType=LevelType;
	Parms.CompletionTime=CompletionTime;
	OnLevelCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLevelCompleted

// Begin Class UQuestManagerComponent
void UQuestManagerComponent::StaticRegisterNativesUQuestManagerComponent()
{
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
		{ &Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature, "OnEnemyKilled__DelegateSignature" }, // 1206966922
		{ &Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature, "OnItemCollected__DelegateSignature" }, // 1476393878
		{ &Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature, "OnLevelCompleted__DelegateSignature" }, // 793064705
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestIDs_Inner = { "QuestIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestIDs = { "QuestIDs", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManagerComponent, QuestIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestIDs_MetaData), NewProp_QuestIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestData_Inner = { "QuestData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestStruct, METADATA_PARAMS(0, nullptr) }; // 652624888
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestData = { "QuestData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManagerComponent, QuestData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestData_MetaData), NewProp_QuestData_MetaData) }; // 652624888
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
		{ Z_Construct_UClass_UQuestManagerComponent, UQuestManagerComponent::StaticClass, TEXT("UQuestManagerComponent"), &Z_Registration_Info_UClass_UQuestManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestManagerComponent), 811797102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_3604228649(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
