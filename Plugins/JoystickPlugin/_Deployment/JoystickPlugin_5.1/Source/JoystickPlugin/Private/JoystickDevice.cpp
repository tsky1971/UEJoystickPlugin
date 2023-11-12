
/*
*
* Copyright (C) <2014> samiljan <Sam Persson>, tsky <thomas.kollakowksy@w-hs.de>
* All rights reserved.
*
* This software may be modified and distributed under the terms
* of the BSD license.  See the LICENSE file for details.
*/

#include "JoystickDevice.h"

#include "JoystickPlugin.h"
#include "DeviceSDL.h"

#include "Framework/Application/SlateApplication.h"
#include "Math/UnrealMathUtility.h"

#define LOCTEXT_NAMESPACE "JoystickPlugin"

//Init and Runtime

FJoystickDevice::FJoystickDevice()
{
	UE_LOG(JoystickPluginLog, Log, TEXT("FJoystickDevice::FJoystickDevice() JoystickDevice with SDL. Create and Init DeviceSDL()"));

	DeviceSDL = MakeShareable(new FDeviceSDL(this));
	DeviceSDL->Init();
}

void FJoystickDevice::InitInputDevice(const FDeviceInfoSDL &Device)
{
	FDeviceInstanceId DeviceInstanceId = Device.DeviceInstanceId;
	FJoystickInfo JoystickInfo;

	JoystickInfo.Connected = true;
	JoystickInfo.DeviceInstanceId = DeviceInstanceId.value;
	JoystickInfo.Player = 0;

	JoystickInfo.ProductId = FDeviceSDL::DeviceGUIDtoGUID(Device);
	JoystickInfo.ProductName = Device.Name;
	JoystickInfo.ProductName = JoystickInfo.ProductName.Replace(TEXT(" "), TEXT(""));
	JoystickInfo.DeviceName = JoystickInfo.ProductName.Replace(TEXT(" "), TEXT(""));
	JoystickInfo.ProductName = JoystickInfo.ProductName.Replace(TEXT("."), TEXT(""));
	JoystickInfo.DeviceName = JoystickInfo.DeviceName.Replace(TEXT("."), TEXT(""));

	UE_LOG(JoystickPluginLog, Log, TEXT("FJoystickDevice::InitInputDevice() add device %s %i"), *JoystickInfo.DeviceName, DeviceInstanceId.value);
	InputDevices.Emplace(DeviceInstanceId, JoystickInfo);

	FJoystickState InitialState = DeviceSDL->InitialDeviceState(DeviceInstanceId);
	PreviousState.Emplace(DeviceInstanceId, InitialState);
	CurrentState.Emplace(DeviceInstanceId, InitialState);

	// create FKeyDetails for axis
	DeviceAxisKeys.Emplace(DeviceInstanceId);
	for (int iAxis = 0; iAxis < InitialState.Axes.Num(); iAxis++)
	{
		FString strName = FString::Printf(TEXT("Joystick_%s_%d_Axis%d"), *JoystickInfo.DeviceName, DeviceInstanceId.value, iAxis);
		UE_LOG(JoystickPluginLog, Log, TEXT("add %s %i"), *strName, DeviceInstanceId.value);
		DeviceAxisKeys[DeviceInstanceId].Add(FKey(FName(*strName)));

		if (!EKeys::GetKeyDetails(DeviceAxisKeys[DeviceInstanceId][iAxis]).IsValid())
		{
			FText textValue = FText::Format(LOCTEXT("DeviceAxis", "{0} {1} Axis {2}"), FText::FromString(JoystickInfo.ProductName), DeviceInstanceId.value, FText::AsNumber(iAxis));
			//EKeys::AddKey(FKeyDetails(DeviceAxisKeys[DeviceId][iAxis], textValue, FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
			EKeys::AddKey(FKeyDetails(DeviceAxisKeys[DeviceInstanceId][iAxis], textValue, FKeyDetails::GamepadKey | FKeyDetails::Axis1D));
		}
	}

	// create FKeyDetails for buttons
	DeviceButtonKeys.Emplace(DeviceInstanceId);
	for (int iButton = 0; iButton < InitialState.Buttons.Num(); iButton++)
	{
		FString strName = FString::Printf(TEXT("Joystick_%s_%d_Button%d"), *JoystickInfo.DeviceName, JoystickInfo.DeviceInstanceId, iButton);
		UE_LOG(JoystickPluginLog, Log, TEXT("add %s %i"), *strName, DeviceInstanceId.value);
		DeviceButtonKeys[DeviceInstanceId].Add(FKey(FName(*strName)));

		if (!EKeys::GetKeyDetails(DeviceButtonKeys[DeviceInstanceId][iButton]).IsValid())
		{
			FText textValue = FText::Format(LOCTEXT("DeviceButton", "{0} {1} Button {2}"), FText::FromString(JoystickInfo.ProductName), JoystickInfo.DeviceInstanceId, FText::AsNumber(iButton));
			EKeys::AddKey(FKeyDetails(DeviceButtonKeys[DeviceInstanceId][iButton], textValue, FKeyDetails::GamepadKey));
		}
	}

	FString _2DaxisNames[] = { TEXT("X"), TEXT("Y") };

	// create FKeyDetails for hats
	for (int iAxis = 0; iAxis < 2; iAxis++)
	{
		DeviceHatKeys[iAxis].Emplace(DeviceInstanceId);
		for (int iHat = 0; iHat < InitialState.Hats.Num(); iHat++)
		{
			FString strName = FString::Printf(TEXT("Joystick_%s_%d_Hat%d_%s"), *JoystickInfo.DeviceName, JoystickInfo.DeviceInstanceId, iHat, *_2DaxisNames[iAxis]);
			UE_LOG(JoystickPluginLog, Log, TEXT("add %s %i"), *strName, DeviceInstanceId.value);
			FKey key{ *strName };
			DeviceHatKeys[iAxis][DeviceInstanceId].Add(key);

			if (!EKeys::GetKeyDetails(key).IsValid())
			{
				FText textValue = FText::Format(LOCTEXT("DeviceHat", "{0} {1} Hat {2} {3}"), FText::FromString(JoystickInfo.ProductName), JoystickInfo.DeviceInstanceId, FText::AsNumber(iHat), FText::FromString(_2DaxisNames[iAxis]));
				EKeys::AddKey(FKeyDetails(key, textValue, FKeyDetails::GamepadKey | FKeyDetails::Axis1D));
			}
		}
	}

}

