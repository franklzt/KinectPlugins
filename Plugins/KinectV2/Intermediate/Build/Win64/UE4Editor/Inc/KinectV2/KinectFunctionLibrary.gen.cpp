// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/IKinectV2PluginPCH.h"
#include "Classes/KinectFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectFunctionLibrary() {}
// Cross Module References
	KINECTV2_API UEnum* Z_Construct_UEnum_KinectV2_EKinectStreamType();
	UPackage* Z_Construct_UPackage__Script_KinectV2();
	KINECTV2_API UEnum* Z_Construct_UEnum_KinectV2_EHandState();
	KINECTV2_API UEnum* Z_Construct_UEnum_KinectV2_ETrackingState();
	KINECTV2_API UEnum* Z_Construct_UEnum_KinectV2_EJoint();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBodyFrame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBody();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FKinectBone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectFunctionLibrary_NoRegister();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBone();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectEventManager_NoRegister();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator();
// End Cross Module References
	static UEnum* EKinectStreamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KinectV2_EKinectStreamType, Z_Construct_UPackage__Script_KinectV2(), TEXT("EKinectStreamType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKinectStreamType(EKinectStreamType_StaticEnum, TEXT("/Script/KinectV2"), TEXT("EKinectStreamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KinectV2_EKinectStreamType_CRC() { return 28764070U; }
	UEnum* Z_Construct_UEnum_KinectV2_EKinectStreamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKinectStreamType"), 0, Get_Z_Construct_UEnum_KinectV2_EKinectStreamType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKinectStreamType::KST_Color", (int64)EKinectStreamType::KST_Color },
				{ "EKinectStreamType::KST_Depth", (int64)EKinectStreamType::KST_Depth },
				{ "EKinectStreamType::KST_IR", (int64)EKinectStreamType::KST_IR },
				{ "EKinectStreamType::KST_BodyIndex", (int64)EKinectStreamType::KST_BodyIndex },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "KST_BodyIndex.DisplayName", "Body Index Stream" },
				{ "KST_Color.DisplayName", "Color Stream" },
				{ "KST_Depth.DisplayName", "Depth Stream" },
				{ "KST_IR.DisplayName", "IR Stream" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KinectV2,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EKinectStreamType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EKinectStreamType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHandState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KinectV2_EHandState, Z_Construct_UPackage__Script_KinectV2(), TEXT("EHandState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandState(EHandState_StaticEnum, TEXT("/Script/KinectV2"), TEXT("EHandState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KinectV2_EHandState_CRC() { return 3551060225U; }
	UEnum* Z_Construct_UEnum_KinectV2_EHandState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandState"), 0, Get_Z_Construct_UEnum_KinectV2_EHandState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandState::HandState_Unknown", (int64)EHandState::HandState_Unknown },
				{ "EHandState::HandState_NotTracked", (int64)EHandState::HandState_NotTracked },
				{ "EHandState::HandState_Open", (int64)EHandState::HandState_Open },
				{ "EHandState::HandState_Closed", (int64)EHandState::HandState_Closed },
				{ "EHandState::HandState_Lasso", (int64)EHandState::HandState_Lasso },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HandState_Closed.DisplayName", "HandState_Closed" },
				{ "HandState_Lasso.DisplayName", "HandState_Lasso" },
				{ "HandState_NotTracked.DisplayName", "HandState_NotTracked" },
				{ "HandState_Open.DisplayName", "HandState_Open" },
				{ "HandState_Unknown.DisplayName", "HandState_Unknown" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KinectV2,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHandState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EHandState::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETrackingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KinectV2_ETrackingState, Z_Construct_UPackage__Script_KinectV2(), TEXT("ETrackingState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackingState(ETrackingState_StaticEnum, TEXT("/Script/KinectV2"), TEXT("ETrackingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KinectV2_ETrackingState_CRC() { return 2322501269U; }
	UEnum* Z_Construct_UEnum_KinectV2_ETrackingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackingState"), 0, Get_Z_Construct_UEnum_KinectV2_ETrackingState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrackingState::TrackingState_NotTracked", (int64)ETrackingState::TrackingState_NotTracked },
				{ "ETrackingState::TrackingState_Inferred", (int64)ETrackingState::TrackingState_Inferred },
				{ "ETrackingState::TrackingState_Tracked", (int64)ETrackingState::TrackingState_Tracked },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "TrackingState_Inferred.DisplayName", "TrackingState_Inferred" },
				{ "TrackingState_NotTracked.DisplayName", "TrackingState_NotTracked" },
				{ "TrackingState_Tracked.DisplayName", "TrackingState_Tracked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KinectV2,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETrackingState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETrackingState::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EJoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KinectV2_EJoint, Z_Construct_UPackage__Script_KinectV2(), TEXT("EJoint"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJoint(EJoint_StaticEnum, TEXT("/Script/KinectV2"), TEXT("EJoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KinectV2_EJoint_CRC() { return 3357798375U; }
	UEnum* Z_Construct_UEnum_KinectV2_EJoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJoint"), 0, Get_Z_Construct_UEnum_KinectV2_EJoint_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJoint::JointType_SpineBase", (int64)EJoint::JointType_SpineBase },
				{ "EJoint::JointType_SpineMid", (int64)EJoint::JointType_SpineMid },
				{ "EJoint::JointType_Neck", (int64)EJoint::JointType_Neck },
				{ "EJoint::JointType_Head", (int64)EJoint::JointType_Head },
				{ "EJoint::JointType_ShoulderLeft", (int64)EJoint::JointType_ShoulderLeft },
				{ "EJoint::JointType_ElbowLeft", (int64)EJoint::JointType_ElbowLeft },
				{ "EJoint::JointType_WristLeft", (int64)EJoint::JointType_WristLeft },
				{ "EJoint::JointType_HandLeft", (int64)EJoint::JointType_HandLeft },
				{ "EJoint::JointType_ShoulderRight", (int64)EJoint::JointType_ShoulderRight },
				{ "EJoint::JointType_ElbowRight", (int64)EJoint::JointType_ElbowRight },
				{ "EJoint::JointType_WristRight", (int64)EJoint::JointType_WristRight },
				{ "EJoint::JointType_HandRight", (int64)EJoint::JointType_HandRight },
				{ "EJoint::JointType_HipLeft", (int64)EJoint::JointType_HipLeft },
				{ "EJoint::JointType_KneeLeft", (int64)EJoint::JointType_KneeLeft },
				{ "EJoint::JointType_AnkleLeft", (int64)EJoint::JointType_AnkleLeft },
				{ "EJoint::JointType_FootLeft", (int64)EJoint::JointType_FootLeft },
				{ "EJoint::JointType_HipRight", (int64)EJoint::JointType_HipRight },
				{ "EJoint::JointType_KneeRight", (int64)EJoint::JointType_KneeRight },
				{ "EJoint::JointType_AnkleRight", (int64)EJoint::JointType_AnkleRight },
				{ "EJoint::JointType_FootRight", (int64)EJoint::JointType_FootRight },
				{ "EJoint::JointType_SpineShoulder", (int64)EJoint::JointType_SpineShoulder },
				{ "EJoint::JointType_HandTipLeft", (int64)EJoint::JointType_HandTipLeft },
				{ "EJoint::JointType_ThumbLeft", (int64)EJoint::JointType_ThumbLeft },
				{ "EJoint::JointType_HandTipRight", (int64)EJoint::JointType_HandTipRight },
				{ "EJoint::JointType_ThumbRight", (int64)EJoint::JointType_ThumbRight },
				{ "EJoint::JointType_Count", (int64)EJoint::JointType_Count },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "JointType_AnkleLeft.DisplayName", "JointType_AnkleLeft" },
				{ "JointType_AnkleRight.DisplayName", "JointType_AnkleRight" },
				{ "JointType_Count.DisplayName", "JointType_Count" },
				{ "JointType_Count.Hidden", "" },
				{ "JointType_ElbowLeft.DisplayName", "JointType_ElbowLeft" },
				{ "JointType_ElbowRight.DisplayName", "JointType_ElbowRight" },
				{ "JointType_FootLeft.DisplayName", "JointType_FootLeft" },
				{ "JointType_FootRight.DisplayName", "JointType_FootRight" },
				{ "JointType_HandLeft.DisplayName", "JointType_HandLeft" },
				{ "JointType_HandRight.DisplayName", "JointType_HandRight" },
				{ "JointType_HandTipLeft.DisplayName", "JointType_HandTipLeft" },
				{ "JointType_HandTipRight.DisplayName", "JointType_HandTipRight" },
				{ "JointType_Head.DisplayName", "JointType_Head" },
				{ "JointType_HipLeft.DisplayName", "JointType_HipLeft" },
				{ "JointType_HipRight.DisplayName", "JointType_HipRight" },
				{ "JointType_KneeLeft.DisplayName", "JointType_KneeLeft" },
				{ "JointType_KneeRight.DisplayName", "JointType_KneeRight" },
				{ "JointType_Neck.DisplayName", "JointType_Neck" },
				{ "JointType_ShoulderLeft.DisplayName", "JointType_ShoulderLeft" },
				{ "JointType_ShoulderRight.DisplayName", "JointType_ShoulderRight" },
				{ "JointType_SpineBase.DisplayName", "JointType_SpineBase" },
				{ "JointType_SpineMid.DisplayName", "JointType_SpineMid" },
				{ "JointType_SpineShoulder.DisplayName", "JointType_SpineShoulder" },
				{ "JointType_ThumbLeft.DisplayName", "JointType_ThumbLeft" },
				{ "JointType_ThumbRight.DisplayName", "JointType_ThumbRight" },
				{ "JointType_WristLeft.DisplayName", "JointType_WristLeft" },
				{ "JointType_WristRight.DisplayName", "JointType_WristRight" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KinectV2,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EJoint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EJoint::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBodyFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FBodyFrame_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyFrame, Z_Construct_UPackage__Script_KinectV2(), TEXT("BodyFrame"), sizeof(FBodyFrame), Get_Z_Construct_UScriptStruct_FBodyFrame_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyFrame(FBodyFrame::StaticStruct, TEXT("/Script/KinectV2"), TEXT("BodyFrame"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFBodyFrame
{
	FScriptStruct_KinectV2_StaticRegisterNativesFBodyFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BodyFrame")),new UScriptStruct::TCppStructOps<FBodyFrame>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFBodyFrame;
	UScriptStruct* Z_Construct_UScriptStruct_FBodyFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyFrame_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyFrame"), sizeof(FBodyFrame), Get_Z_Construct_UScriptStruct_FBodyFrame_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyFrame>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorPlane_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< The bodies" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorPlane = { UE4CodeGen_Private::EPropertyClass::Struct, "FloorPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBodyFrame, FloorPlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(NewProp_FloorPlane_MetaData, ARRAY_COUNT(NewProp_FloorPlane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bodies_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bodies = { UE4CodeGen_Private::EPropertyClass::Array, "Bodies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020055, 1, nullptr, STRUCT_OFFSET(FBodyFrame, Bodies), METADATA_PARAMS(NewProp_Bodies_MetaData, ARRAY_COUNT(NewProp_Bodies_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bodies_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Bodies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloorPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bodies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bodies_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BodyFrame",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBodyFrame),
				alignof(FBodyFrame),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyFrame_CRC() { return 2914862606U; }
class UScriptStruct* FBody::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FBody_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBody, Z_Construct_UPackage__Script_KinectV2(), TEXT("Body"), sizeof(FBody), Get_Z_Construct_UScriptStruct_FBody_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBody(FBody::StaticStruct, TEXT("/Script/KinectV2"), TEXT("Body"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFBody
{
	FScriptStruct_KinectV2_StaticRegisterNativesFBody()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Body")),new UScriptStruct::TCppStructOps<FBody>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFBody;
	UScriptStruct* Z_Construct_UScriptStruct_FBody()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBody_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Body"), sizeof(FBody), Get_Z_Construct_UScriptStruct_FBody_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBody>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTracked_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< Identifier for the tracking" },
			};
#endif
			auto NewProp_bIsTracked_SetBit = [](void* Obj){ ((FBody*)Obj)->bIsTracked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTracked = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTracked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBody), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsTracked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsTracked_MetaData, ARRAY_COUNT(NewProp_bIsTracked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_TrackingId = { UE4CodeGen_Private::EPropertyClass::UInt64, "TrackingId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBody, TrackingId), METADATA_PARAMS(NewProp_TrackingId_MetaData, ARRAY_COUNT(NewProp_TrackingId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< State of the right hand" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Lean = { UE4CodeGen_Private::EPropertyClass::Struct, "Lean", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBody, Lean), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Lean_MetaData, ARRAY_COUNT(NewProp_Lean_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandState_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< State of the left hand" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightHandState = { UE4CodeGen_Private::EPropertyClass::Byte, "RightHandState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBody, RightHandState), Z_Construct_UEnum_KinectV2_EHandState, METADATA_PARAMS(NewProp_RightHandState_MetaData, ARRAY_COUNT(NewProp_RightHandState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandState_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< State of the body tracking" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftHandState = { UE4CodeGen_Private::EPropertyClass::Byte, "LeftHandState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBody, LeftHandState), Z_Construct_UEnum_KinectV2_EHandState, METADATA_PARAMS(NewProp_LeftHandState_MetaData, ARRAY_COUNT(NewProp_LeftHandState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyTrackingState_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< The kinect bones" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyTrackingState = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyTrackingState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBody, BodyTrackingState), Z_Construct_UEnum_KinectV2_ETrackingState, METADATA_PARAMS(NewProp_BodyTrackingState_MetaData, ARRAY_COUNT(NewProp_BodyTrackingState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KinectBones_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KinectBones = { UE4CodeGen_Private::EPropertyClass::Array, "KinectBones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020055, 1, nullptr, STRUCT_OFFSET(FBody, KinectBones), METADATA_PARAMS(NewProp_KinectBones_MetaData, ARRAY_COUNT(NewProp_KinectBones_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KinectBones_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "KinectBones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKinectBone, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsTracked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackingId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Lean,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightHandState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftHandState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyTrackingState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectBones,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectBones_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Body",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBody),
				alignof(FBody),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBody_CRC() { return 422424052U; }
class UScriptStruct* FKinectBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FKinectBone_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKinectBone, Z_Construct_UPackage__Script_KinectV2(), TEXT("KinectBone"), sizeof(FKinectBone), Get_Z_Construct_UScriptStruct_FKinectBone_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKinectBone(FKinectBone::StaticStruct, TEXT("/Script/KinectV2"), TEXT("KinectBone"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFKinectBone
{
	FScriptStruct_KinectV2_StaticRegisterNativesFKinectBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KinectBone")),new UScriptStruct::TCppStructOps<FKinectBone>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFKinectBone;
	UScriptStruct* Z_Construct_UScriptStruct_FKinectBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKinectBone_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KinectBone"), sizeof(FKinectBone), Get_Z_Construct_UScriptStruct_FKinectBone_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKinectBone>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children = { UE4CodeGen_Private::EPropertyClass::Array, "Children", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FKinectBone, Children), METADATA_PARAMS(NewProp_Children_MetaData, ARRAY_COUNT(NewProp_Children_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Children_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Children", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< The joint transform" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FKinectBone, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Normal_MetaData, ARRAY_COUNT(NewProp_Normal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirroredJointTransform_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< The joint transform" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MirroredJointTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "MirroredJointTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FKinectBone, MirroredJointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_MirroredJointTransform_MetaData, ARRAY_COUNT(NewProp_MirroredJointTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTransform_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< State of the tracking" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "JointTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FKinectBone, JointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_JointTransform_MetaData, ARRAY_COUNT(NewProp_JointTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< The camera space point" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingState = { UE4CodeGen_Private::EPropertyClass::Byte, "TrackingState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FKinectBone, TrackingState), Z_Construct_UEnum_KinectV2_ETrackingState, METADATA_PARAMS(NewProp_TrackingState_MetaData, ARRAY_COUNT(NewProp_TrackingState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpacePoint_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< The orientation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraSpacePoint = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraSpacePoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FKinectBone, CameraSpacePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CameraSpacePoint_MetaData, ARRAY_COUNT(NewProp_CameraSpacePoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< The joint type end" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FKinectBone, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_Orientation_MetaData, ARRAY_COUNT(NewProp_Orientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTypeEnd_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "< The joint type start" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTypeEnd = { UE4CodeGen_Private::EPropertyClass::Byte, "JointTypeEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FKinectBone, JointTypeEnd), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(NewProp_JointTypeEnd_MetaData, ARRAY_COUNT(NewProp_JointTypeEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTypeStart_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTypeStart = { UE4CodeGen_Private::EPropertyClass::Byte, "JointTypeStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FKinectBone, JointTypeStart), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(NewProp_JointTypeStart_MetaData, ARRAY_COUNT(NewProp_JointTypeStart_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Children,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Children_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MirroredJointTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackingState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraSpacePoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointTypeEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointTypeStart,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KinectBone",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FKinectBone),
				alignof(FKinectBone),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKinectBone_CRC() { return 1101984534U; }
	void UKinectFunctionLibrary::StaticRegisterNativesUKinectFunctionLibrary()
	{
		UClass* Class = UKinectFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakBody", &UKinectFunctionLibrary::execBreakBody },
			{ "BreakBodyFrame", &UKinectFunctionLibrary::execBreakBodyFrame },
			{ "BreakKinectBone", &UKinectFunctionLibrary::execBreakKinectBone },
			{ "BreakQuat", &UKinectFunctionLibrary::execBreakQuat },
			{ "BreakVector4", &UKinectFunctionLibrary::execBreakVector4 },
			{ "Conv_QuatToRotator", &UKinectFunctionLibrary::execConv_QuatToRotator },
			{ "Conv_Vector4ToQuat", &UKinectFunctionLibrary::execConv_Vector4ToQuat },
			{ "ConvertBodyPointToScreenPoint", &UKinectFunctionLibrary::execConvertBodyPointToScreenPoint },
			{ "ConvertRotatorToLocal", &UKinectFunctionLibrary::execConvertRotatorToLocal },
			{ "CreateStreamTexture", &UKinectFunctionLibrary::execCreateStreamTexture },
			{ "DegreesToRadians", &UKinectFunctionLibrary::execDegreesToRadians },
			{ "EnableBodyJoystick", &UKinectFunctionLibrary::execEnableBodyJoystick },
			{ "GetBone", &UKinectFunctionLibrary::execGetBone },
			{ "GetBoneFTransform", &UKinectFunctionLibrary::execGetBoneFTransform },
			{ "GetBoneFTransformRelToBone", &UKinectFunctionLibrary::execGetBoneFTransformRelToBone },
			{ "GetBoneParent", &UKinectFunctionLibrary::execGetBoneParent },
			{ "GetKinectEventManager", &UKinectFunctionLibrary::execGetKinectEventManager },
			{ "GetSmoothedJoint", &UKinectFunctionLibrary::execGetSmoothedJoint },
			{ "InverseQuat", &UKinectFunctionLibrary::execInverseQuat },
			{ "InverseTransform", &UKinectFunctionLibrary::execInverseTransform },
			{ "MakeQuat", &UKinectFunctionLibrary::execMakeQuat },
			{ "MakeVector4", &UKinectFunctionLibrary::execMakeVector4 },
			{ "MapColorFrameToDepthSpace", &UKinectFunctionLibrary::execMapColorFrameToDepthSpace },
			{ "MirrorKinectSkeleton", &UKinectFunctionLibrary::execMirrorKinectSkeleton },
			{ "MultiplyQuat", &UKinectFunctionLibrary::execMultiplyQuat },
			{ "QuatToAxisOutAngle", &UKinectFunctionLibrary::execQuatToAxisOutAngle },
			{ "RadiansToDegrees", &UKinectFunctionLibrary::execRadiansToDegrees },
			{ "RotatorToQuat", &UKinectFunctionLibrary::execRotatorToQuat },
			{ "ShutdownSensor", &UKinectFunctionLibrary::execShutdownSensor },
			{ "StartSensor", &UKinectFunctionLibrary::execStartSensor },
			{ "Vec4QuatToRotator", &UKinectFunctionLibrary::execVec4QuatToRotator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody()
	{
		struct KinectFunctionLibrary_eventBreakBody_Parms
		{
			FBody InBody;
			TArray<FTransform> BoneTransforms;
			bool IsTracked;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_IsTracked_SetBit = [](void* Obj){ ((KinectFunctionLibrary_eventBreakBody_Parms*)Obj)->IsTracked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTracked = { UE4CodeGen_Private::EPropertyClass::Bool, "IsTracked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectFunctionLibrary_eventBreakBody_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsTracked_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneTransforms = { UE4CodeGen_Private::EPropertyClass::Array, "BoneTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakBody_Parms, BoneTransforms), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTransforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBody_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBody = { UE4CodeGen_Private::EPropertyClass::Struct, "InBody", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakBody_Parms, InBody), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_InBody_MetaData, ARRAY_COUNT(NewProp_InBody_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsTracked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneTransforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneTransforms_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBody,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "NativeBreakFunc", "" },
				{ "ToolTip", "Break body.\n\n@author      Leon Rosengarten\n\n@param       InBody                                  The in body.\n@param [in,out]      BoneTransforms  The bone transforms.\n@param [in,out]      IsTracked               The is tracked." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "BreakBody", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KinectFunctionLibrary_eventBreakBody_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame()
	{
		struct KinectFunctionLibrary_eventBreakBodyFrame_Parms
		{
			FBodyFrame InBodyFrame;
			TArray<FBody> Bodies;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bodies = { UE4CodeGen_Private::EPropertyClass::Array, "Bodies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakBodyFrame_Parms, Bodies), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bodies_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Bodies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBodyFrame_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBodyFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "InBodyFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakBodyFrame_Parms, InBodyFrame), Z_Construct_UScriptStruct_FBodyFrame, METADATA_PARAMS(NewProp_InBodyFrame_MetaData, ARRAY_COUNT(NewProp_InBodyFrame_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bodies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bodies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBodyFrame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "NativeBreakFunc", "" },
				{ "ToolTip", "Break body frame.\n\n@author      Leon Rosengarten\n\n@param       InBodyFrame     The in body frame.\n@param [in,out]      Bodies  The bodies." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "BreakBodyFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KinectFunctionLibrary_eventBreakBodyFrame_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone()
	{
		struct KinectFunctionLibrary_eventBreakKinectBone_Parms
		{
			FKinectBone InKinectBone;
			TEnumAsByte<EJoint::Type> JointTypeStart;
			TEnumAsByte<EJoint::Type> JointTypeEnd;
			FQuat Orientation;
			FVector CameraSpacePoint;
			TEnumAsByte<ETrackingState::Type> TrackingState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingState = { UE4CodeGen_Private::EPropertyClass::Byte, "TrackingState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, TrackingState), Z_Construct_UEnum_KinectV2_ETrackingState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraSpacePoint = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraSpacePoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, CameraSpacePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTypeEnd = { UE4CodeGen_Private::EPropertyClass::Byte, "JointTypeEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, JointTypeEnd), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTypeStart = { UE4CodeGen_Private::EPropertyClass::Byte, "JointTypeStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, JointTypeStart), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKinectBone_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKinectBone = { UE4CodeGen_Private::EPropertyClass::Struct, "InKinectBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, InKinectBone), Z_Construct_UScriptStruct_FKinectBone, METADATA_PARAMS(NewProp_InKinectBone_MetaData, ARRAY_COUNT(NewProp_InKinectBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackingState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraSpacePoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointTypeEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointTypeStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InKinectBone,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Body" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "NativeBreakFunc", "" },
				{ "ToolTip", "Break kinect bone.\n\n@author      Leon Rosengarten\n\n@param       InKinectBone                            The in kinect bone.\n@param [in,out]      JointTypeStart          The joint type start.\n@param [in,out]      JointTypeEnd            The joint type end.\n@param [in,out]      Orientation                     The orientation.\n@param [in,out]      CameraSpacePoint        The camera space point.\n@param [in,out]      TrackingState           State of the tracking." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "BreakKinectBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventBreakKinectBone_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat()
	{
		struct KinectFunctionLibrary_eventBreakQuat_Parms
		{
			FQuat InQuat;
			float x;
			float y;
			float z;
			float w;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w = { UE4CodeGen_Private::EPropertyClass::Float, "w", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakQuat_Parms, w), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakQuat_Parms, z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakQuat_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakQuat_Parms, x), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat = { UE4CodeGen_Private::EPropertyClass::Struct, "InQuat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakQuat_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_InQuat_MetaData, ARRAY_COUNT(NewProp_InQuat_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_w,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InQuat,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "NativeBreakFunc", "" },
				{ "ToolTip", "\\fn  static void UKinectFunctionLibrary::BreakQuat(const FQuat&amp; InQuat, float&amp; x,\nfloat&amp; y, float&amp; z, float&amp; w);\n\n\\brief       Break quaternion.\n\n\\param       InQuat          The in quaternion. \\param [in,out]      x       The float&amp; to process. \\param [in,\nout] y       The float&amp; to process. \\param [in,out]      z       The float&amp; to process. \\param [in,out]\nw    The float&amp; to process.\n\n@author      Leon Rosengarten\n@param       InQuat          The in quaternion.\n@param [in,out]      x       The float&amp; to process.\n@param [in,out]      y       The float&amp; to process.\n@param [in,out]      z       The float&amp; to process.\n@param [in,out]      w       The float&amp; to process." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "BreakQuat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventBreakQuat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4()
	{
		struct KinectFunctionLibrary_eventBreakVector4_Parms
		{
			FVector4 InVector;
			float X;
			float Y;
			float Z;
			float W;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_W = { UE4CodeGen_Private::EPropertyClass::Float, "W", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakVector4_Parms, W), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z = { UE4CodeGen_Private::EPropertyClass::Float, "Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakVector4_Parms, Z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Float, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakVector4_Parms, Y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakVector4_Parms, X), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector = { UE4CodeGen_Private::EPropertyClass::Struct, "InVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakVector4_Parms, InVector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_InVector_MetaData, ARRAY_COUNT(NewProp_InVector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_W,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Body" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "NativeBreakFunc", "" },
				{ "ToolTip", "Break vector 4.\n\n@author      Leon Rosengarten\n\n@param       InVector                The in vector.\n@param [in,out]      X       The float&amp; to process.\n@param [in,out]      Y       The float&amp; to process.\n@param [in,out]      Z       The float&amp; to process.\n@param [in,out]      W       The float&amp; to process." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "BreakVector4", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventBreakVector4_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator()
	{
		struct KinectFunctionLibrary_eventConv_QuatToRotator_Parms
		{
			FQuat InQuat;
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConv_QuatToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat = { UE4CodeGen_Private::EPropertyClass::Struct, "InQuat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConv_QuatToRotator_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_InQuat_MetaData, ARRAY_COUNT(NewProp_InQuat_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InQuat,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "Convert quaternion to rotator.\n\n@author      Leon Rosengarten\n@param       InQuat  The in quaternion.\n\n@return      The quaternion converted to rotator." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "Conv_QuatToRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventConv_QuatToRotator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat()
	{
		struct KinectFunctionLibrary_eventConv_Vector4ToQuat_Parms
		{
			FVector4 InVec;
			FQuat ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConv_Vector4ToQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVec_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVec = { UE4CodeGen_Private::EPropertyClass::Struct, "InVec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConv_Vector4ToQuat_Parms, InVec), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_InVec_MetaData, ARRAY_COUNT(NewProp_InVec_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVec,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "\\fn  static FQuat UKinectFunctionLibrary::Conv_Vector4ToQuat(const FVector4&amp; InVec);\n\n\\brief       Convert vector 4 to quaternion.\n\n\\param       InVec   The in vector.\n\n\\return      The vector converted 4 to quaternion.\n\n@author      Leon Rosengarten\n@param       InVec   The in vector.\n\n@return      The vector converted 4 to quaternion." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "Conv_Vector4ToQuat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventConv_Vector4ToQuat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint()
	{
		struct KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms
		{
			FVector BodyPoint;
			int32 ScreenSizeX;
			int32 ScreenSizeY;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenSizeY = { UE4CodeGen_Private::EPropertyClass::Int, "ScreenSizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms, ScreenSizeY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenSizeX = { UE4CodeGen_Private::EPropertyClass::Int, "ScreenSizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms, ScreenSizeX), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyPoint_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "BodyPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms, BodyPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BodyPoint_MetaData, ARRAY_COUNT(NewProp_BodyPoint_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSizeX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyPoint,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|CoordianteMapper" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "Convert body point to screen point.\n\n@author      Leon Rosengarten\n\n@param       BodyPoint       The body point.\n@param       ScreenSizeX     The screen size x coordinate.\n@param       ScreenSizeY     The screen size y coordinate.\n\n@return      The body converted point to screen point." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "ConvertBodyPointToScreenPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal()
	{
		struct KinectFunctionLibrary_eventConvertRotatorToLocal_Parms
		{
			FRotator WorldRotator;
			FTransform ParentTransform;
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertRotatorToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertRotatorToLocal_Parms, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_ParentTransform_MetaData, ARRAY_COUNT(NewProp_ParentTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldRotator_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldRotator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertRotatorToLocal_Parms, WorldRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_WorldRotator_MetaData, ARRAY_COUNT(NewProp_WorldRotator_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldRotator,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "ConvertRotatorToLocal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventConvertRotatorToLocal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture()
	{
		struct KinectFunctionLibrary_eventCreateStreamTexture_Parms
		{
			EKinectStreamType StreamType;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventCreateStreamTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StreamType = { UE4CodeGen_Private::EPropertyClass::Enum, "StreamType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventCreateStreamTexture_Parms, StreamType), Z_Construct_UEnum_KinectV2_EKinectStreamType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_StreamType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "CreateStreamTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KinectFunctionLibrary_eventCreateStreamTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians()
	{
		struct KinectFunctionLibrary_eventDegreesToRadians_Parms
		{
			float InDegrees;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventDegreesToRadians_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDegrees_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "InDegrees", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventDegreesToRadians_Parms, InDegrees), METADATA_PARAMS(NewProp_InDegrees_MetaData, ARRAY_COUNT(NewProp_InDegrees_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InDegrees,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "\\fn  static float UKinectFunctionLibrary::DegreesToRadians(const float &amp;InDegrees);\n\n\\brief       Degrees to radians.\n\n\\param       InDegrees       The in in degrees.\n\n\\return      A float.\n\n@author      Leon Rosengarten\n@param       InDegrees       The in in degrees.\n\n@return      A float." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "DegreesToRadians", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KinectFunctionLibrary_eventDegreesToRadians_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick()
	{
		struct KinectFunctionLibrary_eventEnableBodyJoystick_Parms
		{
			bool Enable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_Enable_SetBit = [](void* Obj){ ((KinectFunctionLibrary_eventEnableBodyJoystick_Parms*)Obj)->Enable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable = { UE4CodeGen_Private::EPropertyClass::Bool, "Enable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectFunctionLibrary_eventEnableBodyJoystick_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Enable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Enable_MetaData, ARRAY_COUNT(NewProp_Enable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Enable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "Enables the body joystick.\n\n@author      Leon Rosengarten\n@param       Enable  The enable." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "EnableBodyJoystick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(KinectFunctionLibrary_eventEnableBodyJoystick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBone()
	{
		struct KinectFunctionLibrary_eventGetBone_Parms
		{
			FBody TheBody;
			TEnumAsByte<EJoint::Type> TheJointType;
			FKinectBone ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBone_Parms, ReturnValue), Z_Construct_UScriptStruct_FKinectBone, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TheJointType = { UE4CodeGen_Private::EPropertyClass::Byte, "TheJointType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBone_Parms, TheJointType), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheBody_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheBody = { UE4CodeGen_Private::EPropertyClass::Struct, "TheBody", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBone_Parms, TheBody), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_TheBody_MetaData, ARRAY_COUNT(NewProp_TheBody_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TheJointType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TheBody,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Body" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "GetBone Ref" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "GetBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KinectFunctionLibrary_eventGetBone_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform()
	{
		struct KinectFunctionLibrary_eventGetBoneFTransform_Parms
		{
			FBody TheBody;
			TEnumAsByte<EJoint::Type> TheJointType;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TheJointType = { UE4CodeGen_Private::EPropertyClass::Byte, "TheJointType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransform_Parms, TheJointType), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheBody_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheBody = { UE4CodeGen_Private::EPropertyClass::Struct, "TheBody", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransform_Parms, TheBody), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_TheBody_MetaData, ARRAY_COUNT(NewProp_TheBody_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TheJointType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TheBody,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Body" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "GetBone Ref" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "GetBoneFTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KinectFunctionLibrary_eventGetBoneFTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone()
	{
		struct KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms
		{
			FBody TheBody;
			TEnumAsByte<EJoint::Type> TheJointType;
			TEnumAsByte<EJoint::Type> ComparedToJoint;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparedToJoint_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComparedToJoint = { UE4CodeGen_Private::EPropertyClass::Byte, "ComparedToJoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms, ComparedToJoint), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(NewProp_ComparedToJoint_MetaData, ARRAY_COUNT(NewProp_ComparedToJoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheJointType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TheJointType = { UE4CodeGen_Private::EPropertyClass::Byte, "TheJointType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms, TheJointType), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(NewProp_TheJointType_MetaData, ARRAY_COUNT(NewProp_TheJointType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheBody_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheBody = { UE4CodeGen_Private::EPropertyClass::Struct, "TheBody", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms, TheBody), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_TheBody_MetaData, ARRAY_COUNT(NewProp_TheBody_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComparedToJoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TheJointType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TheBody,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "GetBoneFTransformRelToBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent()
	{
		struct KinectFunctionLibrary_eventGetBoneParent_Parms
		{
			TEnumAsByte<EJoint::Type> InBone;
			TEnumAsByte<EJoint::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneParent_Parms, ReturnValue), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBone_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InBone = { UE4CodeGen_Private::EPropertyClass::Byte, "InBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneParent_Parms, InBone), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(NewProp_InBone_MetaData, ARRAY_COUNT(NewProp_InBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBone,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Body" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "Gets the parent of this item.\n\n@author      Leon Rosengarten\n\n@param       InBone  The in bone.\n\n@return      The bone parent." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "GetBoneParent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KinectFunctionLibrary_eventGetBoneParent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager()
	{
		struct KinectFunctionLibrary_eventGetKinectEventManager_Parms
		{
			UKinectEventManager* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetKinectEventManager_Parms, ReturnValue), Z_Construct_UClass_UKinectEventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "A kinect event manager*.\n\n@author      Leon Rosengarten" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "GetKinectEventManager", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KinectFunctionLibrary_eventGetKinectEventManager_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint()
	{
		struct KinectFunctionLibrary_eventGetSmoothedJoint_Parms
		{
			FBoneOrientationDoubleExponentialFilter InFilter;
			FBody InBody;
			FBody ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetSmoothedJoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBody_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBody = { UE4CodeGen_Private::EPropertyClass::Struct, "InBody", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetSmoothedJoint_Parms, InBody), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_InBody_MetaData, ARRAY_COUNT(NewProp_InBody_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFilter = { UE4CodeGen_Private::EPropertyClass::Struct, "InFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventGetSmoothedJoint_Parms, InFilter), Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBody,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFilter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Filters" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "Gets smoothed joint.\n\n@author      Leon\n@date        26-Aug-15\n\n@param [in,out]      InFilter        A filter specifying the in.\n@param       InBody                          The in body.\n\n@return      The smoothed joint." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "GetSmoothedJoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(KinectFunctionLibrary_eventGetSmoothedJoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat()
	{
		struct KinectFunctionLibrary_eventInverseQuat_Parms
		{
			FQuat InQuat;
			FQuat ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventInverseQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat = { UE4CodeGen_Private::EPropertyClass::Struct, "InQuat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventInverseQuat_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_InQuat_MetaData, ARRAY_COUNT(NewProp_InQuat_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InQuat,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "Inverse quaternion.\n\n@author      Leon Rosengarten\n@param       InQuat  The in quaternion.\n\n@return      A FQuat." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "InverseQuat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(KinectFunctionLibrary_eventInverseQuat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform()
	{
		struct KinectFunctionLibrary_eventInverseTransform_Parms
		{
			FTransform InTransform;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventInverseTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventInverseTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_InTransform_MetaData, ARRAY_COUNT(NewProp_InTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "Inverse transform.\n\n@author      Leon Rosengarten\n@param       InTransform     The in transform.\n\n@return      A FTransform." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "InverseTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventInverseTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat()
	{
		struct KinectFunctionLibrary_eventMakeQuat_Parms
		{
			float x;
			float y;
			float z;
			float w;
			FQuat ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w = { UE4CodeGen_Private::EPropertyClass::Float, "w", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeQuat_Parms, w), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeQuat_Parms, z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeQuat_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeQuat_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_w,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "NativeMakeFunc", "" },
				{ "ToolTip", "\\fn  static FQuat UKinectFunctionLibrary::MakeQuat(float x, float y, float z, float w);\n\n\\brief       Makes a quaternion.\n\n\\param       x       The x coordinate. \\param        y       The y coordinate. \\param        z       The z coordinate. \\param        w       The\nscalar.\n\n\\return      A FQuat.\n\n@author      Leon Rosengarten\n@param       x       The x coordinate.\n@param       y       The y coordinate.\n@param       z       The z coordinate.\n@param       w       The width.\n\n@return      A FQuat." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "MakeQuat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KinectFunctionLibrary_eventMakeQuat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4()
	{
		struct KinectFunctionLibrary_eventMakeVector4_Parms
		{
			float X;
			float Y;
			float Z;
			float W;
			FVector4 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeVector4_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_W = { UE4CodeGen_Private::EPropertyClass::Float, "W", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeVector4_Parms, W), METADATA_PARAMS(NewProp_W_MetaData, ARRAY_COUNT(NewProp_W_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z = { UE4CodeGen_Private::EPropertyClass::Float, "Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeVector4_Parms, Z), METADATA_PARAMS(NewProp_Z_MetaData, ARRAY_COUNT(NewProp_Z_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Float, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeVector4_Parms, Y), METADATA_PARAMS(NewProp_Y_MetaData, ARRAY_COUNT(NewProp_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeVector4_Parms, X), METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_W,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "NativeMakeFunc", "" },
				{ "ToolTip", "Makes vector 4.\n\n@author      Leon Rosengarten\n\n@param       X       The X coordinate.\n@param       Y       The Y coordinate.\n@param       Z       The Z coordinate.\n@param       W       The width.\n\n@return      A FVector4." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "MakeVector4", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventMakeVector4_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace()
	{
		struct KinectFunctionLibrary_eventMapColorFrameToDepthSpace_Parms
		{
			UTexture2D* InTexture;
			UTexture2D* DepthTexture;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMapColorFrameToDepthSpace_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DepthTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DepthTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMapColorFrameToDepthSpace_Parms, DepthTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTexture = { UE4CodeGen_Private::EPropertyClass::Object, "InTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMapColorFrameToDepthSpace_Parms, InTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DepthTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "MapColorFrameToDepthSpace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(KinectFunctionLibrary_eventMapColorFrameToDepthSpace_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton()
	{
		struct KinectFunctionLibrary_eventMirrorKinectSkeleton_Parms
		{
			FBody BodyToMirror;
			float PosLocScale;
			TArray<FTransform> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMirrorKinectSkeleton_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosLocScale = { UE4CodeGen_Private::EPropertyClass::Float, "PosLocScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMirrorKinectSkeleton_Parms, PosLocScale), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyToMirror_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyToMirror = { UE4CodeGen_Private::EPropertyClass::Struct, "BodyToMirror", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMirrorKinectSkeleton_Parms, BodyToMirror), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_BodyToMirror_MetaData, ARRAY_COUNT(NewProp_BodyToMirror_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PosLocScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyToMirror,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|CoordianteMapper" },
				{ "CPP_Default_PosLocScale", "1.000000" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "Mirror kinect skeleton.\n\n@author      Leon Rosengarten\n\n@param       BodyToMirror    The body to mirror.\n\n@return      A TArray&lt;FTransform&gt;" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "MirrorKinectSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KinectFunctionLibrary_eventMirrorKinectSkeleton_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat()
	{
		struct KinectFunctionLibrary_eventMultiplyQuat_Parms
		{
			FQuat A;
			FQuat B;
			FQuat ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMultiplyQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMultiplyQuat_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventMultiplyQuat_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "\\fn  static FQuat UKinectFunctionLibrary::MultiplyQuat(const FQuat&amp; A, const FQuat&amp;\nB);\n\n\\brief       Multiply quaternion.\n\n\\param       A       The const FQuat&amp; to process. \\param B       The const FQuat&amp; to process.\n\n\\return      A FQuat.\n\n@author      Leon Rosengarten\n@param       A       The const FQuat&amp; to process.\n@param       B       The const FQuat&amp; to process.\n\n@return      A FQuat." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "MultiplyQuat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventMultiplyQuat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle()
	{
		struct KinectFunctionLibrary_eventQuatToAxisOutAngle_Parms
		{
			FQuat InQuat;
			FVector OutAxis;
			float OutAngle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutAngle = { UE4CodeGen_Private::EPropertyClass::Float, "OutAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventQuatToAxisOutAngle_Parms, OutAngle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventQuatToAxisOutAngle_Parms, OutAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat = { UE4CodeGen_Private::EPropertyClass::Struct, "InQuat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventQuatToAxisOutAngle_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_InQuat_MetaData, ARRAY_COUNT(NewProp_InQuat_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InQuat,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "\\fn  static void UKinectFunctionLibrary::QuatToAxisOutAngle(const FQuat&amp; InQuat,\nFVector&amp; OutAxis, float &amp;OutAngle);\n\n\\brief       Quaternion to axis out angle.\n\n\\param       InQuat                          The in quaternion. \\param [in,out]      OutAxis         The out axis. \\param [in,out]\nOutAngle     The out angle.\n\n@author      Leon Rosengarten\n@param       InQuat                          The in quaternion.\n@param [in,out]      OutAxis         The out axis.\n@param [in,out]      OutAngle        The out angle." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "QuatToAxisOutAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventQuatToAxisOutAngle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees()
	{
		struct KinectFunctionLibrary_eventRadiansToDegrees_Parms
		{
			float InRadians;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventRadiansToDegrees_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRadians_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRadians = { UE4CodeGen_Private::EPropertyClass::Float, "InRadians", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventRadiansToDegrees_Parms, InRadians), METADATA_PARAMS(NewProp_InRadians_MetaData, ARRAY_COUNT(NewProp_InRadians_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRadians,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "\\fn  static float UKinectFunctionLibrary::RadiansToDegrees(const float &amp;InRadians);\n\n\\brief       Radians to degrees.\n\n\\param       InRadians       The in in radians.\n\n\\return      A float.\n\n@author      Leon Rosengarten\n@param       InRadians       The in in radians.\n\n@return      A float." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "RadiansToDegrees", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KinectFunctionLibrary_eventRadiansToDegrees_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat()
	{
		struct KinectFunctionLibrary_eventRotatorToQuat_Parms
		{
			FRotator TheRotator;
			FQuat ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventRotatorToQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheRotator_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "TheRotator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventRotatorToQuat_Parms, TheRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_TheRotator_MetaData, ARRAY_COUNT(NewProp_TheRotator_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TheRotator,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "\\fn  static FQuat UKinectFunctionLibrary::RotatorToQuat(const FRotator&amp; TheRotator);\n\n\\brief       Rotator to quaternion.\n\n\\param       TheRotator      the rotator.\n\n\\return      A FQuat.\n\n@author      Leon Rosengarten\n@param       TheRotator      the rotator.\n\n@return      A FQuat." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "RotatorToQuat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventRotatorToQuat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "Shutdown sensor.\n\n@author      Leon Rosengarten\n@date        26-13-2015" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "ShutdownSensor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "Starts a sensor.\n\n@author      Leon Rosengarten\n@date        26-13-2015" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "StartSensor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator()
	{
		struct KinectFunctionLibrary_eventVec4QuatToRotator_Parms
		{
			FVector4 TheVec;
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventVec4QuatToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheVec_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheVec = { UE4CodeGen_Private::EPropertyClass::Struct, "TheVec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectFunctionLibrary_eventVec4QuatToRotator_Parms, TheVec), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_TheVec_MetaData, ARRAY_COUNT(NewProp_TheVec_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TheVec,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect|Math" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "ToolTip", "\\fn  static FRotator UKinectFunctionLibrary::Vec4QuatToRotator(const FVector4&amp; TheVec);\n\n\\brief       Vector 4 quaternion to rotator.\n\n\\param       TheVec  the vector.\n\n\\return      A FRotator.\n\n@author      Leon Rosengarten\n@param       TheVec  the vector.\n\n@return      A FRotator." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, "Vec4QuatToRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KinectFunctionLibrary_eventVec4QuatToRotator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKinectFunctionLibrary_NoRegister()
	{
		return UKinectFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UKinectFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody, "BreakBody" }, // 2239738265
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame, "BreakBodyFrame" }, // 2138852008
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone, "BreakKinectBone" }, // 2522625330
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat, "BreakQuat" }, // 985426652
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4, "BreakVector4" }, // 4152210021
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator, "Conv_QuatToRotator" }, // 705744052
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat, "Conv_Vector4ToQuat" }, // 365964119
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint, "ConvertBodyPointToScreenPoint" }, // 1893646680
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal, "ConvertRotatorToLocal" }, // 2310575526
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture, "CreateStreamTexture" }, // 2034062140
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians, "DegreesToRadians" }, // 1603227353
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick, "EnableBodyJoystick" }, // 3909350001
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetBone, "GetBone" }, // 755192872
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform, "GetBoneFTransform" }, // 223196434
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone, "GetBoneFTransformRelToBone" }, // 3633852205
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent, "GetBoneParent" }, // 475057736
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager, "GetKinectEventManager" }, // 2586883478
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint, "GetSmoothedJoint" }, // 279891477
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat, "InverseQuat" }, // 1034866082
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform, "InverseTransform" }, // 2399979995
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat, "MakeQuat" }, // 3048106829
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4, "MakeVector4" }, // 3364340081
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace, "MapColorFrameToDepthSpace" }, // 4269195868
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton, "MirrorKinectSkeleton" }, // 759930486
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat, "MultiplyQuat" }, // 3212716093
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle, "QuatToAxisOutAngle" }, // 2496886027
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees, "RadiansToDegrees" }, // 12118305
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat, "RotatorToQuat" }, // 3814386004
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor, "ShutdownSensor" }, // 802302542
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor, "StartSensor" }, // 2083567411
				{ &Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator, "Vec4QuatToRotator" }, // 785480850
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "KinectFunctionLibrary.h" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKinectFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKinectFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectFunctionLibrary, 3216808566);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectFunctionLibrary(Z_Construct_UClass_UKinectFunctionLibrary, &UKinectFunctionLibrary::StaticClass, TEXT("/Script/KinectV2"), TEXT("UKinectFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
