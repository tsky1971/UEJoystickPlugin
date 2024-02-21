/*
*
* Copyright (C) <2014> samiljan <Sam Persson>, tsky <thomas.kollakowksy@w-hs.de>
* All rights reserved.
*
* This software may be modified and distributed under the terms
* of the BSD license.  See the LICENSE file for details.
*/

#pragma once

#include "JoystickInterface.h"

#include "JoystickFunctions.generated.h"

UCLASS(BlueprintType)
class UJoystickFunctions : public UObject
{
	
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "SDL Input|Joystick input")
	static FVector2D POVAxis(EJoystickPOVDirection _Direction);

	UFUNCTION(BlueprintPure, Category = "SDL Input|Joystick input")
    static FJoystickInfo GetJoystick(int32 _DeviceInstanceId);

	UFUNCTION(BlueprintPure, Category = "SDL Input|Joystick input")
	static FJoystickState GetJoystickState(int32 _DeviceInstanceId);

	UFUNCTION(BlueprintPure, Category = "SDL Input|Joystick input")
	static FJoystickState GetPreviousJoystickState(int32 _DeviceInstanceId);

	UFUNCTION(BlueprintPure, Category = "SDL Input|Joystick input")
	static int32 JoystickCount();

	UFUNCTION(BlueprintCallable, Category = "SDL Input|Joystick input")
	static void RegisterForJoystickEvents(UObject* _Listener);

	UFUNCTION(BlueprintCallable, Category = "SDL Input|Joystick input")
	static void MapJoystickDeviceToPlayer(int32 _DeviceInstanceId, int32 _Player);

	UFUNCTION(BlueprintCallable, Category = "SDL Input|Joystick input")
	static void IgnoreGameControllers(bool _bIgnore);
};
