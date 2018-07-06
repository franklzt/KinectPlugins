// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/IKinectV2PluginPCH.h"
#include "Classes/KinectEventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectEventManager() {}
// Cross Module References
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_KinectV2();
	KINECTV2_API UEnum* Z_Construct_UEnum_KinectV2_EKinectPlayer();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBodyFrame();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBody();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectEventManager_NoRegister();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectEventManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectEventManager_EnableMouseControl();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected();
	KINECTV2_API UFunction* Z_Construct_UFunction_UKinectEventManager_SkeletonLost();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature()
	{
		struct _Script_KinectV2_eventKinSkeletonEvent_Parms
		{
			TEnumAsByte<EKinectPlayer::Type> KinectPlayer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectPlayer = { UE4CodeGen_Private::EPropertyClass::Byte, "KinectPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventKinSkeletonEvent_Parms, KinectPlayer), Z_Construct_UEnum_KinectV2_EKinectPlayer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, "KinSkeletonEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_KinectV2_eventKinSkeletonEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature()
	{
		struct _Script_KinectV2_eventKinectRawBodyFrameEvent_Parms
		{
			FBodyFrame BodyFrame;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyFrame_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "BodyFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventKinectRawBodyFrameEvent_Parms, BodyFrame), Z_Construct_UScriptStruct_FBodyFrame, METADATA_PARAMS(NewProp_BodyFrame_MetaData, ARRAY_COUNT(NewProp_BodyFrame_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyFrame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, "KinectRawBodyFrameEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_KinectV2_eventKinectRawBodyFrameEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature()
	{
		struct _Script_KinectV2_eventKinectBodyEventSigneture_Parms
		{
			TEnumAsByte<EAutoReceiveInput::Type> KinectPlayer;
			FBody Skeleton;
			int32 SkeletonIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SkeletonIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventKinectBodyEventSigneture_Parms, SkeletonIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skeleton = { UE4CodeGen_Private::EPropertyClass::Struct, "Skeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventKinectBodyEventSigneture_Parms, Skeleton), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_Skeleton_MetaData, ARRAY_COUNT(NewProp_Skeleton_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectPlayer = { UE4CodeGen_Private::EPropertyClass::Byte, "KinectPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventKinectBodyEventSigneture_Parms, KinectPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletonIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Skeleton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, "KinectBodyEventSigneture__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_KinectV2_eventKinectBodyEventSigneture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature()
	{
		struct _Script_KinectV2_eventNewKinectBodyIndexFrameEvent_Parms
		{
			const UTexture2D* BodyIndexFrameTexture;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyIndexFrameTexture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyIndexFrameTexture = { UE4CodeGen_Private::EPropertyClass::Object, "BodyIndexFrameTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventNewKinectBodyIndexFrameEvent_Parms, BodyIndexFrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_BodyIndexFrameTexture_MetaData, ARRAY_COUNT(NewProp_BodyIndexFrameTexture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyIndexFrameTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, "NewKinectBodyIndexFrameEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_KinectV2_eventNewKinectBodyIndexFrameEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature()
	{
		struct _Script_KinectV2_eventNewKinectInfraredFrameEvent_Parms
		{
			const UTexture2D* InfraredFrameTexture;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfraredFrameTexture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfraredFrameTexture = { UE4CodeGen_Private::EPropertyClass::Object, "InfraredFrameTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventNewKinectInfraredFrameEvent_Parms, InfraredFrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_InfraredFrameTexture_MetaData, ARRAY_COUNT(NewProp_InfraredFrameTexture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InfraredFrameTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, "NewKinectInfraredFrameEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_KinectV2_eventNewKinectInfraredFrameEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature()
	{
		struct _Script_KinectV2_eventNewKinectDepthFrameEvent_Parms
		{
			const UTexture2D* DepthFrameTexture;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthFrameTexture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DepthFrameTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DepthFrameTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventNewKinectDepthFrameEvent_Parms, DepthFrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_DepthFrameTexture_MetaData, ARRAY_COUNT(NewProp_DepthFrameTexture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DepthFrameTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, "NewKinectDepthFrameEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_KinectV2_eventNewKinectDepthFrameEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature()
	{
		struct _Script_KinectV2_eventNewKinectColorFrameEvent_Parms
		{
			const UTexture2D* ColorFrameTexture;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorFrameTexture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorFrameTexture = { UE4CodeGen_Private::EPropertyClass::Object, "ColorFrameTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventNewKinectColorFrameEvent_Parms, ColorFrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_ColorFrameTexture_MetaData, ARRAY_COUNT(NewProp_ColorFrameTexture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorFrameTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, "NewKinectColorFrameEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_KinectV2_eventNewKinectColorFrameEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature()
	{
		struct _Script_KinectV2_eventSkeletonLostEvent_Parms
		{
			TEnumAsByte<EAutoReceiveInput::Type> KinectPlayerLost;
			int32 SkeletonIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SkeletonIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventSkeletonLostEvent_Parms, SkeletonIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectPlayerLost = { UE4CodeGen_Private::EPropertyClass::Byte, "KinectPlayerLost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventSkeletonLostEvent_Parms, KinectPlayerLost), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletonIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectPlayerLost,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, "SkeletonLostEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_KinectV2_eventSkeletonLostEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature()
	{
		struct _Script_KinectV2_eventNewSkeletonDetectedEvent_Parms
		{
			FBody NewSkeleton;
			int32 SkeletonIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SkeletonIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventNewSkeletonDetectedEvent_Parms, SkeletonIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSkeleton_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSkeleton = { UE4CodeGen_Private::EPropertyClass::Struct, "NewSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_KinectV2_eventNewSkeletonDetectedEvent_Parms, NewSkeleton), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_NewSkeleton_MetaData, ARRAY_COUNT(NewProp_NewSkeleton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletonIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSkeleton,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, "NewSkeletonDetectedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_KinectV2_eventNewSkeletonDetectedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EKinectPlayer_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KinectV2_EKinectPlayer, Z_Construct_UPackage__Script_KinectV2(), TEXT("EKinectPlayer"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKinectPlayer(EKinectPlayer_StaticEnum, TEXT("/Script/KinectV2"), TEXT("EKinectPlayer"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KinectV2_EKinectPlayer_CRC() { return 1563527013U; }
	UEnum* Z_Construct_UEnum_KinectV2_EKinectPlayer()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKinectPlayer"), 0, Get_Z_Construct_UEnum_KinectV2_EKinectPlayer_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKinectPlayer::Player0", (int64)EKinectPlayer::Player0 },
				{ "EKinectPlayer::Player1", (int64)EKinectPlayer::Player1 },
				{ "EKinectPlayer::Player2", (int64)EKinectPlayer::Player2 },
				{ "EKinectPlayer::Player3", (int64)EKinectPlayer::Player3 },
				{ "EKinectPlayer::Player4", (int64)EKinectPlayer::Player4 },
				{ "EKinectPlayer::Player5", (int64)EKinectPlayer::Player5 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "#include \"KinectBodyFrameListenerInterface.h\"" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KinectV2,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EKinectPlayer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EKinectPlayer::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UKinectEventManager_NewSkeletonDetected = FName(TEXT("NewSkeletonDetected"));
	void UKinectEventManager::NewSkeletonDetected(FBody const& Skeleton)
	{
		KinectEventManager_eventNewSkeletonDetected_Parms Parms;
		Parms.Skeleton=Skeleton;
		ProcessEvent(FindFunctionChecked(NAME_UKinectEventManager_NewSkeletonDetected),&Parms);
	}
	static FName NAME_UKinectEventManager_SkeletonLost = FName(TEXT("SkeletonLost"));
	void UKinectEventManager::SkeletonLost(EAutoReceiveInput::Type KinectPlayer, int32 SkeletonIndex)
	{
		KinectEventManager_eventSkeletonLost_Parms Parms;
		Parms.KinectPlayer=KinectPlayer;
		Parms.SkeletonIndex=SkeletonIndex;
		ProcessEvent(FindFunctionChecked(NAME_UKinectEventManager_SkeletonLost),&Parms);
	}
	void UKinectEventManager::StaticRegisterNativesUKinectEventManager()
	{
		UClass* Class = UKinectEventManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssigneSkeletonToPlayer", &UKinectEventManager::execAssigneSkeletonToPlayer },
			{ "EnableMouseControl", &UKinectEventManager::execEnableMouseControl },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer()
	{
		struct KinectEventManager_eventAssigneSkeletonToPlayer_Parms
		{
			FBody Body;
			TEnumAsByte<EAutoReceiveInput::Type> Player;
			bool SetAsMouseController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_SetAsMouseController_SetBit = [](void* Obj){ ((KinectEventManager_eventAssigneSkeletonToPlayer_Parms*)Obj)->SetAsMouseController = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetAsMouseController = { UE4CodeGen_Private::EPropertyClass::Bool, "SetAsMouseController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectEventManager_eventAssigneSkeletonToPlayer_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SetAsMouseController_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Byte, "Player", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectEventManager_eventAssigneSkeletonToPlayer_Parms, Player), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Body = { UE4CodeGen_Private::EPropertyClass::Struct, "Body", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectEventManager_eventAssigneSkeletonToPlayer_Parms, Body), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_Body_MetaData, ARRAY_COUNT(NewProp_Body_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SetAsMouseController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Player,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Body,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "Assign skeleton to player.\n\n@author      Leon Rosengarten\n@param       Body                                    The body.\n@param       Player                                  The player.\n@param       SetAsMouseController    true to set as mouse controller." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectEventManager, "AssigneSkeletonToPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(KinectEventManager_eventAssigneSkeletonToPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectEventManager_EnableMouseControl()
	{
		struct KinectEventManager_eventEnableMouseControl_Parms
		{
			bool MouseControl;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_MouseControl_SetBit = [](void* Obj){ ((KinectEventManager_eventEnableMouseControl_Parms*)Obj)->MouseControl = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MouseControl = { UE4CodeGen_Private::EPropertyClass::Bool, "MouseControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectEventManager_eventEnableMouseControl_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MouseControl_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MouseControl,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Kinect" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "Enables the mouse control.\n\n@author      Leon Rosengarten\n@param       MouseControl    true to mouse control." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectEventManager, "EnableMouseControl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectEventManager_eventEnableMouseControl_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skeleton = { UE4CodeGen_Private::EPropertyClass::Struct, "Skeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KinectEventManager_eventNewSkeletonDetected_Parms, Skeleton), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(NewProp_Skeleton_MetaData, ARRAY_COUNT(NewProp_Skeleton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Skeleton,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "Creates a new skeleton detected.\n\n@author      Leon Rosengarten\n@param       Skeleton        The skeleton." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectEventManager, "NewSkeletonDetected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(KinectEventManager_eventNewSkeletonDetected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKinectEventManager_SkeletonLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SkeletonIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectEventManager_eventSkeletonLost_Parms, SkeletonIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectPlayer = { UE4CodeGen_Private::EPropertyClass::Byte, "KinectPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectEventManager_eventSkeletonLost_Parms, KinectPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletonIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "Skeleton lost.\n\n@author      Leon Rosengarten\n@param       KinectPlayer    The kinect player." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectEventManager, "SkeletonLost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(KinectEventManager_eventSkeletonLost_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKinectEventManager_NoRegister()
	{
		return UKinectEventManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UKinectEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer, "AssigneSkeletonToPlayer" }, // 375828086
				{ &Z_Construct_UFunction_UKinectEventManager_EnableMouseControl, "EnableMouseControl" }, // 3334954671
				{ &Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected, "NewSkeletonDetected" }, // 1495411071
				{ &Z_Construct_UFunction_UKinectEventManager_SkeletonLost, "SkeletonLost" }, // 420692959
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "KinectEventManager.h" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBodyIndexFrameEvent_MetaData[] = {
				{ "Category", "Kinect|EventDispatchers" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "< Called when a skeleton with assigned TrackingId is no longer tracked" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBodyIndexFrameEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnBodyIndexFrameEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UKinectEventManager, OnBodyIndexFrameEvent), Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnBodyIndexFrameEvent_MetaData, ARRAY_COUNT(NewProp_OnBodyIndexFrameEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonLostEvent_MetaData[] = {
				{ "Category", "Kinect|EventDispatchers" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "< Called for every body frame generated" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SkeletonLostEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "SkeletonLostEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UKinectEventManager, SkeletonLostEvent), Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature, METADATA_PARAMS(NewProp_SkeletonLostEvent_MetaData, ARRAY_COUNT(NewProp_SkeletonLostEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawBodyFrameEvent_MetaData[] = {
				{ "Category", "Kinect|EventDispatchers" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "< Called when new IR frame is generated" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RawBodyFrameEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "RawBodyFrameEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UKinectEventManager, RawBodyFrameEvent), Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature, METADATA_PARAMS(NewProp_RawBodyFrameEvent_MetaData, ARRAY_COUNT(NewProp_RawBodyFrameEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewKinectInfraredFrame_MetaData[] = {
				{ "Category", "Kinect|EventDispatchers" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "< Called when new depth frame is generated" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewKinectInfraredFrame = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnNewKinectInfraredFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UKinectEventManager, OnNewKinectInfraredFrame), Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnNewKinectInfraredFrame_MetaData, ARRAY_COUNT(NewProp_OnNewKinectInfraredFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewKinectDepthFrame_MetaData[] = {
				{ "Category", "Kinect|EventDispatchers" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "< Called when new color frame is generated" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewKinectDepthFrame = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnNewKinectDepthFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UKinectEventManager, OnNewKinectDepthFrame), Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnNewKinectDepthFrame_MetaData, ARRAY_COUNT(NewProp_OnNewKinectDepthFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewKinectColorFrame_MetaData[] = {
				{ "Category", "Kinect|EventDispatchers" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "< Called when new body frame is generated and the TrackingId of that body is assigned" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewKinectColorFrame = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnNewKinectColorFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UKinectEventManager, OnNewKinectColorFrame), Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnNewKinectColorFrame_MetaData, ARRAY_COUNT(NewProp_OnNewKinectColorFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KinectBodyEvent_MetaData[] = {
				{ "Category", "Kinect|EventDispatchers" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "ToolTip", "< Called when skeleton with new TrackingId Is detected" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_KinectBodyEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "KinectBodyEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UKinectEventManager, KinectBodyEvent), Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature, METADATA_PARAMS(NewProp_KinectBodyEvent_MetaData, ARRAY_COUNT(NewProp_KinectBodyEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSkeletonDetectedEvent_MetaData[] = {
				{ "Category", "Kinect|EventDispatchers" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewSkeletonDetectedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "NewSkeletonDetectedEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UKinectEventManager, NewSkeletonDetectedEvent), Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature, METADATA_PARAMS(NewProp_NewSkeletonDetectedEvent_MetaData, ARRAY_COUNT(NewProp_NewSkeletonDetectedEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnBodyIndexFrameEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletonLostEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RawBodyFrameEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnNewKinectInfraredFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnNewKinectDepthFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnNewKinectColorFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KinectBodyEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSkeletonDetectedEvent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKinectEventManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKinectEventManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UKinectEventManager, 441134213);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectEventManager(Z_Construct_UClass_UKinectEventManager, &UKinectEventManager::StaticClass, TEXT("/Script/KinectV2"), TEXT("UKinectEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
