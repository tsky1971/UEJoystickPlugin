#pragma once

#include "JoystickInterface.h"
#include "FeedbackEffect.h"

#include "FeedbackFunctions.generated.h"

UCLASS(BlueprintType)
class UFeedbackFunctions : public UObject
{
	GENERATED_UCLASS_BODY()
public:

	UFUNCTION(BlueprintPure, Category = "SDL Force Feedback")
	static int GetNumEffects(int32 _DeviceInstanceId);

	UFUNCTION(BlueprintPure, Category = "SDL Force Feedback")
	static int GetNumEffectsPlaying(int32 _DeviceInstanceId);

	UFUNCTION(BlueprintPure, Category = "SDL Force Feedback")
	static int GetEffectStatus(int32 _DeviceInstanceId, int32 _EffectId);

	UFUNCTION(BlueprintCallable, Category = "SDL Force Feedback")
	static bool SetAutocenter(int32 _DeviceInstanceId, int _Center);

	UFUNCTION(BlueprintCallable, Category = "SDL Force Feedback")
	static bool SetGain(int32 _DeviceInstanceId, int _Gain);

	UFUNCTION(BlueprintCallable, Category = "SDL Force Feedback")
	static int32 CreateEffect(int32 _DeviceInstanceId, const FFeedbackData _EffectData, int _NumIterations = 1, bool _Infinity = false);

	UFUNCTION(BlueprintCallable, Category = "SDL Force Feedback")
	static void UpdateEffect(int32 _DeviceInstanceId, int32 _EffectId, FFeedbackData _EffectData);

	UFUNCTION(BlueprintCallable, Category = "SDL Force Feedback")
	static void PauseDevice(int32 _DeviceInstanceId);

	UFUNCTION(BlueprintCallable, Category = "SDL Force Feedback")
	static void UnpauseDevice(int32 _DeviceInstanceId);

	UFUNCTION(BlueprintCallable, Category = "SDL Force Feedback")
	static void StopEffect(int32 _DeviceInstanceId, int32 _EffectId);

	UFUNCTION(BlueprintCallable, Category = "SDL Force Feedback")
	static void StopAllEffects(int32 _DeviceInstanceId);

	UFUNCTION(BlueprintCallable, Category = "SDL Force Feedback")
	static void DestroyEffect(int32 _DeviceInstanceId, int32 _EffectId);
};
