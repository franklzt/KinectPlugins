// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/IKinectV2PluginPCH.h"
#include "Classes/BoneOrientationDoubleExponentialFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneOrientationDoubleExponentialFilter() {}
// Cross Module References
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter();
	UPackage* Z_Construct_UPackage__Script_KinectV2();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FTransformSmoothParameters();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FFilterDoubleExponentialData();
// End Cross Module References
class UScriptStruct* FBoneOrientationDoubleExponentialFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter, Z_Construct_UPackage__Script_KinectV2(), TEXT("BoneOrientationDoubleExponentialFilter"), sizeof(FBoneOrientationDoubleExponentialFilter), Get_Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneOrientationDoubleExponentialFilter(FBoneOrientationDoubleExponentialFilter::StaticStruct, TEXT("/Script/KinectV2"), TEXT("BoneOrientationDoubleExponentialFilter"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFBoneOrientationDoubleExponentialFilter
{
	FScriptStruct_KinectV2_StaticRegisterNativesFBoneOrientationDoubleExponentialFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneOrientationDoubleExponentialFilter")),new UScriptStruct::TCppStructOps<FBoneOrientationDoubleExponentialFilter>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFBoneOrientationDoubleExponentialFilter;
	UScriptStruct* Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneOrientationDoubleExponentialFilter"), sizeof(FBoneOrientationDoubleExponentialFilter), Get_Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneOrientationDoubleExponentialFilter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothParameters_MetaData[] = {
				{ "Category", "Filter|Parameters" },
				{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothParameters = { UE4CodeGen_Private::EPropertyClass::Struct, "SmoothParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBoneOrientationDoubleExponentialFilter, SmoothParameters), Z_Construct_UScriptStruct_FTransformSmoothParameters, METADATA_PARAMS(NewProp_SmoothParameters_MetaData, ARRAY_COUNT(NewProp_SmoothParameters_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SmoothParameters,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BoneOrientationDoubleExponentialFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBoneOrientationDoubleExponentialFilter),
				alignof(FBoneOrientationDoubleExponentialFilter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_CRC() { return 163683586U; }
class UScriptStruct* FTransformSmoothParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FTransformSmoothParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformSmoothParameters, Z_Construct_UPackage__Script_KinectV2(), TEXT("TransformSmoothParameters"), sizeof(FTransformSmoothParameters), Get_Z_Construct_UScriptStruct_FTransformSmoothParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformSmoothParameters(FTransformSmoothParameters::StaticStruct, TEXT("/Script/KinectV2"), TEXT("TransformSmoothParameters"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFTransformSmoothParameters
{
	FScriptStruct_KinectV2_StaticRegisterNativesFTransformSmoothParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformSmoothParameters")),new UScriptStruct::TCppStructOps<FTransformSmoothParameters>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFTransformSmoothParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FTransformSmoothParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformSmoothParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformSmoothParameters"), sizeof(FTransformSmoothParameters), Get_Z_Construct_UScriptStruct_FTransformSmoothParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformSmoothParameters>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Smoothing_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
				{ "ToolTip", "Amount of prediction into the future to use. Can over shoot when too high" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Smoothing = { UE4CodeGen_Private::EPropertyClass::Float, "Smoothing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformSmoothParameters, Smoothing), METADATA_PARAMS(NewProp_Smoothing_MetaData, ARRAY_COUNT(NewProp_Smoothing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prediction_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
				{ "ToolTip", "Size of the max prediction radius Can snap back to noisy data when too high" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Prediction = { UE4CodeGen_Private::EPropertyClass::Float, "Prediction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformSmoothParameters, Prediction), METADATA_PARAMS(NewProp_Prediction_MetaData, ARRAY_COUNT(NewProp_Prediction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationRadius_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
				{ "ToolTip", "Size of the radius where jitter is removed. Can do too much smoothing when too high" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviationRadius = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDeviationRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformSmoothParameters, MaxDeviationRadius), METADATA_PARAMS(NewProp_MaxDeviationRadius_MetaData, ARRAY_COUNT(NewProp_MaxDeviationRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JitterRadius_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
				{ "ToolTip", "How much to correct back from prediction.  Can make things springy" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JitterRadius = { UE4CodeGen_Private::EPropertyClass::Float, "JitterRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformSmoothParameters, JitterRadius), METADATA_PARAMS(NewProp_JitterRadius_MetaData, ARRAY_COUNT(NewProp_JitterRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Correction_MetaData[] = {
				{ "Category", "Parameters" },
				{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Correction = { UE4CodeGen_Private::EPropertyClass::Float, "Correction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformSmoothParameters, Correction), METADATA_PARAMS(NewProp_Correction_MetaData, ARRAY_COUNT(NewProp_Correction_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Smoothing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Prediction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDeviationRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JitterRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Correction,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TransformSmoothParameters",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTransformSmoothParameters),
				alignof(FTransformSmoothParameters),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformSmoothParameters_CRC() { return 1310338190U; }
class UScriptStruct* FFilterDoubleExponentialData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FFilterDoubleExponentialData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterDoubleExponentialData, Z_Construct_UPackage__Script_KinectV2(), TEXT("FilterDoubleExponentialData"), sizeof(FFilterDoubleExponentialData), Get_Z_Construct_UScriptStruct_FFilterDoubleExponentialData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFilterDoubleExponentialData(FFilterDoubleExponentialData::StaticStruct, TEXT("/Script/KinectV2"), TEXT("FilterDoubleExponentialData"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFFilterDoubleExponentialData
{
	FScriptStruct_KinectV2_StaticRegisterNativesFFilterDoubleExponentialData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FilterDoubleExponentialData")),new UScriptStruct::TCppStructOps<FFilterDoubleExponentialData>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFFilterDoubleExponentialData;
	UScriptStruct* Z_Construct_UScriptStruct_FFilterDoubleExponentialData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFilterDoubleExponentialData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FilterDoubleExponentialData"), sizeof(FFilterDoubleExponentialData), Get_Z_Construct_UScriptStruct_FFilterDoubleExponentialData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterDoubleExponentialData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FilterDoubleExponentialData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FFilterDoubleExponentialData),
				alignof(FFilterDoubleExponentialData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFilterDoubleExponentialData_CRC() { return 1424441761U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
