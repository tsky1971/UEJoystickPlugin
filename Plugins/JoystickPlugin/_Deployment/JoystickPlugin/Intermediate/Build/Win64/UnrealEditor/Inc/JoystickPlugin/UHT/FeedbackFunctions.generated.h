// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FeedbackFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFeedbackData;
#ifdef JOYSTICKPLUGIN_FeedbackFunctions_generated_h
#error "FeedbackFunctions.generated.h already included, missing '#pragma once' in FeedbackFunctions.h"
#endif
#define JOYSTICKPLUGIN_FeedbackFunctions_generated_h

#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_11_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDestroyEffect); \
	DECLARE_FUNCTION(execStopAllEffects); \
	DECLARE_FUNCTION(execStopEffect); \
	DECLARE_FUNCTION(execUnpauseDevice); \
	DECLARE_FUNCTION(execPauseDevice); \
	DECLARE_FUNCTION(execUpdateEffect); \
	DECLARE_FUNCTION(execCreateEffect); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetAutocenter); \
	DECLARE_FUNCTION(execGetEffectStatus); \
	DECLARE_FUNCTION(execGetNumEffectsPlaying); \
	DECLARE_FUNCTION(execGetNumEffects);


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUFeedbackFunctions(); \
	friend struct Z_Construct_UClass_UFeedbackFunctions_Statics; \
public: \
	DECLARE_CLASS(UFeedbackFunctions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JoystickPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFeedbackFunctions)


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFeedbackFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFeedbackFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFeedbackFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFeedbackFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFeedbackFunctions(UFeedbackFunctions&&); \
	UFeedbackFunctions(const UFeedbackFunctions&); \
public: \
	NO_API virtual ~UFeedbackFunctions();


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_8_PROLOG
#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_11_RPC_WRAPPERS \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_11_INCLASS \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOYSTICKPLUGIN_API UClass* StaticClass<class UFeedbackFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_FeedbackFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
