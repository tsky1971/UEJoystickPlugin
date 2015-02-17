#include "JoystickPluginPrivatePCH.h"

#include <SlateBasics.h>
#include <Text.h>

#include "IJoystickPlugin.h"
#include "JoystickDelegate.h"
#include "FJoystickPlugin.h"

#include "DeviceSDL.h"

IMPLEMENT_MODULE(FJoystickPlugin, JoystickPlugin)

#define LOCTEXT_NAMESPACE "JoystickPlugin"

//@TODO create hey an function for creating the FKeyDetails for Axes, Button etc...
//////////////////////////////////////////////////////////////////////////

//Init and Runtime
void FJoystickPlugin::StartupModule()
{
	UE_LOG(JoystickPluginLog, Log, TEXT("creating Device SDL class."));

	m_DeviceSDL = new DeviceSDL();	
	if (m_DeviceSDL != nullptr) {
		int numJoysticks = m_DeviceSDL->getNumberOfJoysticks();
		
		UE_LOG(JoystickPluginLog, Log, TEXT("Attempting to init devices..."));

		FJoystickInfo deviceInfo;
		for (int iDevice = 0; iDevice < numJoysticks; iDevice++) {
			deviceInfo.Connected = true;
			deviceInfo.JoystickIndex = iDevice;			
			deviceInfo.InstanceId = m_DeviceSDL->getDeviceGUIDtoGUID(iDevice);
			deviceInfo.ProductId = m_DeviceSDL->getDeviceGUIDtoGUID(iDevice);
			deviceInfo.ProductName = FName(*m_DeviceSDL->getDeviceName(iDevice));
			deviceInfo.InstanceName = FName(*m_DeviceSDL->getDeviceName(iDevice));
			FString strDeviceName = deviceInfo.InstanceName.ToString().Replace(TEXT(" "), TEXT(""));
			deviceInfo.DeviceName = strDeviceName;

			if (SDL_IsGameController(iDevice)) {
				deviceInfo.IsGameController = true;
			}

			m_Joysticks.Add(deviceInfo);

			FJoystickState newDeviceState(iDevice);
			if (m_DeviceSDL->getDeviceState(newDeviceState, m_Joysticks[iDevice], iDevice)) {

				// create FKeyDetails for axis
				for (int iAxis = 0; iAxis < newDeviceState.NumberOfAxis; iAxis++) {
					//FText textValue = FText::Format(LOCTEXT("DeviceAxis", "Device {0} Axis {1}"), FText::AsNumber(iDevice), FText::AsNumber(iAxis));
					
					FString strName("Axis");
					strName.Append(FString::FromInt(iAxis));
					strName.Append("_");
					strName.Append(strDeviceName);

					FText textValue = FText::FromString(strName);

					UE_LOG(JoystickPluginLog, Log, TEXT("add %s %i"), *textValue.ToString(), iDevice);

					g_DeviceAxisKeys[iDevice].Add(FKey(FName(*strName)));
					
					EKeys::AddKey(FKeyDetails(g_DeviceAxisKeys[iDevice][iAxis], textValue, FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
					
				}

				// create FKeyDetails for buttons
				for (int iButton = 0; iButton < newDeviceState.NumberOfButtons; iButton++) {
					//FText textValue = FText::Format(LOCTEXT("DeviceButton", "Device {0} Button {1}"), FText::AsNumber(iDevice), FText::AsNumber(iButton));

					FString strName("Button");
					strName.Append(FString::FromInt(iButton));
					strName.Append("_");
					strName.Append(strDeviceName);

					FText textValue = FText::FromString(strName);

					UE_LOG(JoystickPluginLog, Log, TEXT("add %s"), *textValue.ToString());

					g_DeviceButtonKeys[iDevice].Add(FKey(FName(*strName)));

					EKeys::AddKey(FKeyDetails(g_DeviceButtonKeys[iDevice][iButton], textValue, FKeyDetails::GamepadKey));
				}

				// create FKeyDetails for hats
				for (int iHat = 0; iHat < newDeviceState.NumberOfHats; iHat++) {
					//FText textValue = FText::Format(LOCTEXT("DeviceHat", "Device {0} Hat {1}"), FText::AsNumber(iDevice), FText::AsNumber(iHat));
					
					FString strName("Hat");
					strName.Append(FString::FromInt(iHat));
					strName.Append("_");
					strName.Append(strDeviceName);

					FText textValue = FText::FromString(strName);

					UE_LOG(JoystickPluginLog, Log, TEXT("add %s"), *textValue.ToString());

					g_DeviceHatKeys[iDevice].Add(FKey(FName(*strName)));

					EKeys::AddKey(FKeyDetails(g_DeviceHatKeys[iDevice][iHat], textValue, FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
				}

				// create FKeyDetails for balls
				for (int iBall = 0; iBall < newDeviceState.NumberOfBalls; iBall++) {
					//FText textValue = FText::Format(LOCTEXT("DeviceBall", "Device {0} Ball {1}"), FText::AsNumber(iDevice), FText::AsNumber(iBall));
					
					FString strName("Ball");
					strName.Append(FString::FromInt(iBall));
					strName.Append("_");
					strName.Append(strDeviceName);

					FText textValue = FText::FromString(strName);

					UE_LOG(JoystickPluginLog, Log, TEXT("add Ball/Slider: %s"), *textValue.ToString());

					g_DeviceBallKeys[iDevice].Add(FKey(FName(*strName)));

					EKeys::AddKey(FKeyDetails(g_DeviceBallKeys[iDevice][iBall], textValue, FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
				}

				prevData.Add(newDeviceState);
				currData.Add(newDeviceState);
			}
		}
	}
	
	UE_LOG(JoystickPluginLog, Log, TEXT("Attempting to startup Joystick Module."));

	//Add the keys either way, these should always be available when plugin starts up

	/*for (int i = 0; i < EKeysJoystick::MaxJoystickButtons; i++)
	{
		EKeys::AddKey(FKeyDetails(EKeysJoystick::JoystickButton[i], FText::Format(LOCTEXT("JoystickButton", "Joystick Button {0}"), FText::AsNumber(i + 1)), FKeyDetails::GamepadKey));
	}*/

	/*EKeys::AddKey(FKeyDetails(EKeysJoystick::JoystickAxisX, LOCTEXT("JoystickAxisX", "Joystick Axis X"), FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysJoystick::JoystickAxisY, LOCTEXT("JoystickAxisY", "Joystick Axis Y"), FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysJoystick::JoystickAxisZ, LOCTEXT("JoystickAxisZ", "Joystick Axis Z"), FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));

	EKeys::AddKey(FKeyDetails(EKeysJoystick::JoystickRAxisX, LOCTEXT("JoystickRAxisX", "Joystick RAxis X"), FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysJoystick::JoystickRAxisY, LOCTEXT("JoystickRAxisY", "Joystick RAxis Y"), FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysJoystick::JoystickRAxisZ, LOCTEXT("JoystickRAxisZ", "Joystick RAxis Z"), FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));*/

	//for (int i = 0; i < 4; i++)
	//{
	//	EKeys::AddKey(FKeyDetails(EKeysJoystick::JoystickPOVX[i], FText::Format(LOCTEXT("JoystickPOVX", "Joystick POV{0} X"), FText::AsNumber(i + 1)), FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
	//	EKeys::AddKey(FKeyDetails(EKeysJoystick::JoystickPOVY[i], FText::Format(LOCTEXT("JoystickPOVY", "Joystick POV{0} Y"), FText::AsNumber(i + 1)), FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
	//}

	//for (int i = 0; i < 2; i++)
	//{
	//	EKeys::AddKey(FKeyDetails(EKeysJoystick::JoystickSlider[i], FText::Format(LOCTEXT("JoystickSlider", "Joystick Slider {0}"), FText::AsNumber(i + 1)), FKeyDetails::GamepadKey | FKeyDetails::FloatAxis));
	//}

	g_HotPlugDelegate = this;

	//Add our hotplugging listener
	//EnableHotPlugListener();

	/*if (S_OK == InitDirectInput()){
		UE_LOG(JoystickPluginLog, Log, TEXT("Direct Input initialized."));
	}
	else{
		UE_LOG(JoystickPluginLog, Log, TEXT("Direct Input initialization failed."));
	}*/

}


void FJoystickPlugin::ShutdownModule()
{
	if (m_DeviceSDL != NULL) {
		delete m_DeviceSDL;
	}

	//CleanupHotPlugging();
}


//Public API Implementation

/** Public API - Required **/

void FJoystickPlugin::SetDelegate(JoystickDelegate* newDelegate)
{
	UE_LOG(JoystickPluginLog, Log, TEXT("FJoystickPlugin::SetDelegate"));

	joystickDelegate = newDelegate;
	if (joystickDelegate) {
		//Start case, if we started the plugin with a joystick already plugged in
		joystickDelegate->Joysticks = m_Joysticks;
		for (FJoystickInfo &joystick : m_Joysticks) {
			//@BUG this is never called for sdl version
			joystickDelegate->JoystickPluggedIn(joystick);
		}
	}
}

void FJoystickPlugin::JoystickPluggedIn(FJoystickInfo &joystick)
{
	UE_LOG(JoystickPluginLog, Log, TEXT("FJoystickPlugin::JoystickPluggedIn %d"), joystick.Player);

	// First try to find the same joystick if it was connected before (to get the same index)
	joystick.Player = m_Joysticks.IndexOfByPredicate([&](const FJoystickInfo &j) { return j.InstanceId == joystick.InstanceId; });
	if (joystick.Player == INDEX_NONE)
	{
		// Otherwise try to find an unused slot
		joystick.Player = m_Joysticks.IndexOfByPredicate([&](const FJoystickInfo &j) { return j.Connected == false; });
	}

	if (joystick.Player == INDEX_NONE)
	{
		// Finally add a now slot
		joystick.Player = m_Joysticks.Add(joystick);
		m_Joysticks[joystick.Player].Player = joystick.Player;
		prevData.Add(FJoystickState(joystick.Player));
		currData.Add(FJoystickState(joystick.Player));
	}
	else
	{
		m_Joysticks[joystick.Player] = joystick;
	}

	if (joystickDelegate)
	{
		joystickDelegate->Joysticks = m_Joysticks;
		joystickDelegate->JoystickPluggedIn(joystick);
	}
}

void FJoystickPlugin::JoystickUnplugged(FGuid id)
{
	int player = m_Joysticks.IndexOfByPredicate([&](const FJoystickInfo &j) { return j.InstanceId == id; });
	if (player == INDEX_NONE)
	{
		// Can happen e.g. if we fail to acquire a joystick
		return;
	}

	m_Joysticks[player].Connected = false;

	DelegateTick(0);
	UE_LOG(JoystickPluginLog, Log, TEXT("Joystick for player %d disconnected"), player);

	if (joystickDelegate)
	{
		// Let joystick state return to zero
		joystickDelegate->JoystickUnplugged(m_Joysticks[player]);
	}
}

void FJoystickPlugin::JoystickTick(float DeltaTime)
{
	for (int iDevice = 0; iDevice < m_Joysticks.Num(); iDevice++) {
		if (!m_Joysticks[iDevice].Connected) {
			continue;
		}

		//get the freshest data
		FJoystickState newJoyData(iDevice);
		if (m_DeviceSDL->getDeviceState(newJoyData, m_Joysticks[iDevice], iDevice)) {
			prevData[iDevice] = currData[iDevice];
			currData[iDevice] = newJoyData;
		}		
	}

	DelegateTick(DeltaTime);
}

//UE v4.6 IM event wrappers
bool EmitKeyUpEventForKey(FKey key, int32 user, bool repeat)
{
	FKeyEvent KeyEvent(key, FSlateApplication::Get().GetModifierKeys(), user, repeat, 0, 0);
	return FSlateApplication::Get().ProcessKeyUpEvent(KeyEvent);
}

bool EmitKeyDownEventForKey(FKey key, int32 user, bool repeat)
{
	FKeyEvent KeyEvent(key, FSlateApplication::Get().GetModifierKeys(), user, repeat, 0, 0);
	return FSlateApplication::Get().ProcessKeyDownEvent(KeyEvent);
}

bool EmitAnalogInputEventForKey(FKey key, float value, int32 user, bool repeat)
{
	FAnalogInputEvent AnalogInputEvent(key, FSlateApplication::Get().GetModifierKeys(), user, repeat, 0, 0, value);
	return FSlateApplication::Get().ProcessAnalogInputEvent(AnalogInputEvent);
}

/** Internal Tick - Called by the Plugin */
void FJoystickPlugin::DelegateTick(float DeltaTime)
{

	//Update delegate
	if (joystickDelegate) {
		joystickDelegate->PreviousFrame = joystickDelegate->LatestFrame;
		joystickDelegate->LatestFrame = currData;		
	}

	for (int32 iDevice = 0; iDevice < m_Joysticks.Num(); iDevice++)
	{
		auto const & current = currData[iDevice];
		auto const & prev = prevData[iDevice];

		// check SDL buttons
		for (uint64 i = 0; i < current.NumberOfButtons; i++) {			
			if (g_DeviceButtonKeys[iDevice].IsValidIndex(i)) {
				if (current.ButtonsArray[i] == 1) {
					EmitKeyDownEventForKey(g_DeviceButtonKeys[iDevice][i], iDevice, false);
					if (joystickDelegate) {
						joystickDelegate->JoystickButtonPressed(i, current);
						joystickDelegate->ButtonsArrayChanged(i, true, current);
					}
				}
				else
					if (prev.ButtonsArray[i] == 1) {
						EmitKeyUpEventForKey(g_DeviceButtonKeys[iDevice][i], iDevice, false);
						if (joystickDelegate) {
							joystickDelegate->JoystickButtonReleased(i, current);
							joystickDelegate->ButtonsArrayChanged(i, false, current);
						}
					}
			}
		}
		
		//check axis
		for (uint64 i = 0; i < current.NumberOfAxis; i++) {
			if (g_DeviceAxisKeys[iDevice].IsValidIndex(i)) {
				if (current.AxisArray[i] != prev.AxisArray[i]) {
					if (joystickDelegate) {
						joystickDelegate->AxisArrayChanged(i, current.AxisArray[i], prev.AxisArray[i], current, prev);
					}

					EmitAnalogInputEventForKey(g_DeviceAxisKeys[iDevice][i], current.AxisArray[i], iDevice, 0);
				}
			}
		}

		//check hats
		for (uint64 i = 0; i < current.NumberOfHats; i++) {
			if (g_DeviceHatKeys[iDevice].IsValidIndex(i)) {
				if (current.HatsArray[i] != prev.HatsArray[i]) {
					if (joystickDelegate) {
						joystickDelegate->HatsArrayChanged(i, current.HatsArray[i], current);
					}

					EmitAnalogInputEventForKey(g_DeviceHatKeys[iDevice][i], current.HatsArray[i], iDevice, 0);
				}
			}
		}

		//check balls
		for (uint64 i = 0; i < current.NumberOfBalls; i++) {
			if (g_DeviceBallKeys[iDevice].IsValidIndex(i)) {
				if (current.BallsArray[i] != prev.BallsArray[i]) {
					if (joystickDelegate) {
						joystickDelegate->BallsArrayChanged(i, current.BallsArray[i], current);
					}

					EmitAnalogInputEventForKey(g_DeviceBallKeys[iDevice][i], current.BallsArray[i], iDevice, 0);
				}
			}
		}

		// DirectX Input removed
		////check axis
		//if (current.Axis != prev.Axis)
		//{
		//	if (joystickDelegate)
		//		joystickDelegate->AxisChanged(current.Axis, current);
		//	EmitAnalogInputEventForKey(EKeysJoystick::JoystickAxisX, current.Axis.X, p, 0);
		//	EmitAnalogInputEventForKey(EKeysJoystick::JoystickAxisY, current.Axis.Y, p, 0);
		//	EmitAnalogInputEventForKey(EKeysJoystick::JoystickAxisZ, current.Axis.Z, p, 0);
		//}

		////check rotation axis
		//if (current.RAxis != prev.RAxis)
		//{
		//	if (joystickDelegate) {
		//		joystickDelegate->RAxisChanged(current.RAxis, current);
		//	}
		//	EmitAnalogInputEventForKey(EKeysJoystick::JoystickRAxisX, current.RAxis.X, p, 0);
		//	EmitAnalogInputEventForKey(EKeysJoystick::JoystickRAxisY, current.RAxis.Y, p, 0);
		//	EmitAnalogInputEventForKey(EKeysJoystick::JoystickRAxisZ, current.RAxis.Z, p, 0);
		//}

		/*for (int i = 0; i < 4; i++)
		{
		if (current.POV[i] != prev.POV[i])
		{
		if (joystickDelegate) {
		joystickDelegate->POVChanged(current.POV[i], i, current);
		}
		FVector2D direction = POVAxis(current.POV[i]);
		EmitAnalogInputEventForKey(EKeysJoystick::JoystickPOVX[i], direction.X, p, 0);
		EmitAnalogInputEventForKey(EKeysJoystick::JoystickPOVY[i], direction.Y, p, 0);
		}
		}*/

		////check slider
		//if (current.Slider != prev.Slider)
		//{
		//	if (joystickDelegate)
		//		joystickDelegate->SliderChanged(current.Slider, current);
		//	EmitAnalogInputEventForKey(EKeysJoystick::JoystickSlider[0], current.Slider.X, p, 0);
		//	EmitAnalogInputEventForKey(EKeysJoystick::JoystickSlider[1], current.Slider.Y, p, 0);
		//}
	}
}

void FJoystickPlugin::ForceFeedbackXY(int32 x, int32 y, float magnitudeScale)
{
	UE_LOG(JoystickPluginLog, Log, TEXT("Force feedback currently not implemented correctly, aborting."));
	return;

	//if (!g_pJoystickFF){
	//	UE_LOG(JoystickPluginLog, Log, TEXT("Force feedback not available."));
	//	return;
	//}

	////scale the input to joystick scaling
	//SetForceFeedbackXY(x, y, magnitudeScale);
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

bool FJoystickPlugin::JoystickIsAvailable()
{
	bool result = false;

	UE_LOG(JoystickPluginLog, Log, TEXT("check is JoystickIsAvailable"));

	if (m_DeviceSDL->getNumberOfJoysticks() > 0) {
		result = true;
	}

	return result;
}

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
