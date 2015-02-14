#pragma once

#include "JoystickPluginPrivatePCH.h"
#include "JoystickDelegate.h"
#include "IJoystickPlugin.h"
//
//const FKey EKeysJoystick::JoystickButton[32] = {
//	FKey("JoystickButton1"),
//	FKey("JoystickButton2"),
//	FKey("JoystickButton3"),
//	FKey("JoystickButton4"),
//	FKey("JoystickButton5"),
//	FKey("JoystickButton6"),
//	FKey("JoystickButton7"),
//	FKey("JoystickButton8"),
//	FKey("JoystickButton9"),
//	FKey("JoystickButton10"),
//	FKey("JoystickButton11"),
//	FKey("JoystickButton12"),
//	FKey("JoystickButton13"),
//	FKey("JoystickButton14"),
//	FKey("JoystickButton15"),
//	FKey("JoystickButton16"),
//	FKey("JoystickButton17"),
//	FKey("JoystickButton18"),
//	FKey("JoystickButton19"),
//	FKey("JoystickButton20"),
//	FKey("JoystickButton21"),
//	FKey("JoystickButton22"),
//	FKey("JoystickButton23"),
//	FKey("JoystickButton24"),
//	FKey("JoystickButton25"),
//	FKey("JoystickButton26"),
//	FKey("JoystickButton27"),
//	FKey("JoystickButton28"),
//	FKey("JoystickButton29"),
//	FKey("JoystickButton30"),
//	FKey("JoystickButton31"),
//	FKey("JoystickButton32")
//};

//const FKey EKeysJoystick::JoystickAxisX("JoystickAxisX");
//const FKey EKeysJoystick::JoystickAxisY("JoystickAxisY");
//const FKey EKeysJoystick::JoystickAxisZ("JoystickAxisZ");
//
//const FKey EKeysJoystick::JoystickRAxisX("JoystickRAxisX");
//const FKey EKeysJoystick::JoystickRAxisY("JoystickRAxisY");
//const FKey EKeysJoystick::JoystickRAxisZ("JoystickRAxisZ");

//const FKey EKeysJoystick::JoystickPOVX[] {
//	FKey("JoystickPOVX1"),
//		FKey("JoystickPOVX2"),
//		FKey("JoystickPOVX3"),
//		FKey("JoystickPOVX4")
//};

//const FKey EKeysJoystick::JoystickPOVY[] {
//	FKey("JoystickPOVY1"),
//		FKey("JoystickPOVY2"),
//		FKey("JoystickPOVY3"),
//		FKey("JoystickPOVY4")
//};

//const FKey EKeysJoystick::JoystickSlider[] {
//	FKey("JoystickSlider1"),
//		FKey("JoystickSlider2")
//};

TArray<FKey> g_DeviceButtonKeys[MAX_JOYSTICKCOUNT];
TArray<FKey> g_DeviceAxisKeys[MAX_JOYSTICKCOUNT];
TArray<FKey> g_DeviceHatKeys[MAX_JOYSTICKCOUNT];
TArray<FKey> g_DeviceBallKeys[MAX_JOYSTICKCOUNT];

/** Empty Event Functions, no Super call required, because they don't do anything! */
void JoystickDelegate::JoystickButtonPressed(int32 buttonNr, const FJoystickState &state)
{
	if (implementsInterface())
		IJoystickInterface::Execute_JoystickButtonPressed(_interfaceDelegate, buttonNr, state);
}

void JoystickDelegate::JoystickButtonReleased(int32 buttonNr, const FJoystickState &state)
{
	if (implementsInterface())
		IJoystickInterface::Execute_JoystickButtonReleased(_interfaceDelegate, buttonNr, state);
}

//void JoystickDelegate::AxisChanged(FVector AxisValue, const FJoystickState &state)
//{
//	if (implementsInterface())
//		IJoystickInterface::Execute_JoystickAxisChanged(_interfaceDelegate, AxisValue, state);
//}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

