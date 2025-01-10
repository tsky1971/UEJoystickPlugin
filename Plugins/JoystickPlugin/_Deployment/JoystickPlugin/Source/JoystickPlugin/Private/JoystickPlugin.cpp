/*
*
* Copyright (C) <2014> samiljan <Sam Persson>, tsky <thomas.kollakowksy@w-hs.de>
* All rights reserved.
*
* This software may be modified and distributed under the terms
* of the BSD license.  See the LICENSE file for details.
*/

#include "JoystickPlugin.h"

#if WITH_EDITOR
	#include "InputSettingsCustomization.h"
#endif

IMPLEMENT_MODULE(FJoystickPlugin, JoystickPlugin)

#define LOCTEXT_NAMESPACE "JoystickPlugin"

DEFINE_LOG_CATEGORY(JoystickPluginLog);

void FJoystickPlugin::StartupModule()
{
	IJoystickPlugin::StartupModule();

	// Get the base directory of this plugin
	FString BaseDir = "./";
	// Add on the relative location of the third party dll and load it
	FString LibraryPath;
#if PLATFORM_WINDOWS
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("SDL3.dll"));	
#endif // PLATFORM_WINDOWS

	SDLXLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	if (SDLXLibraryHandle == nullptr)
	{
		UE_LOG(JoystickPluginLog, Error, TEXT("ThirdPartyLibraryError - Failed load sdl3.dll - %s"), *LibraryPath);
		
#if PLATFORM_WINDOWS
		LibraryPath = FPaths::Combine(*BaseDir, TEXT("SDL3.dll"));
#endif // PLATFORM_WINDOWS
		SDLXLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;
		if (SDLXLibraryHandle == nullptr) {
			UE_LOG(JoystickPluginLog, Error, TEXT("ThirdPartyLibraryError - Failed load sdl3.dll - %s"), *LibraryPath);
		
			exit(99);
		}
	}

	JoystickDevice = MakeShareable(new ::FJoystickDevice());

#if WITH_EDITOR
	// Replace parts of the input settings widget to make them wide enough to fit long joystick names
	FInputActionMappingCustomizationExtended::Register();
	FInputAxisMappingCustomizationExtended::Register();
#endif
}

#undef LOCTEXT_NAMESPACE
