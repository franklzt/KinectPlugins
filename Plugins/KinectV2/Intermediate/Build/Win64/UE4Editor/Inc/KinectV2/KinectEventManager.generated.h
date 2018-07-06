// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBodyFrame;
struct FBody;
class UTexture2D;
#ifdef KINECTV2_KinectEventManager_generated_h
#error "KinectEventManager.generated.h already included, missing '#pragma once' in KinectEventManager.h"
#endif
#define KINECTV2_KinectEventManager_generated_h

#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_32_DELEGATE \
struct _Script_KinectV2_eventKinSkeletonEvent_Parms \
{ \
	TEnumAsByte<EKinectPlayer::Type> KinectPlayer; \
}; \
static inline void FKinSkeletonEvent_DelegateWrapper(const FMulticastScriptDelegate& KinSkeletonEvent, EKinectPlayer::Type KinectPlayer) \
{ \
	_Script_KinectV2_eventKinSkeletonEvent_Parms Parms; \
	Parms.KinectPlayer=KinectPlayer; \
	KinSkeletonEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_31_DELEGATE \
struct _Script_KinectV2_eventKinectRawBodyFrameEvent_Parms \
{ \
	FBodyFrame BodyFrame; \
}; \
static inline void FKinectRawBodyFrameEvent_DelegateWrapper(const FMulticastScriptDelegate& KinectRawBodyFrameEvent, FBodyFrame const& BodyFrame) \
{ \
	_Script_KinectV2_eventKinectRawBodyFrameEvent_Parms Parms; \
	Parms.BodyFrame=BodyFrame; \
	KinectRawBodyFrameEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_30_DELEGATE \
struct _Script_KinectV2_eventKinectBodyEventSigneture_Parms \
{ \
	TEnumAsByte<EAutoReceiveInput::Type> KinectPlayer; \
	FBody Skeleton; \
	int32 SkeletonIndex; \
}; \
static inline void FKinectBodyEventSigneture_DelegateWrapper(const FMulticastScriptDelegate& KinectBodyEventSigneture, EAutoReceiveInput::Type KinectPlayer, FBody const& Skeleton, int32 SkeletonIndex) \
{ \
	_Script_KinectV2_eventKinectBodyEventSigneture_Parms Parms; \
	Parms.KinectPlayer=KinectPlayer; \
	Parms.Skeleton=Skeleton; \
	Parms.SkeletonIndex=SkeletonIndex; \
	KinectBodyEventSigneture.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_29_DELEGATE \
struct _Script_KinectV2_eventNewKinectBodyIndexFrameEvent_Parms \
{ \
	const UTexture2D* BodyIndexFrameTexture; \
}; \
static inline void FNewKinectBodyIndexFrameEvent_DelegateWrapper(const FMulticastScriptDelegate& NewKinectBodyIndexFrameEvent, const UTexture2D* BodyIndexFrameTexture) \
{ \
	_Script_KinectV2_eventNewKinectBodyIndexFrameEvent_Parms Parms; \
	Parms.BodyIndexFrameTexture=BodyIndexFrameTexture; \
	NewKinectBodyIndexFrameEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_28_DELEGATE \
struct _Script_KinectV2_eventNewKinectInfraredFrameEvent_Parms \
{ \
	const UTexture2D* InfraredFrameTexture; \
}; \
static inline void FNewKinectInfraredFrameEvent_DelegateWrapper(const FMulticastScriptDelegate& NewKinectInfraredFrameEvent, const UTexture2D* InfraredFrameTexture) \
{ \
	_Script_KinectV2_eventNewKinectInfraredFrameEvent_Parms Parms; \
	Parms.InfraredFrameTexture=InfraredFrameTexture; \
	NewKinectInfraredFrameEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_27_DELEGATE \
struct _Script_KinectV2_eventNewKinectDepthFrameEvent_Parms \
{ \
	const UTexture2D* DepthFrameTexture; \
}; \
static inline void FNewKinectDepthFrameEvent_DelegateWrapper(const FMulticastScriptDelegate& NewKinectDepthFrameEvent, const UTexture2D* DepthFrameTexture) \
{ \
	_Script_KinectV2_eventNewKinectDepthFrameEvent_Parms Parms; \
	Parms.DepthFrameTexture=DepthFrameTexture; \
	NewKinectDepthFrameEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_26_DELEGATE \
struct _Script_KinectV2_eventNewKinectColorFrameEvent_Parms \
{ \
	const UTexture2D* ColorFrameTexture; \
}; \
static inline void FNewKinectColorFrameEvent_DelegateWrapper(const FMulticastScriptDelegate& NewKinectColorFrameEvent, const UTexture2D* ColorFrameTexture) \
{ \
	_Script_KinectV2_eventNewKinectColorFrameEvent_Parms Parms; \
	Parms.ColorFrameTexture=ColorFrameTexture; \
	NewKinectColorFrameEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_25_DELEGATE \
struct _Script_KinectV2_eventSkeletonLostEvent_Parms \
{ \
	TEnumAsByte<EAutoReceiveInput::Type> KinectPlayerLost; \
	int32 SkeletonIndex; \
}; \
static inline void FSkeletonLostEvent_DelegateWrapper(const FMulticastScriptDelegate& SkeletonLostEvent, EAutoReceiveInput::Type KinectPlayerLost, int32 SkeletonIndex) \
{ \
	_Script_KinectV2_eventSkeletonLostEvent_Parms Parms; \
	Parms.KinectPlayerLost=KinectPlayerLost; \
	Parms.SkeletonIndex=SkeletonIndex; \
	SkeletonLostEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_24_DELEGATE \
struct _Script_KinectV2_eventNewSkeletonDetectedEvent_Parms \
{ \
	FBody NewSkeleton; \
	int32 SkeletonIndex; \
}; \
static inline void FNewSkeletonDetectedEvent_DelegateWrapper(const FMulticastScriptDelegate& NewSkeletonDetectedEvent, FBody const& NewSkeleton, int32 SkeletonIndex) \
{ \
	_Script_KinectV2_eventNewSkeletonDetectedEvent_Parms Parms; \
	Parms.NewSkeleton=NewSkeleton; \
	Parms.SkeletonIndex=SkeletonIndex; \
	NewSkeletonDetectedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableMouseControl) \
	{ \
		P_GET_UBOOL(Z_Param_MouseControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableMouseControl(Z_Param_MouseControl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssigneSkeletonToPlayer) \
	{ \
		P_GET_STRUCT_REF(FBody,Z_Param_Out_Body); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_SetAsMouseController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssigneSkeletonToPlayer(Z_Param_Out_Body,EAutoReceiveInput::Type(Z_Param_Player),Z_Param_SetAsMouseController); \
		P_NATIVE_END; \
	}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableMouseControl) \
	{ \
		P_GET_UBOOL(Z_Param_MouseControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableMouseControl(Z_Param_MouseControl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssigneSkeletonToPlayer) \
	{ \
		P_GET_STRUCT_REF(FBody,Z_Param_Out_Body); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_SetAsMouseController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssigneSkeletonToPlayer(Z_Param_Out_Body,EAutoReceiveInput::Type(Z_Param_Player),Z_Param_SetAsMouseController); \
		P_NATIVE_END; \
	}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_EVENT_PARMS \
	struct KinectEventManager_eventNewSkeletonDetected_Parms \
	{ \
		FBody Skeleton; \
	}; \
	struct KinectEventManager_eventSkeletonLost_Parms \
	{ \
		TEnumAsByte<EAutoReceiveInput::Type> KinectPlayer; \
		int32 SkeletonIndex; \
	};


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_CALLBACK_WRAPPERS
#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKinectEventManager(); \
	friend KINECTV2_API class UClass* Z_Construct_UClass_UKinectEventManager(); \
public: \
	DECLARE_CLASS(UKinectEventManager, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/KinectV2"), NO_API) \
	DECLARE_SERIALIZER(UKinectEventManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUKinectEventManager(); \
	friend KINECTV2_API class UClass* Z_Construct_UClass_UKinectEventManager(); \
public: \
	DECLARE_CLASS(UKinectEventManager, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/KinectV2"), NO_API) \
	DECLARE_SERIALIZER(UKinectEventManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKinectEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectEventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectEventManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectEventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectEventManager(UKinectEventManager&&); \
	NO_API UKinectEventManager(const UKinectEventManager&); \
public:


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKinectEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectEventManager(UKinectEventManager&&); \
	NO_API UKinectEventManager(const UKinectEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectEventManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectEventManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectEventManager)


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_PRIVATE_PROPERTY_OFFSET
#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_34_PROLOG \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_EVENT_PARMS


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_PRIVATE_PROPERTY_OFFSET \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_RPC_WRAPPERS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_CALLBACK_WRAPPERS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_INCLASS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_PRIVATE_PROPERTY_OFFSET \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_CALLBACK_WRAPPERS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_INCLASS_NO_PURE_DECLS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KinectEventManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectEventManager_h


#define FOREACH_ENUM_EKINECTPLAYER(op) \
	op(EKinectPlayer::Player0) \
	op(EKinectPlayer::Player1) \
	op(EKinectPlayer::Player2) \
	op(EKinectPlayer::Player3) \
	op(EKinectPlayer::Player4) \
	op(EKinectPlayer::Player5) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
