#include "JoystickPluginPrivatePCH.h"

#include "IJoystickPlugin.h"
#include "JoystickDelegate.h"
#include "JoystickPlayerController.h"

//Constructor/Initializer
AJoystickPlayerController::AJoystickPlayerController(const class FObjectInitializer& PCIP)
	: Super(PCIP)
{
	PrimaryActorTick.bCanEverTick = true;
}

//Blueprint exposing the HydraDelegate Methods
//Override Callable Functions - Required to forward their implementations in order to compile, cannot skip implementation or bp definition
bool AJoystickPlayerController::IsAvailable()
{
	return JoystickDelegate::JoystickIsAvailable();
}

//Required Overrides, forward startup and tick.
void AJoystickPlayerController::BeginPlay()
{
	Super::BeginPlay();
	ValidSelfPointer = this;	//required from v0.7
	JoystickStartup();
}

void AJoystickPlayerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	JoystickStop();
}

void AJoystickPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	JoystickTick(DeltaTime);
}

FJoystickInfo AJoystickPlayerController::GetJoystick(int32 player)
{
	if (player < 0 || player >= Joysticks.Num()) return FJoystickInfo();
	return Joysticks[player];
}

FJoystickState AJoystickPlayerController::GetLatestFrame(int32 player)
{
	if (player < 0 || player >= Joysticks.Num()) return FJoystickState();
	if (!LatestFrame.IsValidIndex(player)) {
		return FJoystickState();
	}
	return LatestFrame[player];
}

int32 AJoystickPlayerController::JoystickCount()
{
	return Joysticks.Num();
}

