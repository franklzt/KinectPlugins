// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/IKinectV2PluginPCH.h"
#include "Classes/KinectAnimInstance.h"
#include "Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectAnimInstance() {}
// Cross Module References
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment();
	UPackage* Z_Construct_UPackage__Script_KinectV2();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectAnimInstance_NoRegister();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBody();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectAnimInstance_ResetOverride();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled();
// End Cross Module References
class UScriptStruct* FKinectBoneRetargetAdjustment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment, Z_Construct_UPackage__Script_KinectV2(), TEXT("KinectBoneRetargetAdjustment"), sizeof(FKinectBoneRetargetAdjustment), Get_Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKinectBoneRetargetAdjustment(FKinectBoneRetargetAdjustment::StaticStruct, TEXT("/Script/KinectV2"), TEXT("KinectBoneRetargetAdjustment"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFKinectBoneRetargetAdjustment
{
	FScriptStruct_KinectV2_StaticRegisterNativesFKinectBoneRetargetAdjustment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KinectBoneRetargetAdjustment")),new UScriptStruct::TCppStructOps<FKinectBoneRetargetAdjustment>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFKinectBoneRetargetAdjustment;
	UScriptStruct* Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KinectBoneRetargetAdjustment"), sizeof(FKinectBoneRetargetAdjustment), Get_Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKinectBoneRetargetAdjustment>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugDraw_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			auto NewProp_bDebugDraw_SetBit = [](void* Obj){ ((FKinectBoneRetargetAdjustment*)Obj)->bDebugDraw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugDraw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FKinectBoneRetargetAdjustment), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugDraw_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugDraw_MetaData, ARRAY_COUNT(NewProp_bDebugDraw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneBinormalAxis_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneBinormalAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneBinormalAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FKinectBoneRetargetAdjustment, BoneBinormalAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(NewProp_BoneBinormalAxis_MetaData, ARRAY_COUNT(NewProp_BoneBinormalAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNormalAxis_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneNormalAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneNormalAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FKinectBoneRetargetAdjustment, BoneNormalAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(NewProp_BoneNormalAxis_MetaData, ARRAY_COUNT(NewProp_BoneNormalAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneDirAxis_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneDirAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneDirAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FKinectBoneRetargetAdjustment, BoneDirAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(NewProp_BoneDirAxis_MetaData, ARRAY_COUNT(NewProp_BoneDirAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertNormal_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			auto NewProp_bInvertNormal_SetBit = [](void* Obj){ ((FKinectBoneRetargetAdjustment*)Obj)->bInvertNormal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertNormal = { UE4CodeGen_Private::EPropertyClass::Bool, "bInvertNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FKinectBoneRetargetAdjustment), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInvertNormal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInvertNormal_MetaData, ARRAY_COUNT(NewProp_bInvertNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertDir_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			auto NewProp_bInvertDir_SetBit = [](void* Obj){ ((FKinectBoneRetargetAdjustment*)Obj)->bInvertDir = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertDir = { UE4CodeGen_Private::EPropertyClass::Bool, "bInvertDir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FKinectBoneRetargetAdjustment), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInvertDir_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInvertDir_MetaData, ARRAY_COUNT(NewProp_bInvertDir_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNormalAdjustment_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneNormalAdjustment = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneNormalAdjustment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FKinectBoneRetargetAdjustment, BoneNormalAdjustment), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_BoneNormalAdjustment_MetaData, ARRAY_COUNT(NewProp_BoneNormalAdjustment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneDirAdjustment_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneDirAdjustment = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneDirAdjustment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FKinectBoneRetargetAdjustment, BoneDirAdjustment), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_BoneDirAdjustment_MetaData, ARRAY_COUNT(NewProp_BoneDirAdjustment_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugDraw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneBinormalAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneNormalAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneDirAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInvertNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInvertDir,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneNormalAdjustment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneDirAdjustment,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KinectBoneRetargetAdjustment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKinectBoneRetargetAdjustment),
				alignof(FKinectBoneRetargetAdjustment),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_CRC() { return 653208392U; }
	void UKinectAnimInstance::StaticRegisterNativesUKinectAnimInstance()
	{
		UClass* Class = UKinectAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKinectBodyEvent", &UKinectAnimInstance::execOnKinectBodyEvent },
			{ "OverrideBoneRotationByName", &UKinectAnimInstance::execOverrideBoneRotationByName },
			{ "RemoveBoneOverrideByName", &UKinectAnimInstance::execRemoveBoneOverrideByName },
			{ "ResetOverride", &UKinectAnimInstance::execResetOverride },
			{ "SetOverrideEnabled", &UKinectAnimInstance::execSetOverrideEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent()
	{
		struct KinectAnimInstance_eventOnKinectBodyEvent_Parms
		{
			TEnumAsByte<EAutoReceiveInput::Type> KinectPlayer;
			FBody Skeleton;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skeleton = { UE4CodeGen_Private::EPropertyClass::Struct, "Skeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventOnKinectBodyEvent_Parms, Skeleton), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_Skeleton_MetaData, ARRAY_COUNT(NewProp_Skeleton_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectPlayer = { UE4CodeGen_Private::EPropertyClass::Byte, "KinectPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventOnKinectBodyEvent_Parms, KinectPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Skeleton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
				{ "ToolTip", "Executes the kinect body event action.\n\n@author      Leon Rosengarten\n\n@param       KinectPlayer    The kinect player.\n@param       Skeleton                The skeleton." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, "OnKinectBodyEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(KinectAnimInstance_eventOnKinectBodyEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName()
	{
		struct KinectAnimInstance_eventOverrideBoneRotationByName_Parms
		{
			FName BoneName;
			FRotator BoneBoneRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneBoneRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneBoneRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventOverrideBoneRotationByName_Parms, BoneBoneRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventOverrideBoneRotationByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneBoneRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
				{ "ToolTip", "Override bone rotation by name.\n\n@author      Leon Rosengarten\n\n@param       BoneName                        Name of the bone.\n@param       BoneBoneRotation        The bone rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, "OverrideBoneRotationByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(KinectAnimInstance_eventOverrideBoneRotationByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName()
	{
		struct KinectAnimInstance_eventRemoveBoneOverrideByName_Parms
		{
			FName BoneName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventRemoveBoneOverrideByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
				{ "ToolTip", "Removes the bone override by name described by BoneName.\n\n@author      Leon Rosengarten\n\n@param       BoneName        Name of the bone." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, "RemoveBoneOverrideByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectAnimInstance_eventRemoveBoneOverrideByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_ResetOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
				{ "ToolTip", "Resets the override.\n\n@author      Leon Rosengarten" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, "ResetOverride", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled()
	{
		struct KinectAnimInstance_eventSetOverrideEnabled_Parms
		{
			bool Enable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Enable_SetBit = [](void* Obj){ ((KinectAnimInstance_eventSetOverrideEnabled_Parms*)Obj)->Enable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable = { UE4CodeGen_Private::EPropertyClass::Bool, "Enable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectAnimInstance_eventSetOverrideEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Enable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Enable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
				{ "ToolTip", "Sets override enabled.\n\n@author      Leon Rosengarten\n\n@param       Enable  true to enable, false to disable." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, "SetOverrideEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectAnimInstance_eventSetOverrideEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKinectAnimInstance_NoRegister()
	{
		return UKinectAnimInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UKinectAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent, "OnKinectBodyEvent" }, // 3670557393
				{ &Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName, "OverrideBoneRotationByName" }, // 296039823
				{ &Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName, "RemoveBoneOverrideByName" }, // 2500724224
				{ &Z_Construct_UFunction_UKinectAnimInstance_ResetOverride, "ResetOverride" }, // 1524149890
				{ &Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled, "SetOverrideEnabled" }, // 2017832119
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "AnimInstance" },
				{ "IncludePath", "KinectAnimInstance.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluateAnimationGraph_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
				{ "ToolTip", "< true to enable, false to disable the kinect override" },
			};
#endif
			auto NewProp_EvaluateAnimationGraph_SetBit = [](void* Obj){ ((UKinectAnimInstance*)Obj)->EvaluateAnimationGraph = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EvaluateAnimationGraph = { UE4CodeGen_Private::EPropertyClass::Bool, "EvaluateAnimationGraph", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UKinectAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EvaluateAnimationGraph_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EvaluateAnimationGraph_MetaData, ARRAY_COUNT(NewProp_EvaluateAnimationGraph_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KinectOverrideEnabled_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
				{ "ToolTip", "< The receive input from player" },
			};
#endif
			auto NewProp_KinectOverrideEnabled_SetBit = [](void* Obj){ ((UKinectAnimInstance*)Obj)->KinectOverrideEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KinectOverrideEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "KinectOverrideEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UKinectAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_KinectOverrideEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_KinectOverrideEnabled_MetaData, ARRAY_COUNT(NewProp_KinectOverrideEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveInputFromPlayer_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
				{ "ToolTip", "Properties" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReceiveInputFromPlayer = { UE4CodeGen_Private::EPropertyClass::Byte, "ReceiveInputFromPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UKinectAnimInstance, ReceiveInputFromPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(NewProp_ReceiveInputFromPlayer_MetaData, ARRAY_COUNT(NewProp_ReceiveInputFromPlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneAdjustments_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
				{ "ToolTip", "New translation of bone to apply." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneAdjustments = { UE4CodeGen_Private::EPropertyClass::Array, "BoneAdjustments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(UKinectAnimInstance, BoneAdjustments), METADATA_PARAMS(NewProp_BoneAdjustments_MetaData, ARRAY_COUNT(NewProp_BoneAdjustments_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneAdjustments_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneAdjustments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KinectBoneRotators_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KinectBoneRotators = { UE4CodeGen_Private::EPropertyClass::Array, "KinectBoneRotators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(UKinectAnimInstance, KinectBoneRotators), METADATA_PARAMS(NewProp_KinectBoneRotators_MetaData, ARRAY_COUNT(NewProp_KinectBoneRotators_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KinectBoneRotators_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "KinectBoneRotators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToRetarget_MetaData[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToRetarget = { UE4CodeGen_Private::EPropertyClass::Array, "BonesToRetarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(UKinectAnimInstance, BonesToRetarget), METADATA_PARAMS(NewProp_BonesToRetarget_MetaData, ARRAY_COUNT(NewProp_BonesToRetarget_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BonesToRetarget_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "BonesToRetarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluateAnimationGraph,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectOverrideEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceiveInputFromPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneAdjustments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneAdjustments_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectBoneRotators,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectBoneRotators_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BonesToRetarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BonesToRetarget_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKinectAnimInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKinectAnimInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectAnimInstance, 788930664);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectAnimInstance(Z_Construct_UClass_UKinectAnimInstance, &UKinectAnimInstance::StaticClass, TEXT("/Script/KinectV2"), TEXT("UKinectAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