//Public API Implementation

void FJoystickDevice::JoystickPluggedIn(const FDeviceInfoSDL &DeviceInfoSDL)
{
	UE_LOG(JoystickPluginLog, Log, TEXT("FJoystickPlugin::JoystickPluggedIn() DeviceInstanceId=%i, DeviceIndex=%i"), DeviceInfoSDL.DeviceInstanceId.value, DeviceInfoSDL.DeviceIndex.value);

	InitInputDevice(DeviceInfoSDL);
	for (auto & listener : EventListeners)
	{
		UObject * o = listener.Get();
		if (o != nullptr)
		{
			IJoystickInterface::Execute_JoystickPluggedIn(o, DeviceInfoSDL.DeviceInstanceId.value);
		}
	}
}

void FJoystickDevice::JoystickUnplugged(FDeviceInstanceId _DeviceInstanceId)
{
	InputDevices[_DeviceInstanceId].Connected = false;

	UE_LOG(JoystickPluginLog, Log, TEXT("Joystick %d disconnected"), _DeviceInstanceId.value);

	for (auto & listener : EventListeners)
	{
		UObject * o = listener.Get();
		if (o != nullptr)
		{
			IJoystickInterface::Execute_JoystickUnplugged(o, _DeviceInstanceId.value);
		}
	}
}

bool EmitKeyUpEventForKey(FKey _Key, int32 _User, bool _Repeat)
{
	FKeyEvent KeyEvent(_Key, FSlateApplication::Get().GetModifierKeys(), _User, _Repeat, 0, 0);
	return FSlateApplication::Get().ProcessKeyUpEvent(KeyEvent);
}

