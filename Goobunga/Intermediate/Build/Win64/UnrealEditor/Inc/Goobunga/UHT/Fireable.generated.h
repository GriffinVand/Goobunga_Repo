// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fireable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_Fireable_generated_h
#error "Fireable.generated.h already included, missing '#pragma once' in Fireable.h"
#endif
#define GOOBUNGA_Fireable_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GOOBUNGA_API UFireable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFireable(UFireable&&); \
	UFireable(const UFireable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GOOBUNGA_API, UFireable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFireable) \
	GOOBUNGA_API virtual ~UFireable();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFireable(); \
	friend struct Z_Construct_UClass_UFireable_Statics; \
public: \
	DECLARE_CLASS(UFireable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Goobunga"), GOOBUNGA_API) \
	DECLARE_SERIALIZER(UFireable)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFireable() {} \
public: \
	typedef UFireable UClassType; \
	typedef IFireable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_10_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UFireable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Fireable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
