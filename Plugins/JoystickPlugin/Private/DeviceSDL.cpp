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

#include "JoystickPluginPrivatePCH.h"

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

DEFINE_LOG_CATEGORY(JoystickPluginLog);

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

JoystickHotPlugInterface* g_HotPlugDelegate;

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

DeviceSDL::DeviceSDL()
{
	UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL Starting"));
	InitSDL();
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

DeviceSDL::~DeviceSDL()
{
	UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL Closing"));
	DoneSDL();
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

void DeviceSDL::InitSDL()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
	UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::InitSDL()"));

	SDL_Init(0);
	UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::InitSDL() SDL init 0"));

	SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER);
	UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::InitSDL() SDL init subsystem gamecontroller"));

	SDL_InitSubSystem(SDL_INIT_JOYSTICK);
	UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::InitSDL() SDL init subsystem joystick"));


	m_NumberOfJoysticks = SDL_NumJoysticks();
	UE_LOG(JoystickPluginLog, Log, TEXT("%i joysticks were found."), m_NumberOfJoysticks);
	UE_LOG(JoystickPluginLog, Log, TEXT("The names of the joysticks are:"));


	for (int i = 0; i < m_NumberOfJoysticks; ++i) {

		SDL_Joystick *joystick = SDL_JoystickOpen(i);
		
		FString joystickName = FString(ANSI_TO_TCHAR(SDL_JoystickName(joystick)));
		UE_LOG(JoystickPluginLog, Log, TEXT("--- %s"), *joystickName);
		UE_LOG(JoystickPluginLog, Log, TEXT("--- Number of Axis %i"), SDL_JoystickNumAxes(joystick));
		UE_LOG(JoystickPluginLog, Log, TEXT("--- Number of Balls %i"), SDL_JoystickNumBalls(joystick));
		UE_LOG(JoystickPluginLog, Log, TEXT("--- Number of Buttons %i"), SDL_JoystickNumButtons(joystick));
		UE_LOG(JoystickPluginLog, Log, TEXT("--- Number of Hats %i"), SDL_JoystickNumHats(joystick));

		m_Joysticks[i] = joystick;
	}
}

void DeviceSDL::DoneSDL()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
	UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::DoneSDL()"));

	for (int32 i = 0; i < m_NumberOfJoysticks; ++i)
	{
		SDL_Joystick *js = m_Joysticks[i];
		SDL_JoystickClose(js);
	}
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

