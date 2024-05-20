#pragma once

#include <IInputDevice.h>

#include "JoystickInterface.h"

struct FDeviceInfoSDL;
class FDeviceSDL;

class IJoystickEventInterface
{
public:
	virtual ~IJoystickEventInterface()
	{
	}

	virtual void JoystickPluggedIn(const FDeviceInfoSDL &_Device) = 0;
	virtual void JoystickUnplugged(FDeviceInstanceId _DeviceInstanceId) = 0;
	virtual void JoystickButton(FDeviceInstanceId _DeviceInstanceId, int32 _Button, bool _Pressed) = 0;
	virtual void JoystickAxis(FDeviceInstanceId _DeviceInstanceId, int32 _Axis, float _Value) = 0;
	virtual void JoystickHat(FDeviceInstanceId _DeviceInstanceId, int32 _Hat, EJoystickPOVDirection _Value) = 0;	
};

class FJoystickDevice : public IInputDevice, public IJoystickEventInterface
{
public:
	FJoystickDevice();

	void Tick(float _DeltaTime) override;
	void SendControllerEvents() override;
	void SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& _InMessageHandler) override;
	bool Exec(UWorld* _InWorld, const TCHAR* _Cmd, FOutputDevice& _Ar) override;
	void SetChannelValue(int32 _ControllerId, FForceFeedbackChannelType _ChannelType, float _Value) override;
	void SetChannelValues(int32 _ControllerId, const FForceFeedbackValues& _Values) override;

	bool AddEventListener(UObject* _Listener);
	void IgnoreGameControllers(bool _bIgnore);

	/*virtual*/ void JoystickPluggedIn(const FDeviceInfoSDL &_Device) override;
	/*virtual*/ void JoystickUnplugged(FDeviceInstanceId _DeviceInstanceId) override;
	/*virtual*/ void JoystickButton(FDeviceInstanceId _DeviceInstanceId, int32 _Button, bool _Pressed) override;
	/*virtual*/ void JoystickAxis(FDeviceInstanceId _DeviceInstanceId, int32 _Axis, float _Value) override;
	/*virtual*/ void JoystickHat(FDeviceInstanceId _DeviceInstanceId, int32 _Hat, EJoystickPOVDirection _Value) override;	

	TMap<FDeviceInstanceId, FJoystickState> CurrentState;
	TMap<FDeviceInstanceId, FJoystickState> PreviousState;

	TMap<FDeviceInstanceId, FJoystickInfo> InputDevices;
	TSharedPtr<FDeviceSDL> DeviceSDL;

private:
	void InitInputDevice(const FDeviceInfoSDL &_Device);
	void EmitEvents(const FJoystickState& _previous, const FJoystickState& _current);

	TArray<TWeakObjectPtr<UObject>> EventListeners;

	TMap<FDeviceInstanceId, TArray<FKey>> DeviceButtonKeys;
	TMap<FDeviceInstanceId, TArray<FKey>> DeviceAxisKeys;
	TMap<FDeviceInstanceId, TArray<FKey>> DeviceHatKeys[2];
};
