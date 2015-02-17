#pragma once

#include "JoystickInterface.generated.h"

#define MAX_JOYSTICKCOUNT 16

UENUM(BlueprintType)
enum EInputType
{
	INPUTTYPE_UNKNOWN,
	INPUTTYPE_JOYSTICK,
	INPUTTYPE_GAMECONTROLLER,	
};


UENUM(BlueprintType)
enum JoystickPOVDirection
{
	DIRECTION_NONE,
	DIRECTION_UP,
	DIRECTION_UP_RIGHT,
	DIRECTION_RIGHT,
	DIRECTION_DOWN_RIGHT,
	DIRECTION_DOWN,
	DIRECTION_DOWN_LEFT,
	DIRECTION_LEFT,
	DIRECTION_UP_LEFT,
};

FVector2D POVAxis(JoystickPOVDirection povValue);

USTRUCT(BlueprintType)
struct FJoystickState
{
	GENERATED_USTRUCT_BODY()

	explicit FJoystickState(int32 player = -1)
	: Player(player)
	{
		for (int i = 0; i < 4; i++)
		{
			POV.Add(DIRECTION_NONE);
		}
	}

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	FString DeviceName;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	int32 Player;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	int32 NumberOfHats;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	TArray<int32> HatsArray;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	int32 NumberOfBalls;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	TArray<int32> BallsArray; // may use as slider

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	int32 NumberOfAxis;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	TArray<float> AxisArray;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	int32 NumberOfButtons;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	TArray<int32> ButtonsArray;


	//UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	//	uint64 buttonsPressedL = 0;
	//UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	//	uint64 buttonsPressedH = 0;
	//UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	//	FVector Axis = FVector(0);
	//UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
	//	FVector RAxis = FVector(0);
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
		TArray<TEnumAsByte<JoystickPOVDirection>> POV;
/*
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickState)
		FVector2D Slider = FVector2D(0, 0);
*/

};

USTRUCT(BlueprintType)
struct FJoystickInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	int32 Player = -1;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	int32 JoystickIndex = -1;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	bool IsGameController = false;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	FGuid InstanceId;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	FGuid ProductId;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	FName ProductName;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	FName InstanceName;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	FString DeviceName;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	bool Connected = false;
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = JoystickInfo)
	TArray<TEnumAsByte<EInputType>> InputType;
};

UINTERFACE(MinimalAPI)
class UJoystickInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IJoystickInterface
{
	GENERATED_IINTERFACE_BODY()

public:

	//Define blueprint events
	UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
	void JoystickButtonPressed(int32 ButtonNr, FJoystickState state);

	UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
	void JoystickButtonReleased(int32 ButtonNr, FJoystickState state);

	//UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
	//void JoystickAxisChanged(FVector AxisValue, FJoystickState state);
	
	//this the new sdl based
	UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
		void JoystickAxisArrayChanged(int32 index, float value, float valuePrev, FJoystickState state, FJoystickState prev);

	UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
		void JoystickButtonsArrayChanged(int32 index, bool value, FJoystickState state);

	UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
		void JoystickHatsArrayChanged(int32 index, float value, FJoystickState state);

	UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
		void JoystickBallsArrayChanged(int32 index, float value, FJoystickState state);



	//UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
	//void JoystickRAxisChanged(FVector AxisValue, FJoystickState state);

	//UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
	//void JoystickPOVChanged(JoystickPOVDirection POVDirection, int32 index, FJoystickState state);

	//UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
	//void JoystickSliderChanged(FVector2D SliderValue, FJoystickState state);

	UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
	void JoystickPluggedIn(FJoystickInfo joystick);

	UFUNCTION(BlueprintImplementableEvent, Category = "Joystick Interface Events")
	void JoystickUnplugged(FJoystickInfo joystick);

	virtual FString ToString();
};