int32 DeviceSDL::getNumberOfJoysticks()
{
	m_NumberOfJoysticks = SDL_NumJoysticks();
	UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::getNumberOfJoysticks() %i"), m_NumberOfJoysticks);
	return m_NumberOfJoysticks;
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

FString DeviceSDL::getDeviceName(int32 InputDeviceIndex)
{
	FString result = "";
	if ((InputDeviceIndex >= 0) || (InputDeviceIndex < m_NumberOfJoysticks)) {
		result = ANSI_TO_TCHAR(SDL_JoystickName(m_Joysticks[InputDeviceIndex]));
	}
	return result;
}

Sint32 DeviceSDL::getDeviceInstanceId(int32 InputDeviceIndex)
{
	Sint32 result = -1;
	if ((InputDeviceIndex >= 0) || (InputDeviceIndex < m_NumberOfJoysticks)) {
		result = SDL_JoystickInstanceID(m_Joysticks[InputDeviceIndex]);
	}
	return result;
}

FString DeviceSDL::getDeviceGUIDtoString(int32 InputDeviceIndex)
{
	char buffer[32];
	int8 sizeBuffer = sizeof(buffer);
	FString result = "";

	if ((InputDeviceIndex >= 0) || (InputDeviceIndex < m_NumberOfJoysticks)) {
		SDL_JoystickGUID guid = SDL_JoystickGetDeviceGUID(InputDeviceIndex);
		SDL_JoystickGetGUIDString(guid, buffer, sizeBuffer);
		result = ANSI_TO_TCHAR(buffer);
	}
	return result;
}

FGuid DeviceSDL::getDeviceGUIDtoGUID(int32 InputDeviceIndex)
{
	FGuid result;

	if ((InputDeviceIndex >= 0) || (InputDeviceIndex < m_NumberOfJoysticks)) {
		SDL_JoystickGUID guid = SDL_JoystickGetDeviceGUID(InputDeviceIndex);
		memcpy(&result, &guid, sizeof(FGuid));
	}
	return result;
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

int32 DeviceSDL::getNumberOfAxes(int32 InputDeviceIndex)
{
	int32 result = 0;

	if ((InputDeviceIndex >= 0) || (InputDeviceIndex < m_NumberOfJoysticks)) {
		result = SDL_JoystickNumAxes(m_Joysticks[InputDeviceIndex]);
	}

	return result;
}

int32 DeviceSDL::getNumberOfButtons(int32 InputDeviceIndex)
{
	int32 result = 0;

	if ((InputDeviceIndex >= 0) || (InputDeviceIndex < m_NumberOfJoysticks)) {
		result = SDL_JoystickNumButtons(m_Joysticks[InputDeviceIndex]);
	}

	return result;
}

int32 DeviceSDL::getNumberOfHats(int32 InputDeviceIndex)
{
	int32 result = 0;
	
	if ((InputDeviceIndex >= 0) || (InputDeviceIndex < m_NumberOfJoysticks)) {
		result = SDL_JoystickNumHats(m_Joysticks[InputDeviceIndex]);
	}

	return result;
}

int32 DeviceSDL::getNumberOfBalls(int32 InputDeviceIndex)
{
	int32 result = 0;

	if ((InputDeviceIndex >= 0) || (InputDeviceIndex < m_NumberOfJoysticks)) {
		result = SDL_JoystickNumBalls(m_Joysticks[InputDeviceIndex]);
	}

	return result;
}


//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

JoystickPOVDirection SDL_hatValToDirection(int8 value)
{
	switch (value){
	case SDL_HAT_CENTERED:	return DIRECTION_NONE;
	case SDL_HAT_UP:		return DIRECTION_UP;
	case SDL_HAT_RIGHTUP:	return DIRECTION_UP_RIGHT;
	case SDL_HAT_RIGHT:	return DIRECTION_RIGHT;
	case SDL_HAT_RIGHTDOWN:	return DIRECTION_DOWN_RIGHT;
	case SDL_HAT_DOWN:	return DIRECTION_DOWN;
	case SDL_HAT_LEFTDOWN:	return DIRECTION_DOWN_LEFT;
	case SDL_HAT_LEFT:	return DIRECTION_LEFT;
	case SDL_HAT_LEFTUP:	return DIRECTION_UP_LEFT;
	default:
		//UE_LOG(LogTemp, Warning, TEXT("Warning, POV unhandled case. %d"), (int32)value);
		return DIRECTION_NONE;
	}
}


bool DeviceSDL::getDeviceState(FJoystickState &InputData, FJoystickInfo &JoystickInfo, int32 InputDeviceIndex)
{
	bool result = false;

	if ((InputDeviceIndex < 0) || (InputDeviceIndex >= m_NumberOfJoysticks)) {
		UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::getDeviceState() ERROR index out of range"));
		return result;
	}
	
	result = true;

	// update all joystick infos
	SDL_JoystickUpdate();

	//UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::getDeviceState() %s"), ANSI_TO_TCHAR(SDL_JoystickName(m_Joysticks[InputDeviceIndex])));

	InputData.Player = InputDeviceIndex;
	InputData.DeviceName = JoystickInfo.DeviceName;

	InputData.NumberOfBalls = SDL_JoystickNumBalls(m_Joysticks[InputDeviceIndex]);

	InputData.AxisArray.Empty(0);	
	int numAxis = InputData.NumberOfAxis = SDL_JoystickNumAxes(m_Joysticks[InputDeviceIndex]);
	float scaledValue = 0;
	for (int iAxes = 0; iAxes < numAxis; iAxes++) {		
		int rawValue = SDL_JoystickGetAxis(m_Joysticks[InputDeviceIndex], iAxes);		
		if (rawValue < 0) {
			scaledValue = (rawValue) / 32768.0;
		} else {
			scaledValue = (rawValue) / 32767.0;
		}
		InputData.AxisArray.Add(scaledValue);
	}

	int numHats = InputData.NumberOfHats = SDL_JoystickNumHats(m_Joysticks[InputDeviceIndex]);
	for (int iHat = 0; iHat < numHats; iHat++) {
		InputData.HatsArray.Add(0);
		Uint8 hatState = SDL_JoystickGetHat(m_Joysticks[InputDeviceIndex], iHat);
		InputData.HatsArray[iHat] = SDL_hatValToDirection(hatState);	
		InputData.POV[iHat] = SDL_hatValToDirection(hatState);
	}
		
	InputData.ButtonsArray.Empty(0);
	int numButtons = InputData.NumberOfButtons = SDL_JoystickNumButtons(m_Joysticks[InputDeviceIndex]);
	for (int64 iButton = 0; iButton < numButtons; iButton++) {
		InputData.ButtonsArray.Add(0);
		Uint8 buttonState = SDL_JoystickGetButton(m_Joysticks[InputDeviceIndex], iButton);
		InputData.ButtonsArray[iButton] = buttonState;
	}

	/*InputData.BallsArray.Empty(0);
	int numBalls = InputData.NumberOfBalls = SDL_JoystickNumBalls(m_Joysticks[InputDeviceIndex]);
	for (int64 iBall = 0; iBall < numBalls; ++iBall) {
		InputData.BallsArray.Add(0);
		Uint8 ballState = SDL_JoystickGetBall(m_Joysticks[InputDeviceIndex], iBall, &dx, &dy);
		InputData.BallsArray[iBall] = ballState;
	}*/

	return result;
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

void DeviceSDL::update(float DeltaTime)
{
	// This will spam the log heavily, comment it out for real plugins :)
	UE_LOG(JoystickPluginLog, Log, TEXT("Tick %f"), DeltaTime);
	if (SDL_PollEvent(&m_SDL_Event)) {
		switch (m_SDL_Event.type) {
		case SDL_JOYAXISMOTION:
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_JOYAXISMOTION Joystick %d axis %d value : %d"), m_SDL_Event.jaxis.which, m_SDL_Event.jaxis.axis, m_SDL_Event.jaxis.value);
			break;
		case SDL_JOYBUTTONDOWN:
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_JOYBUTTONDOWN"));
			break;
		}
	}
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

