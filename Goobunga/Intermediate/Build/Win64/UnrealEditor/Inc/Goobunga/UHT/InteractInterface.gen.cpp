// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Interaction/InteractInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UInteractInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface UInteractInterface Function CanInteract
struct InteractInterface_eventCanInteract_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InteractInterface_eventCanInteract_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInteractInterface::CanInteract()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInteract instead.");
	InteractInterface_eventCanInteract_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInteractInterface_CanInteract = FName(TEXT("CanInteract"));
bool IInteractInterface::Execute_CanInteract(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()));
	InteractInterface_eventCanInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractInterface_CanInteract);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractInterface*)(O->GetNativeInterfaceAddress(UInteractInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanInteract_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractInterface_CanInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/InteractInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractInterface_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractInterface_eventCanInteract_Parms), &Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface, nullptr, "CanInteract", nullptr, nullptr, Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::PropPointers), sizeof(InteractInterface_eventCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractInterface_eventCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractInterface_CanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractInterface_CanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractInterface::execCanInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractInterface Function CanInteract

// Begin Interface UInteractInterface Function GetInteractText
struct InteractInterface_eventGetInteractText_Parms
{
	AActor* Interactor;
	FText ReturnValue;
};
FText IInteractInterface::GetInteractText(AActor* Interactor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractText instead.");
	InteractInterface_eventGetInteractText_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInteractInterface_GetInteractText = FName(TEXT("GetInteractText"));
FText IInteractInterface::Execute_GetInteractText(UObject* O, AActor* Interactor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()));
	InteractInterface_eventGetInteractText_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractInterface_GetInteractText);
	if (Func)
	{
		Parms.Interactor=Interactor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractInterface*)(O->GetNativeInterfaceAddress(UInteractInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetInteractText_Implementation(Interactor);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/InteractInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractInterface_eventGetInteractText_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractInterface_eventGetInteractText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface, nullptr, "GetInteractText", nullptr, nullptr, Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::PropPointers), sizeof(InteractInterface_eventGetInteractText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractInterface_eventGetInteractText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractInterface_GetInteractText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractInterface_GetInteractText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractInterface::execGetInteractText)
{
	P_GET_OBJECT(AActor,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetInteractText_Implementation(Z_Param_Interactor);
	P_NATIVE_END;
}
// End Interface UInteractInterface Function GetInteractText

// Begin Interface UInteractInterface Function Interact
struct InteractInterface_eventInteract_Parms
{
	AActor* Interactor;
};
void IInteractInterface::Interact(AActor* Interactor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UInteractInterface_Interact = FName(TEXT("Interact"));
void IInteractInterface::Execute_Interact(UObject* O, AActor* Interactor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()));
	InteractInterface_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractInterface_Interact);
	if (Func)
	{
		Parms.Interactor=Interactor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractInterface*)(O->GetNativeInterfaceAddress(UInteractInterface::StaticClass())))
	{
		I->Interact_Implementation(Interactor);
	}
}
struct Z_Construct_UFunction_UInteractInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/InteractInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractInterface_Interact_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractInterface_eventInteract_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractInterface_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_Interact_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UInteractInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_Interact_Statics::PropPointers), sizeof(InteractInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractInterface_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractInterface_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractInterface::execInteract)
{
	P_GET_OBJECT(AActor,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Interactor);
	P_NATIVE_END;
}
// End Interface UInteractInterface Function Interact

// Begin Interface UInteractInterface Function PlayAnim
struct InteractInterface_eventPlayAnim_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InteractInterface_eventPlayAnim_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInteractInterface::PlayAnim()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayAnim instead.");
	InteractInterface_eventPlayAnim_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInteractInterface_PlayAnim = FName(TEXT("PlayAnim"));
bool IInteractInterface::Execute_PlayAnim(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()));
	InteractInterface_eventPlayAnim_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractInterface_PlayAnim);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractInterface*)(O->GetNativeInterfaceAddress(UInteractInterface::StaticClass())))
	{
		Parms.ReturnValue = I->PlayAnim_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/InteractInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractInterface_eventPlayAnim_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractInterface_eventPlayAnim_Parms), &Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface, nullptr, "PlayAnim", nullptr, nullptr, Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::PropPointers), sizeof(InteractInterface_eventPlayAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractInterface_eventPlayAnim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractInterface_PlayAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractInterface_PlayAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractInterface::execPlayAnim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PlayAnim_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractInterface Function PlayAnim

// Begin Interface UInteractInterface
void UInteractInterface::StaticRegisterNativesUInteractInterface()
{
	UClass* Class = UInteractInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanInteract", &IInteractInterface::execCanInteract },
		{ "GetInteractText", &IInteractInterface::execGetInteractText },
		{ "Interact", &IInteractInterface::execInteract },
		{ "PlayAnim", &IInteractInterface::execPlayAnim },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractInterface);
UClass* Z_Construct_UClass_UInteractInterface_NoRegister()
{
	return UInteractInterface::StaticClass();
}
struct Z_Construct_UClass_UInteractInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interaction/InteractInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractInterface_CanInteract, "CanInteract" }, // 1778811940
		{ &Z_Construct_UFunction_UInteractInterface_GetInteractText, "GetInteractText" }, // 3619047539
		{ &Z_Construct_UFunction_UInteractInterface_Interact, "Interact" }, // 3532350079
		{ &Z_Construct_UFunction_UInteractInterface_PlayAnim, "PlayAnim" }, // 42326822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractInterface_Statics::ClassParams = {
	&UInteractInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractInterface()
{
	if (!Z_Registration_Info_UClass_UInteractInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractInterface.OuterSingleton, Z_Construct_UClass_UInteractInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractInterface.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UInteractInterface>()
{
	return UInteractInterface::StaticClass();
}
UInteractInterface::UInteractInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractInterface);
UInteractInterface::~UInteractInterface() {}
// End Interface UInteractInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Interaction_InteractInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractInterface, UInteractInterface::StaticClass, TEXT("UInteractInterface"), &Z_Registration_Info_UClass_UInteractInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractInterface), 4238484657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Interaction_InteractInterface_h_2737605339(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Interaction_InteractInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Interaction_InteractInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
