// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModuleManager.h"

class JoystickDelegate;

/**
 * The public interface to this module
 */
class IJoystickPlugin : public IModuleInterface
{

public:

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline IJoystickPlugin& Get()
	{
		return FModuleManager::LoadModuleChecked< IJoystickPlugin >("JoystickPlugin");
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("JoystickPlugin");
	}

	/**
	 * Public API, implemented in FHydraPlugin.cpp
	 * Required API called by HydraDelegate via HydraStartup() and HydraTick(float);
	 */
	virtual void ForceFeedbackXY(int32 x, int32 y, float magnitudeScale) {};
	virtual void JoystickTick(float DeltaTime) {};
	virtual void SetDelegate(JoystickDelegate* newDelegate) {};
	virtual bool JoystickIsAvailable() { return false;  };
};