void JoystickDelegate::AxisArrayChanged(int32 index, float value, float valuePrev, const FJoystickState &state, const FJoystickState &prev)
{
	if (implementsInterface()) {
		IJoystickInterface::Execute_JoystickAxisArrayChanged(_interfaceDelegate, index, value, valuePrev, state, prev);
	}
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

void JoystickDelegate::ButtonsArrayChanged(int32 index, bool value, const FJoystickState &state)
{
	if (implementsInterface()) {
		IJoystickInterface::Execute_JoystickButtonsArrayChanged(_interfaceDelegate, index, value, state);
	}
}
//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

void JoystickDelegate::HatsArrayChanged(int32 index, float value, const FJoystickState &state)
{
	if (implementsInterface()) {
		IJoystickInterface::Execute_JoystickHatsArrayChanged(_interfaceDelegate, index, value, state);
	}
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

void JoystickDelegate::BallsArrayChanged(int32 index, float value, const FJoystickState &state)
{
	if (implementsInterface()) {
		IJoystickInterface::Execute_JoystickBallsArrayChanged(_interfaceDelegate, index, value, state);
	}
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

//
//void JoystickDelegate::RAxisChanged(FVector AxisValue, const FJoystickState &state)
//{
//	if (implementsInterface())
//		IJoystickInterface::Execute_JoystickRAxisChanged(_interfaceDelegate, AxisValue, state);
//}
//
//void JoystickDelegate::POVChanged(JoystickPOVDirection POVValue, int32 index, const FJoystickState &state)
//{
//	if (implementsInterface())
//		IJoystickInterface::Execute_JoystickPOVChanged(_interfaceDelegate, POVValue, index, state);
//}
//
//void JoystickDelegate::SliderChanged(FVector2D SliderValue, const FJoystickState &state)
//{
//	if (implementsInterface())
//		IJoystickInterface::Execute_JoystickSliderChanged(_interfaceDelegate, SliderValue, state);
//}

void JoystickDelegate::JoystickPluggedIn(const FJoystickInfo &info)
{
	if (implementsInterface())
		IJoystickInterface::Execute_JoystickPluggedIn(_interfaceDelegate, info);
}
void JoystickDelegate::JoystickUnplugged(const FJoystickInfo &info)
{
	if (implementsInterface())
		IJoystickInterface::Execute_JoystickUnplugged(_interfaceDelegate, info);
}

bool JoystickDelegate::implementsInterface()
{
	return (_interfaceDelegate != nullptr && _interfaceDelegate->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()));
}

//Setting
void JoystickDelegate::SetInterfaceDelegate(UObject* newDelegate)
{
	UE_LOG(JoystickPluginLog, Log, TEXT("InterfaceDelegate passed: %s"), *newDelegate->GetName());

	//Use this format to support both blueprint and C++ form
	if (newDelegate->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()))
	{
		_interfaceDelegate = newDelegate;
	}
	else
	{
		//Try casting as self
		if (ValidSelfPointer->GetClass()->ImplementsInterface(UJoystickInterface::StaticClass()))
		{
			_interfaceDelegate = (UObject*)this;
		}
		else
		{
			//If you're crashing its probably because of this setting causing an assert failure
			_interfaceDelegate = NULL;
			UE_LOG(JoystickPluginLog, Log, TEXT("JoystickBlueprintDelegate Warning: JoystickInterface delegate is NULL, did your class implement JoystickInterface? Events are disabled."));
		}

		//Either way post a warning, this will be a common error
		UE_LOG(JoystickPluginLog, Log, TEXT("JoystickBlueprintDelegate Warning: JoystickInterface Delegate is NOT set, did your class implement JoystickInterface? Events are disabled."));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("JoystickBlueprintDelegate Warning: Delegate is NOT set, did your class implement JoystickInterface? Events are disabled."));
	}
}

//Startup
void JoystickDelegate::JoystickStartup()
{
	if (IJoystickPlugin::IsAvailable()) {
		//Required to Work - Set self as a delegate
		IJoystickPlugin::Get().SetDelegate(this);
	}

	UObject* validUObject = Cast<UObject>(ValidSelfPointer);

	//Set self as interface delegate by default
	if (!_interfaceDelegate && validUObject)
		SetInterfaceDelegate(validUObject);
}

void JoystickDelegate::JoystickStop()
{
	if (IJoystickPlugin::IsAvailable()) {
		//Required to Work - Set self as a delegate
		IJoystickPlugin::Get().SetDelegate(nullptr);
	}
}

bool JoystickDelegate::JoystickIsAvailable()
{
	if (IJoystickPlugin::IsAvailable()) {
		return IJoystickPlugin::Get().JoystickIsAvailable();
	}
	return false;
}

void JoystickDelegate::JoystickTick(float DeltaTime)
{
	if (IJoystickPlugin::IsAvailable()) {
		//Required to Work - This is the plugin magic
		IJoystickPlugin::Get().JoystickTick(DeltaTime);
	}
}
