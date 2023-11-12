/*
*
* Copyright (C) <2014> samiljan <Sam Persson>, tsky <thomas.kollakowksy@w-hs.de>
* All rights reserved.
*
* This software may be modified and distributed under the terms
* of the BSD license.  See the LICENSE file for details.
*/

#pragma once

#include "JoystickInterface.h"
#include "JoystickDevice.h"

// @third party code - BEGIN SDL
#include "Windows/AllowWindowsPlatformTypes.h"

#include "SDL3/SDL.h"
//#include "SDL3/SDL_joystick.h"
//#include "SDL3/SDL_gamepad.h"
//#include "SDL3/SDL_events.h"

#include "Windows/HideWindowsPlatformTypes.h"
// @third party code - END SDL


class IJoystickEventInterface;

//struct SDL_Joystick;
//typedef struct SDL_Joystick SDL_Joystick;
//struct SDL_Haptic;
//typedef struct SDL_Haptic SDL_Haptic;
//struct SDL_GamePad;
//typedef struct SDL_GamePad SDL_GamePad;

//union SDL_Event;

struct FDeviceInfoSDL
{
	FDeviceInfoSDL() {}

	// DeviceIndex is the number in the Joystick array, 
	// while the DeviceInstanceId is the number of Inputdevice (USB?) -> SDL3
	// finally all be uint32 values
	FDeviceIndex DeviceIndex {0};
	//FDeviceId DeviceId {0}; // removed while same as instance
	FDeviceInstanceId DeviceInstanceId {0};

	FString Name = "unknown";
	FString Path = "unknown";

	SDL_Haptic* Haptic = nullptr;
	SDL_Joystick* Joystick = nullptr;
};

class FDeviceSDL
{
public:
	void ScanJoystickDevices();

	FJoystickState InitialDeviceState(FDeviceInstanceId _DeviceId);

	// delete this static FString DeviceGUIDtoString(FDeviceIndex _DeviceIndex);
	static FGuid DeviceGUIDtoGUID(FDeviceInfoSDL _DeviceInfo);

	FDeviceInfoSDL * GetDevice(FDeviceInstanceId _DeviceInstanceId);
	
	void IgnoreGameControllers(bool _bIgnore);

	void Update();

	FDeviceSDL(IJoystickEventInterface * _EventInterface);
	void Init();
	virtual ~FDeviceSDL();

private:

	FDeviceInfoSDL AddDevice(FDeviceInfoSDL _deviceInfoSDL);
	void RemoveDevice(FDeviceInstanceId _DeviceInstanceID);

	// maps the instanceID to the deviceInfo
	TMap<FDeviceInstanceId, FDeviceInfoSDL> DevicesMap;
	// maps the index to the instanceId
	TMap<FDeviceIndex, FDeviceInstanceId> DeviceMapping;

	IJoystickEventInterface* EventInterface;

	//SDL3
	int m_NumJoysticks = 0;
	SDL_JoystickID* m_pJoystickIDArray;

	bool bOwnsSDL;

	bool bIgnoreGameControllers = true;

	bool bSubSystemHaptic;
	bool bSubSystemJoystick;
	bool bSubSystemGameController;

	static int HandleSDLEvent(void* _Userdata, SDL_Event* _Event);
};
