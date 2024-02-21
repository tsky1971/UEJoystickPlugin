/*
*
* Copyright (C) <2014> samiljan <Sam Persson>, tsky <thomas.kollakowksy@w-hs.de>
* All rights reserved.
*
* This software may be modified and distributed under the terms
* of the BSD license.  See the LICENSE file for details.
*/

#include "JoystickFunctions.h"


UJoystickFunctions::UJoystickFunctions(const class FObjectInitializer& PCIP)
	: Super(PCIP)
{

}

FVector2D UJoystickFunctions::POVAxis(EJoystickPOVDirection _Direction)
{
	return ::POVAxis(_Direction);
}

FJoystickInfo UJoystickFunctions::GetJoystick(int32 _DeviceInstanceId)
{
	if (!IJoystickPlugin::IsAvailable())
		return FJoystickInfo();

	TSharedPtr<FJoystickDevice> Device = static_cast<FJoystickPlugin&>(IJoystickPlugin::Get()).JoystickDevice;
	if (!Device->InputDevices.Contains(FDeviceInstanceId(_DeviceInstanceId)))
		return FJoystickInfo();

	return Device->InputDevices[FDeviceInstanceId(_DeviceInstanceId)];
}

FJoystickState UJoystickFunctions::GetJoystickState(int32 _DeviceInstanceId)
{
	if (!IJoystickPlugin::IsAvailable())
		return FJoystickState();

	TSharedPtr<FJoystickDevice> Device = static_cast<FJoystickPlugin&>(IJoystickPlugin::Get()).JoystickDevice;
	if (!Device->InputDevices.Contains(FDeviceInstanceId(_DeviceInstanceId)))
		return FJoystickState();

	return Device->CurrentState[FDeviceInstanceId(_DeviceInstanceId)];
}

FJoystickState UJoystickFunctions::GetPreviousJoystickState(int32 _DeviceInstanceId)
{
	if (!IJoystickPlugin::IsAvailable())
		return FJoystickState();

	TSharedPtr<FJoystickDevice> Device = static_cast<FJoystickPlugin&>(IJoystickPlugin::Get()).JoystickDevice;
	if (!Device->InputDevices.Contains(FDeviceInstanceId(_DeviceInstanceId)))
		return FJoystickState();

	return Device->PreviousState[FDeviceInstanceId(_DeviceInstanceId)];
}

int32 UJoystickFunctions::JoystickCount()
{
	if (!IJoystickPlugin::IsAvailable())
		return 0;

	TSharedPtr<FJoystickDevice> Device = static_cast<FJoystickPlugin&>(IJoystickPlugin::Get()).JoystickDevice;
	return Device->InputDevices.Num();
}

void UJoystickFunctions::RegisterForJoystickEvents(UObject* _Listener)
{
	if (!IJoystickPlugin::IsAvailable())
		return;

	TSharedPtr<FJoystickDevice> Device = static_cast<FJoystickPlugin&>(IJoystickPlugin::Get()).JoystickDevice;
	Device->AddEventListener(_Listener);
}

void UJoystickFunctions::MapJoystickDeviceToPlayer(int32 _DeviceInstanceId, int32 _Player)
{
	if (!IJoystickPlugin::IsAvailable())
		return;

	TSharedPtr<FJoystickDevice> Device = static_cast<FJoystickPlugin&>(IJoystickPlugin::Get()).JoystickDevice;
	if (!Device->InputDevices.Contains(FDeviceInstanceId(_DeviceInstanceId)))
		return;

	Device->InputDevices[FDeviceInstanceId(_DeviceInstanceId)].Player = _Player;
}

void UJoystickFunctions::IgnoreGameControllers(bool _bIgnore)
{
	if (!IJoystickPlugin::IsAvailable()) return;

	TSharedPtr<FJoystickDevice> Device = static_cast<FJoystickPlugin&>(IJoystickPlugin::Get()).JoystickDevice;
	Device->IgnoreGameControllers(_bIgnore);
}
