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

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
JOYSTICKPLUGIN_API UClass* Z_Construct_UClass_UFeedbackFunctions();
JOYSTICKPLUGIN_API UClass* Z_Construct_UClass_UFeedbackFunctions_NoRegister();
JOYSTICKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFeedbackData();
UPackage* Z_Construct_UPackage__Script_JoystickPlugin();
// End Cross Module References

// Begin Class UFeedbackFunctions Function CreateEffect
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "CPP_Default__Infinity", "false" },
		{ "CPP_Default__NumIterations", "1" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__EffectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp__EffectData;
	static const UECodeGen_Private::FIntPropertyParams NewProp__NumIterations;
	static void NewProp__Infinity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__Infinity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventCreateEffect_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__EffectData = { "_EffectData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventCreateEffect_Parms, _EffectData), Z_Construct_UScriptStruct_FFeedbackData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__EffectData_MetaData), NewProp__EffectData_MetaData) }; // 465078902
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__NumIterations = { "_NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventCreateEffect_Parms, _NumIterations), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__Infinity_SetBit(void* Obj)
{
	((FeedbackFunctions_eventCreateEffect_Parms*)Obj)->_Infinity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__Infinity = { "_Infinity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FeedbackFunctions_eventCreateEffect_Parms), &Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__Infinity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventCreateEffect_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__EffectData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp__Infinity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "CreateEffect", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::FeedbackFunctions_eventCreateEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::FeedbackFunctions_eventCreateEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_CreateEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_CreateEffect_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFeedbackFunctions Function CreateEffect

// Begin Class UFeedbackFunctions Function DestroyEffect
struct Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics
{
	struct FeedbackFunctions_eventDestroyEffect_Parms
	{
		int32 _DeviceInstanceId;
		int32 _EffectId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp__EffectId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventDestroyEffect_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::NewProp__EffectId = { "_EffectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventDestroyEffect_Parms, _EffectId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::NewProp__DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::NewProp__EffectId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "DestroyEffect", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::FeedbackFunctions_eventDestroyEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::FeedbackFunctions_eventDestroyEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackFunctions::execDestroyEffect)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
	P_GET_PROPERTY(FIntProperty,Z_Param__EffectId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFeedbackFunctions::DestroyEffect(Z_Param__DeviceInstanceId,Z_Param__EffectId);
	P_NATIVE_END;
}
// End Class UFeedbackFunctions Function DestroyEffect

// Begin Class UFeedbackFunctions Function GetEffectStatus
struct Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics
{
	struct FeedbackFunctions_eventGetEffectStatus_Parms
	{
		int32 _DeviceInstanceId;
		int32 _EffectId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp__EffectId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventGetEffectStatus_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp__EffectId = { "_EffectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventGetEffectStatus_Parms, _EffectId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventGetEffectStatus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp__DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp__EffectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "GetEffectStatus", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::FeedbackFunctions_eventGetEffectStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::FeedbackFunctions_eventGetEffectStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFeedbackFunctions Function GetEffectStatus

// Begin Class UFeedbackFunctions Function GetNumEffects
struct Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics
{
	struct FeedbackFunctions_eventGetNumEffects_Parms
	{
		int32 _DeviceInstanceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventGetNumEffects_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventGetNumEffects_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::NewProp__DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "GetNumEffects", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::FeedbackFunctions_eventGetNumEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::FeedbackFunctions_eventGetNumEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackFunctions::execGetNumEffects)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFeedbackFunctions::GetNumEffects(Z_Param__DeviceInstanceId);
	P_NATIVE_END;
}
// End Class UFeedbackFunctions Function GetNumEffects

// Begin Class UFeedbackFunctions Function GetNumEffectsPlaying
struct Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics
{
	struct FeedbackFunctions_eventGetNumEffectsPlaying_Parms
	{
		int32 _DeviceInstanceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventGetNumEffectsPlaying_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventGetNumEffectsPlaying_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::NewProp__DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "GetNumEffectsPlaying", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::FeedbackFunctions_eventGetNumEffectsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::FeedbackFunctions_eventGetNumEffectsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackFunctions::execGetNumEffectsPlaying)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFeedbackFunctions::GetNumEffectsPlaying(Z_Param__DeviceInstanceId);
	P_NATIVE_END;
}
// End Class UFeedbackFunctions Function GetNumEffectsPlaying

// Begin Class UFeedbackFunctions Function PauseDevice
struct Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics
{
	struct FeedbackFunctions_eventPauseDevice_Parms
	{
		int32 _DeviceInstanceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventPauseDevice_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::NewProp__DeviceInstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "PauseDevice", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::FeedbackFunctions_eventPauseDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::FeedbackFunctions_eventPauseDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_PauseDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_PauseDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackFunctions::execPauseDevice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFeedbackFunctions::PauseDevice(Z_Param__DeviceInstanceId);
	P_NATIVE_END;
}
// End Class UFeedbackFunctions Function PauseDevice

// Begin Class UFeedbackFunctions Function SetAutocenter
struct Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics
{
	struct FeedbackFunctions_eventSetAutocenter_Parms
	{
		int32 _DeviceInstanceId;
		int32 _Center;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp__Center;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventSetAutocenter_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp__Center = { "_Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventSetAutocenter_Parms, _Center), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FeedbackFunctions_eventSetAutocenter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FeedbackFunctions_eventSetAutocenter_Parms), &Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp__DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp__Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "SetAutocenter", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::FeedbackFunctions_eventSetAutocenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::FeedbackFunctions_eventSetAutocenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFeedbackFunctions Function SetAutocenter

// Begin Class UFeedbackFunctions Function SetGain
struct Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics
{
	struct FeedbackFunctions_eventSetGain_Parms
	{
		int32 _DeviceInstanceId;
		int32 _Gain;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp__Gain;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventSetGain_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp__Gain = { "_Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventSetGain_Parms, _Gain), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FeedbackFunctions_eventSetGain_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FeedbackFunctions_eventSetGain_Parms), &Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp__DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp__Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "SetGain", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::FeedbackFunctions_eventSetGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::FeedbackFunctions_eventSetGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_SetGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_SetGain_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFeedbackFunctions Function SetGain

// Begin Class UFeedbackFunctions Function StopAllEffects
struct Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics
{
	struct FeedbackFunctions_eventStopAllEffects_Parms
	{
		int32 _DeviceInstanceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventStopAllEffects_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::NewProp__DeviceInstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "StopAllEffects", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::FeedbackFunctions_eventStopAllEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::FeedbackFunctions_eventStopAllEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackFunctions::execStopAllEffects)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFeedbackFunctions::StopAllEffects(Z_Param__DeviceInstanceId);
	P_NATIVE_END;
}
// End Class UFeedbackFunctions Function StopAllEffects

// Begin Class UFeedbackFunctions Function StopEffect
struct Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics
{
	struct FeedbackFunctions_eventStopEffect_Parms
	{
		int32 _DeviceInstanceId;
		int32 _EffectId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp__EffectId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventStopEffect_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::NewProp__EffectId = { "_EffectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventStopEffect_Parms, _EffectId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::NewProp__DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::NewProp__EffectId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "StopEffect", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::FeedbackFunctions_eventStopEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::FeedbackFunctions_eventStopEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_StopEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_StopEffect_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFeedbackFunctions Function StopEffect

// Begin Class UFeedbackFunctions Function UnpauseDevice
struct Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics
{
	struct FeedbackFunctions_eventUnpauseDevice_Parms
	{
		int32 _DeviceInstanceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventUnpauseDevice_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::NewProp__DeviceInstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "UnpauseDevice", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::FeedbackFunctions_eventUnpauseDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::FeedbackFunctions_eventUnpauseDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackFunctions::execUnpauseDevice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFeedbackFunctions::UnpauseDevice(Z_Param__DeviceInstanceId);
	P_NATIVE_END;
}
// End Class UFeedbackFunctions Function UnpauseDevice

// Begin Class UFeedbackFunctions Function UpdateEffect
struct Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics
{
	struct FeedbackFunctions_eventUpdateEffect_Parms
	{
		int32 _DeviceInstanceId;
		int32 _EffectId;
		FFeedbackData _EffectData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Force Feedback" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp__EffectId;
	static const UECodeGen_Private::FStructPropertyParams NewProp__EffectData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventUpdateEffect_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__EffectId = { "_EffectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventUpdateEffect_Parms, _EffectId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__EffectData = { "_EffectData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackFunctions_eventUpdateEffect_Parms, _EffectData), Z_Construct_UScriptStruct_FFeedbackData, METADATA_PARAMS(0, nullptr) }; // 465078902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__EffectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::NewProp__EffectData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackFunctions, nullptr, "UpdateEffect", nullptr, nullptr, Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::FeedbackFunctions_eventUpdateEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::FeedbackFunctions_eventUpdateEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFeedbackFunctions Function UpdateEffect

// Begin Class UFeedbackFunctions
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
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFeedbackFunctions);
UClass* Z_Construct_UClass_UFeedbackFunctions_NoRegister()
{
	return UFeedbackFunctions::StaticClass();
}
struct Z_Construct_UClass_UFeedbackFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FeedbackFunctions.h" },
		{ "ModuleRelativePath", "Public/FeedbackFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFeedbackFunctions_CreateEffect, "CreateEffect" }, // 2071604468
		{ &Z_Construct_UFunction_UFeedbackFunctions_DestroyEffect, "DestroyEffect" }, // 885499681
		{ &Z_Construct_UFunction_UFeedbackFunctions_GetEffectStatus, "GetEffectStatus" }, // 583855792
		{ &Z_Construct_UFunction_UFeedbackFunctions_GetNumEffects, "GetNumEffects" }, // 3685719644
		{ &Z_Construct_UFunction_UFeedbackFunctions_GetNumEffectsPlaying, "GetNumEffectsPlaying" }, // 3557649197
		{ &Z_Construct_UFunction_UFeedbackFunctions_PauseDevice, "PauseDevice" }, // 1534296561
		{ &Z_Construct_UFunction_UFeedbackFunctions_SetAutocenter, "SetAutocenter" }, // 156176870
		{ &Z_Construct_UFunction_UFeedbackFunctions_SetGain, "SetGain" }, // 755881090
		{ &Z_Construct_UFunction_UFeedbackFunctions_StopAllEffects, "StopAllEffects" }, // 3699749847
		{ &Z_Construct_UFunction_UFeedbackFunctions_StopEffect, "StopEffect" }, // 1916216864
		{ &Z_Construct_UFunction_UFeedbackFunctions_UnpauseDevice, "UnpauseDevice" }, // 203374274
		{ &Z_Construct_UFunction_UFeedbackFunctions_UpdateEffect, "UpdateEffect" }, // 3472546703
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedbackFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFeedbackFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFunctions_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UFeedbackFunctions_Statics::Class_MetaDataParams)
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
// End Class UFeedbackFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFeedbackFunctions, UFeedbackFunctions::StaticClass, TEXT("UFeedbackFunctions"), &Z_Registration_Info_UClass_UFeedbackFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFeedbackFunctions), 198958340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_105095391(TEXT("/Script/JoystickPlugin"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
