// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserInterface/MasterWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatableWidget;
enum class ELayerType : uint8;
#ifdef GOOBUNGA_MasterWidget_generated_h
#error "MasterWidget.generated.h already included, missing '#pragma once' in MasterWidget.h"
#endif
#define GOOBUNGA_MasterWidget_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPushWidget);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMasterWidget(); \
	friend struct Z_Construct_UClass_UMasterWidget_Statics; \
public: \
	DECLARE_CLASS(UMasterWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UMasterWidget)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMasterWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMasterWidget(UMasterWidget&&); \
	UMasterWidget(const UMasterWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMasterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMasterWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMasterWidget) \
	NO_API virtual ~UMasterWidget();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_19_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_22_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UMasterWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h


#define FOREACH_ENUM_ELAYERTYPE(op) \
	op(ELayerType::Game) \
	op(ELayerType::Menu) \
	op(ELayerType::Prompt) \
	op(ELayerType::System) 

enum class ELayerType : uint8;
template<> struct TIsUEnumClass<ELayerType> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<ELayerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
