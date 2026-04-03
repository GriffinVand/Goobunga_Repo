// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PersistentData/PersistentDataInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_PersistentDataInterface_generated_h
#error "PersistentDataInterface.generated.h already included, missing '#pragma once' in PersistentDataInterface.h"
#endif
#define GOOBUNGA_PersistentDataInterface_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersistentDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPersistentDataInterface(UPersistentDataInterface&&); \
	UPersistentDataInterface(const UPersistentDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersistentDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersistentDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersistentDataInterface) \
	NO_API virtual ~UPersistentDataInterface();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPersistentDataInterface(); \
	friend struct Z_Construct_UClass_UPersistentDataInterface_Statics; \
public: \
	DECLARE_CLASS(UPersistentDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UPersistentDataInterface)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPersistentDataInterface() {} \
public: \
	typedef UPersistentDataInterface UClassType; \
	typedef IPersistentDataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_9_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UPersistentDataInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
