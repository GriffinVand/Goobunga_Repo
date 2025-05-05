// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Dialogue/DialogueManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueManagerComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueManagerComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UDialogueManagerComponent Function AddCharacterDialogue
struct Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics
{
	struct DialogueManagerComponent_eventAddCharacterDialogue_Parms
	{
		FName Character;
		FName DialogueID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dialogue/DialogueManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Character;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManagerComponent_eventAddCharacterDialogue_Parms, Character), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManagerComponent_eventAddCharacterDialogue_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::NewProp_DialogueID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManagerComponent, nullptr, "AddCharacterDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::DialogueManagerComponent_eventAddCharacterDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::DialogueManagerComponent_eventAddCharacterDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManagerComponent::execAddCharacterDialogue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Character);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCharacterDialogue(Z_Param_Character,Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueManagerComponent Function AddCharacterDialogue

// Begin Class UDialogueManagerComponent Function OnReplySelected
struct Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics
{
	struct DialogueManagerComponent_eventOnReplySelected_Parms
	{
		int32 ReplyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dialogue/DialogueManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::NewProp_ReplyIndex = { "ReplyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManagerComponent_eventOnReplySelected_Parms, ReplyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::NewProp_ReplyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManagerComponent, nullptr, "OnReplySelected", nullptr, nullptr, Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::DialogueManagerComponent_eventOnReplySelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::DialogueManagerComponent_eventOnReplySelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManagerComponent::execOnReplySelected)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ReplyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReplySelected(Z_Param_ReplyIndex);
	P_NATIVE_END;
}
// End Class UDialogueManagerComponent Function OnReplySelected

// Begin Class UDialogueManagerComponent Function StartDialogue
struct Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics
{
	struct DialogueManagerComponent_eventStartDialogue_Parms
	{
		FName Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dialogue/DialogueManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManagerComponent_eventStartDialogue_Parms, Character), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManagerComponent, nullptr, "StartDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::DialogueManagerComponent_eventStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::DialogueManagerComponent_eventStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManagerComponent::execStartDialogue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDialogue(Z_Param_Character);
	P_NATIVE_END;
}
// End Class UDialogueManagerComponent Function StartDialogue

// Begin Class UDialogueManagerComponent
void UDialogueManagerComponent::StaticRegisterNativesUDialogueManagerComponent()
{
	UClass* Class = UDialogueManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCharacterDialogue", &UDialogueManagerComponent::execAddCharacterDialogue },
		{ "OnReplySelected", &UDialogueManagerComponent::execOnReplySelected },
		{ "StartDialogue", &UDialogueManagerComponent::execStartDialogue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueManagerComponent);
UClass* Z_Construct_UClass_UDialogueManagerComponent_NoRegister()
{
	return UDialogueManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UDialogueManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Dialogue/DialogueManagerComponent.h" },
		{ "ModuleRelativePath", "Dialogue/DialogueManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueData_MetaData[] = {
		{ "Category", "DialogueManagerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Data table of dialogue\n" },
#endif
		{ "ModuleRelativePath", "Dialogue/DialogueManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data table of dialogue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplyData_MetaData[] = {
		{ "Category", "DialogueManagerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Data table of replies\n" },
#endif
		{ "ModuleRelativePath", "Dialogue/DialogueManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data table of replies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetClass_MetaData[] = {
		{ "Category", "DialogueManagerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The widget we want to display this in\n" },
#endif
		{ "ModuleRelativePath", "Dialogue/DialogueManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The widget we want to display this in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidget_MetaData[] = {
		{ "Category", "DialogueManagerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dialogue/DialogueManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplyData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueManagerComponent_AddCharacterDialogue, "AddCharacterDialogue" }, // 2214392480
		{ &Z_Construct_UFunction_UDialogueManagerComponent_OnReplySelected, "OnReplySelected" }, // 2559691754
		{ &Z_Construct_UFunction_UDialogueManagerComponent_StartDialogue, "StartDialogue" }, // 226815915
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueManagerComponent_Statics::NewProp_DialogueData = { "DialogueData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManagerComponent, DialogueData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueData_MetaData), NewProp_DialogueData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueManagerComponent_Statics::NewProp_ReplyData = { "ReplyData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManagerComponent, ReplyData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplyData_MetaData), NewProp_ReplyData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueManagerComponent_Statics::NewProp_DialogueWidgetClass = { "DialogueWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManagerComponent, DialogueWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogueWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidgetClass_MetaData), NewProp_DialogueWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueManagerComponent_Statics::NewProp_DialogueWidget = { "DialogueWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManagerComponent, DialogueWidget), Z_Construct_UClass_UDialogueWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidget_MetaData), NewProp_DialogueWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManagerComponent_Statics::NewProp_DialogueData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManagerComponent_Statics::NewProp_ReplyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManagerComponent_Statics::NewProp_DialogueWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManagerComponent_Statics::NewProp_DialogueWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueManagerComponent_Statics::ClassParams = {
	&UDialogueManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueManagerComponent()
{
	if (!Z_Registration_Info_UClass_UDialogueManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueManagerComponent.OuterSingleton, Z_Construct_UClass_UDialogueManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueManagerComponent.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UDialogueManagerComponent>()
{
	return UDialogueManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueManagerComponent);
UDialogueManagerComponent::~UDialogueManagerComponent() {}
// End Class UDialogueManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueManagerComponent, UDialogueManagerComponent::StaticClass, TEXT("UDialogueManagerComponent"), &Z_Registration_Info_UClass_UDialogueManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueManagerComponent), 3456968514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_2620195014(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
