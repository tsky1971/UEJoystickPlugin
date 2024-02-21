// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoystickPlugin/Public/JoystickFunctions.h"
#include "JoystickPlugin/Public/JoystickInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoystickFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	JOYSTICKPLUGIN_API UClass* Z_Construct_UClass_UJoystickFunctions();
	JOYSTICKPLUGIN_API UClass* Z_Construct_UClass_UJoystickFunctions_NoRegister();
	JOYSTICKPLUGIN_API UEnum* Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection();
	JOYSTICKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FJoystickInfo();
	JOYSTICKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FJoystickState();
	UPackage* Z_Construct_UPackage__Script_JoystickPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UJoystickFunctions::execIgnoreGameControllers)
	{
		P_GET_UBOOL(Z_Param__bIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoystickFunctions::IgnoreGameControllers(Z_Param__bIgnore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoystickFunctions::execMapJoystickDeviceToPlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_GET_PROPERTY(FIntProperty,Z_Param__Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoystickFunctions::MapJoystickDeviceToPlayer(Z_Param__DeviceInstanceId,Z_Param__Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoystickFunctions::execRegisterForJoystickEvents)
	{
		P_GET_OBJECT(UObject,Z_Param__Listener);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoystickFunctions::RegisterForJoystickEvents(Z_Param__Listener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoystickFunctions::execJoystickCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UJoystickFunctions::JoystickCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoystickFunctions::execGetPreviousJoystickState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJoystickState*)Z_Param__Result=UJoystickFunctions::GetPreviousJoystickState(Z_Param__DeviceInstanceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoystickFunctions::execGetJoystickState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJoystickState*)Z_Param__Result=UJoystickFunctions::GetJoystickState(Z_Param__DeviceInstanceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoystickFunctions::execGetJoystick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__DeviceInstanceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJoystickInfo*)Z_Param__Result=UJoystickFunctions::GetJoystick(Z_Param__DeviceInstanceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoystickFunctions::execPOVAxis)
	{
		P_GET_ENUM(EJoystickPOVDirection,Z_Param__Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UJoystickFunctions::POVAxis(EJoystickPOVDirection(Z_Param__Direction));
		P_NATIVE_END;
	}
	void UJoystickFunctions::StaticRegisterNativesUJoystickFunctions()
	{
		UClass* Class = UJoystickFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetJoystick", &UJoystickFunctions::execGetJoystick },
			{ "GetJoystickState", &UJoystickFunctions::execGetJoystickState },
			{ "GetPreviousJoystickState", &UJoystickFunctions::execGetPreviousJoystickState },
			{ "IgnoreGameControllers", &UJoystickFunctions::execIgnoreGameControllers },
			{ "JoystickCount", &UJoystickFunctions::execJoystickCount },
			{ "MapJoystickDeviceToPlayer", &UJoystickFunctions::execMapJoystickDeviceToPlayer },
			{ "POVAxis", &UJoystickFunctions::execPOVAxis },
			{ "RegisterForJoystickEvents", &UJoystickFunctions::execRegisterForJoystickEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics
	{
		struct JoystickFunctions_eventGetJoystick_Parms
		{
			int32 _DeviceInstanceId;
			FJoystickInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventGetJoystick_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventGetJoystick_Parms, ReturnValue), Z_Construct_UScriptStruct_FJoystickInfo, METADATA_PARAMS(0, nullptr) }; // 3691798108
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Input|Joystick input" },
		{ "ModuleRelativePath", "Public/JoystickFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickFunctions, nullptr, "GetJoystick", nullptr, nullptr, Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::JoystickFunctions_eventGetJoystick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::JoystickFunctions_eventGetJoystick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJoystickFunctions_GetJoystick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickFunctions_GetJoystick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics
	{
		struct JoystickFunctions_eventGetJoystickState_Parms
		{
			int32 _DeviceInstanceId;
			FJoystickState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventGetJoystickState_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventGetJoystickState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(0, nullptr) }; // 2087783222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Input|Joystick input" },
		{ "ModuleRelativePath", "Public/JoystickFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickFunctions, nullptr, "GetJoystickState", nullptr, nullptr, Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::JoystickFunctions_eventGetJoystickState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::JoystickFunctions_eventGetJoystickState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJoystickFunctions_GetJoystickState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickFunctions_GetJoystickState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics
	{
		struct JoystickFunctions_eventGetPreviousJoystickState_Parms
		{
			int32 _DeviceInstanceId;
			FJoystickState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventGetPreviousJoystickState_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventGetPreviousJoystickState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(0, nullptr) }; // 2087783222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Input|Joystick input" },
		{ "ModuleRelativePath", "Public/JoystickFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickFunctions, nullptr, "GetPreviousJoystickState", nullptr, nullptr, Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::JoystickFunctions_eventGetPreviousJoystickState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::JoystickFunctions_eventGetPreviousJoystickState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics
	{
		struct JoystickFunctions_eventIgnoreGameControllers_Parms
		{
			bool _bIgnore;
		};
		static void NewProp__bIgnore_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::NewProp__bIgnore_SetBit(void* Obj)
	{
		((JoystickFunctions_eventIgnoreGameControllers_Parms*)Obj)->_bIgnore = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::NewProp__bIgnore = { "_bIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoystickFunctions_eventIgnoreGameControllers_Parms), &Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::NewProp__bIgnore_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::NewProp__bIgnore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Input|Joystick input" },
		{ "ModuleRelativePath", "Public/JoystickFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickFunctions, nullptr, "IgnoreGameControllers", nullptr, nullptr, Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::JoystickFunctions_eventIgnoreGameControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::JoystickFunctions_eventIgnoreGameControllers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics
	{
		struct JoystickFunctions_eventJoystickCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventJoystickCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Input|Joystick input" },
		{ "ModuleRelativePath", "Public/JoystickFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickFunctions, nullptr, "JoystickCount", nullptr, nullptr, Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::JoystickFunctions_eventJoystickCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::JoystickFunctions_eventJoystickCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJoystickFunctions_JoystickCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickFunctions_JoystickCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics
	{
		struct JoystickFunctions_eventMapJoystickDeviceToPlayer_Parms
		{
			int32 _DeviceInstanceId;
			int32 _Player;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp__Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventMapJoystickDeviceToPlayer_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::NewProp__Player = { "_Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventMapJoystickDeviceToPlayer_Parms, _Player), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::NewProp__DeviceInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::NewProp__Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Input|Joystick input" },
		{ "ModuleRelativePath", "Public/JoystickFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickFunctions, nullptr, "MapJoystickDeviceToPlayer", nullptr, nullptr, Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::JoystickFunctions_eventMapJoystickDeviceToPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::JoystickFunctions_eventMapJoystickDeviceToPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics
	{
		struct JoystickFunctions_eventPOVAxis_Parms
		{
			EJoystickPOVDirection _Direction;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp__Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp__Direction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::NewProp__Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::NewProp__Direction = { "_Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventPOVAxis_Parms, _Direction), Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection, METADATA_PARAMS(0, nullptr) }; // 3196869103
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventPOVAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::NewProp__Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::NewProp__Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Input|Joystick input" },
		{ "ModuleRelativePath", "Public/JoystickFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickFunctions, nullptr, "POVAxis", nullptr, nullptr, Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::JoystickFunctions_eventPOVAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::JoystickFunctions_eventPOVAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJoystickFunctions_POVAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickFunctions_POVAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics
	{
		struct JoystickFunctions_eventRegisterForJoystickEvents_Parms
		{
			UObject* _Listener;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp__Listener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::NewProp__Listener = { "_Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickFunctions_eventRegisterForJoystickEvents_Parms, _Listener), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::NewProp__Listener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL Input|Joystick input" },
		{ "ModuleRelativePath", "Public/JoystickFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickFunctions, nullptr, "RegisterForJoystickEvents", nullptr, nullptr, Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::JoystickFunctions_eventRegisterForJoystickEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::JoystickFunctions_eventRegisterForJoystickEvents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJoystickFunctions);
	UClass* Z_Construct_UClass_UJoystickFunctions_NoRegister()
	{
		return UJoystickFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UJoystickFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJoystickFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJoystickFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UJoystickFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoystickFunctions_GetJoystick, "GetJoystick" }, // 56302616
		{ &Z_Construct_UFunction_UJoystickFunctions_GetJoystickState, "GetJoystickState" }, // 1921176567
		{ &Z_Construct_UFunction_UJoystickFunctions_GetPreviousJoystickState, "GetPreviousJoystickState" }, // 2653169664
		{ &Z_Construct_UFunction_UJoystickFunctions_IgnoreGameControllers, "IgnoreGameControllers" }, // 4067994658
		{ &Z_Construct_UFunction_UJoystickFunctions_JoystickCount, "JoystickCount" }, // 3143309155
		{ &Z_Construct_UFunction_UJoystickFunctions_MapJoystickDeviceToPlayer, "MapJoystickDeviceToPlayer" }, // 4100216291
		{ &Z_Construct_UFunction_UJoystickFunctions_POVAxis, "POVAxis" }, // 1873304564
		{ &Z_Construct_UFunction_UJoystickFunctions_RegisterForJoystickEvents, "RegisterForJoystickEvents" }, // 3265965206
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJoystickFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoystickFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JoystickFunctions.h" },
		{ "ModuleRelativePath", "Public/JoystickFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoystickFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoystickFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJoystickFunctions_Statics::ClassParams = {
		&UJoystickFunctions::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJoystickFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UJoystickFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UJoystickFunctions()
	{
		if (!Z_Registration_Info_UClass_UJoystickFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJoystickFunctions.OuterSingleton, Z_Construct_UClass_UJoystickFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJoystickFunctions.OuterSingleton;
	}
	template<> JOYSTICKPLUGIN_API UClass* StaticClass<UJoystickFunctions>()
	{
		return UJoystickFunctions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoystickFunctions);
	UJoystickFunctions::~UJoystickFunctions() {}
	struct Z_CompiledInDeferFile_FID_CreateJoystick_UE53_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CreateJoystick_UE53_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJoystickFunctions, UJoystickFunctions::StaticClass, TEXT("UJoystickFunctions"), &Z_Registration_Info_UClass_UJoystickFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoystickFunctions), 2176225281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CreateJoystick_UE53_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_539603831(TEXT("/Script/JoystickPlugin"),
		Z_CompiledInDeferFile_FID_CreateJoystick_UE53_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CreateJoystick_UE53_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
