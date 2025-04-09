// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FireableCallables.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_FireableCallables_generated_h
#error "FireableCallables.generated.h already included, missing '#pragma once' in FireableCallables.h"
#endif
#define GOOBUNGA_FireableCallables_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GOOBUNGA_API UFireableCallables(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFireableCallables(UFireableCallables&&); \
	UFireableCallables(const UFireableCallables&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GOOBUNGA_API, UFireableCallables); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireableCallables); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFireableCallables) \
	GOOBUNGA_API virtual ~UFireableCallables();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFireableCallables(); \
	friend struct Z_Construct_UClass_UFireableCallables_Statics; \
public: \
	DECLARE_CLASS(UFireableCallables, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Goobunga"), GOOBUNGA_API) \
	DECLARE_SERIALIZER(UFireableCallables)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFireableCallables() {} \
public: \
	typedef UFireableCallables UClassType; \
	typedef IFireableCallables ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_11_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UFireableCallables>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