bool EmitKeyDownEventForKey(FKey _Key, int32 _User, bool _Repeat)
{
	FKeyEvent KeyEvent(_Key, FSlateApplication::Get().GetModifierKeys(), _User, _Repeat, 0, 0);
	return FSlateApplication::Get().ProcessKeyDownEvent(KeyEvent);
}

void FJoystickDevice::JoystickButton(FDeviceInstanceId _DeviceInstanceId, int32 _Button, bool _Pressed)
{
	CurrentState[_DeviceInstanceId].Buttons[_Button] = _Pressed;
	if (_Pressed) {
		EmitKeyDownEventForKey(DeviceButtonKeys[_DeviceInstanceId][_Button], InputDevices[_DeviceInstanceId].Player, false);
	}
	else {
		EmitKeyUpEventForKey(DeviceButtonKeys[_DeviceInstanceId][_Button], InputDevices[_DeviceInstanceId].Player, false);
	}

	for (auto & listener : EventListeners)
	{
		UObject * o = listener.Get();
		if (o != nullptr)
		{
			if (_Pressed) {
				IJoystickInterface::Execute_JoystickButtonPressed(o, _Button, CurrentState[_DeviceInstanceId]);
			}
			else {
				IJoystickInterface::Execute_JoystickButtonReleased(o, _Button, CurrentState[_DeviceInstanceId]);
			}
		}
	}
}

bool EmitAnalogInputEventForKey(FKey _Key, float _Value, int32 _User, bool _Repeat)
{
	FAnalogInputEvent AnalogInputEvent(_Key, FSlateApplication::Get().GetModifierKeys(), _User, _Repeat, 0, 0, _Value);
	return FSlateApplication::Get().ProcessAnalogInputEvent(AnalogInputEvent);
}

void FJoystickDevice::JoystickAxis(FDeviceInstanceId _DeviceInstanceId, int32 _Axis, float _Value)
{
	if (FMath::IsNearlyEqual(CurrentState[_DeviceInstanceId].Axes[_Axis], _Value, 0.1f) == false) {
		CurrentState[_DeviceInstanceId].Axes[_Axis] = _Value;

		EmitAnalogInputEventForKey(DeviceAxisKeys[_DeviceInstanceId][_Axis], _Value, InputDevices[_DeviceInstanceId].Player, 0);

		for (auto& listener : EventListeners)
		{
			UObject* o = listener.Get();
			if (o != nullptr)
			{
				IJoystickInterface::Execute_JoystickAxisChanged(o, _Axis, CurrentState[_DeviceInstanceId].Axes[_Axis], PreviousState[_DeviceInstanceId].Axes[_Axis], CurrentState[_DeviceInstanceId], PreviousState[_DeviceInstanceId]);
			}
		}
	}
}

void FJoystickDevice::JoystickHat(FDeviceInstanceId _DeviceInstanceId, int32 _Hat, EJoystickPOVDirection _Value)
{
	CurrentState[_DeviceInstanceId].Hats[_Hat] = _Value;

	FVector2D povAxis = POVAxis(_Value);
	EmitAnalogInputEventForKey(DeviceHatKeys[0][_DeviceInstanceId][_Hat], povAxis.X, InputDevices[_DeviceInstanceId].Player, 0);
	EmitAnalogInputEventForKey(DeviceHatKeys[1][_DeviceInstanceId][_Hat], povAxis.Y, InputDevices[_DeviceInstanceId].Player, 0);

	for (auto & listener : EventListeners)
	{
		UObject * o = listener.Get();
		if (o != nullptr)
		{
			IJoystickInterface::Execute_JoystickHatChanged(o, _Hat, _Value, CurrentState[_DeviceInstanceId]);
		}
	}
}

bool EmitPointerEventForKey(int32 _PointerIndex, const FVector2D &_Value)
{
	FPointerEvent pointerEvent(_PointerIndex, FVector2D::ZeroVector, FVector2D::ZeroVector, _Value, TSet<FKey>(), FSlateApplication::Get().GetModifierKeys());
	return FSlateApplication::Get().ProcessMouseMoveEvent(pointerEvent);
}

