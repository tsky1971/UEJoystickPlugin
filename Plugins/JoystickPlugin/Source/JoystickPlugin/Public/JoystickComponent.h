#pragma once

#include "JoystickPluginPrivatePCH.h"
#include "JoystickDelegate.h"
#include "JoystickInterface.h"
#include "JoystickComponent.generated.h"

class UJoystickSingleController;

UCLASS(ClassGroup = "Input Controller", meta = (BlueprintSpawnableComponent))
class UJoystickComponent : public UActorComponent, public JoystickDelegate
{
	GENERATED_UCLASS_BODY()

public:

	//Callable Blueprint functions - Need to be defined for direct access
	/** Check if the hydra is available/plugged in.*/
	UFUNCTION(BlueprintCallable, Category = JoystickFunctions)
	bool IsAvailable();

	UFUNCTION(BlueprintPure, Category = JoystickFunctions)
	FJoystickInfo GetJoystick(int32 player);

	UFUNCTION(BlueprintPure, Category = JoystickFunctions)
	FJoystickState GetLatestFrame(int32 player);
	
	UFUNCTION(BlueprintPure, Category = JoystickFunctions)
	FJoystickState GetPreviousFrame(int32 player);

	UFUNCTION(BlueprintPure, Category = JoystickFunctions)
	int32 JoystickCount();

	virtual void OnRegister() override;
	virtual void OnUnregister() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};
