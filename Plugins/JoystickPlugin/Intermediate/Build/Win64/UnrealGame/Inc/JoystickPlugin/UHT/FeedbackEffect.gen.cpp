// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoystickPlugin/Public/FeedbackEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbackEffect() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	JOYSTICKPLUGIN_API UEnum* Z_Construct_UEnum_JoystickPlugin_EFeedbackType();
	JOYSTICKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFeedbackData();
	UPackage* Z_Construct_UPackage__Script_JoystickPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFeedbackType;
	static UEnum* EFeedbackType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFeedbackType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFeedbackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JoystickPlugin_EFeedbackType, Z_Construct_UPackage__Script_JoystickPlugin(), TEXT("EFeedbackType"));
		}
		return Z_Registration_Info_UEnum_EFeedbackType.OuterSingleton;
	}
	template<> JOYSTICKPLUGIN_API UEnum* StaticEnum<EFeedbackType>()
	{
		return EFeedbackType_StaticEnum();
	}
	struct Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::Enumerators[] = {
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::Enum_MetaDataParams[] = {
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
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JoystickPlugin,
		nullptr,
		"EFeedbackType",
		"EFeedbackType",
		Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JoystickPlugin_EFeedbackType()
	{
		if (!Z_Registration_Info_UEnum_EFeedbackType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFeedbackType.InnerSingleton, Z_Construct_UEnum_JoystickPlugin_EFeedbackType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFeedbackType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FeedbackData;
class UScriptStruct* FFeedbackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FeedbackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FeedbackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeedbackData, Z_Construct_UPackage__Script_JoystickPlugin(), TEXT("FeedbackData"));
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Phase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteLength_MetaData[];
#endif
		static void NewProp_InfiniteLength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InfiniteLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deadband_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Deadband;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftCoeff_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftCoeff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftSat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftSat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightCoeff_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightCoeff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightSat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightSat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RampStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RampStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RampEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RampEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeedbackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeedbackData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Type), Z_Construct_UEnum_JoystickPlugin_EFeedbackType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Type_MetaData)) }; // 3617817218
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Period), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Phase_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Phase), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Phase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Phase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_InfiniteLength_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_InfiniteLength_SetBit(void* Obj)
	{
		((FFeedbackData*)Obj)->InfiniteLength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_InfiniteLength = { "InfiniteLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFeedbackData), &Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_InfiniteLength_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_InfiniteLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_InfiniteLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLength_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLength = { "AttackLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, AttackLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLevel_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLevel = { "AttackLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, AttackLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_AttackLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLength_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLength = { "FadeLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, FadeLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLevel_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLevel = { "FadeLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, FadeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_FadeLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Deadband_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Deadband = { "Deadband", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, Deadband), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Deadband_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_Deadband_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftCoeff_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftCoeff = { "LeftCoeff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, LeftCoeff), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftCoeff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftCoeff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftSat_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftSat = { "LeftSat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, LeftSat), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftSat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_LeftSat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightCoeff_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightCoeff = { "RightCoeff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, RightCoeff), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightCoeff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightCoeff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightSat_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightSat = { "RightSat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, RightSat), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightSat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RightSat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampStart_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampStart = { "RampStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, RampStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampEnd_MetaData[] = {
		{ "Category", "SDL Effects" },
		{ "ModuleRelativePath", "Public/FeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampEnd = { "RampEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeedbackData, RampEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::NewProp_RampEnd_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeedbackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoystickPlugin,
		nullptr,
		&NewStructOps,
		"FeedbackData",
		sizeof(FFeedbackData),
		alignof(FFeedbackData),
		Z_Construct_UScriptStruct_FFeedbackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeedbackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeedbackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeedbackData()
	{
		if (!Z_Registration_Info_UScriptStruct_FeedbackData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FeedbackData.InnerSingleton, Z_Construct_UScriptStruct_FFeedbackData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FeedbackData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_CreateJoystick_UE51_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CreateJoystick_UE51_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics::EnumInfo[] = {
		{ EFeedbackType_StaticEnum, TEXT("EFeedbackType"), &Z_Registration_Info_UEnum_EFeedbackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3617817218U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CreateJoystick_UE51_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics::ScriptStructInfo[] = {
		{ FFeedbackData::StaticStruct, Z_Construct_UScriptStruct_FFeedbackData_Statics::NewStructOps, TEXT("FeedbackData"), &Z_Registration_Info_UScriptStruct_FeedbackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFeedbackData), 2842943838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CreateJoystick_UE51_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_3638283497(TEXT("/Script/JoystickPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CreateJoystick_UE51_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CreateJoystick_UE51_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_CreateJoystick_UE51_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CreateJoystick_UE51_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackEffect_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
