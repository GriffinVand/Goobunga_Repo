// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/LaunchInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_LaunchInterface_generated_h
#error "LaunchInterface.generated.h already included, missing '#pragma once' in LaunchInterface.h"
#endif
#define GOOBUNGA_LaunchInterface_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULaunchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULaunchInterface(ULaunchInterface&&); \
	ULaunchInterface(const ULaunchInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULaunchInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULaunchInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULaunchInterface) \
	NO_API virtual ~ULaunchInterface();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULaunchInterface(); \
	friend struct Z_Construct_UClass_ULaunchInterface_Statics; \
public: \
	DECLARE_CLASS(ULaunchInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(ULaunchInterface)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILaunchInterface() {} \
public: \
	typedef ULaunchInterface UClassType; \
	typedef ILaunchInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_10_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class ULaunchInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
