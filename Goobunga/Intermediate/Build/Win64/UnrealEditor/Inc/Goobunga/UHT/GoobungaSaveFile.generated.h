// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PersistentData/GoobungaSaveFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_GoobungaSaveFile_generated_h
#error "GoobungaSaveFile.generated.h already included, missing '#pragma once' in GoobungaSaveFile.h"
#endif
#define GOOBUNGA_GoobungaSaveFile_generated_h

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponSaveData_Statics; \
	GOOBUNGA_API static class UScriptStruct* StaticStruct();


template<> GOOBUNGA_API UScriptStruct* StaticStruct<struct FWeaponSaveData>();

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilitySaveData_Statics; \
	GOOBUNGA_API static class UScriptStruct* StaticStruct();


template<> GOOBUNGA_API UScriptStruct* StaticStruct<struct FAbilitySaveData>();

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoobungaSaveFile(); \
	friend struct Z_Construct_UClass_UGoobungaSaveFile_Statics; \
public: \
	DECLARE_CLASS(UGoobungaSaveFile, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UGoobungaSaveFile)


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoobungaSaveFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGoobungaSaveFile(UGoobungaSaveFile&&); \
	UGoobungaSaveFile(const UGoobungaSaveFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoobungaSaveFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoobungaSaveFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoobungaSaveFile) \
	NO_API virtual ~UGoobungaSaveFile();


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_28_PROLOG
#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UGoobungaSaveFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
