/*
*
* Copyright (C) <2014> samiljan <Sam Persson>, tsky <thomas.kollakowksy@w-hs.de>
* All rights reserved.
*
* This software may be modified and distributed under the terms
* of the BSD license.  See the LICENSE file for details.
*/

#include "DeviceSDL.h"
#include "JoystickPlugin.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

char g_pszGUID[33] = "not set";
int g_NumJoysticks = 0;
SDL_JoystickID* g_pJoystickIDArray = nullptr;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FDeviceSDL::ScanJoystickDevices()
{

	//if (InputDeviceMap.size() > 0) {
	//	InputDeviceMap.clear();
	//}

	g_pJoystickIDArray = SDL_GetJoysticks(&g_NumJoysticks);

	for (int deviceIndex = 0; deviceIndex < g_NumJoysticks; deviceIndex++) {

		SDL_JoystickID joystickInstanceID = g_pJoystickIDArray[deviceIndex];
		FString joystickName = ANSI_TO_TCHAR(SDL_GetJoystickNameForID(joystickInstanceID));
		
		UE_LOG(JoystickPluginLog, Log, TEXT("-BEGIN Joystick deviceIndex=%d <-> JoystickId=%d = JoystickInstanceName: %s"), 
			deviceIndex, joystickInstanceID, *joystickName);

		if (SDL_IsGamepad(joystickInstanceID)) {
			UE_LOG(JoystickPluginLog, Log, TEXT("IsGamepad %s"), *joystickName);
		}
		else
			if (SDL_IsJoystickVirtual(joystickInstanceID)) {
				UE_LOG(JoystickPluginLog, Log, TEXT("SDL_IsJoystickVirtual %s"), *joystickName);
			}
			else {
				UE_LOG(JoystickPluginLog, Log, TEXT("unknown %s"), *joystickName);
			}

		SDL_Joystick* pJoystickDevice = SDL_OpenJoystick(joystickInstanceID);
		if (pJoystickDevice != nullptr) {

			SDL_GUID guid = SDL_GetJoystickGUID(pJoystickDevice);
			SDL_GUIDToString(guid, g_pszGUID, 33);

			UE_LOG(JoystickPluginLog, Log, TEXT("Joystick: %s - GUID=%s - Name=%s"), ANSI_TO_TCHAR(SDL_GetJoystickName(pJoystickDevice)), ANSI_TO_TCHAR(g_pszGUID), *joystickName);
			UE_LOG(JoystickPluginLog, Log, TEXT("JoystickInstanceID %d <-> DeviceIndex %d"), joystickInstanceID, deviceIndex);
			UE_LOG(JoystickPluginLog, Log, TEXT("--- Number of Axis %d"), SDL_GetNumJoystickAxes(pJoystickDevice));
			UE_LOG(JoystickPluginLog, Log, TEXT("--- Number of Buttons %d"), SDL_GetNumJoystickButtons(pJoystickDevice));
			UE_LOG(JoystickPluginLog, Log, TEXT("--- Number of Hats %d"), SDL_GetNumJoystickHats(pJoystickDevice));			

			// add device with instanceid
			FDeviceInfoSDL deviceInfoSDL;
			deviceInfoSDL.DeviceIndex = FDeviceIndex(deviceIndex);
			deviceInfoSDL.DeviceInstanceId = FDeviceInstanceId(joystickInstanceID);
			deviceInfoSDL.Joystick = pJoystickDevice;
			deviceInfoSDL.Name = joystickName;
			deviceInfoSDL.Path = FString(ANSI_TO_TCHAR(SDL_GetJoystickPath(pJoystickDevice)));

			AddDevice(deviceInfoSDL);
		}

		UE_LOG(JoystickPluginLog, Log, TEXT("-END deviceIndex  %d"), deviceIndex);
	}
	SDL_free(g_pJoystickIDArray);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FDeviceSDL::FDeviceSDL(IJoystickEventInterface * _EventInterface) 
	: EventInterface(_EventInterface)
{
	UE_LOG(JoystickPluginLog, Log, TEXT("FDeviceSDL::FDeviceSDL()"));
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FDeviceSDL::Init()
{ 
	UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL Starting"));

	if (SDL_WasInit(0) != 0)
	{
		UE_LOG(JoystickPluginLog, Log, TEXT("SDL already loaded"));
		bOwnsSDL = false;
	}
	else
	{
		UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::InitSDL() SDL init 0"));
		SDL_Init(0);
		bOwnsSDL = true;
	}

	const int compiled = SDL_VERSION;
	const int linked = SDL_GetVersion();
	
	UE_LOG(JoystickPluginLog, Log, TEXT("We compiled against SDL version %u.%u.%u ..."), SDL_VERSIONNUM_MAJOR(compiled), SDL_VERSIONNUM_MINOR(compiled), SDL_VERSIONNUM_MICRO(compiled));
	UE_LOG(JoystickPluginLog, Log, TEXT("We linked   against SDL version %u.%u.%u ..."), SDL_VERSIONNUM_MAJOR(linked), SDL_VERSIONNUM_MINOR(linked), SDL_VERSIONNUM_MICRO(linked));
	UE_LOG(JoystickPluginLog, Log, TEXT("SDL revision %s"), ANSI_TO_TCHAR(SDL_GetRevision()));

	int result = SDL_InitSubSystem(SDL_INIT_HAPTIC);
	if (result == 0)
	{
		UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::InitSDL() SDL init subsystem haptic"));
	}

	result = SDL_InitSubSystem(SDL_INIT_GAMEPAD);
	if (result == 0)
	{
		UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::InitSDL() SDL init subsystem gamepad"));
	}

	result = SDL_InitSubSystem(SDL_INIT_JOYSTICK);
	if (result == 0)
	{
		UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::InitSDL() SDL init subsystem joystick"));
	}

	//m_NumJoysticks = 0;
	//// SDL3 holds an array with the devices
	//m_pJoystickIDArray = SDL_GetJoysticks(&m_NumJoysticks);
	//for (int deviceIndex = 0; deviceIndex < m_NumJoysticks; deviceIndex++)
	//{
	//	// testing
	//	SDL_JoystickID joystickDeviceInstanceID = m_pJoystickIDArray[deviceIndex];
	//	UE_LOG(JoystickPluginLog, Log, TEXT("JoystickInstanceID %d <-> DeviceIndex %d"), joystickDeviceInstanceID, deviceIndex);

	//	// add device with instanceid
	//	AddDevice(FDeviceInstanceId(joystickDeviceInstanceID));
	//}
	//
	ScanJoystickDevices();

	//SDL_AddEventWatch(HandleSDLEvent, this);
	SDL_SetEventFilter(HandleSDLEvent, this);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FDeviceSDL::~FDeviceSDL()
{
	UE_LOG(JoystickPluginLog, Log, TEXT("FDeviceSDL::~FDeviceSDL() DeviceSDL Closing"));

	UE_LOG(JoystickPluginLog, Log, TEXT("FDeviceSDL::~FDeviceSDL() Todo !!! Remove and close devices"));
	/*for (auto & Device : DevicesMap)
	{
		FDeviceInstanceId DeviceInstanceId = Device.Value.DeviceInstanceId;
		
		RemoveDevice(DeviceInstanceId);
	}*/

	// not in SDL3 ??? SDL_DelEventWatch(HandleSDLEvent, this);

	if (bOwnsSDL)
	{
		SDL_Quit();
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FDeviceInfoSDL * FDeviceSDL::GetDevice(FDeviceInstanceId _DeviceInstanceId)
{
	if (DevicesMap.Contains(_DeviceInstanceId))
	{
		return &DevicesMap[_DeviceInstanceId];
	}
	return nullptr;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FDeviceSDL::IgnoreGameControllers(bool _bIgnore)
{
	if (_bIgnore && !bIgnoreGameControllers)
	{
		bIgnoreGameControllers = true;
		for (auto &Device : DevicesMap)
		{
			if (DevicesMap.Contains(Device.Value.DeviceInstanceId) && SDL_IsGamepad(Device.Value.DeviceInstanceId.value))
			{
				RemoveDevice(Device.Key);
			}
		}
	}
	else if (!_bIgnore && bIgnoreGameControllers)
	{
		UE_LOG(JoystickPluginLog, Log, TEXT("FDeviceSDL::IgnoreGameControllers WARNING!!! must implmented"));
		/*bIgnoreGameControllers = false;
		int NumJoysticks = 0;
		SDL_JoystickID* pJoystickList = SDL_GetJoysticks(&NumJoysticks);
		for (int deviceIndex = 0; deviceIndex < NumJoysticks; deviceIndex++)
		{
			if (SDL_IsGamepad(deviceIndex))
			{
				AddDevice(FDeviceIndex(deviceIndex));
			}
		}
		SDL_free(pJoystickList);*/
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FDeviceInfoSDL FDeviceSDL::AddDevice(FDeviceInfoSDL _deviceInfoSDL)
{
	FDeviceInfoSDL deviceInfoSDL = _deviceInfoSDL;

	//if (SDL_IsGamepad(_DeviceInstanceID.value) && bIgnoreGameControllers)
	//{
	//	// Let UE handle it
	//	return deviceInfoSDL;
	//}

	SDL_GUID guid = SDL_GetJoystickGUID(deviceInfoSDL.Joystick);
	SDL_GUIDToString(guid, g_pszGUID, 33);
	
	if (deviceInfoSDL.Joystick == nullptr)
	{
		UE_LOG(JoystickPluginLog, Log, TEXT("FDdeviceSDL::AddDevice() WARNING!!! could not open joystick"));

		return deviceInfoSDL;
	}
	UE_LOG(JoystickPluginLog, Log, TEXT("FDdeviceSDL::AddDevice() joystick is open:"));

	// DEBUG
	UE_LOG(JoystickPluginLog, Log, TEXT("---Name = %s"), *deviceInfoSDL.Name);
	UE_LOG(JoystickPluginLog, Log, TEXT("---Path = %s"), *deviceInfoSDL.Path);
	UE_LOG(JoystickPluginLog, Log, TEXT("--- Number of Axis %i"), SDL_GetNumJoystickAxes(deviceInfoSDL.Joystick));	
	UE_LOG(JoystickPluginLog, Log, TEXT("--- Number of Buttons %i"), SDL_GetNumJoystickButtons(deviceInfoSDL.Joystick));
	UE_LOG(JoystickPluginLog, Log, TEXT("--- Number of Hats %i"), SDL_GetNumJoystickHats(deviceInfoSDL.Joystick));
	// SDL3 removed BALLs

	if (SDL_IsJoystickHaptic(deviceInfoSDL.Joystick) == true)
	{
		deviceInfoSDL.Haptic = SDL_OpenHapticFromJoystick(deviceInfoSDL.Joystick);
		if (deviceInfoSDL.Haptic != nullptr)
		{
			UE_LOG(JoystickPluginLog, Log, TEXT("--- Haptic device detected"));

			UE_LOG(JoystickPluginLog, Log, TEXT("Number of Haptic Axis: %i"), SDL_GetNumHapticAxes(deviceInfoSDL.Haptic));
			UE_LOG(JoystickPluginLog, Log, TEXT("Rumble Support: %i"), SDL_HapticRumbleSupported(deviceInfoSDL.Haptic));

			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_CONSTANT support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) & SDL_HAPTIC_CONSTANT));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_SINE support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) & SDL_HAPTIC_SINE));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_TRIANGLE support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) & SDL_HAPTIC_TRIANGLE));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_SAWTOOTHUP support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) & SDL_HAPTIC_SAWTOOTHUP));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_SAWTOOTHDOWN support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) & SDL_HAPTIC_SAWTOOTHDOWN));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_RAMP support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) & SDL_HAPTIC_RAMP));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_SPRING support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) & SDL_HAPTIC_SPRING));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_DAMPER support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) &  SDL_HAPTIC_DAMPER));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_INERTIA support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) &  SDL_HAPTIC_INERTIA));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_FRICTION support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) &  SDL_HAPTIC_FRICTION));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_CUSTOM support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) &  SDL_HAPTIC_CUSTOM));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_GAIN support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) &  SDL_HAPTIC_GAIN));
			UE_LOG(JoystickPluginLog, Log, TEXT("SDL_HAPTIC_AUTOCENTER support: %i"), (SDL_GetHapticFeatures(deviceInfoSDL.Haptic) & SDL_HAPTIC_AUTOCENTER));

			
			if (SDL_InitHapticRumble(deviceInfoSDL.Haptic) == true)
			{
				UE_LOG(JoystickPluginLog, Log, TEXT("--- init Rumble device SUCCESSFUL"));

				UE_LOG(JoystickPluginLog, Log, TEXT("--- testing Rumble device:"));
				SDL_HapticEffect effect;
				// Create the effect
				SDL_memset(&effect, 0, sizeof(SDL_HapticEffect)); // 0 is safe default
				effect.type = SDL_HAPTIC_SINE;
				effect.periodic.direction.type = SDL_HAPTIC_POLAR; // Polar coordinates
				effect.periodic.direction.dir[0] = 18000; // Force comes from south
				effect.periodic.period = 1000; // 1000 ms
				effect.periodic.magnitude = 30000; // 20000/32767 strength
				effect.periodic.length = 5000; // 5 seconds long
				effect.periodic.attack_length = 1000; // Takes 1 second to get max strength
				effect.periodic.fade_length = 1000; // Takes 1 second to fade away

				// Upload the effect
				int effect_id = SDL_CreateHapticEffect(deviceInfoSDL.Haptic, &effect);

				UE_LOG(JoystickPluginLog, Log, TEXT("--- play Rumble ...."));
				// Test the effect
				if (SDL_RunHapticEffect(deviceInfoSDL.Haptic, effect_id, 1) == 0) {
					SDL_Delay(5000); // Wait for the effect to finish

					// We destroy the effect, although closing the device also does this
					SDL_DestroyHapticEffect(deviceInfoSDL.Haptic, effect_id);
				}
				else
				{
					UE_LOG(JoystickPluginLog, Log, TEXT("--- not successful!"));
					SDL_CloseHaptic(deviceInfoSDL.Haptic);
					deviceInfoSDL.Haptic = nullptr;
				}

			}
			else {
				UE_LOG(JoystickPluginLog, Log, TEXT("ERROR HapticRumbleInit FAILED"));
			}
			

		}
	}
	
	UE_LOG(JoystickPluginLog, Log, TEXT("Update DeviceMap UE..."));
	// check if already in list
	for (auto &ExistingDevice : DevicesMap)
	{
		if (ExistingDevice.Value.Joystick == nullptr && ExistingDevice.Value.Name == deviceInfoSDL.Name)
		{
			deviceInfoSDL.DeviceInstanceId = ExistingDevice.Key;
			DevicesMap[deviceInfoSDL.DeviceInstanceId] = deviceInfoSDL;

			DeviceMapping.Add(deviceInfoSDL.DeviceIndex, deviceInfoSDL.DeviceInstanceId);
			EventInterface->JoystickPluggedIn(deviceInfoSDL);

			UE_LOG(JoystickPluginLog, Log, TEXT("Update %s"), *deviceInfoSDL.Name);

			return deviceInfoSDL;
		}
	}

	// this is removing the intial set value and not a good idea - the indexing from SDL should be the same
	// deviceInfoSDL.DeviceIndex = FDeviceIndex(Devices.Num());
	DevicesMap.Add(deviceInfoSDL.DeviceInstanceId, deviceInfoSDL);

	DeviceMapping.Add(deviceInfoSDL.DeviceIndex, deviceInfoSDL.DeviceInstanceId);

	EventInterface->JoystickPluggedIn(deviceInfoSDL);

	UE_LOG(JoystickPluginLog, Log, TEXT("new %s"), *deviceInfoSDL.Name);

	return deviceInfoSDL;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FDeviceSDL::RemoveDevice(FDeviceInstanceId _DeviceInstanceID)
{
	EventInterface->JoystickUnplugged(_DeviceInstanceID);

	FDeviceInfoSDL &DeviceInfo = DevicesMap[_DeviceInstanceID];
	FDeviceIndex DeviceIndex = DeviceInfo.DeviceIndex;
	
	DeviceMapping.Remove(DeviceIndex);
	DevicesMap.Remove(_DeviceInstanceID);

	if (DeviceInfo.Haptic != nullptr)
	{
		SDL_CloseHaptic(DeviceInfo.Haptic);
		DeviceInfo.Haptic = nullptr;
	}

	if (DeviceInfo.Joystick != nullptr)
	{
		SDL_CloseJoystick(DeviceInfo.Joystick);
		DeviceInfo.Joystick = nullptr;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FGuid FDeviceSDL::DeviceGUIDtoGUID(FDeviceInfoSDL _DeviceInfo)
{
	FGuid result;
	
	SDL_GUID guid = SDL_GetJoystickGUID(_DeviceInfo.Joystick);
	memcpy(&result, &guid, sizeof(FGuid));

	return result;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EJoystickPOVDirection SDL_hatValToDirection(int8 _Value)
{
	switch (_Value)
	{
	case SDL_HAT_CENTERED:  return EJoystickPOVDirection::DIRECTION_NONE;
	case SDL_HAT_UP:        return EJoystickPOVDirection::DIRECTION_UP;
	case SDL_HAT_RIGHTUP:   return EJoystickPOVDirection::DIRECTION_UP_RIGHT;
	case SDL_HAT_RIGHT:	    return EJoystickPOVDirection::DIRECTION_RIGHT;
	case SDL_HAT_RIGHTDOWN: return EJoystickPOVDirection::DIRECTION_DOWN_RIGHT;
	case SDL_HAT_DOWN:	    return EJoystickPOVDirection::DIRECTION_DOWN;
	case SDL_HAT_LEFTDOWN:  return EJoystickPOVDirection::DIRECTION_DOWN_LEFT;
	case SDL_HAT_LEFT:	    return EJoystickPOVDirection::DIRECTION_LEFT;
	case SDL_HAT_LEFTUP:    return EJoystickPOVDirection::DIRECTION_UP_LEFT;
	default:
		//UE_LOG(LogTemp, Warning, TEXT("Warning, POV unhandled case. %d"), (int32)value);
		return EJoystickPOVDirection::DIRECTION_NONE;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FJoystickState FDeviceSDL::InitialDeviceState(FDeviceInstanceId _DeviceInstanceId)
{
	FDeviceInfoSDL Device = DevicesMap[_DeviceInstanceId];
	FJoystickState State(_DeviceInstanceId.value);

	if (Device.Joystick)
	{
		State.Axes.SetNumZeroed(SDL_GetNumJoystickAxes(Device.Joystick));
		State.Buttons.SetNumZeroed(SDL_GetNumJoystickButtons(Device.Joystick));
		State.Hats.SetNumZeroed(SDL_GetNumJoystickHats(Device.Joystick));		
	}
	
	//UE_LOG(JoystickPluginLog, Log, TEXT("DeviceSDL::getDeviceState() %s"), device.Name));

	return State;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FDeviceSDL::Update()
{
	if (bOwnsSDL)
	{
		SDL_Event Event;
		while (SDL_PollEvent(&Event))
		{
			// The event watcher handles it
			// but not often enought?!
			
		}
		HandleSDLEvent(this, &Event);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool SDLCALL FDeviceSDL::HandleSDLEvent(void* _Userdata, SDL_Event* _Event)
{
	FDeviceSDL& Self = *static_cast<FDeviceSDL*>(_Userdata);
	FDeviceInstanceId DeviceInstanceId = FDeviceInstanceId(_Event->jdevice.which);

	switch (_Event->type)
	{
	case SDL_EVENT_JOYSTICK_ADDED:
		// an joystick add has many consequence while gaming...
		/*int numJoysticks = 0;
		SDL_JoystickID* joysticks = SDL_GetJoysticks(&numJoysticks);
		if (joysticks) {
			for (i = 0; i < numJoysticks; ++i) {
				SDL_JoystickID instance_id = joysticks[i];
				const char* name = SDL_GetJoystickInstanceName(instance_id);
				const char* path = SDL_GetJoystickInstancePath(instance_id);

				SDL_Log("Joystick %" SDL_PRIu32 ": %s%s%s VID 0x%.4x, PID 0x%.4x\n",
					instance_id, name ? name : "Unknown", path ? ", " : "", path ? path : "", SDL_GetJoystickInstanceVendor(instance_id), SDL_GetJoystickInstanceProduct(instance_id));
			}
			SDL_free(joysticks);
		}*/
		// obsolete ?? Self.AddDevice(FDeviceInstanceId(_Event->jdevice.which));
		Self.ScanJoystickDevices();
		
		UE_LOG(JoystickPluginLog, Log, TEXT("Event ADD Joystick Device=%d"), _Event->jdevice.which);
		break;	
	
	case SDL_EVENT_JOYSTICK_REMOVED:
		
		if (Self.DevicesMap.Contains(DeviceInstanceId))
		{
			UE_LOG(JoystickPluginLog, Log, TEXT("Event REMOVE Joystick Device=%d will be removed"), _Event->jdevice.which);
			
			//Self.RemoveDevice(DeviceInstanceId);
			Self.ScanJoystickDevices();
		}
		break;
	case SDL_EVENT_JOYSTICK_BUTTON_DOWN:
	case SDL_EVENT_JOYSTICK_BUTTON_UP:		

		if (Self.DevicesMap.Contains(DeviceInstanceId))
		{			
			Self.EventInterface->JoystickButton(DeviceInstanceId, _Event->jbutton.button, _Event->jbutton.down == true);

			UE_LOG(JoystickPluginLog, Log, TEXT("Event JoystickButton DeviceInstanceId=%d Button=%d State=%d"), DeviceInstanceId.value, _Event->jbutton.button, _Event->jbutton.button);
		}
		break;
	case SDL_EVENT_JOYSTICK_AXIS_MOTION:

		if (Self.DevicesMap.Contains(DeviceInstanceId))
		{			

			Self.EventInterface->JoystickAxis(DeviceInstanceId, _Event->jaxis.axis, _Event->jaxis.value / (_Event->jaxis.value < 0 ? 32768.0f : 32767.0f));

			//UE_LOG(JoystickPluginLog, Log, TEXT("Event JoystickAxis Device=%d Axis=%d Value=%d"), DeviceInstanceId.value, Event->jaxis.axis, Event->jaxis.value / (Event->jaxis.value < 0 ? 32768.0f : 32767.0f));
		}
		break;
	case SDL_EVENT_JOYSTICK_HAT_MOTION:

		if (Self.DevicesMap.Contains(DeviceInstanceId))
		{			

			Self.EventInterface->JoystickHat(DeviceInstanceId, _Event->jhat.hat, SDL_hatValToDirection(_Event->jhat.value));

			UE_LOG(JoystickPluginLog, Log, TEXT("Event JoystickHat Device=%d Hat=%d Value=%d"), DeviceInstanceId.value, _Event->jhat.hat, _Event->jhat.value);
		}
		break;	
	}

	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
