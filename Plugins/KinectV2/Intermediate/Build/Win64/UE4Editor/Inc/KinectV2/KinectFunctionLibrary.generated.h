// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class EKinectStreamType : uint8;
struct FBoneOrientationDoubleExponentialFilter;
struct FBody;
class UKinectEventManager;
struct FTransform;
struct FVector;
struct FVector2D;
struct FQuat;
struct FRotator;
struct FKinectBone;
struct FVector4;
struct FBodyFrame;
#ifdef KINECTV2_KinectFunctionLibrary_generated_h
#error "KinectFunctionLibrary.generated.h already included, missing '#pragma once' in KinectFunctionLibrary.h"
#endif
#define KINECTV2_KinectFunctionLibrary_generated_h

#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_201_GENERATED_BODY \
	friend KINECTV2_API class UScriptStruct* Z_Construct_UScriptStruct_FBodyFrame(); \
	static class UScriptStruct* StaticStruct();


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_135_GENERATED_BODY \
	friend KINECTV2_API class UScriptStruct* Z_Construct_UScriptStruct_FBody(); \
	static class UScriptStruct* StaticStruct();


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_89_GENERATED_BODY \
	friend KINECTV2_API class UScriptStruct* Z_Construct_UScriptStruct_FKinectBone(); \
	static class UScriptStruct* StaticStruct();


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMapColorFrameToDepthSpace) \
	{ \
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_InTexture); \
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_DepthTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UKinectFunctionLibrary::MapColorFrameToDepthSpace(Z_Param_Out_InTexture,Z_Param_Out_DepthTexture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStreamTexture) \
	{ \
		P_GET_ENUM(EKinectStreamType,Z_Param_StreamType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UKinectFunctionLibrary::CreateStreamTexture(EKinectStreamType(Z_Param_StreamType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSmoothedJoint) \
	{ \
		P_GET_STRUCT_REF(FBoneOrientationDoubleExponentialFilter,Z_Param_Out_InFilter); \
		P_GET_STRUCT_REF(FBody,Z_Param_Out_InBody); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBody*)Z_Param__Result=UKinectFunctionLibrary::GetSmoothedJoint(Z_Param_Out_InFilter,Z_Param_Out_InBody); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdownSensor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::ShutdownSensor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSensor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::StartSensor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKinectEventManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UKinectEventManager**)Z_Param__Result=UKinectFunctionLibrary::GetKinectEventManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMirrorKinectSkeleton) \
	{ \
		P_GET_STRUCT_REF(FBody,Z_Param_Out_BodyToMirror); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PosLocScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTransform>*)Z_Param__Result=UKinectFunctionLibrary::MirrorKinectSkeleton(Z_Param_Out_BodyToMirror,Z_Param_PosLocScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneFTransformRelToBone) \
	{ \
		P_GET_STRUCT(FBody,Z_Param_TheBody); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TheJointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ComparedToJoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKinectFunctionLibrary::GetBoneFTransformRelToBone(Z_Param_TheBody,EJoint::Type(Z_Param_TheJointType),EJoint::Type(Z_Param_ComparedToJoint)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertBodyPointToScreenPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BodyPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ScreenSizeX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ScreenSizeY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKinectFunctionLibrary::ConvertBodyPointToScreenPoint(Z_Param_Out_BodyPoint,Z_Param_ScreenSizeX,Z_Param_ScreenSizeY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableBodyJoystick) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::EnableBodyJoystick(Z_Param_Out_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverseQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::InverseQuat(Z_Param_Out_InQuat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertRotatorToLocal) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_WorldRotator); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKinectFunctionLibrary::ConvertRotatorToLocal(Z_Param_Out_WorldRotator,Z_Param_Out_ParentTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverseTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKinectFunctionLibrary::InverseTransform(Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneParent) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_InBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EJoint::Type>*)Z_Param__Result=UKinectFunctionLibrary::GetBoneParent((TEnumAsByte<EJoint::Type>&)(Z_Param_Out_InBone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRadiansToDegrees) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_InRadians); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKinectFunctionLibrary::RadiansToDegrees(Z_Param_Out_InRadians); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegreesToRadians) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_InDegrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKinectFunctionLibrary::DegreesToRadians(Z_Param_Out_InDegrees); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatToAxisOutAngle) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAxis); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::QuatToAxisOutAngle(Z_Param_Out_InQuat,Z_Param_Out_OutAxis,Z_Param_Out_OutAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiplyQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::MultiplyQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakKinectBone) \
	{ \
		P_GET_STRUCT_REF(FKinectBone,Z_Param_Out_InKinectBone); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_JointTypeStart); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_JointTypeEnd); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Orientation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraSpacePoint); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_TrackingState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::BreakKinectBone(Z_Param_Out_InKinectBone,(TEnumAsByte<EJoint::Type>&)(Z_Param_Out_JointTypeStart),(TEnumAsByte<EJoint::Type>&)(Z_Param_Out_JointTypeEnd),Z_Param_Out_Orientation,Z_Param_Out_CameraSpacePoint,(TEnumAsByte<ETrackingState::Type>&)(Z_Param_Out_TrackingState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakBody) \
	{ \
		P_GET_STRUCT_REF(FBody,Z_Param_Out_InBody); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_BoneTransforms); \
		P_GET_UBOOL_REF(Z_Param_Out_IsTracked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::BreakBody(Z_Param_Out_InBody,Z_Param_Out_BoneTransforms,Z_Param_Out_IsTracked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeVector4) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Y); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Z); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKinectFunctionLibrary::MakeVector4(Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z,Z_Param_Out_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakVector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVector); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Y); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Z); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::BreakVector4(Z_Param_Out_InVector,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z,Z_Param_Out_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBone) \
	{ \
		P_GET_STRUCT(FBody,Z_Param_TheBody); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TheJointType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKinectBone*)Z_Param__Result=UKinectFunctionLibrary::GetBone(Z_Param_TheBody,EJoint::Type(Z_Param_TheJointType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneFTransform) \
	{ \
		P_GET_STRUCT(FBody,Z_Param_TheBody); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TheJointType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKinectFunctionLibrary::GetBoneFTransform(Z_Param_TheBody,EJoint::Type(Z_Param_TheJointType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakBodyFrame) \
	{ \
		P_GET_STRUCT_REF(FBodyFrame,Z_Param_Out_InBodyFrame); \
		P_GET_TARRAY_REF(FBody,Z_Param_Out_Bodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::BreakBodyFrame(Z_Param_Out_InBodyFrame,Z_Param_Out_Bodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatorToQuat) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TheRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::RotatorToQuat(Z_Param_Out_TheRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVec4QuatToRotator) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_TheVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKinectFunctionLibrary::Vec4QuatToRotator(Z_Param_Out_TheVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector4ToQuat) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::Conv_Vector4ToQuat(Z_Param_Out_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_QuatToRotator) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKinectFunctionLibrary::Conv_QuatToRotator(Z_Param_Out_InQuat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_x); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_y); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_z); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::BreakQuat(Z_Param_Out_InQuat,Z_Param_Out_x,Z_Param_Out_y,Z_Param_Out_z,Z_Param_Out_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeQuat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::MakeQuat(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w); \
		P_NATIVE_END; \
	}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMapColorFrameToDepthSpace) \
	{ \
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_InTexture); \
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_DepthTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UKinectFunctionLibrary::MapColorFrameToDepthSpace(Z_Param_Out_InTexture,Z_Param_Out_DepthTexture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStreamTexture) \
	{ \
		P_GET_ENUM(EKinectStreamType,Z_Param_StreamType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UKinectFunctionLibrary::CreateStreamTexture(EKinectStreamType(Z_Param_StreamType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSmoothedJoint) \
	{ \
		P_GET_STRUCT_REF(FBoneOrientationDoubleExponentialFilter,Z_Param_Out_InFilter); \
		P_GET_STRUCT_REF(FBody,Z_Param_Out_InBody); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBody*)Z_Param__Result=UKinectFunctionLibrary::GetSmoothedJoint(Z_Param_Out_InFilter,Z_Param_Out_InBody); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdownSensor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::ShutdownSensor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSensor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::StartSensor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKinectEventManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UKinectEventManager**)Z_Param__Result=UKinectFunctionLibrary::GetKinectEventManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMirrorKinectSkeleton) \
	{ \
		P_GET_STRUCT_REF(FBody,Z_Param_Out_BodyToMirror); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PosLocScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTransform>*)Z_Param__Result=UKinectFunctionLibrary::MirrorKinectSkeleton(Z_Param_Out_BodyToMirror,Z_Param_PosLocScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneFTransformRelToBone) \
	{ \
		P_GET_STRUCT(FBody,Z_Param_TheBody); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TheJointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ComparedToJoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKinectFunctionLibrary::GetBoneFTransformRelToBone(Z_Param_TheBody,EJoint::Type(Z_Param_TheJointType),EJoint::Type(Z_Param_ComparedToJoint)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertBodyPointToScreenPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BodyPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ScreenSizeX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ScreenSizeY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKinectFunctionLibrary::ConvertBodyPointToScreenPoint(Z_Param_Out_BodyPoint,Z_Param_ScreenSizeX,Z_Param_ScreenSizeY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableBodyJoystick) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::EnableBodyJoystick(Z_Param_Out_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverseQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::InverseQuat(Z_Param_Out_InQuat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertRotatorToLocal) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_WorldRotator); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKinectFunctionLibrary::ConvertRotatorToLocal(Z_Param_Out_WorldRotator,Z_Param_Out_ParentTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverseTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKinectFunctionLibrary::InverseTransform(Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneParent) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_InBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EJoint::Type>*)Z_Param__Result=UKinectFunctionLibrary::GetBoneParent((TEnumAsByte<EJoint::Type>&)(Z_Param_Out_InBone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRadiansToDegrees) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_InRadians); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKinectFunctionLibrary::RadiansToDegrees(Z_Param_Out_InRadians); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegreesToRadians) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_InDegrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKinectFunctionLibrary::DegreesToRadians(Z_Param_Out_InDegrees); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatToAxisOutAngle) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAxis); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::QuatToAxisOutAngle(Z_Param_Out_InQuat,Z_Param_Out_OutAxis,Z_Param_Out_OutAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiplyQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::MultiplyQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakKinectBone) \
	{ \
		P_GET_STRUCT_REF(FKinectBone,Z_Param_Out_InKinectBone); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_JointTypeStart); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_JointTypeEnd); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Orientation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraSpacePoint); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_TrackingState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::BreakKinectBone(Z_Param_Out_InKinectBone,(TEnumAsByte<EJoint::Type>&)(Z_Param_Out_JointTypeStart),(TEnumAsByte<EJoint::Type>&)(Z_Param_Out_JointTypeEnd),Z_Param_Out_Orientation,Z_Param_Out_CameraSpacePoint,(TEnumAsByte<ETrackingState::Type>&)(Z_Param_Out_TrackingState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakBody) \
	{ \
		P_GET_STRUCT_REF(FBody,Z_Param_Out_InBody); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_BoneTransforms); \
		P_GET_UBOOL_REF(Z_Param_Out_IsTracked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::BreakBody(Z_Param_Out_InBody,Z_Param_Out_BoneTransforms,Z_Param_Out_IsTracked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeVector4) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Y); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Z); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKinectFunctionLibrary::MakeVector4(Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z,Z_Param_Out_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakVector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVector); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Y); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Z); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::BreakVector4(Z_Param_Out_InVector,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z,Z_Param_Out_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBone) \
	{ \
		P_GET_STRUCT(FBody,Z_Param_TheBody); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TheJointType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKinectBone*)Z_Param__Result=UKinectFunctionLibrary::GetBone(Z_Param_TheBody,EJoint::Type(Z_Param_TheJointType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneFTransform) \
	{ \
		P_GET_STRUCT(FBody,Z_Param_TheBody); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TheJointType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKinectFunctionLibrary::GetBoneFTransform(Z_Param_TheBody,EJoint::Type(Z_Param_TheJointType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakBodyFrame) \
	{ \
		P_GET_STRUCT_REF(FBodyFrame,Z_Param_Out_InBodyFrame); \
		P_GET_TARRAY_REF(FBody,Z_Param_Out_Bodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::BreakBodyFrame(Z_Param_Out_InBodyFrame,Z_Param_Out_Bodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatorToQuat) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TheRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::RotatorToQuat(Z_Param_Out_TheRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVec4QuatToRotator) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_TheVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKinectFunctionLibrary::Vec4QuatToRotator(Z_Param_Out_TheVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector4ToQuat) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::Conv_Vector4ToQuat(Z_Param_Out_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_QuatToRotator) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKinectFunctionLibrary::Conv_QuatToRotator(Z_Param_Out_InQuat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_x); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_y); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_z); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKinectFunctionLibrary::BreakQuat(Z_Param_Out_InQuat,Z_Param_Out_x,Z_Param_Out_y,Z_Param_Out_z,Z_Param_Out_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeQuat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::MakeQuat(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w); \
		P_NATIVE_END; \
	}


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKinectFunctionLibrary(); \
	friend KINECTV2_API class UClass* Z_Construct_UClass_UKinectFunctionLibrary(); \
public: \
	DECLARE_CLASS(UKinectFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/KinectV2"), NO_API) \
	DECLARE_SERIALIZER(UKinectFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_INCLASS \
private: \
	static void StaticRegisterNativesUKinectFunctionLibrary(); \
	friend KINECTV2_API class UClass* Z_Construct_UClass_UKinectFunctionLibrary(); \
public: \
	DECLARE_CLASS(UKinectFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/KinectV2"), NO_API) \
	DECLARE_SERIALIZER(UKinectFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKinectFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectFunctionLibrary(UKinectFunctionLibrary&&); \
	NO_API UKinectFunctionLibrary(const UKinectFunctionLibrary&); \
public:


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKinectFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectFunctionLibrary(UKinectFunctionLibrary&&); \
	NO_API UKinectFunctionLibrary(const UKinectFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectFunctionLibrary)


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_PRIVATE_PROPERTY_OFFSET
#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_274_PROLOG
#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_PRIVATE_PROPERTY_OFFSET \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_RPC_WRAPPERS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_INCLASS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_PRIVATE_PROPERTY_OFFSET \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_INCLASS_NO_PURE_DECLS \
	KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KinectFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KinectPlugins_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h


#define FOREACH_ENUM_EKINECTSTREAMTYPE(op) \
	op(EKinectStreamType::KST_Color) \
	op(EKinectStreamType::KST_Depth) \
	op(EKinectStreamType::KST_IR) \
	op(EKinectStreamType::KST_BodyIndex) 
#define FOREACH_ENUM_EHANDSTATE(op) \
	op(EHandState::HandState_Unknown) \
	op(EHandState::HandState_NotTracked) \
	op(EHandState::HandState_Open) \
	op(EHandState::HandState_Closed) \
	op(EHandState::HandState_Lasso) 
#define FOREACH_ENUM_ETRACKINGSTATE(op) \
	op(ETrackingState::TrackingState_NotTracked) \
	op(ETrackingState::TrackingState_Inferred) \
	op(ETrackingState::TrackingState_Tracked) 
#define FOREACH_ENUM_EJOINT(op) \
	op(EJoint::JointType_SpineBase) \
	op(EJoint::JointType_SpineMid) \
	op(EJoint::JointType_Neck) \
	op(EJoint::JointType_Head) \
	op(EJoint::JointType_ShoulderLeft) \
	op(EJoint::JointType_ElbowLeft) \
	op(EJoint::JointType_WristLeft) \
	op(EJoint::JointType_HandLeft) \
	op(EJoint::JointType_ShoulderRight) \
	op(EJoint::JointType_ElbowRight) \
	op(EJoint::JointType_WristRight) \
	op(EJoint::JointType_HandRight) \
	op(EJoint::JointType_HipLeft) \
	op(EJoint::JointType_KneeLeft) \
	op(EJoint::JointType_AnkleLeft) \
	op(EJoint::JointType_FootLeft) \
	op(EJoint::JointType_HipRight) \
	op(EJoint::JointType_KneeRight) \
	op(EJoint::JointType_AnkleRight) \
	op(EJoint::JointType_FootRight) \
	op(EJoint::JointType_SpineShoulder) \
	op(EJoint::JointType_HandTipLeft) \
	op(EJoint::JointType_ThumbLeft) \
	op(EJoint::JointType_HandTipRight) \
	op(EJoint::JointType_ThumbRight) \
	op(EJoint::JointType_Count) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
