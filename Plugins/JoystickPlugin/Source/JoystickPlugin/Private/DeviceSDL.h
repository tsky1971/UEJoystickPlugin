/*
*
* Copyright (C) <2014> <w-hs - cglab projects>
* All rights reserved.
*
* This software may be modified and distributed under the terms
* of the BSD license.  See the LICENSE file for details.
*/

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

#pragma once

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

#include "../../../ThirdParty/SDL2/SDL2/include/SDL2/SDL.h"
#include "../../../ThirdParty/SDL2/SDL2/include/SDL2/SDL_joystick.h"
#include "../../../ThirdParty/SDL2/SDL2/include/SDL2/SDL_gamecontroller.h"

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

#include <SlateBasics.h>

#include "IJoystickPlugin.h"
#include "JoystickDelegate.h"
#include "FJoystickPlugin.h"

DECLARE_LOG_CATEGORY_EXTERN(JoystickPluginLog, Log, All);

#include "JoystickPluginPrivatePCH.h"

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

extern JoystickHotPlugInterface* g_HotPlugDelegate;

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

/**
 * Type definition for shared pointers to instances of
 */
typedef TSharedPtr<class CG221InputDeviceSDL> CG221InputDevicePtr;

/**
 * Type definition for shared references to instances of
 */
typedef TSharedRef<class CG221InputDeviceSDL> CG221InputDeviceRef;

//typedef TArray<UCG221InputObject *> tCG221InputObjectArray;

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

class DeviceSDL
{

public:
	int32 getNumberOfJoysticks();
	
	int32 getNumberOfAxes(int32 InputDeviceIndex = 0);
	int32 getNumberOfButtons(int32 InputDeviceIndex = 0);
	int32 getNumberOfHats(int32 InputDeviceIndex = 0);
	int32 getNumberOfBalls(int32 InputDeviceIndex = 0);

	bool getDeviceState(FJoystickState &InputData, FJoystickInfo &JoystickInfo, int32 InputDeviceIndex = 0);

	FString getDeviceName(int32 InputDeviceIndex = 0);
	Sint32 getDeviceInstanceId(int32 InputDeviceIndex = 0);
	FString getDeviceGUIDtoString(int32 InputDeviceIndex = 0);
	FGuid getDeviceGUIDtoGUID(int32 InputDeviceIndex = 0);


	//inline uint32 getTypeHash(const GUID guid)
	//{
	//	auto data = reinterpret_cast<const uint64*>(&guid);
	//	return HashCombine(GetTypeHash(data[0]), GetTypeHash(data[1]));
	//}

	//inline FGuid ToFGuid(GUID g)
	//{
	//	FGuid guid;
	//	memcpy(&guid, &g, sizeof(FGuid));
	//	return guid;
	//}

	//inline GUID ToGUID(FGuid g)
	//{
	//	GUID guid;
	//	memcpy(&guid, &g, sizeof(FGuid));
	//	return guid;
	//}

	void update(float DeltaTime);

	DeviceSDL();
	virtual ~DeviceSDL();

protected:
	void InitSDL();
	void DoneSDL();

private:
	SDL_Joystick *m_Joysticks[8];
	SDL_GameController *m_GameController[8];

	//tCG221InputObjectArray m_InputObjects;
	int m_NumberOfJoysticks;

	SDL_Event m_SDL_Event;
};

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////
