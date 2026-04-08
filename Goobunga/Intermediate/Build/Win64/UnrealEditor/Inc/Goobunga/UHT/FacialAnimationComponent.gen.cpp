// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/FacialAnimationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacialAnimationComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UFacialAnimationComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UFacialAnimationComponent_NoRegister();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FFacialAnimationStruct();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin ScriptStruct FFacialAnimationStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FacialAnimationStruct;
class UScriptStruct* FFacialAnimationStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FacialAnimationStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FacialAnimationStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFacialAnimationStruct, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("FacialAnimationStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FacialAnimationStruct.OuterSingleton;
}
template<> GOOBUNGA_API UScriptStruct* StaticStruct<FFacialAnimationStruct>()
{
	return FFacialAnimationStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "Category", "FacialAnimationStruct" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "FacialAnimationStruct" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFrame_MetaData[] = {
		{ "Category", "FacialAnimationStruct" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameBuffer_MetaData[] = {
		{ "Category", "FacialAnimationStruct" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Looping_MetaData[] = {
		{ "Category", "FacialAnimationStruct" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameBuffer;
	static void NewProp_Looping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFacialAnimationStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFacialAnimationStruct, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFacialAnimationStruct, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_CurrentFrame = { "CurrentFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFacialAnimationStruct, CurrentFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFrame_MetaData), NewProp_CurrentFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_FrameBuffer = { "FrameBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFacialAnimationStruct, FrameBuffer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameBuffer_MetaData), NewProp_FrameBuffer_MetaData) };
void Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_Looping_SetBit(void* Obj)
{
	((FFacialAnimationStruct*)Obj)->Looping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFacialAnimationStruct), &Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Looping_MetaData), NewProp_Looping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_Textures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_CurrentFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_FrameBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewProp_Looping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	&NewStructOps,
	"FacialAnimationStruct",
	Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::PropPointers),
	sizeof(FFacialAnimationStruct),
	alignof(FFacialAnimationStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFacialAnimationStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FacialAnimationStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FacialAnimationStruct.InnerSingleton, Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FacialAnimationStruct.InnerSingleton;
}
// End ScriptStruct FFacialAnimationStruct

// Begin Class UFacialAnimationComponent Function PlayAnimation
struct Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics
{
	struct FacialAnimationComponent_eventPlayAnimation_Parms
	{
		FName AnimationName;
		bool CanLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static void NewProp_CanLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FacialAnimationComponent_eventPlayAnimation_Parms, AnimationName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::NewProp_CanLoop_SetBit(void* Obj)
{
	((FacialAnimationComponent_eventPlayAnimation_Parms*)Obj)->CanLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::NewProp_CanLoop = { "CanLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FacialAnimationComponent_eventPlayAnimation_Parms), &Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::NewProp_CanLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::NewProp_CanLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFacialAnimationComponent, nullptr, "PlayAnimation", nullptr, nullptr, Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::FacialAnimationComponent_eventPlayAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::FacialAnimationComponent_eventPlayAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFacialAnimationComponent::execPlayAnimation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimationName);
	P_GET_UBOOL(Z_Param_CanLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAnimation(Z_Param_AnimationName,Z_Param_CanLoop);
	P_NATIVE_END;
}
// End Class UFacialAnimationComponent Function PlayAnimation

// Begin Class UFacialAnimationComponent Function StopAnimation
struct Z_Construct_UFunction_UFacialAnimationComponent_StopAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFacialAnimationComponent_StopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFacialAnimationComponent, nullptr, "StopAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFacialAnimationComponent_StopAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFacialAnimationComponent_StopAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFacialAnimationComponent_StopAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFacialAnimationComponent_StopAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFacialAnimationComponent::execStopAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAnimation();
	P_NATIVE_END;
}
// End Class UFacialAnimationComponent Function StopAnimation

// Begin Class UFacialAnimationComponent
void UFacialAnimationComponent::StaticRegisterNativesUFacialAnimationComponent()
{
	UClass* Class = UFacialAnimationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayAnimation", &UFacialAnimationComponent::execPlayAnimation },
		{ "StopAnimation", &UFacialAnimationComponent::execStopAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFacialAnimationComponent);
UClass* Z_Construct_UClass_UFacialAnimationComponent_NoRegister()
{
	return UFacialAnimationComponent::StaticClass();
}
struct Z_Construct_UClass_UFacialAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FacialAnimationComponent.h" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "FacialAnimationComponent" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAnimation_MetaData[] = {
		{ "Category", "FacialAnimationComponent" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[] = {
		{ "Category", "FacialAnimationComponent" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAnimation_MetaData[] = {
		{ "Category", "FacialAnimationComponent" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Looping_MetaData[] = {
		{ "Category", "FacialAnimationComponent" },
		{ "ModuleRelativePath", "FacialAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultAnimation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Animations_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Animations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Animations;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentAnimation;
	static void NewProp_Looping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFacialAnimationComponent_PlayAnimation, "PlayAnimation" }, // 693811563
		{ &Z_Construct_UFunction_UFacialAnimationComponent_StopAnimation, "StopAnimation" }, // 2336298746
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFacialAnimationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFacialAnimationComponent, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_DefaultAnimation = { "DefaultAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFacialAnimationComponent, DefaultAnimation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAnimation_MetaData), NewProp_DefaultAnimation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Animations_ValueProp = { "Animations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFacialAnimationStruct, METADATA_PARAMS(0, nullptr) }; // 529807409
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Animations_Key_KeyProp = { "Animations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFacialAnimationComponent, Animations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animations_MetaData), NewProp_Animations_MetaData) }; // 529807409
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_CurrentAnimation = { "CurrentAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFacialAnimationComponent, CurrentAnimation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAnimation_MetaData), NewProp_CurrentAnimation_MetaData) };
void Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Looping_SetBit(void* Obj)
{
	((UFacialAnimationComponent*)Obj)->Looping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFacialAnimationComponent), &Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Looping_MetaData), NewProp_Looping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFacialAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_DefaultAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Animations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Animations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Animations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_CurrentAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialAnimationComponent_Statics::NewProp_Looping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFacialAnimationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFacialAnimationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFacialAnimationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFacialAnimationComponent_Statics::ClassParams = {
	&UFacialAnimationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFacialAnimationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFacialAnimationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFacialAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFacialAnimationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFacialAnimationComponent()
{
	if (!Z_Registration_Info_UClass_UFacialAnimationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFacialAnimationComponent.OuterSingleton, Z_Construct_UClass_UFacialAnimationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFacialAnimationComponent.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UFacialAnimationComponent>()
{
	return UFacialAnimationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFacialAnimationComponent);
UFacialAnimationComponent::~UFacialAnimationComponent() {}
// End Class UFacialAnimationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFacialAnimationStruct::StaticStruct, Z_Construct_UScriptStruct_FFacialAnimationStruct_Statics::NewStructOps, TEXT("FacialAnimationStruct"), &Z_Registration_Info_UScriptStruct_FacialAnimationStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFacialAnimationStruct), 529807409U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFacialAnimationComponent, UFacialAnimationComponent::StaticClass, TEXT("UFacialAnimationComponent"), &Z_Registration_Info_UClass_UFacialAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFacialAnimationComponent), 2062142409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_1493055942(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_FacialAnimationComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
