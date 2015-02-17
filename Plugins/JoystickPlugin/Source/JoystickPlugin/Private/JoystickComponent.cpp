#include "JoystickPluginPrivatePCH.h"
#include "JoystickComponent.h"
#include "JoystickInterface.h"
#include "Engine.h"
#include "CoreUObject.h"


UJoystickComponent::UJoystickComponent(const FObjectInitializer &init) : UActorComponent(init)
{
	bWantsInitializeComponent = true;
	bAutoActivate = true;
	PrimaryComponentTick.bCanEverTick = true;	//the component automatically ticks so we don't have to
}

void UJoystickComponent::OnRegister()
{
	Super::OnRegister();

	//Attach the delegate pointer automatically to the owner of the component
	ValidSelfPointer = this;
	SetInterfaceDelegate(GetOwner());
	JoystickStartup();
}

void UJoystickComponent::OnUnregister()
{
	Super::OnUnregister();

	JoystickStop();
}

void UJoystickComponent::TickComponent(float DeltaTime, enum ELevelTick TickType,
	FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Forward the component tick
	JoystickTick(DeltaTime);
}

//Blueprint exposing the HydraDelegate Methods
//Override Callable Functions - Required to forward their implementations in order to compile, cannot skip implementation or bp definition

bool UJoystickComponent::IsAvailable()
{
	return JoystickDelegate::JoystickIsAvailable();
}

FJoystickInfo UJoystickComponent::GetJoystick(int32 player)
{
	if (player < 0 || player >= Joysticks.Num()) return FJoystickInfo();
	return Joysticks[player];
}

FJoystickState UJoystickComponent::GetLatestFrame(int32 player)
{
	if (player < 0 || player >= Joysticks.Num()) return FJoystickState();
	if (!LatestFrame.IsValidIndex(player)) {
		return FJoystickState();
	}
	return LatestFrame[player];
}

FJoystickState UJoystickComponent::GetPreviousFrame(int32 player)
{
	if (player < 0 || player >= Joysticks.Num()) return FJoystickState();
	if (!PreviousFrame.IsValidIndex(player)) {
		return FJoystickState();
	}
	return PreviousFrame[player];
}

int32 UJoystickComponent::JoystickCount()
{
	return Joysticks.Num();
}
