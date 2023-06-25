// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JoystickFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EJoystickPOVDirection : uint8;
struct FJoystickInfo;
struct FJoystickState;
#ifdef JOYSTICKPLUGIN_JoystickFunctions_generated_h
#error "JoystickFunctions.generated.h already included, missing '#pragma once' in JoystickFunctions.h"
#endif
#define JOYSTICKPLUGIN_JoystickFunctions_generated_h

#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_SPARSE_DATA
#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIgnoreGameControllers); \
	DECLARE_FUNCTION(execMapJoystickDeviceToPlayer); \
	DECLARE_FUNCTION(execRegisterForJoystickEvents); \
	DECLARE_FUNCTION(execJoystickCount); \
	DECLARE_FUNCTION(execGetPreviousJoystickState); \
	DECLARE_FUNCTION(execGetJoystickState); \
	DECLARE_FUNCTION(execGetJoystick); \
	DECLARE_FUNCTION(execPOVAxis);


#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIgnoreGameControllers); \
	DECLARE_FUNCTION(execMapJoystickDeviceToPlayer); \
	DECLARE_FUNCTION(execRegisterForJoystickEvents); \
	DECLARE_FUNCTION(execJoystickCount); \
	DECLARE_FUNCTION(execGetPreviousJoystickState); \
	DECLARE_FUNCTION(execGetJoystickState); \
	DECLARE_FUNCTION(execGetJoystick); \
	DECLARE_FUNCTION(execPOVAxis);


#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_ACCESSORS
#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJoystickFunctions(); \
	friend struct Z_Construct_UClass_UJoystickFunctions_Statics; \
public: \
	DECLARE_CLASS(UJoystickFunctions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JoystickPlugin"), NO_API) \
	DECLARE_SERIALIZER(UJoystickFunctions)


#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUJoystickFunctions(); \
	friend struct Z_Construct_UClass_UJoystickFunctions_Statics; \
public: \
	DECLARE_CLASS(UJoystickFunctions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JoystickPlugin"), NO_API) \
	DECLARE_SERIALIZER(UJoystickFunctions)


#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoystickFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoystickFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoystickFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoystickFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoystickFunctions(UJoystickFunctions&&); \
	NO_API UJoystickFunctions(const UJoystickFunctions&); \
public: \
	NO_API virtual ~UJoystickFunctions();


#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoystickFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoystickFunctions(UJoystickFunctions&&); \
	NO_API UJoystickFunctions(const UJoystickFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoystickFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoystickFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoystickFunctions) \
	NO_API virtual ~UJoystickFunctions();


#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_16_PROLOG
#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_SPARSE_DATA \
	FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_RPC_WRAPPERS \
	FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_ACCESSORS \
	FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_INCLASS \
	FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_SPARSE_DATA \
	FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_ACCESSORS \
	FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_INCLASS_NO_PURE_DECLS \
	FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class JoystickFunctions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOYSTICKPLUGIN_API UClass* StaticClass<class UJoystickFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CreateJoystick_UE52_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
