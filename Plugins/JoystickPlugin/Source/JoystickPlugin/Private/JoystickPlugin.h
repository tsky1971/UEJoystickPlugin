#pragma once

#include "CoreMinimal.h"

#include "UObject/Interface.h"
#include "Containers/Map.h"
#include "Containers/Array.h"
#include "InputCoreTypes.h"

#include "IInputDevice.h"
#include "IInputDeviceModule.h"


#include "IJoystickPlugin.h"
#include "JoystickDevice.h"

DECLARE_LOG_CATEGORY_EXTERN(JoystickPluginLog, Log, All);

class FJoystickPlugin : public IJoystickPlugin
{

public:
	virtual TSharedPtr<class IInputDevice> CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) override
	{
		return JoystickDevice;
	}

	void ShutdownModule() override
	{
		IJoystickPlugin::ShutdownModule();
		JoystickDevice = nullptr;
	}

	void StartupModule() override;

	TSharedPtr< class FJoystickDevice > JoystickDevice;

	void *SDL2LibraryHandle;
};
