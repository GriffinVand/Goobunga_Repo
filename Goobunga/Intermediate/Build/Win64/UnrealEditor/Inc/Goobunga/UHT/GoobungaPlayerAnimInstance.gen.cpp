// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Animation/GoobungaPlayerAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoobungaPlayerAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GOOBUNGA_API UClass* Z_Construct_UClass_UGoobungaPlayerAnimInstance();
GOOBUNGA_API UClass* Z_Construct_UClass_UGoobungaPlayerAnimInstance_NoRegister();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnFirstPatternCalled__DelegateSignature();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnNextPatternCalled__DelegateSignature();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnPatternFinished__DelegateSignature();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnReloadCompleted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Delegate FOnFirstPatternCalled
struct Z_Construct_UDelegateFunction_Goobunga_OnFirstPatternCalled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Goobunga_OnFirstPatternCalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Goobunga, nullptr, "OnFirstPatternCalled__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnFirstPatternCalled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Goobunga_OnFirstPatternCalled__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Goobunga_OnFirstPatternCalled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Goobunga_OnFirstPatternCalled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFirstPatternCalled_DelegateWrapper(const FMulticastScriptDelegate& OnFirstPatternCalled)
{
	OnFirstPatternCalled.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnFirstPatternCalled

// Begin Delegate FOnNextPatternCalled
struct Z_Construct_UDelegateFunction_Goobunga_OnNextPatternCalled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Goobunga_OnNextPatternCalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Goobunga, nullptr, "OnNextPatternCalled__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnNextPatternCalled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Goobunga_OnNextPatternCalled__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Goobunga_OnNextPatternCalled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Goobunga_OnNextPatternCalled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNextPatternCalled_DelegateWrapper(const FMulticastScriptDelegate& OnNextPatternCalled)
{
	OnNextPatternCalled.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnNextPatternCalled

// Begin Delegate FOnReloadCompleted
struct Z_Construct_UDelegateFunction_Goobunga_OnReloadCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Goobunga_OnReloadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Goobunga, nullptr, "OnReloadCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnReloadCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Goobunga_OnReloadCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Goobunga_OnReloadCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Goobunga_OnReloadCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReloadCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnReloadCompleted)
{
	OnReloadCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnReloadCompleted

// Begin Delegate FOnPatternFinished
struct Z_Construct_UDelegateFunction_Goobunga_OnPatternFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Goobunga_OnPatternFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Goobunga, nullptr, "OnPatternFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnPatternFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Goobunga_OnPatternFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Goobunga_OnPatternFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Goobunga_OnPatternFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPatternFinished_DelegateWrapper(const FMulticastScriptDelegate& OnPatternFinished)
{
	OnPatternFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPatternFinished

// Begin Class UGoobungaPlayerAnimInstance Function BroadcastOnFirstPatternCalled
struct Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnFirstPatternCalled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnFirstPatternCalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoobungaPlayerAnimInstance, nullptr, "BroadcastOnFirstPatternCalled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnFirstPatternCalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnFirstPatternCalled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnFirstPatternCalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnFirstPatternCalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoobungaPlayerAnimInstance::execBroadcastOnFirstPatternCalled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastOnFirstPatternCalled();
	P_NATIVE_END;
}
// End Class UGoobungaPlayerAnimInstance Function BroadcastOnFirstPatternCalled

// Begin Class UGoobungaPlayerAnimInstance Function BroadcastOnNextPatternCalled
struct Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnNextPatternCalled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnNextPatternCalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoobungaPlayerAnimInstance, nullptr, "BroadcastOnNextPatternCalled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnNextPatternCalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnNextPatternCalled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnNextPatternCalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnNextPatternCalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoobungaPlayerAnimInstance::execBroadcastOnNextPatternCalled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastOnNextPatternCalled();
	P_NATIVE_END;
}
// End Class UGoobungaPlayerAnimInstance Function BroadcastOnNextPatternCalled

// Begin Class UGoobungaPlayerAnimInstance Function BroadcastOnPatternFinished
struct Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnPatternFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnPatternFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoobungaPlayerAnimInstance, nullptr, "BroadcastOnPatternFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnPatternFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnPatternFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnPatternFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnPatternFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoobungaPlayerAnimInstance::execBroadcastOnPatternFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastOnPatternFinished();
	P_NATIVE_END;
}
// End Class UGoobungaPlayerAnimInstance Function BroadcastOnPatternFinished

// Begin Class UGoobungaPlayerAnimInstance Function BroadcastOnReloadCompleted
struct Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnReloadCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnReloadCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoobungaPlayerAnimInstance, nullptr, "BroadcastOnReloadCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnReloadCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnReloadCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnReloadCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnReloadCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoobungaPlayerAnimInstance::execBroadcastOnReloadCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastOnReloadCompleted();
	P_NATIVE_END;
}
// End Class UGoobungaPlayerAnimInstance Function BroadcastOnReloadCompleted

