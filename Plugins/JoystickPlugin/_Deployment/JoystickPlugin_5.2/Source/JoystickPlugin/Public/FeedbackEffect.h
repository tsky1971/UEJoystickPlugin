#pragma once

#include "FeedbackEffect.Generated.h"

UENUM(BlueprintType)
enum class EFeedbackType : uint8 
{
	CONSTANT,
	SPRING,
	DAMPER,
	INERTIA,
	FRICTION,
	SINE,
	TRIANGLE,
	SAWTOOTHUP,
	SAWTOOTHDOWN,
	RAMP
	//LEFTRIGHT,
	//CUSTOM
};

USTRUCT(BlueprintType)
struct FFeedbackData{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") EFeedbackType Type = EFeedbackType::SINE;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") FVector Direction=FVector(1,0,0);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float Level = 1.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float Period = 0.2f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float Magnitude=1.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float Offset=0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float Phase=0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float Delay=0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float Length=1.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") bool InfiniteLength = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float AttackLength=0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float AttackLevel=0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float FadeLength=0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float FadeLevel=0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") FVector Center = FVector(0,0,0);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") FVector Deadband = FVector(0, 0, 0);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") FVector LeftCoeff = FVector(1, 1, 1);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") FVector LeftSat = FVector(1, 1, 1);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") FVector RightCoeff = FVector(1, 1, 1);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") FVector RightSat = FVector(1, 1, 1);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float RampStart = -1.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDL Effects") float RampEnd = 1.0f;
};

