// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/UserInterface/PlayerReticleWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerReticleWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerReticleWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerReticleWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UPlayerReticleWidget Function HideHitMarker
struct Z_Construct_UFunction_UPlayerReticleWidget_HideHitMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserInterface/PlayerReticleWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerReticleWidget_HideHitMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerReticleWidget, nullptr, "HideHitMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerReticleWidget_HideHitMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerReticleWidget_HideHitMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerReticleWidget_HideHitMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerReticleWidget_HideHitMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerReticleWidget::execHideHitMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideHitMarker();
	P_NATIVE_END;
}
// End Class UPlayerReticleWidget Function HideHitMarker

// Begin Class UPlayerReticleWidget Function ShowHitMarker
struct Z_Construct_UFunction_UPlayerReticleWidget_ShowHitMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserInterface/PlayerReticleWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerReticleWidget_ShowHitMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerReticleWidget, nullptr, "ShowHitMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerReticleWidget_ShowHitMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerReticleWidget_ShowHitMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerReticleWidget_ShowHitMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerReticleWidget_ShowHitMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerReticleWidget::execShowHitMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHitMarker();
	P_NATIVE_END;
}
// End Class UPlayerReticleWidget Function ShowHitMarker

// Begin Class UPlayerReticleWidget
void UPlayerReticleWidget::StaticRegisterNativesUPlayerReticleWidget()
{
	UClass* Class = UPlayerReticleWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideHitMarker", &UPlayerReticleWidget::execHideHitMarker },
		{ "ShowHitMarker", &UPlayerReticleWidget::execShowHitMarker },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerReticleWidget);
UClass* Z_Construct_UClass_UPlayerReticleWidget_NoRegister()
{
	return UPlayerReticleWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerReticleWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/PlayerReticleWidget.h" },
		{ "ModuleRelativePath", "UserInterface/PlayerReticleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainReticle_MetaData[] = {
		{ "Category", "PlayerReticleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerReticleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitMarker_MetaData[] = {
		{ "Category", "PlayerReticleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerReticleWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainReticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerReticleWidget_HideHitMarker, "HideHitMarker" }, // 1962115829
		{ &Z_Construct_UFunction_UPlayerReticleWidget_ShowHitMarker, "ShowHitMarker" }, // 3286906956
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerReticleWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerReticleWidget_Statics::NewProp_MainReticle = { "MainReticle", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerReticleWidget, MainReticle), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainReticle_MetaData), NewProp_MainReticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerReticleWidget_Statics::NewProp_HitMarker = { "HitMarker", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerReticleWidget, HitMarker), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitMarker_MetaData), NewProp_HitMarker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerReticleWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerReticleWidget_Statics::NewProp_MainReticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerReticleWidget_Statics::NewProp_HitMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerReticleWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerReticleWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerReticleWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerReticleWidget_Statics::ClassParams = {
	&UPlayerReticleWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerReticleWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerReticleWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerReticleWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerReticleWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerReticleWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerReticleWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerReticleWidget.OuterSingleton, Z_Construct_UClass_UPlayerReticleWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerReticleWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UPlayerReticleWidget>()
{
	return UPlayerReticleWidget::StaticClass();
}
UPlayerReticleWidget::UPlayerReticleWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerReticleWidget);
UPlayerReticleWidget::~UPlayerReticleWidget() {}
// End Class UPlayerReticleWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerReticleWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerReticleWidget, UPlayerReticleWidget::StaticClass, TEXT("UPlayerReticleWidget"), &Z_Registration_Info_UClass_UPlayerReticleWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerReticleWidget), 58445534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerReticleWidget_h_622297154(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerReticleWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerReticleWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
