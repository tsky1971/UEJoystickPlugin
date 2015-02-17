#pragma once

#include "JoystickInterface.h"
//
////Input Mapping Keys
//struct EKeysJoystick
//{
//	static const int MaxJoystickButtons = 32;
//	static const FKey JoystickButton[MaxJoystickButtons];
//
//	static const FKey JoystickAxisX;
//	static const FKey JoystickAxisY;
//	static const FKey JoystickAxisZ;
//
//	static const FKey JoystickRAxisX;
//	static const FKey JoystickRAxisY;
//	static const FKey JoystickRAxisZ;
//
//	static const FKey JoystickPOVX[4];
//	static const FKey JoystickPOVY[4];
//
//	static const FKey JoystickSlider[2];
//};

extern TArray<FKey> g_DeviceButtonKeys[MAX_JOYSTICKCOUNT];
extern TArray<FKey> g_DeviceAxisKeys[MAX_JOYSTICKCOUNT];
extern TArray<FKey> g_DeviceHatKeys[MAX_JOYSTICKCOUNT];
extern TArray<FKey> g_DeviceBallKeys[MAX_JOYSTICKCOUNT];

class JoystickDelegate
{
	friend class FJoystickPlugin;
public:
	virtual ~JoystickDelegate() {}

	virtual void JoystickButtonPressed(int32 ButtonVal, const FJoystickState &state);
	virtual void JoystickButtonReleased(int32 ButtonVal, const FJoystickState &state);
	//virtual void AxisChanged(FVector vector, const FJoystickState &state);

	virtual void AxisArrayChanged(int32 index, float value, float valuePrev, const FJoystickState &state, const FJoystickState &prev);
	virtual void ButtonsArrayChanged(int32 index, bool value, const FJoystickState &state);
	virtual void HatsArrayChanged(int32 index, float value, const FJoystickState &state);
	virtual void BallsArrayChanged(int32 index, float value, const FJoystickState &state);

	//virtual void RAxisChanged(FVector vector, const FJoystickState &state);
	//virtual void POVChanged(JoystickPOVDirection Value, int32 index, const FJoystickState &state);
	//virtual void SliderChanged(FVector2D Value, const FJoystickState &state);

	//JoystickHotPlugInterface events
	virtual void JoystickPluggedIn(const FJoystickInfo &info);
	virtual void JoystickUnplugged(const FJoystickInfo &info);

	virtual bool JoystickIsAvailable();

	//If you want an alternate delegate, set it here
	void SetInterfaceDelegate(UObject* newDelegate);

	//** Required Calls */
	virtual void JoystickStartup();				//Call this somewhere in an initializing state such as BeginPlay()
	virtual void JoystickStop();				//Call this somewhere in an initializing state such as BeginPlay()
	virtual void JoystickTick(float DeltaTime);	//Call this every tick

protected:
	UObject* ValidSelfPointer;	//REQUIRED: has to be set before HydraStartup by a UObject subclass

	TArray<FJoystickState> PreviousFrame; // @TODO this seems not to work as i wish
	TArray<FJoystickState> LatestFrame;
	TArray<FJoystickInfo> Joysticks;

private:
	UObject* _interfaceDelegate;
	bool implementsInterface();
};
