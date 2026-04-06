// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Dialogue/DialogueInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface UDialogueInterface Function DialogueEnded
void IDialogueInterface::DialogueEnded()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DialogueEnded instead.");
}
static FName NAME_UDialogueInterface_DialogueEnded = FName(TEXT("DialogueEnded"));
void IDialogueInterface::Execute_DialogueEnded(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDialogueInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDialogueInterface_DialogueEnded);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDialogueInterface*)(O->GetNativeInterfaceAddress(UDialogueInterface::StaticClass())))
	{
		I->DialogueEnded_Implementation();
	}
}
struct Z_Construct_UFunction_UDialogueInterface_DialogueEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dialogue/DialogueInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueInterface_DialogueEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueInterface, nullptr, "DialogueEnded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueInterface_DialogueEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueInterface_DialogueEnded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogueInterface_DialogueEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueInterface_DialogueEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDialogueInterface::execDialogueEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueEnded_Implementation();
	P_NATIVE_END;
}
// End Interface UDialogueInterface Function DialogueEnded

// Begin Interface UDialogueInterface Function GetCurrentDialogue
struct DialogueInterface_eventGetCurrentDialogue_Parms
{
	FName ReturnValue;
};
FName IDialogueInterface::GetCurrentDialogue()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurrentDialogue instead.");
	DialogueInterface_eventGetCurrentDialogue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDialogueInterface_GetCurrentDialogue = FName(TEXT("GetCurrentDialogue"));
FName IDialogueInterface::Execute_GetCurrentDialogue(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDialogueInterface::StaticClass()));
	DialogueInterface_eventGetCurrentDialogue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDialogueInterface_GetCurrentDialogue);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDialogueInterface*)(O->GetNativeInterfaceAddress(UDialogueInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCurrentDialogue_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dialogue/DialogueInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueInterface_eventGetCurrentDialogue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueInterface, nullptr, "GetCurrentDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics::PropPointers), sizeof(DialogueInterface_eventGetCurrentDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogueInterface_eventGetCurrentDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDialogueInterface::execGetCurrentDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetCurrentDialogue_Implementation();
	P_NATIVE_END;
}
// End Interface UDialogueInterface Function GetCurrentDialogue

// Begin Interface UDialogueInterface Function SetCurrentDialogue
struct DialogueInterface_eventSetCurrentDialogue_Parms
{
	FName CurrentDialogue;
};
void IDialogueInterface::SetCurrentDialogue(FName CurrentDialogue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCurrentDialogue instead.");
}
static FName NAME_UDialogueInterface_SetCurrentDialogue = FName(TEXT("SetCurrentDialogue"));
void IDialogueInterface::Execute_SetCurrentDialogue(UObject* O, FName CurrentDialogue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDialogueInterface::StaticClass()));
	DialogueInterface_eventSetCurrentDialogue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDialogueInterface_SetCurrentDialogue);
	if (Func)
	{
		Parms.CurrentDialogue=CurrentDialogue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDialogueInterface*)(O->GetNativeInterfaceAddress(UDialogueInterface::StaticClass())))
	{
		I->SetCurrentDialogue_Implementation(CurrentDialogue);
	}
}
struct Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dialogue/DialogueInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentDialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics::NewProp_CurrentDialogue = { "CurrentDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueInterface_eventSetCurrentDialogue_Parms, CurrentDialogue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics::NewProp_CurrentDialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueInterface, nullptr, "SetCurrentDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics::PropPointers), sizeof(DialogueInterface_eventSetCurrentDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogueInterface_eventSetCurrentDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDialogueInterface::execSetCurrentDialogue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CurrentDialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentDialogue_Implementation(Z_Param_CurrentDialogue);
	P_NATIVE_END;
}
// End Interface UDialogueInterface Function SetCurrentDialogue

// Begin Interface UDialogueInterface
void UDialogueInterface::StaticRegisterNativesUDialogueInterface()
{
	UClass* Class = UDialogueInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DialogueEnded", &IDialogueInterface::execDialogueEnded },
		{ "GetCurrentDialogue", &IDialogueInterface::execGetCurrentDialogue },
		{ "SetCurrentDialogue", &IDialogueInterface::execSetCurrentDialogue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueInterface);
UClass* Z_Construct_UClass_UDialogueInterface_NoRegister()
{
	return UDialogueInterface::StaticClass();
}
struct Z_Construct_UClass_UDialogueInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dialogue/DialogueInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueInterface_DialogueEnded, "DialogueEnded" }, // 3937520303
		{ &Z_Construct_UFunction_UDialogueInterface_GetCurrentDialogue, "GetCurrentDialogue" }, // 100760806
		{ &Z_Construct_UFunction_UDialogueInterface_SetCurrentDialogue, "SetCurrentDialogue" }, // 2352437
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDialogueInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueInterface_Statics::ClassParams = {
	&UDialogueInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueInterface()
{
	if (!Z_Registration_Info_UClass_UDialogueInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueInterface.OuterSingleton, Z_Construct_UClass_UDialogueInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueInterface.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UDialogueInterface>()
{
	return UDialogueInterface::StaticClass();
}
UDialogueInterface::UDialogueInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueInterface);
UDialogueInterface::~UDialogueInterface() {}
// End Interface UDialogueInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueInterface, UDialogueInterface::StaticClass, TEXT("UDialogueInterface"), &Z_Registration_Info_UClass_UDialogueInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueInterface), 1899970405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_189986111(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
