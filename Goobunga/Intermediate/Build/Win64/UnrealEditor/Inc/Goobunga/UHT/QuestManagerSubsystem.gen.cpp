// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Quests/QuestManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManagerSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestManagerSubsystem();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestManagerSubsystem_NoRegister();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Delegate FOnObjectiveEvent
struct Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics
{
	struct _Script_Goobunga_eventOnObjectiveEvent_Parms
	{
		FGameplayTagContainer EventTags;
		int32 EventAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Quests/QuestManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Goobunga_eventOnObjectiveEvent_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::NewProp_EventAmount = { "EventAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Goobunga_eventOnObjectiveEvent_Parms, EventAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::NewProp_EventTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::NewProp_EventAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Goobunga, nullptr, "OnObjectiveEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::_Script_Goobunga_eventOnObjectiveEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::_Script_Goobunga_eventOnObjectiveEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnObjectiveEvent_DelegateWrapper(const FMulticastScriptDelegate& OnObjectiveEvent, FGameplayTagContainer EventTags, int32 EventAmount)
{
	struct _Script_Goobunga_eventOnObjectiveEvent_Parms
	{
		FGameplayTagContainer EventTags;
		int32 EventAmount;
	};
	_Script_Goobunga_eventOnObjectiveEvent_Parms Parms;
	Parms.EventTags=EventTags;
	Parms.EventAmount=EventAmount;
	OnObjectiveEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnObjectiveEvent

// Begin Class UQuestManagerSubsystem Function NotifyObjectiveEvent
struct Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics
{
	struct QuestManagerSubsystem_eventNotifyObjectiveEvent_Parms
	{
		FGameplayTagContainer EventTags;
		int32 EventAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Quests/QuestManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManagerSubsystem_eventNotifyObjectiveEvent_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::NewProp_EventAmount = { "EventAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManagerSubsystem_eventNotifyObjectiveEvent_Parms, EventAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::NewProp_EventTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::NewProp_EventAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerSubsystem, nullptr, "NotifyObjectiveEvent", nullptr, nullptr, Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::QuestManagerSubsystem_eventNotifyObjectiveEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::QuestManagerSubsystem_eventNotifyObjectiveEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManagerSubsystem::execNotifyObjectiveEvent)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_EventTags);
	P_GET_PROPERTY(FIntProperty,Z_Param_EventAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyObjectiveEvent(Z_Param_EventTags,Z_Param_EventAmount);
	P_NATIVE_END;
}
// End Class UQuestManagerSubsystem Function NotifyObjectiveEvent

// Begin Class UQuestManagerSubsystem
void UQuestManagerSubsystem::StaticRegisterNativesUQuestManagerSubsystem()
{
	UClass* Class = UQuestManagerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NotifyObjectiveEvent", &UQuestManagerSubsystem::execNotifyObjectiveEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestManagerSubsystem);
UClass* Z_Construct_UClass_UQuestManagerSubsystem_NoRegister()
{
	return UQuestManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UQuestManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Quests/QuestManagerSubsystem.h" },
		{ "ModuleRelativePath", "Quests/QuestManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestManagerSubsystem_NotifyObjectiveEvent, "NotifyObjectiveEvent" }, // 1346101882
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuestManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestManagerSubsystem_Statics::ClassParams = {
	&UQuestManagerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UQuestManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestManagerSubsystem.OuterSingleton, Z_Construct_UClass_UQuestManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestManagerSubsystem.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UQuestManagerSubsystem>()
{
	return UQuestManagerSubsystem::StaticClass();
}
UQuestManagerSubsystem::UQuestManagerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestManagerSubsystem);
UQuestManagerSubsystem::~UQuestManagerSubsystem() {}
// End Class UQuestManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestManagerSubsystem, UQuestManagerSubsystem::StaticClass, TEXT("UQuestManagerSubsystem"), &Z_Registration_Info_UClass_UQuestManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestManagerSubsystem), 1266728188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_598739229(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
