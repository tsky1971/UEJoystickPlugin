// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JoystickInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EJoystickPOVDirection : uint8;
struct FJoystickState;
#ifdef JOYSTICKPLUGIN_JoystickInterface_generated_h
#error "JoystickInterface.generated.h already included, missing '#pragma once' in JoystickInterface.h"
#endif
#define JOYSTICKPLUGIN_JoystickInterface_generated_h

#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJoystickState_Statics; \
	JOYSTICKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> JOYSTICKPLUGIN_API UScriptStruct* StaticStruct<struct FJoystickState>();

#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJoystickInfo_Statics; \
	JOYSTICKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> JOYSTICKPLUGIN_API UScriptStruct* StaticStruct<struct FJoystickInfo>();

#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_SPARSE_DATA
#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_RPC_WRAPPERS
#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_ACCESSORS
#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	JOYSTICKPLUGIN_API UJoystickInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoystickInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(JOYSTICKPLUGIN_API, UJoystickInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoystickInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	JOYSTICKPLUGIN_API UJoystickInterface(UJoystickInterface&&); \
	JOYSTICKPLUGIN_API UJoystickInterface(const UJoystickInterface&); \
public: \
	JOYSTICKPLUGIN_API virtual ~UJoystickInterface();


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	JOYSTICKPLUGIN_API UJoystickInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	JOYSTICKPLUGIN_API UJoystickInterface(UJoystickInterface&&); \
	JOYSTICKPLUGIN_API UJoystickInterface(const UJoystickInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(JOYSTICKPLUGIN_API, UJoystickInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoystickInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoystickInterface) \
	JOYSTICKPLUGIN_API virtual ~UJoystickInterface();


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUJoystickInterface(); \
	friend struct Z_Construct_UClass_UJoystickInterface_Statics; \
public: \
	DECLARE_CLASS(UJoystickInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/JoystickPlugin"), JOYSTICKPLUGIN_API) \
	DECLARE_SERIALIZER(UJoystickInterface)


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IJoystickInterface() {} \
public: \
	typedef UJoystickInterface UClassType; \
	typedef IJoystickInterface ThisClass; \
	static void Execute_JoystickAxisChanged(UObject* O, int32 _Axis, float _value, float _valuePrev, FJoystickState _state, FJoystickState _prev); \
	static void Execute_JoystickButtonPressed(UObject* O, int32 _Button, FJoystickState _state); \
	static void Execute_JoystickButtonReleased(UObject* O, int32 _Button, FJoystickState _state); \
	static void Execute_JoystickHatChanged(UObject* O, int32 _Hat, EJoystickPOVDirection _Value, FJoystickState _state); \
	static void Execute_JoystickPluggedIn(UObject* O, int32 _DeviceInstanceId); \
	static void Execute_JoystickUnplugged(UObject* O, int32 _DeviceInstanceId); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_INCLASS_IINTERFACE \
protected: \
	virtual ~IJoystickInterface() {} \
public: \
	typedef UJoystickInterface UClassType; \
	typedef IJoystickInterface ThisClass; \
	static void Execute_JoystickAxisChanged(UObject* O, int32 _Axis, float _value, float _valuePrev, FJoystickState _state, FJoystickState _prev); \
	static void Execute_JoystickButtonPressed(UObject* O, int32 _Button, FJoystickState _state); \
	static void Execute_JoystickButtonReleased(UObject* O, int32 _Button, FJoystickState _state); \
	static void Execute_JoystickHatChanged(UObject* O, int32 _Hat, EJoystickPOVDirection _Value, FJoystickState _state); \
	static void Execute_JoystickPluggedIn(UObject* O, int32 _DeviceInstanceId); \
	static void Execute_JoystickUnplugged(UObject* O, int32 _DeviceInstanceId); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_136_PROLOG
#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_144_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_SPARSE_DATA \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_RPC_WRAPPERS \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_ACCESSORS \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_SPARSE_DATA \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_ACCESSORS \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h_139_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOYSTICKPLUGIN_API UClass* StaticClass<class UJoystickInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_JoystickPlugin_Source_JoystickPlugin_Public_JoystickInterface_h


#define FOREACH_ENUM_EJOYSTICKINPUTTYPE(op) \
	op(EJoystickInputType::INPUTTYPE_UNKNOWN) \
	op(EJoystickInputType::INPUTTYPE_JOYSTICK) \
	op(EJoystickInputType::INPUTTYPE_GAMECONTROLLER) 

enum class EJoystickInputType : uint8;
template<> struct TIsUEnumClass<EJoystickInputType> { enum { Value = true }; };
template<> JOYSTICKPLUGIN_API UEnum* StaticEnum<EJoystickInputType>();

#define FOREACH_ENUM_EJOYSTICKPOVDIRECTION(op) \
	op(EJoystickPOVDirection::DIRECTION_NONE) \
	op(EJoystickPOVDirection::DIRECTION_UP) \
	op(EJoystickPOVDirection::DIRECTION_UP_RIGHT) \
	op(EJoystickPOVDirection::DIRECTION_RIGHT) \
	op(EJoystickPOVDirection::DIRECTION_DOWN_RIGHT) \
	op(EJoystickPOVDirection::DIRECTION_DOWN) \
	op(EJoystickPOVDirection::DIRECTION_DOWN_LEFT) \
	op(EJoystickPOVDirection::DIRECTION_LEFT) \
	op(EJoystickPOVDirection::DIRECTION_UP_LEFT) 

enum class EJoystickPOVDirection : uint8;
template<> struct TIsUEnumClass<EJoystickPOVDirection> { enum { Value = true }; };
template<> JOYSTICKPLUGIN_API UEnum* StaticEnum<EJoystickPOVDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
