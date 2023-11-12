// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoystickPlugin/Public/FeedbackFunctions.h"
#include "JoystickPlugin/Public/FeedbackEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbackFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	JOYSTICKPLUGIN_API UClass* Z_Construct_UClass_UFeedbackFunctions();
	JOYSTICKPLUGIN_API UClass* Z_Construct_UClass_UFeedbackFunctions_NoRegister();
	JOYSTICKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFeedbackData();
	UPackage* Z_Construct_UPackage__Script_JoystickPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UFeedbackFunctions::execDestroyEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_GET_PROPERTY(FIntProperty,Z_Param__EffectId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFeedbackFunctions::DestroyEffect(Z_Param__DeviceInstanceId,Z_Param__EffectId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execStopAllEffects)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFeedbackFunctions::StopAllEffects(Z_Param__DeviceInstanceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execStopEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_GET_PROPERTY(FIntProperty,Z_Param__EffectId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFeedbackFunctions::StopEffect(Z_Param__DeviceInstanceId,Z_Param__EffectId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execUnpauseDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFeedbackFunctions::UnpauseDevice(Z_Param__DeviceInstanceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execPauseDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFeedbackFunctions::PauseDevice(Z_Param__DeviceInstanceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execUpdateEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_GET_PROPERTY(FIntProperty,Z_Param__EffectId);
		P_GET_STRUCT(FFeedbackData,Z_Param__EffectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFeedbackFunctions::UpdateEffect(Z_Param__DeviceInstanceId,Z_Param__EffectId,Z_Param__EffectData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execCreateEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_GET_STRUCT(FFeedbackData,Z_Param__EffectData);
		P_GET_PROPERTY(FIntProperty,Z_Param__NumIterations);
		P_GET_UBOOL(Z_Param__Infinity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFeedbackFunctions::CreateEffect(Z_Param__DeviceInstanceId,Z_Param__EffectData,Z_Param__NumIterations,Z_Param__Infinity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execSetGain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_GET_PROPERTY(FIntProperty,Z_Param__Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFeedbackFunctions::SetGain(Z_Param__DeviceInstanceId,Z_Param__Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execSetAutocenter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_GET_PROPERTY(FIntProperty,Z_Param__Center);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFeedbackFunctions::SetAutocenter(Z_Param__DeviceInstanceId,Z_Param__Center);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execGetEffectStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_GET_PROPERTY(FIntProperty,Z_Param__EffectId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFeedbackFunctions::GetEffectStatus(Z_Param__DeviceInstanceId,Z_Param__EffectId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execGetNumEffectsPlaying)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFeedbackFunctions::GetNumEffectsPlaying(Z_Param__DeviceInstanceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackFunctions::execGetNumEffects)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFeedbackFunctions::GetNumEffects(Z_Param__DeviceInstanceId);
		P_NATIVE_END;
	}
	void UFeedbackFunctions::StaticRegisterNativesUFeedbackFunctions()
	{
		UClass* Class = UFeedbackFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateEffect", &UFeedbackFunctions::execCreateEffect },
			{ "DestroyEffect", &UFeedbackFunctions::execDestroyEffect },
			{ "GetEffectStatus", &UFeedbackFunctions::execGetEffectStatus },
			{ "GetNumEffects", &UFeedbackFunctions::execGetNumEffects },
			{ "GetNumEffectsPlaying", &UFeedbackFunctions::execGetNumEffectsPlaying },
			{ "PauseDevice", &UFeedbackFunctions::execPauseDevice },
			{ "SetAutocenter", &UFeedbackFunctions::execSetAutocenter },
			{ "SetGain", &UFeedbackFunctions::execSetGain },
			{ "StopAllEffects", &UFeedbackFunctions::execStopAllEffects },
			{ "StopEffect", &UFeedbackFunctions::execStopEffect },
			{ "UnpauseDevice", &UFeedbackFunctions::execUnpauseDevice },
			{ "UpdateEffect", &UFeedbackFunctions::execUpdateEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics
	{
		struct FeedbackFunctions_eventCreateEffect_Parms
		{
			int32 _DeviceInstanceId;
			FFeedbackData _EffectData;
			int32 _NumIterations;
			bool _Infinity;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__EffectData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__EffectData;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__NumIterations;
		static void NewProp__Infinity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__Infinity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventCreateEffect_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__EffectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__EffectData = { "_EffectData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventCreateEffect_Parms, _EffectData), Z_Construct_UScriptStruct_FFeedbackData, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__EffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__EffectData_MetaData)) }; // 2842943838
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__NumIterations = { "_NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventCreateEffect_Parms, _NumIterations), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__Infinity_SetBit(void* Obj)
	{
		((FeedbackFunctions_eventCreateEffect_Parms*)Obj)->_Infinity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__Infinity = { "_Infinity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FeedbackFunctions_eventCreateEffect_Parms), &Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__Infinity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventCreateEffect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__EffectData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__NumIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__Infinity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "CPP_Default__Infinity", "false" },
		{ "CPP_Default__NumIterations", "1" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "CreateEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::FeedbackFunctions_eventCreateEffect_Parms), Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_CreateEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics
	{
		struct FeedbackFunctions_eventDestroyEffect_Parms
		{
			int32 _DeviceInstanceId;
			int32 _EffectId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp__EffectId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventDestroyEffect_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::NewProp__EffectId = { "_EffectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventDestroyEffect_Parms, _EffectId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::NewProp__EffectId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "DestroyEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::FeedbackFunctions_eventDestroyEffect_Parms), Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics
	{
		struct FeedbackFunctions_eventGetEffectStatus_Parms
		{
			int32 _DeviceInstanceId;
			int32 _EffectId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp__EffectId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventGetEffectStatus_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp__EffectId = { "_EffectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventGetEffectStatus_Parms, _EffectId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventGetEffectStatus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp__EffectId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "GetEffectStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::FeedbackFunctions_eventGetEffectStatus_Parms), Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics
	{
		struct FeedbackFunctions_eventGetNumEffects_Parms
		{
			int32 _DeviceInstanceId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventGetNumEffects_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventGetNumEffects_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "GetNumEffects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::FeedbackFunctions_eventGetNumEffects_Parms), Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics
	{
		struct FeedbackFunctions_eventGetNumEffectsPlaying_Parms
		{
			int32 _DeviceInstanceId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventGetNumEffectsPlaying_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventGetNumEffectsPlaying_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "GetNumEffectsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::FeedbackFunctions_eventGetNumEffectsPlaying_Parms), Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics
	{
		struct FeedbackFunctions_eventPauseDevice_Parms
		{
			int32 _DeviceInstanceId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventPauseDevice_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::NewProp__DeviceInstanceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "PauseDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::FeedbackFunctions_eventPauseDevice_Parms), Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_PauseDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics
	{
		struct FeedbackFunctions_eventSetAutocenter_Parms
		{
			int32 _DeviceInstanceId;
			int32 _Center;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__Center;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventSetAutocenter_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp__Center = { "_Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventSetAutocenter_Parms, _Center), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FeedbackFunctions_eventSetAutocenter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FeedbackFunctions_eventSetAutocenter_Parms), &Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp__Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "SetAutocenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::FeedbackFunctions_eventSetAutocenter_Parms), Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics
	{
		struct FeedbackFunctions_eventSetGain_Parms
		{
			int32 _DeviceInstanceId;
			int32 _Gain;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__Gain;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventSetGain_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp__Gain = { "_Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventSetGain_Parms, _Gain), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FeedbackFunctions_eventSetGain_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FeedbackFunctions_eventSetGain_Parms), &Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp__Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::FeedbackFunctions_eventSetGain_Parms), Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics
	{
		struct FeedbackFunctions_eventStopAllEffects_Parms
		{
			int32 _DeviceInstanceId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventStopAllEffects_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::NewProp__DeviceInstanceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "StopAllEffects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::FeedbackFunctions_eventStopAllEffects_Parms), Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics
	{
		struct FeedbackFunctions_eventStopEffect_Parms
		{
			int32 _DeviceInstanceId;
			int32 _EffectId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp__EffectId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventStopEffect_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::NewProp__EffectId = { "_EffectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventStopEffect_Parms, _EffectId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::NewProp__EffectId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "StopEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::FeedbackFunctions_eventStopEffect_Parms), Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_StopEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics
	{
		struct FeedbackFunctions_eventUnpauseDevice_Parms
		{
			int32 _DeviceInstanceId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventUnpauseDevice_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::NewProp__DeviceInstanceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "UnpauseDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::FeedbackFunctions_eventUnpauseDevice_Parms), Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics
	{
		struct FeedbackFunctions_eventUpdateEffect_Parms
		{
			int32 _DeviceInstanceId;
			int32 _EffectId;
			FFeedbackData _EffectData;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp__EffectId;
		static const UECodeGen_Private::FStructPropertyParams NewProp__EffectData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventUpdateEffect_Parms, _DeviceInstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__EffectId = { "_EffectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventUpdateEffect_Parms, _EffectId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__EffectData = { "_EffectData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FeedbackFunctions_eventUpdateEffect_Parms, _EffectData), Z_Construct_UScriptStruct_FFeedbackData, METADATA_PARAMS(nullptr, 0) }; // 2842943838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__EffectId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__EffectData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "UpdateEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::FeedbackFunctions_eventUpdateEffect_Parms), Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFeedbackFunctions);
	UClass* Z_Construct_UClass_UFeedbackFunctions_NoRegister()
	{
		return UFeedbackFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UFeedbackFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFeedbackFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFeedbackFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFeedbackFunctions_CreateEffect, "CreateEffect" }, // 2980933767
		{ &Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect, "DestroyEffect" }, // 1649915036
		{ &Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus, "GetEffectStatus" }, // 2283535593
		{ &Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects, "GetNumEffects" }, // 1626009048
		{ &Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying, "GetNumEffectsPlaying" }, // 2628056173
		{ &Z_Construct_UFunction_UFeedbackFunctions_PauseDevice, "PauseDevice" }, // 2088374798
		{ &Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter, "SetAutocenter" }, // 4101884425
		{ &Z_Construct_UFunction_UFeedbackFunctions_SetGain, "SetGain" }, // 3928820066
		{ &Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects, "StopAllEffects" }, // 1871583366
		{ &Z_Construct_UFunction_UFeedbackFunctions_StopEffect, "StopEffect" }, // 2320286924
		{ &Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice, "UnpauseDevice" }, // 1568926162
		{ &Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect, "UpdateEffect" }, // 2538246671
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FeedbackFunctions.h" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFeedbackFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedbackFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFeedbackFunctions_Statics::ClassParams = {
		&UFeedbackFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFeedbackFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFeedbackFunctions()
	{
		if (!Z_Registration_Info_UClass_UFeedbackFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFeedbackFunctions.OuterSingleton, Z_Construct_UClass_UFeedbackFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFeedbackFunctions.OuterSingleton;
	}
	template<> JOYSTICKPLUGIN_API UClass* StaticClass<UFeedbackFunctions>()
	{
		return UFeedbackFunctions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedbackFunctions);
	UFeedbackFunctions::~UFeedbackFunctions() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFeedbackFunctions, UFeedbackFunctions::StaticClass, TEXT("UFeedbackFunctions"), &Z_Registration_Info_UClass_UFeedbackFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFeedbackFunctions), 747558115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_1345293114(TEXT("/Script/JoystickPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
