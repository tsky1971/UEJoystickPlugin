#include "JoystickPluginPrivatePCH.h"

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "JoystickDelegate.h"
#include "JoystickPluginActor.h"

//Constructor/Initializer
AJoystickPluginActor::AJoystickPluginActor(const FObjectInitializer& PCIP)
	: Super(PCIP)
{
	PrimaryActorTick.bCanEverTick = true;
}

//Blueprint exposing the HydraDelegate Methods
//Override Callable Functions - Required to forward their implementations in order to compile, cannot skip implementation or bp definition
bool AJoystickPluginActor::IsAvailable()
{
	return JoystickDelegate::JoystickIsAvailable();
}

//Required Overrides
void AJoystickPluginActor::BeginPlay()
{
	Super::BeginPlay();

	//Actors by default aren't attached to the input chain, so we enable input for this actor to forward Key and Gamepad Events
	APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
	EnableInput(PC);

	//Required Hydra Initialization
	ValidSelfPointer = this;	//required from v0.7
	JoystickStartup();
}

void AJoystickPluginActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	JoystickStop();
}

void AJoystickPluginActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Required Joystick Tick
	JoystickTick(DeltaTime);
}

FJoystickInfo AJoystickPluginActor::GetJoystick(int32 player)
{
	if (player < 0 || player >= Joysticks.Num()) return FJoystickInfo();
	return Joysticks[player];
}

FJoystickState AJoystickPluginActor::GetLatestFrame(int32 player)
{
	if (player < 0 || player >= Joysticks.Num()) return FJoystickState();
	if (!LatestFrame.IsValidIndex(player)) {
		return FJoystickState();
	}
	return LatestFrame[player];
}
int32 AJoystickPluginActor::JoystickCount()
{
	return Joysticks.Num();
}
