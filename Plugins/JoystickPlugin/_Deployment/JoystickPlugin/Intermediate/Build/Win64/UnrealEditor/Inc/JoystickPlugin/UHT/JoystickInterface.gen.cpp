// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoystickPlugin/Public/JoystickInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoystickInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
JOYSTICKPLUGIN_API UClass* Z_Construct_UClass_UJoystickInterface();
JOYSTICKPLUGIN_API UClass* Z_Construct_UClass_UJoystickInterface_NoRegister();
JOYSTICKPLUGIN_API UEnum* Z_Construct_UEnum_JoystickPlugin_EJoystickInputType();
JOYSTICKPLUGIN_API UEnum* Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection();
JOYSTICKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FJoystickInfo();
JOYSTICKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FJoystickState();
UPackage* Z_Construct_UPackage__Script_JoystickPlugin();
// End Cross Module References

// Begin Enum EJoystickInputType
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//struct FDeviceId\n//{\n//\x09int32 value = -1;\n//\x09""explicit FDeviceId(int32 v) : value(v) {}\n//\x09""bool operator==(FDeviceId other) const { return value == other.value; };\n//};\n//\n//FORCEINLINE uint32 GetTypeHash(FDeviceId deviceId)\n//{\n//\x09return GetTypeHash(deviceId.value);\n//}\n" },
		{ "INPUTTYPE_GAMECONTROLLER.Name", "EJoystickInputType::INPUTTYPE_GAMECONTROLLER" },
		{ "INPUTTYPE_JOYSTICK.Name", "EJoystickInputType::INPUTTYPE_JOYSTICK" },
		{ "INPUTTYPE_UNKNOWN.Name", "EJoystickInputType::INPUTTYPE_UNKNOWN" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
		{ "ToolTip", "struct FDeviceId\n{\n       int32 value = -1;\n       explicit FDeviceId(int32 v) : value(v) {}\n       bool operator==(FDeviceId other) const { return value == other.value; };\n};\n\nFORCEINLINE uint32 GetTypeHash(FDeviceId deviceId)\n{\n       return GetTypeHash(deviceId.value);\n}" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EJoystickInputType::INPUTTYPE_UNKNOWN", (int64)EJoystickInputType::INPUTTYPE_UNKNOWN },
		{ "EJoystickInputType::INPUTTYPE_JOYSTICK", (int64)EJoystickInputType::INPUTTYPE_JOYSTICK },
		{ "EJoystickInputType::INPUTTYPE_GAMECONTROLLER", (int64)EJoystickInputType::INPUTTYPE_GAMECONTROLLER },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JoystickPlugin,
	nullptr,
	"EJoystickInputType",
	"EJoystickInputType",
	Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JoystickPlugin_EJoystickInputType()
{
	if (!Z_Registration_Info_UEnum_EJoystickInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJoystickInputType.InnerSingleton, Z_Construct_UEnum_JoystickPlugin_EJoystickInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EJoystickInputType.InnerSingleton;
}
// End Enum EJoystickInputType

// Begin Enum EJoystickPOVDirection
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JoystickPlugin,
	nullptr,
	"EJoystickPOVDirection",
	"EJoystickPOVDirection",
	Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection()
{
	if (!Z_Registration_Info_UEnum_EJoystickPOVDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJoystickPOVDirection.InnerSingleton, Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EJoystickPOVDirection.InnerSingleton;
}
// End Enum EJoystickPOVDirection

// Begin ScriptStruct FJoystickState
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceInstanceId_MetaData[] = {
		{ "Category", "JoystickState" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[] = {
		{ "Category", "JoystickState" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[] = {
		{ "Category", "JoystickState" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hats_MetaData[] = {
		{ "Category", "JoystickState" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceInstanceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Axes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Axes;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Buttons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buttons;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hats_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoystickState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_DeviceInstanceId = { "DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoystickState, DeviceInstanceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceInstanceId_MetaData), NewProp_DeviceInstanceId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes_Inner = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoystickState, Axes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axes_MetaData), NewProp_Axes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons_Inner = { "Buttons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoystickState, Buttons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buttons_MetaData), NewProp_Buttons_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_Inner = { "Hats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection, METADATA_PARAMS(0, nullptr) }; // 1329459214
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats = { "Hats", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoystickState, Hats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hats_MetaData), NewProp_Hats_MetaData) }; // 1329459214
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoystickState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Axes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Buttons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickState_Statics::NewProp_Hats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoystickState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
	nullptr,
	&NewStructOps,
	"JoystickState",
	Z_Construct_UScriptStruct_FJoystickState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickState_Statics::PropPointers),
	sizeof(FJoystickState),
	alignof(FJoystickState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJoystickState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJoystickState()
{
	if (!Z_Registration_Info_UScriptStruct_JoystickState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoystickState.InnerSingleton, Z_Construct_UScriptStruct_FJoystickState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_JoystickState.InnerSingleton;
}
// End ScriptStruct FJoystickState

// Begin ScriptStruct FJoystickInfo
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceInstanceId_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRumbleDevice_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductName_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[] = {
		{ "Category", "JoystickInfo" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceInstanceId;
	static void NewProp_IsRumbleDevice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRumbleDevice;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static void NewProp_Connected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Connected;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoystickInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoystickInfo, Player), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceInstanceId = { "DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoystickInfo, DeviceInstanceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceInstanceId_MetaData), NewProp_DeviceInstanceId_MetaData) };
void Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice_SetBit(void* Obj)
{
	((FJoystickInfo*)Obj)->IsRumbleDevice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice = { "IsRumbleDevice", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJoystickInfo), &Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRumbleDevice_MetaData), NewProp_IsRumbleDevice_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoystickInfo, ProductId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductId_MetaData), NewProp_ProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoystickInfo, ProductName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductName_MetaData), NewProp_ProductName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoystickInfo, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
void Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected_SetBit(void* Obj)
{
	((FJoystickInfo*)Obj)->Connected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected = { "Connected", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJoystickInfo), &Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connected_MetaData), NewProp_Connected_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_Inner = { "InputType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_JoystickPlugin_EJoystickInputType, METADATA_PARAMS(0, nullptr) }; // 2555750863
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoystickInfo, InputType), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputType_MetaData), NewProp_InputType_MetaData) }; // 2555750863
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoystickInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_IsRumbleDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_Connected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewProp_InputType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoystickInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
	nullptr,
	&NewStructOps,
	"JoystickInfo",
	Z_Construct_UScriptStruct_FJoystickInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::PropPointers),
	sizeof(FJoystickInfo),
	alignof(FJoystickInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoystickInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJoystickInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJoystickInfo()
{
	if (!Z_Registration_Info_UScriptStruct_JoystickInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoystickInfo.InnerSingleton, Z_Construct_UScriptStruct_FJoystickInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_JoystickInfo.InnerSingleton;
}
// End ScriptStruct FJoystickInfo

// Begin Interface UJoystickInterface Function JoystickAxisChanged
struct JoystickInterface_eventJoystickAxisChanged_Parms
{
	int32 _Axis;
	float _value;
	float _valuePrev;
	FJoystickState _state;
	FJoystickState _prev;
};
void IJoystickInterface::JoystickAxisChanged(int32 _Axis, float _value, float _valuePrev, FJoystickState _state, FJoystickState _prev)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickAxisChanged instead.");
}
static FName NAME_UJoystickInterface_JoystickAxisChanged = FName(TEXT("JoystickAxisChanged"));
void IJoystickInterface::Execute_JoystickAxisChanged(UObject* O, int32 _Axis, float _value, float _valuePrev, FJoystickState _state, FJoystickState _prev)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
	JoystickInterface_eventJoystickAxisChanged_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickAxisChanged);
	if (Func)
	{
		Parms._Axis=_Axis;
		Parms._value=_value;
		Parms._valuePrev=_valuePrev;
		Parms._state=_state;
		Parms._prev=_prev;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__valuePrev;
	static const UECodeGen_Private::FStructPropertyParams NewProp__state;
	static const UECodeGen_Private::FStructPropertyParams NewProp__prev;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp__Axis = { "_Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickAxisChanged_Parms, _Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickAxisChanged_Parms, _value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp__valuePrev = { "_valuePrev", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickAxisChanged_Parms, _valuePrev), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickAxisChanged_Parms, _state), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(0, nullptr) }; // 1082452086
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp__prev = { "_prev", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickAxisChanged_Parms, _prev), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(0, nullptr) }; // 1082452086
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp__Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp__value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp__valuePrev,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp__state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::NewProp__prev,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickAxisChanged", nullptr, nullptr, Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::PropPointers), sizeof(JoystickInterface_eventJoystickAxisChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(JoystickInterface_eventJoystickAxisChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UJoystickInterface Function JoystickAxisChanged

// Begin Interface UJoystickInterface Function JoystickButtonPressed
struct JoystickInterface_eventJoystickButtonPressed_Parms
{
	int32 _Button;
	FJoystickState _state;
};
void IJoystickInterface::JoystickButtonPressed(int32 _Button, FJoystickState _state)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickButtonPressed instead.");
}
static FName NAME_UJoystickInterface_JoystickButtonPressed = FName(TEXT("JoystickButtonPressed"));
void IJoystickInterface::Execute_JoystickButtonPressed(UObject* O, int32 _Button, FJoystickState _state)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
	JoystickInterface_eventJoystickButtonPressed_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickButtonPressed);
	if (Func)
	{
		Parms._Button=_Button;
		Parms._state=_state;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Joystick" },
		{ "Comment", "//Define blueprint events\n" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
		{ "ToolTip", "Define blueprint events" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__Button;
	static const UECodeGen_Private::FStructPropertyParams NewProp__state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::NewProp__Button = { "_Button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickButtonPressed_Parms, _Button), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickButtonPressed_Parms, _state), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(0, nullptr) }; // 1082452086
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::NewProp__Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::NewProp__state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickButtonPressed", nullptr, nullptr, Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::PropPointers), sizeof(JoystickInterface_eventJoystickButtonPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(JoystickInterface_eventJoystickButtonPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UJoystickInterface Function JoystickButtonPressed

// Begin Interface UJoystickInterface Function JoystickButtonReleased
struct JoystickInterface_eventJoystickButtonReleased_Parms
{
	int32 _Button;
	FJoystickState _state;
};
void IJoystickInterface::JoystickButtonReleased(int32 _Button, FJoystickState _state)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickButtonReleased instead.");
}
static FName NAME_UJoystickInterface_JoystickButtonReleased = FName(TEXT("JoystickButtonReleased"));
void IJoystickInterface::Execute_JoystickButtonReleased(UObject* O, int32 _Button, FJoystickState _state)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
	JoystickInterface_eventJoystickButtonReleased_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickButtonReleased);
	if (Func)
	{
		Parms._Button=_Button;
		Parms._state=_state;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__Button;
	static const UECodeGen_Private::FStructPropertyParams NewProp__state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::NewProp__Button = { "_Button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickButtonReleased_Parms, _Button), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickButtonReleased_Parms, _state), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(0, nullptr) }; // 1082452086
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::NewProp__Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::NewProp__state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickButtonReleased", nullptr, nullptr, Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::PropPointers), sizeof(JoystickInterface_eventJoystickButtonReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::Function_MetaDataParams) };
static_assert(sizeof(JoystickInterface_eventJoystickButtonReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UJoystickInterface Function JoystickButtonReleased

// Begin Interface UJoystickInterface Function JoystickHatChanged
struct JoystickInterface_eventJoystickHatChanged_Parms
{
	int32 _Hat;
	EJoystickPOVDirection _Value;
	FJoystickState _state;
};
void IJoystickInterface::JoystickHatChanged(int32 _Hat, EJoystickPOVDirection _Value, FJoystickState _state)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickHatChanged instead.");
}
static FName NAME_UJoystickInterface_JoystickHatChanged = FName(TEXT("JoystickHatChanged"));
void IJoystickInterface::Execute_JoystickHatChanged(UObject* O, int32 _Hat, EJoystickPOVDirection _Value, FJoystickState _state)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
	JoystickInterface_eventJoystickHatChanged_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickHatChanged);
	if (Func)
	{
		Parms._Hat=_Hat;
		Parms._Value=_Value;
		Parms._state=_state;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__Hat;
	static const UECodeGen_Private::FBytePropertyParams NewProp__Value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp__state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp__Hat = { "_Hat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickHatChanged_Parms, _Hat), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp__Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp__Value = { "_Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickHatChanged_Parms, _Value), Z_Construct_UEnum_JoystickPlugin_EJoystickPOVDirection, METADATA_PARAMS(0, nullptr) }; // 1329459214
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickHatChanged_Parms, _state), Z_Construct_UScriptStruct_FJoystickState, METADATA_PARAMS(0, nullptr) }; // 1082452086
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp__Hat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp__Value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp__Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::NewProp__state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickHatChanged", nullptr, nullptr, Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::PropPointers), sizeof(JoystickInterface_eventJoystickHatChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(JoystickInterface_eventJoystickHatChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UJoystickInterface Function JoystickHatChanged

// Begin Interface UJoystickInterface Function JoystickPluggedIn
struct JoystickInterface_eventJoystickPluggedIn_Parms
{
	int32 _DeviceInstanceId;
};
void IJoystickInterface::JoystickPluggedIn(int32 _DeviceInstanceId)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickPluggedIn instead.");
}
static FName NAME_UJoystickInterface_JoystickPluggedIn = FName(TEXT("JoystickPluggedIn"));
void IJoystickInterface::Execute_JoystickPluggedIn(UObject* O, int32 _DeviceInstanceId)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
	JoystickInterface_eventJoystickPluggedIn_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickPluggedIn);
	if (Func)
	{
		Parms._DeviceInstanceId=_DeviceInstanceId;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickPluggedIn_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::NewProp__DeviceInstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickPluggedIn", nullptr, nullptr, Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::PropPointers), sizeof(JoystickInterface_eventJoystickPluggedIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(JoystickInterface_eventJoystickPluggedIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UJoystickInterface Function JoystickPluggedIn

// Begin Interface UJoystickInterface Function JoystickUnplugged
struct JoystickInterface_eventJoystickUnplugged_Parms
{
	int32 _DeviceInstanceId;
};
void IJoystickInterface::JoystickUnplugged(int32 _DeviceInstanceId)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JoystickUnplugged instead.");
}
static FName NAME_UJoystickInterface_JoystickUnplugged = FName(TEXT("JoystickUnplugged"));
void IJoystickInterface::Execute_JoystickUnplugged(UObject* O, int32 _DeviceInstanceId)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
	JoystickInterface_eventJoystickUnplugged_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UJoystickInterface_JoystickUnplugged);
	if (Func)
	{
		Parms._DeviceInstanceId=_DeviceInstanceId;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL Joystick" },
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__DeviceInstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::NewProp__DeviceInstanceId = { "_DeviceInstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoystickInterface_eventJoystickUnplugged_Parms, _DeviceInstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::NewProp__DeviceInstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoystickInterface, nullptr, "JoystickUnplugged", nullptr, nullptr, Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::PropPointers), sizeof(JoystickInterface_eventJoystickUnplugged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::Function_MetaDataParams) };
static_assert(sizeof(JoystickInterface_eventJoystickUnplugged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UJoystickInterface Function JoystickUnplugged

// Begin Interface UJoystickInterface
void UJoystickInterface::StaticRegisterNativesUJoystickInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJoystickInterface);
UClass* Z_Construct_UClass_UJoystickInterface_NoRegister()
{
	return UJoystickInterface::StaticClass();
}
struct Z_Construct_UClass_UJoystickInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JoystickInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickAxisChanged, "JoystickAxisChanged" }, // 2676197712
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickButtonPressed, "JoystickButtonPressed" }, // 3543179722
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickButtonReleased, "JoystickButtonReleased" }, // 1783747481
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickHatChanged, "JoystickHatChanged" }, // 3358652737
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickPluggedIn, "JoystickPluggedIn" }, // 2269566236
		{ &Z_Construct_UFunction_UJoystickInterface_JoystickUnplugged, "JoystickUnplugged" }, // 1140939794
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IJoystickInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJoystickInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJoystickInterface_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJoystickInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UJoystickInterface_Statics::Class_MetaDataParams)
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
// End Interface UJoystickInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EJoystickInputType_StaticEnum, TEXT("EJoystickInputType"), &Z_Registration_Info_UEnum_EJoystickInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2555750863U) },
		{ EJoystickPOVDirection_StaticEnum, TEXT("EJoystickPOVDirection"), &Z_Registration_Info_UEnum_EJoystickPOVDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1329459214U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FJoystickState::StaticStruct, Z_Construct_UScriptStruct_FJoystickState_Statics::NewStructOps, TEXT("JoystickState"), &Z_Registration_Info_UScriptStruct_JoystickState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoystickState), 1082452086U) },
		{ FJoystickInfo::StaticStruct, Z_Construct_UScriptStruct_FJoystickInfo_Statics::NewStructOps, TEXT("JoystickInfo"), &Z_Registration_Info_UScriptStruct_JoystickInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoystickInfo), 931159954U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJoystickInterface, UJoystickInterface::StaticClass, TEXT("UJoystickInterface"), &Z_Registration_Info_UClass_UJoystickInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoystickInterface), 37758985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_486484253(TEXT("/Script/JoystickPlugin"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
