// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoystickPlugin/Public/JoystickInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoystickInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	JOYSTICKPLUGIN_API UClass* Z_Construct_UClass_UJoystickInterface();
	JOYSTICKPLUGIN_API UClass* Z_Construct_UClass_UJoystickInterface_NoRegister();
	JOYSTICKPLUGIN_API UEnum* Z_Construct_UEnum_JoystickPlugin_EJoystickInputType();
	JOYSTICKPLUGIN_API UEnum* Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection();
	JOYSTICKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FJoystickInfo();
	JOYSTICKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FJoystickState();
	UPackage* Z_Construct_UPackage__Script_JoystickPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJoystickInputType;
	static UEnum* EJoystickInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJoystickInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJoystickInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JoystickPlugin_EJoystickInputType, (UObject*)Z_Construct_UPackage__Script_JoystickPlugin(), TEXT("EJoystickInputType"));
		}
		return Z_Registration_Info_UEnum_EJoystickInputType.OuterSingleton;
	}
	template<> JOYSTICKPLUGIN_API UEnum* StaticEnum<EJoystickInputType>()
	{
		return EJoystickInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::Enumerators[] = {
		{ "EJoystickInputType::INPUTTYPE_UNKNOWN", (int64)EJoystickInputType::INPUTTYPE_UNKNOWN },
		{ "EJoystickInputType::INPUTTYPE_JOYSTICK", (int64)EJoystickInputType::INPUTTYPE_JOYSTICK },
		{ "EJoystickInputType::INPUTTYPE_GAMECONTROLLER", (int64)EJoystickInputType::INPUTTYPE_GAMECONTROLLER },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "INPUTTYPE_GAMECONTROLLER.Name", "EJoystickInputType::INPUTTYPE_GAMECONTROLLER" },
		{ "INPUTTYPE_JOYSTICK.Name", "EJoystickInputType::INPUTTYPE_JOYSTICK" },
		{ "INPUTTYPE_UNKNOWN.Name", "EJoystickInputType::INPUTTYPE_UNKNOWN" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JoystickPlugin,
		nullptr,
		"EJoystickInputType",
		"EJoystickInputType",
		Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JoystickPlugin_EJoystickInputType()
	{
		if (!Z_Registration_Info_UEnum_EJoystickInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJoystickInputType.InnerSingleton, Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJoystickInputType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJoystickPOVDirection;
	static UEnum* EJoystickPOVDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJoystickPOVDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJoystickPOVDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection, (UObject*)Z_Construct_UPackage__Script_JoystickPlugin(), TEXT("EJoystickPOVDirection"));
		}
		return Z_Registration_Info_UEnum_EJoystickPOVDirection.OuterSingleton;
	}
	template<> JOYSTICKPLUGIN_API UEnum* StaticEnum<EJoystickPOVDirection>()
	{
		return EJoystickPOVDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::Enumerators[] = {
		{ "EJoystickPOVDirection::DIRECTION_NONE", (int64)EJoystickPOVDirection::DIRECTION_NONE },
		{ "EJoystickPOVDirection::DIRECTION_UP", (int64)EJoystickPOVDirection::DIRECTION_UP },
		{ "EJoystickPOVDirection::DIRECTION_UP_RIGHT", (int64)EJoystickPOVDirection::DIRECTION_UP_RIGHT },
		{ "EJoystickPOVDirection::DIRECTION_RIGHT", (int64)EJoystickPOVDirection::DIRECTION_RIGHT },
		{ "EJoystickPOVDirection::DIRECTION_DOWN_RIGHT", (int64)EJoystickPOVDirection::DIRECTION_DOWN_RIGHT },
		{ "EJoystickPOVDirection::DIRECTION_DOWN", (int64)EJoystickPOVDirection::DIRECTION_DOWN },
		{ "EJoystickPOVDirection::DIRECTION_DOWN_LEFT", (int64)EJoystickPOVDirection::DIRECTION_DOWN_LEFT },
		{ "EJoystickPOVDirection::DIRECTION_LEFT", (int64)EJoystickPOVDirection::DIRECTION_LEFT },
		{ "EJoystickPOVDirection::DIRECTION_UP_LEFT", (int64)EJoystickPOVDirection::DIRECTION_UP_LEFT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DIRECTION_DOWN.Name", "EJoystickPOVDirection::DIRECTION_DOWN" },
		{ "DIRECTION_DOWN_LEFT.Name", "EJoystickPOVDirection::DIRECTION_DOWN_LEFT" },
		{ "DIRECTION_DOWN_RIGHT.Name", "EJoystickPOVDirection::DIRECTION_DOWN_RIGHT" },
		{ "DIRECTION_LEFT.Name", "EJoystickPOVDirection::DIRECTION_LEFT" },
		{ "DIRECTION_NONE.Name", "EJoystickPOVDirection::DIRECTION_NONE" },
		{ "DIRECTION_RIGHT.Name", "EJoystickPOVDirection::DIRECTION_RIGHT" },
		{ "DIRECTION_UP.Name", "EJoystickPOVDirection::DIRECTION_UP" },
		{ "DIRECTION_UP_LEFT.Name", "EJoystickPOVDirection::DIRECTION_UP_LEFT" },
		{ "DIRECTION_UP_RIGHT.Name", "EJoystickPOVDirection::DIRECTION_UP_RIGHT" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JoystickPlugin,
		nullptr,
		"EJoystickPOVDirection",
		"EJoystickPOVDirection",
		Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection()
	{
		if (!Z_Registration_Info_UEnum_EJoystickPOVDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJoystickPOVDirection.InnerSingleton, Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJoystickPOVDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JoystickState;
class UScriptStruct* FJoystickState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JoystickState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JoystickState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoystickState, (UObject*)Z_Construct_UPackage__Script_JoystickPlugin(), TEXT("JoystickState"));
	}
	return Z_Registration_Info_UScriptStruct_JoystickState.OuterSingleton;
}
template<> JOYSTICKPLUGIN_API UScriptStruct* StaticStruct<FJoystickState>()
{
	return FJoystickState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJoystickState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Axes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Axes;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Buttons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buttons;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hats_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Hats;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Balls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Balls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Balls;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoystickState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoystickState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "JoystickState" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickState, DeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_DeviceId_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes_Inner = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes_MetaData[] = {
		{ "Category", "JoystickState" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickState, Axes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons_Inner = { "Buttons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons_MetaData[] = {
		{ "Category", "JoystickState" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickState, Buttons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_Inner = { "Hats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection, METADATA_PARAMS(nullptr, 0) }; // 3127258581
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_MetaData[] = {
		{ "Category", "JoystickState" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats = { "Hats", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickState, Hats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_MetaData)) }; // 3127258581
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Balls_Inner = { "Balls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Balls_MetaData[] = {
		{ "Category", "JoystickState" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Balls = { "Balls", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickState, Balls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Balls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Balls_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoystickState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Balls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Balls,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoystickState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
		nullptr,
		&NewStructOps,
		"JoystickState",
		sizeof(FJoystickState),
		alignof(FJoystickState),
		Z_Construct_UScriptStruct_FJoystickState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoystickState()
	{
		if (!Z_Registration_Info_UScriptStruct_JoystickState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoystickState.InnerSingleton, Z_Construct_UScriptStruct_FJoystickState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JoystickState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JoystickInfo;
class UScriptStruct* FJoystickInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JoystickInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JoystickInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoystickInfo, (UObject*)Z_Construct_UPackage__Script_JoystickPlugin(), TEXT("JoystickInfo"));
	}
	return Z_Registration_Info_UScriptStruct_JoystickInfo.OuterSingleton;
}
template<> JOYSTICKPLUGIN_API UScriptStruct* StaticStruct<FJoystickInfo>()
{
	return FJoystickInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJoystickInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRumbleDevice_MetaData[];
#endif
		static void NewProp_IsRumbleDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRumbleDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProductId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[];
#endif
		static void NewProp_Connected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Connected;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoystickInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickInfo, Player), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickInfo, DeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice_SetBit(void* Obj)
	{
		((FJoystickInfo*)Obj)->IsRumbleDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice = { "IsRumbleDevice", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJoystickInfo), &Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductId_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickInfo, ProductId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductName_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickInfo, ProductName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected_SetBit(void* Obj)
	{
		((FJoystickInfo*)Obj)->Connected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected = { "Connected", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJoystickInfo), &Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_Inner = { "InputType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_JoystickPlugin_EJoystickInputType, METADATA_PARAMS(nullptr, 0) }; // 1837824172
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoystickInfo, InputType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_MetaData)) }; // 1837824172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoystickInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
		nullptr,
		&NewStructOps,
		"JoystickInfo",
		sizeof(FJoystickInfo),
		alignof(FJoystickInfo),
		Z_Construct_UScriptStruct_FJoystickInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoystickInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoystickInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_JoystickInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoystickInfo.InnerSingleton, Z_Construct_UScriptStruct_FJoystickInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JoystickInfo.InnerSingleton;
	}
	struct JoystickInterface_eventJoystickAxisChanged_Parms
	{
		int32 Axis;
		float value;
		float valuePrev;
		FJoystickState state;
		FJoystickState prev;
	};
	struct JoystickInterface_eventJoystickBallMoved_Parms
	{
		int32 Ball;
		FVector2D Delta;
		FJoystickState State;
	};
	struct JoystickInterface_eventJoystickButtonPressed_Parms
	{
		int32 Button;
		FJoystickState state;
	};
	struct JoystickInterface_eventJoystickButtonReleased_Parms
	{
		int32 Button;
		FJoystickState state;
	};
	struct JoystickInterface_eventJoystickHatChanged_Parms
	{
		int32 Hat;
		EJoystickPOVDirection Value;
		FJoystickState state;
	};
	struct JoystickInterface_eventJoystickPluggedIn_Parms
	{
		int32 DeviceId;
	};
	struct JoystickInterface_eventJoystickUnplugged_Parms
	{
		int32 DeviceId;
	};
	void IJoystickInterface::JoystickAxisChanged(int32 Axis, float value, float valuePrev, FJoystickState state, FJoystickState prev)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickAxisChanged instead.");
	}
	void IJoystickInterface::JoystickBallMoved(int32 Ball, FVector2D Delta, FJoystickState State)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickBallMoved instead.");
	}
	void IJoystickInterface::JoystickButtonPressed(int32 Button, FJoystickState state)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickButtonPressed instead.");
	}
	void IJoystickInterface::JoystickButtonReleased(int32 Button, FJoystickState state)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickButtonReleased instead.");
	}
	void IJoystickInterface::JoystickHatChanged(int32 Hat, EJoystickPOVDirection Value, FJoystickState state)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickHatChanged instead.");
	}
	void IJoystickInterface::JoystickPluggedIn(int32 DeviceId)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickPluggedIn instead.");
	}
	void IJoystickInterface::JoystickUnplugged(int32 DeviceId)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickUnplugged instead.");
	}
	void UJoystickInterface::StaticRegisterNativesUJoystickInterface()
	{
	}
	struct Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valuePrev;
		static const UECodeGen_Private::FStructPropertyParams NewProp_state;
		static const UECodeGen_Private::FStructPropertyParams NewProp_prev;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickAxisChanged_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickAxisChanged_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp_valuePrev = { "valuePrev", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickAxisChanged_Parms, valuePrev), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickAxisChanged_Parms, state), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(nullptr, 0) }; // 1445536434
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp_prev = { "prev", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickAxisChanged_Parms, prev), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(nullptr, 0) }; // 1445536434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp_valuePrev,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp_state,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp_prev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL2 Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickAxisChanged", nullptr, nullptr, sizeof(JoystickInterface_eventJoystickAxisChanged_Parms), Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ball;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FStructPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickBallMoved_Parms, Ball), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickBallMoved_Parms, Delta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickBallMoved_Parms, State), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(nullptr, 0) }; // 1445536434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::NewProp_Ball,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL2 Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickBallMoved", nullptr, nullptr, sizeof(JoystickInterface_eventJoystickBallMoved_Parms), Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Button;
		static const UECodeGen_Private::FStructPropertyParams NewProp_state;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickButtonPressed_Parms, Button), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickButtonPressed_Parms, state), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(nullptr, 0) }; // 1445536434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL2 Joystick" },
		{ "Comment", "//Define blueprint events\n" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
		{ "ToolTip", "Define blueprint events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickButtonPressed", nullptr, nullptr, sizeof(JoystickInterface_eventJoystickButtonPressed_Parms), Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Button;
		static const UECodeGen_Private::FStructPropertyParams NewProp_state;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickButtonReleased_Parms, Button), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickButtonReleased_Parms, state), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(nullptr, 0) }; // 1445536434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL2 Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickButtonReleased", nullptr, nullptr, sizeof(JoystickInterface_eventJoystickButtonReleased_Parms), Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_state;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp_Hat = { "Hat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickHatChanged_Parms, Hat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickHatChanged_Parms, Value), Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection, METADATA_PARAMS(nullptr, 0) }; // 3127258581
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickHatChanged_Parms, state), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(nullptr, 0) }; // 1445536434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp_Hat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp_Value_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL2 Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickHatChanged", nullptr, nullptr, sizeof(JoystickInterface_eventJoystickHatChanged_Parms), Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickPluggedIn_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL2 Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickPluggedIn", nullptr, nullptr, sizeof(JoystickInterface_eventJoystickPluggedIn_Parms), Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoystickInterface_eventJoystickUnplugged_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::Function_MetaDataParams[] = {
		{ "Category", "SDL2 Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickUnplugged", nullptr, nullptr, sizeof(JoystickInterface_eventJoystickUnplugged_Parms), Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJoystickInterface);
	UClass* Z_Construct_UClass_UJoystickInterface_NoRegister()
	{
		return UJoystickInterface::StaticClass();
	}
	struct Z_Construct_UClass_UJoystickInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJoystickInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJoystickInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged, "JoystickAxisChanged" }, // 1096530623
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickBallMoved, "JoystickBallMoved" }, // 4138055955
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed, "JoystickButtonPressed" }, // 2630846028
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased, "JoystickButtonReleased" }, // 2091239288
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged, "JoystickHatChanged" }, // 2495094613
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn, "JoystickPluggedIn" }, // 843697145
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged, "JoystickUnplugged" }, // 3650098455
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoystickInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoystickInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IJoystickInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJoystickInterface_Statics::ClassParams = {
		&UJoystickInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UJoystickInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJoystickInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoystickInterface()
	{
		if (!Z_Registration_Info_UClass_UJoystickInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJoystickInterface.OuterSingleton, Z_Construct_UClass_UJoystickInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJoystickInterface.OuterSingleton;
	}
	template<> JOYSTICKPLUGIN_API UClass* StaticClass<UJoystickInterface>()
	{
		return UJoystickInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoystickInterface);
	UJoystickInterface::~UJoystickInterface() {}
	static FName NAME_UJoystickInterface_JoystickAxisChanged = FName(TEXT("JoystickAxisChanged"));
	void IJoystickInterface::Execute_JoystickAxisChanged(UObject* O, int32 Axis, float value, float valuePrev, FJoystickState state, FJoystickState prev)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
		JoystickInterface_eventJoystickAxisChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickAxisChanged);
		if (Func)
		{
			Parms.Axis=Axis;
			Parms.value=value;
			Parms.valuePrev=valuePrev;
			Parms.state=state;
			Parms.prev=prev;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UJoystickInterface_JoystickBallMoved = FName(TEXT("JoystickBallMoved"));
	void IJoystickInterface::Execute_JoystickBallMoved(UObject* O, int32 Ball, FVector2D Delta, FJoystickState State)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
		JoystickInterface_eventJoystickBallMoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickBallMoved);
		if (Func)
		{
			Parms.Ball=Ball;
			Parms.Delta=Delta;
			Parms.State=State;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UJoystickInterface_JoystickButtonPressed = FName(TEXT("JoystickButtonPressed"));
	void IJoystickInterface::Execute_JoystickButtonPressed(UObject* O, int32 Button, FJoystickState state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
		JoystickInterface_eventJoystickButtonPressed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickButtonPressed);
		if (Func)
		{
			Parms.Button=Button;
			Parms.state=state;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UJoystickInterface_JoystickButtonReleased = FName(TEXT("JoystickButtonReleased"));
	void IJoystickInterface::Execute_JoystickButtonReleased(UObject* O, int32 Button, FJoystickState state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
		JoystickInterface_eventJoystickButtonReleased_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickButtonReleased);
		if (Func)
		{
			Parms.Button=Button;
			Parms.state=state;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UJoystickInterface_JoystickHatChanged = FName(TEXT("JoystickHatChanged"));
	void IJoystickInterface::Execute_JoystickHatChanged(UObject* O, int32 Hat, EJoystickPOVDirection Value, FJoystickState state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
		JoystickInterface_eventJoystickHatChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickHatChanged);
		if (Func)
		{
			Parms.Hat=Hat;
			Parms.Value=Value;
			Parms.state=state;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UJoystickInterface_JoystickPluggedIn = FName(TEXT("JoystickPluggedIn"));
	void IJoystickInterface::Execute_JoystickPluggedIn(UObject* O, int32 DeviceId)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
		JoystickInterface_eventJoystickPluggedIn_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickPluggedIn);
		if (Func)
		{
			Parms.DeviceId=DeviceId;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UJoystickInterface_JoystickUnplugged = FName(TEXT("JoystickUnplugged"));
	void IJoystickInterface::Execute_JoystickUnplugged(UObject* O, int32 DeviceId)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
		JoystickInterface_eventJoystickUnplugged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickUnplugged);
		if (Func)
		{
			Parms.DeviceId=DeviceId;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::EnumInfo[] = {
		{ EJoystickInputType_StaticEnum, TEXT("EJoystickInputType"), &Z_Registration_Info_UEnum_EJoystickInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1837824172U) },
		{ EJoystickPOVDirection_StaticEnum, TEXT("EJoystickPOVDirection"), &Z_Registration_Info_UEnum_EJoystickPOVDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3127258581U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::ScriptStructInfo[] = {
		{ FJoystickState::StaticStruct, Z_Construct_UScriptStruct_FJoystickState_Statics::NewStructOps, TEXT("JoystickState"), &Z_Registration_Info_UScriptStruct_JoystickState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoystickState), 1445536434U) },
		{ FJoystickInfo::StaticStruct, Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewStructOps, TEXT("JoystickInfo"), &Z_Registration_Info_UScriptStruct_JoystickInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoystickInfo), 3396818950U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJoystickInterface, UJoystickInterface::StaticClass, TEXT("UJoystickInterface"), &Z_Registration_Info_UClass_UJoystickInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoystickInterface), 2593036708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_2944720999(TEXT("/Script/JoystickPlugin"),
		Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Creates_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
