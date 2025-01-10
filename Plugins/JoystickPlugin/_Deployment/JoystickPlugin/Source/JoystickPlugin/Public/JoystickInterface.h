/*
*
* Copyright (C) <2014> samiljan <Sam Persson>, tsky <thomas.kollakowksy@w-hs.de>
* All rights reserved.
*
* This software may be modified and distributed under the terms
* of the BSD license.  See the LICENSE file for details.
*/

#pragma once

#include "UObject/Interface.h"
#include "Containers/Map.h"
#include "Containers/Array.h"
#include "InputCoreTypes.h"

#include "JoystickInterface.generated.h"

// SDLDeviceInstanceID is the ID of the Gamingdevice (USB)
//struct FSDLDevice
//{
//	uint32 DeviceIndex = -1;
//	uint32 DeviceInstanceId = -1;
//};

// Index is the Devicenumber in the list of devices
struct FDeviceIndex
{
	int32 value = -1;	
	explicit FDeviceIndex(int32 v) : value(v) {}
	bool operator==(const FDeviceIndex other) const { return value == other.value; };
};
FORCEINLINE uint32 GetTypeHash(FDeviceIndex _DeviceIndex)
{
	return GetTypeHash(_DeviceIndex.value);
}

// SDLDeviceInstanceID is the ID of the gaming device (USB)
struct FDeviceInstanceId
{
	int32 value = -1;
	explicit FDeviceInstanceId(int32 v) : value(v) {}
	bool operator==(FDeviceInstanceId other) const { return value == other.value; };
};

FORCEINLINE uint32 GetTypeHash(FDeviceInstanceId _DeviceInstanceId)
{
	return GetTypeHash(_DeviceInstanceId.value);
}

//struct FDeviceId
//{
//	int32 value = -1;
//	explicit FDeviceId(int32 v) : value(v) {}
//	bool operator==(FDeviceId other) const { return value == other.value; };
//};
//
//FORCEINLINE uint32 GetTypeHash(FDeviceId deviceId)
//{
//	return GetTypeHash(deviceId.value);
//}


UENUM(BlueprintType)
enum class EJoystickInputType : uint8
{
	INPUTTYPE_UNKNOWN,
	INPUTTYPE_JOYSTICK,
	INPUTTYPE_GAMECONTROLLER,	
};


UENUM(BlueprintType)
enum class EJoystickPOVDirection : uint8
{
	DIRECTION_NONE,
	DIRECTION_UP,
	DIRECTION_UP_RIGHT,
	DIRECTION_RIGHT,
	DIRECTION_DOWN_RIGHT,
	DIRECTION_DOWN,
	DIRECTION_DOWN_LEFT,
	DIRECTION_LEFT,
	DIRECTION_UP_LEFT,
};

FVector2D POVAxis(EJoystickPOVDirection povValue);

USTRUCT(BlueprintType)
struct FJoystickState
{
	GENERATED_USTRUCT_BODY()

	explicit FJoystickState(int32 _DeviceInstanceId = -1)
	: DeviceInstanceId(_DeviceInstanceId)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	int32 DeviceInstanceId;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	TArray<float> Axes;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	TArray<bool> Buttons;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	TArray<EJoystickPOVDirection> Hats;

};

USTRUCT(BlueprintType)
struct FJoystickInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	int32 Player = -1;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	int32 DeviceInstanceId = -1;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	bool IsRumbleDevice = false;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	FGuid ProductId;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	FString ProductName;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	FString DeviceName;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	bool Connected = false;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	TArray<EJoystickInputType> InputType;
};

UINTERFACE(MinimalAPI)
class UJoystickInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IJoystickInterface
{
	GENERATED_IINTERFACE_BODY()

public:

	//Define blueprint events
	UFUNCTION(BlueprintImplementableEvent, Category = "SDL Joystick")
	void JoystickButtonPressed(int32 _Button, FJoystickState _state);

	UFUNCTION(BlueprintImplementableEvent, Category = "SDL Joystick")
	void JoystickButtonReleased(int32 _Button, FJoystickState _state);

	UFUNCTION(BlueprintImplementableEvent, Category = "SDL Joystick")
	void JoystickAxisChanged(int32 _Axis, float _value, float _valuePrev, FJoystickState _state, FJoystickState _prev);

	UFUNCTION(BlueprintImplementableEvent, Category = "SDL Joystick")
	void JoystickHatChanged(int32 _Hat, EJoystickPOVDirection _Value, FJoystickState _state);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "SDL Joystick")
	void JoystickPluggedIn(int32 _DeviceInstanceId);

	UFUNCTION(BlueprintImplementableEvent, Category = "SDL Joystick")
	void JoystickUnplugged(int32 _DeviceInstanceId);

	virtual FString ToString();
};
