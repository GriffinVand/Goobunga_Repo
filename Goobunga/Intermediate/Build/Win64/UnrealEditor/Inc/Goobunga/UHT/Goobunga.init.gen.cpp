// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoobunga_init() {}
	GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature();
	GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnFirstPatternCalled__DelegateSignature();
	GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnMasterWidgetCreated__DelegateSignature();
	GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnNextPatternCalled__DelegateSignature();
	GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature();
	GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnPatternFinished__DelegateSignature();
	GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnReloadCompleted__DelegateSignature();
	GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature();
	GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature();
	GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Goobunga;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Goobunga()
	{
		if (!Z_Registration_Info_UPackage__Script_Goobunga.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Goobunga_OnFirstPatternCalled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Goobunga_OnMasterWidgetCreated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Goobunga_OnNextPatternCalled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Goobunga_OnObjectiveEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Goobunga_OnPatternFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Goobunga_OnReloadCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UQuestManagerComponent_OnEnemyKilled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UQuestManagerComponent_OnItemCollected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UQuestManagerComponent_OnLevelCompleted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Goobunga",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE6C10A53,
				0xAC4BBB05,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Goobunga.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Goobunga.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Goobunga(Z_Construct_UPackage__Script_Goobunga, TEXT("/Script/Goobunga"), Z_Registration_Info_UPackage__Script_Goobunga, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE6C10A53, 0xAC4BBB05));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
