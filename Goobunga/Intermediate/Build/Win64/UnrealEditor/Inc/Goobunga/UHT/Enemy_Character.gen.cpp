// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemy_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GOOBUNGA_API UClass* Z_Construct_UClass_AEnemy_Character();
GOOBUNGA_API UClass* Z_Construct_UClass_AEnemy_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AEnemy_Character
void AEnemy_Character::StaticRegisterNativesAEnemy_Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_Character);
UClass* Z_Construct_UClass_AEnemy_Character_NoRegister()
{
	return AEnemy_Character::StaticClass();
}
struct Z_Construct_UClass_AEnemy_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy_Character.h" },
		{ "ModuleRelativePath", "Enemy_Character.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemy_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Character_Statics::ClassParams = {
	&AEnemy_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_Character()
{
	if (!Z_Registration_Info_UClass_AEnemy_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_Character.OuterSingleton, Z_Construct_UClass_AEnemy_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_Character.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AEnemy_Character>()
{
	return AEnemy_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Character);
AEnemy_Character::~AEnemy_Character() {}
// End Class AEnemy_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_Character, AEnemy_Character::StaticClass, TEXT("AEnemy_Character"), &Z_Registration_Info_UClass_AEnemy_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_Character), 3615789706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h_488230521(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