// Begin Class UGoobungaPlayerAnimInstance
void UGoobungaPlayerAnimInstance::StaticRegisterNativesUGoobungaPlayerAnimInstance()
{
	UClass* Class = UGoobungaPlayerAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastOnFirstPatternCalled", &UGoobungaPlayerAnimInstance::execBroadcastOnFirstPatternCalled },
		{ "BroadcastOnNextPatternCalled", &UGoobungaPlayerAnimInstance::execBroadcastOnNextPatternCalled },
		{ "BroadcastOnPatternFinished", &UGoobungaPlayerAnimInstance::execBroadcastOnPatternFinished },
		{ "BroadcastOnReloadCompleted", &UGoobungaPlayerAnimInstance::execBroadcastOnReloadCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoobungaPlayerAnimInstance);
UClass* Z_Construct_UClass_UGoobungaPlayerAnimInstance_NoRegister()
{
	return UGoobungaPlayerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/GoobungaPlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFirstPatternCalled_MetaData[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNextPatternCalled_MetaData[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReloadCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPatternFinished_MetaData[] = {
		{ "ModuleRelativePath", "Animation/GoobungaPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFirstPatternCalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNextPatternCalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPatternFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnFirstPatternCalled, "BroadcastOnFirstPatternCalled" }, // 4183353176
		{ &Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnNextPatternCalled, "BroadcastOnNextPatternCalled" }, // 500013919
		{ &Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnPatternFinished, "BroadcastOnPatternFinished" }, // 2859052204
		{ &Z_Construct_UFunction_UGoobungaPlayerAnimInstance_BroadcastOnReloadCompleted, "BroadcastOnReloadCompleted" }, // 2423403418
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoobungaPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::NewProp_OnFirstPatternCalled = { "OnFirstPatternCalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaPlayerAnimInstance, OnFirstPatternCalled), Z_Construct_UDelegateFunction_Goobunga_OnFirstPatternCalled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFirstPatternCalled_MetaData), NewProp_OnFirstPatternCalled_MetaData) }; // 425401877
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::NewProp_OnNextPatternCalled = { "OnNextPatternCalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaPlayerAnimInstance, OnNextPatternCalled), Z_Construct_UDelegateFunction_Goobunga_OnNextPatternCalled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNextPatternCalled_MetaData), NewProp_OnNextPatternCalled_MetaData) }; // 1735076948
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::NewProp_OnReloadCompleted = { "OnReloadCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaPlayerAnimInstance, OnReloadCompleted), Z_Construct_UDelegateFunction_Goobunga_OnReloadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReloadCompleted_MetaData), NewProp_OnReloadCompleted_MetaData) }; // 433175358
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::NewProp_OnPatternFinished = { "OnPatternFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaPlayerAnimInstance, OnPatternFinished), Z_Construct_UDelegateFunction_Goobunga_OnPatternFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPatternFinished_MetaData), NewProp_OnPatternFinished_MetaData) }; // 2125517055
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::NewProp_OnFirstPatternCalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::NewProp_OnNextPatternCalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::NewProp_OnReloadCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::NewProp_OnPatternFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::ClassParams = {
	&UGoobungaPlayerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGoobungaPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UGoobungaPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoobungaPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UGoobungaPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGoobungaPlayerAnimInstance.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UGoobungaPlayerAnimInstance>()
{
	return UGoobungaPlayerAnimInstance::StaticClass();
}
UGoobungaPlayerAnimInstance::UGoobungaPlayerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGoobungaPlayerAnimInstance);
UGoobungaPlayerAnimInstance::~UGoobungaPlayerAnimInstance() {}
// End Class UGoobungaPlayerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGoobungaPlayerAnimInstance, UGoobungaPlayerAnimInstance::StaticClass, TEXT("UGoobungaPlayerAnimInstance"), &Z_Registration_Info_UClass_UGoobungaPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoobungaPlayerAnimInstance), 2322931911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_3636022503(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Animation_GoobungaPlayerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
