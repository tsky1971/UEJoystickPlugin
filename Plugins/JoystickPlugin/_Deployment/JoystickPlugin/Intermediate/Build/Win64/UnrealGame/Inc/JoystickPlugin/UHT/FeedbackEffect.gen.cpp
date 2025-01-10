// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoystickPlugin/Public/FeedbackEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbackEffect() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
JOYSTICKPLUGIN_API UEnum* Z_Construct_UEnum_JoystickPlugin_EFeedbackType();
JOYSTICKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFeedbackData();
UPackage* Z_Construct_UPackage__Script_JoystickPlugin();
// End Cross Module References

// Begin Enum EFeedbackType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFeedbackType;
static UEnum* EFeedbackType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFeedbackType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFeedbackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JoystickPlugin_EFeedbackType, (UObject*)Z_Construct_UPackage__Script_JoystickPlugin(), TEXT("EFeedbackType"));
	}
	return Z_Registration_Info_UEnum_EFeedbackType.OuterSingleton;
}
template<> JOYSTICKPLUGIN_API UEnum* StaticEnum<EFeedbackType>()
{
	return EFeedbackType_StaticEnum();
}
struct Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CONSTANT.Name", "EFeedbackType::CONSTANT" },
		{ "DAMPER.Name", "EFeedbackType::DAMPER" },
		{ "FRICTION.Name", "EFeedbackType::FRICTION" },
		{ "INERTIA.Name", "EFeedbackType::INERTIA" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
		{ "RAMP.Name", "EFeedbackType::RAMP" },
		{ "SAWTOOTHDOWN.Name", "EFeedbackType::SAWTOOTHDOWN" },
		{ "SAWTOOTHUP.Name", "EFeedbackType::SAWTOOTHUP" },
		{ "SINE.Name", "EFeedbackType::SINE" },
		{ "SPRING.Name", "EFeedbackType::SPRING" },
		{ "TRIANGLE.Name", "EFeedbackType::TRIANGLE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFeedbackType::CONSTANT", (int64)EFeedbackType::CONSTANT },
		{ "EFeedbackType::SPRING", (int64)EFeedbackType::SPRING },
		{ "EFeedbackType::DAMPER", (int64)EFeedbackType::DAMPER },
		{ "EFeedbackType::INERTIA", (int64)EFeedbackType::INERTIA },
		{ "EFeedbackType::FRICTION", (int64)EFeedbackType::FRICTION },
		{ "EFeedbackType::SINE", (int64)EFeedbackType::SINE },
		{ "EFeedbackType::TRIANGLE", (int64)EFeedbackType::TRIANGLE },
		{ "EFeedbackType::SAWTOOTHUP", (int64)EFeedbackType::SAWTOOTHUP },
		{ "EFeedbackType::SAWTOOTHDOWN", (int64)EFeedbackType::SAWTOOTHDOWN },
		{ "EFeedbackType::RAMP", (int64)EFeedbackType::RAMP },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JoystickPlugin,
	nullptr,
	"EFeedbackType",
	"EFeedbackType",
	Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JoystickPlugin_EFeedbackType()
{
	if (!Z_Registration_Info_UEnum_EFeedbackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFeedbackType.InnerSingleton, Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFeedbackType.InnerSingleton;
}
// End Enum EFeedbackType

// Begin ScriptStruct FFeedbackData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FeedbackData;
class UScriptStruct* FFeedbackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FeedbackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FeedbackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeedbackData, (UObject*)Z_Construct_UPackage__Script_JoystickPlugin(), TEXT("FeedbackData"));
	}
	return Z_Registration_Info_UScriptStruct_FeedbackData.OuterSingleton;
}
template<> JOYSTICKPLUGIN_API UScriptStruct* StaticStruct<FFeedbackData>()
{
	return FFeedbackData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFeedbackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteLength_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackLength_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackLevel_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeLength_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeLevel_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deadband_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftCoeff_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftSat_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightCoeff_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightSat_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RampStart_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RampEnd_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Phase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static void NewProp_InfiniteLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InfiniteLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Deadband;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftCoeff;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftSat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightCoeff;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightSat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RampStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RampEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeedbackData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Type), Z_Construct_UEnum_JoystickPlugin_EFeedbackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3846021099
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Phase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Phase_MetaData), NewProp_Phase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Delay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delay_MetaData), NewProp_Delay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
void Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_InfiniteLength_SetBit(void* Obj)
{
	((FFeedbackData*)Obj)->InfiniteLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_InfiniteLength = { "InfiniteLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFeedbackData), &Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_InfiniteLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteLength_MetaData), NewProp_InfiniteLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLength = { "AttackLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, AttackLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackLength_MetaData), NewProp_AttackLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLevel = { "AttackLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, AttackLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackLevel_MetaData), NewProp_AttackLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLength = { "FadeLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, FadeLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeLength_MetaData), NewProp_FadeLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLevel = { "FadeLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, FadeLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeLevel_MetaData), NewProp_FadeLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Deadband = { "Deadband", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, Deadband), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deadband_MetaData), NewProp_Deadband_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftCoeff = { "LeftCoeff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, LeftCoeff), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftCoeff_MetaData), NewProp_LeftCoeff_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftSat = { "LeftSat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, LeftSat), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftSat_MetaData), NewProp_LeftSat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightCoeff = { "RightCoeff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, RightCoeff), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightCoeff_MetaData), NewProp_RightCoeff_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightSat = { "RightSat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, RightSat), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSat_MetaData), NewProp_RightSat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampStart = { "RampStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, RampStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RampStart_MetaData), NewProp_RampStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampEnd = { "RampEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeedbackData, RampEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RampEnd_MetaData), NewProp_RampEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeedbackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Phase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_InfiniteLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Deadband,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftCoeff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftSat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightCoeff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightSat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeedbackData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
	nullptr,
	&NewStructOps,
	"FeedbackData",
	Z_Construct_UScriptStruct_FFeedbackData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::PropPointers),
	sizeof(FFeedbackData),
	alignof(FFeedbackData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFeedbackData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFeedbackData()
{
	if (!Z_Registration_Info_UScriptStruct_FeedbackData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FeedbackData.InnerSingleton, Z_Construct_UScriptStruct_FFeedbackData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FeedbackData.InnerSingleton;
}
// End ScriptStruct FFeedbackData

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFeedbackType_StaticEnum, TEXT("EFeedbackType"), &Z_Registration_Info_UEnum_EFeedbackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3846021099U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFeedbackData::StaticStruct, Z_Construct_UScriptStruct_FFeedbackData_Statics::NewStructOps, TEXT("FeedbackData"), &Z_Registration_Info_UScriptStruct_FeedbackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFeedbackData), 465078902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_1147953917(TEXT("/Script/JoystickPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
