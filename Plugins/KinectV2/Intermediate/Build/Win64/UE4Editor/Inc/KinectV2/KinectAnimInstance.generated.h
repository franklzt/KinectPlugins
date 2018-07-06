// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FBody;
#ifdef KINECTV2_KinectAnimInstance_generated_h
#error "KinectAnimInstance.generated.h already included, missing '#pragma once' in KinectAnimInstance.h"
#endif
#define KINECTV2_KinectAnimInstance_generated_h

#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_13_GENERATED_BODY \
	friend KINECTV2_API class UScriptStruct* Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment(); \
	KINECTV2_API static class UScriptStruct* StaticStruct();


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveBoneOverrideByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBoneOverrideByName(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOverrideEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOverrideEnabled(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverrideBoneRotationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FRotator,Z_Param_BoneBoneRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverrideBoneRotationByName(Z_Param_BoneName,Z_Param_BoneBoneRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKinectBodyEvent) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_KinectPlayer); \
		P_GET_STRUCT_REF(FBody,Z_Param_Out_Skeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnKinectBodyEvent(EAutoReceiveInput::Type(Z_Param_KinectPlayer),Z_Param_Out_Skeleton); \
		P_NATIVE_END; \
	}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveBoneOverrideByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBoneOverrideByName(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOverrideEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOverrideEnabled(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverrideBoneRotationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FRotator,Z_Param_BoneBoneRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverrideBoneRotationByName(Z_Param_BoneName,Z_Param_BoneBoneRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKinectBodyEvent) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_KinectPlayer); \
		P_GET_STRUCT_REF(FBody,Z_Param_Out_Skeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnKinectBodyEvent(EAutoReceiveInput::Type(Z_Param_KinectPlayer),Z_Param_Out_Skeleton); \
		P_NATIVE_END; \
	}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKinectAnimInstance(); \
	friend KINECTV2_API class UClass* Z_Construct_UClass_UKinectAnimInstance(); \
public: \
	DECLARE_CLASS(UKinectAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/KinectV2"), KINECTV2_API) \
	DECLARE_SERIALIZER(UKinectAnimInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUKinectAnimInstance(); \
	friend KINECTV2_API class UClass* Z_Construct_UClass_UKinectAnimInstance(); \
public: \
	DECLARE_CLASS(UKinectAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/KinectV2"), KINECTV2_API) \
	DECLARE_SERIALIZER(UKinectAnimInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KINECTV2_API UKinectAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KINECTV2_API, UKinectAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KINECTV2_API UKinectAnimInstance(UKinectAnimInstance&&); \
	KINECTV2_API UKinectAnimInstance(const UKinectAnimInstance&); \
public:


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KINECTV2_API UKinectAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KINECTV2_API UKinectAnimInstance(UKinectAnimInstance&&); \
	KINECTV2_API UKinectAnimInstance(const UKinectAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KINECTV2_API, UKinectAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectAnimInstance)


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_PRIVATE_PROPERTY_OFFSET
#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_48_PROLOG
#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_PRIVATE_PROPERTY_OFFSET \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_RPC_WRAPPERS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_INCLASS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_PRIVATE_PROPERTY_OFFSET \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_INCLASS_NO_PURE_DECLS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KinectAnimInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