void FJoystickDevice::EmitEvents(const FJoystickState &_previous, const FJoystickState &_current)
{
	for (int iButton = 0; iButton < _current.Buttons.Num(); iButton++)
	{
		if (_previous.Buttons[iButton] != _current.Buttons[iButton])
		{
			JoystickButton(FDeviceInstanceId(_current.DeviceInstanceId), iButton, _current.Buttons[iButton]);
		}
	}
	for (int iAxis = 0; iAxis < _current.Axes.Num(); iAxis++)
	{
		if (_previous.Axes[iAxis] != _current.Axes[iAxis])
		{
			JoystickAxis(FDeviceInstanceId(_current.DeviceInstanceId), iAxis, _current.Axes[iAxis]);
		}
	}
	for (int iHat = 0; iHat < _current.Hats.Num(); iHat++)
	{
		if (_previous.Hats[iHat] != _current.Hats[iHat])
		{
			JoystickHat(FDeviceInstanceId(_current.DeviceInstanceId), iHat, _current.Hats[iHat]);
		}
	}	
}


// IInputDevice implementation

void FJoystickDevice::Tick(float DeltaTime)
{

}

void FJoystickDevice::SendControllerEvents()
{
	//UE_LOG(JoystickPluginLog, Log, TEXT("FJoystickDevice::SendControllerEvents()"));

	for (auto & Device : InputDevices)
	{
		FDeviceInstanceId DeviceInstanceId = Device.Key;
		if (InputDevices.Contains(DeviceInstanceId))
		{
			if (InputDevices[DeviceInstanceId].Connected)
			{
				PreviousState[DeviceInstanceId] = FJoystickState(CurrentState[DeviceInstanceId]);

				//UE_LOG(JoystickPluginLog, Log, TEXT("FJoystickDevice::SendControllerEvents() removed Balls"));
				/*for (int iBall = 0; iBall < CurrentState[DeviceId].Balls.Num(); iBall++)
				{
					CurrentState[DeviceInstanceId].Balls[iBall] = FVector2D::ZeroVector;
				}*/
			}
		}
	}

	DeviceSDL->Update();

	// Clean up weak references
	for (int i = 0; i < EventListeners.Num(); i++)
	{
		if (!EventListeners[i].IsValid())
		{
			EventListeners.RemoveAt(i);
			i--;
		}
	}
}

void FJoystickDevice::SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
{
}

bool FJoystickDevice::Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
	return false;
}

void FJoystickDevice::SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value)
{
	//FControllerState& ControllerState = ControllerStates[ControllerId];
	//if (ControllerState.bIsConnected)
	//{
	//	switch (ChannelType)
	//	{
	//	case FF_CHANNEL_LEFT_LARGE:
	//		ControllerState.ForceFeedback.LeftLarge = Value;
	//		break;
	//	case FF_CHANNEL_LEFT_SMALL:
	//		ControllerState.ForceFeedback.LeftSmall = Value;
	//		break;
	//	case FF_CHANNEL_RIGHT_LARGE:
	//		ControllerState.ForceFeedback.RightLarge = Value;
	//		break;
	//	case FF_CHANNEL_RIGHT_SMALL:
	//		ControllerState.ForceFeedback.RightSmall = Value;
	//		break;
	//	}
	//}
}

void FJoystickDevice::SetChannelValues(int32 ControllerId, const FForceFeedbackValues& Values)
{
	//FControllerState& ControllerState = ControllerStates[ControllerId];
	//if (ControllerState.bIsConnected)
	//{
	//	ControllerState.ForceFeedback = Values;
	//}
}

bool FJoystickDevice::AddEventListener(UObject* Listener)
{
	if (Listener != nullptr && Listener->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()))
	{
		EventListeners.Add(TWeakObjectPtr<>(Listener));
		return true;
	}
	return false;
}

void FJoystickDevice::IgnoreGameControllers(bool bIgnore)
{
	DeviceSDL->IgnoreGameControllers(bIgnore);
}
#undef LOCTEXT_NAMESPACE
