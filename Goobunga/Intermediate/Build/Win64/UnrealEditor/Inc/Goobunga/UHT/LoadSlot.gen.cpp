// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/UserInterface/LoadSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadSlot() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_ULoadSlot();
GOOBUNGA_API UClass* Z_Construct_UClass_ULoadSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class ULoadSlot Function LoadNewSlot
struct Z_Construct_UFunction_ULoadSlot_LoadNewSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserInterface/LoadSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadSlot_LoadNewSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadSlot, nullptr, "LoadNewSlot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadSlot_LoadNewSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadSlot_LoadNewSlot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULoadSlot_LoadNewSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadSlot_LoadNewSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadSlot::execLoadNewSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadNewSlot();
	P_NATIVE_END;
}
// End Class ULoadSlot Function LoadNewSlot

// Begin Class ULoadSlot Function LoadSlot
struct Z_Construct_UFunction_ULoadSlot_LoadSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserInterface/LoadSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadSlot_LoadSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadSlot, nullptr, "LoadSlot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadSlot_LoadSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadSlot_LoadSlot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULoadSlot_LoadSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadSlot_LoadSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadSlot::execLoadSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSlot();
	P_NATIVE_END;
}
// End Class ULoadSlot Function LoadSlot

// Begin Class ULoadSlot
void ULoadSlot::StaticRegisterNativesULoadSlot()
{
	UClass* Class = ULoadSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadNewSlot", &ULoadSlot::execLoadNewSlot },
		{ "LoadSlot", &ULoadSlot::execLoadSlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadSlot);
UClass* Z_Construct_UClass_ULoadSlot_NoRegister()
{
	return ULoadSlot::StaticClass();
}
struct Z_Construct_UClass_ULoadSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UserInterface/LoadSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UserInterface/LoadSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/LoadSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadSlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/LoadSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadSlotButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadSlot_LoadNewSlot, "LoadNewSlot" }, // 2294495609
		{ &Z_Construct_UFunction_ULoadSlot_LoadSlot, "LoadSlot" }, // 1645773311
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadSlot_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadSlot, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadSlot_Statics::NewProp_LoadSlotButton = { "LoadSlotButton", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadSlot, LoadSlotButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadSlotButton_MetaData), NewProp_LoadSlotButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadSlot_Statics::NewProp_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadSlot_Statics::NewProp_LoadSlotButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoadSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadSlot_Statics::ClassParams = {
	&ULoadSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoadSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoadSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadSlot()
{
	if (!Z_Registration_Info_UClass_ULoadSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadSlot.OuterSingleton, Z_Construct_UClass_ULoadSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadSlot.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<ULoadSlot>()
{
	return ULoadSlot::StaticClass();
}
ULoadSlot::ULoadSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadSlot);
ULoadSlot::~ULoadSlot() {}
// End Class ULoadSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadSlot, ULoadSlot::StaticClass, TEXT("ULoadSlot"), &Z_Registration_Info_UClass_ULoadSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadSlot), 1462206629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_1017899577(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
