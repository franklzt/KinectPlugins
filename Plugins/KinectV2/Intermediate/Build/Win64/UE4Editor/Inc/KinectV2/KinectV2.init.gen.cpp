// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/IKinectV2PluginPCH.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectV2_init() {}
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_KinectV2()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/KinectV2",
				PKG_CompiledIn | 0x00000000,
				0x9E66EC9D,
				0xC133C048,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
