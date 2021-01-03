// Name: S, Version: b

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Is Using Landing Camera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Landing_Camera           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::Is_Using_Landing_Camera(bool* Using_Landing_Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Is Using Landing Camera");

	ABP_Generic_Helicopter_C_Is_Using_Landing_Camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Using_Landing_Camera != nullptr)
		*Using_Landing_Camera = params.Using_Landing_Camera;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Get UI Tint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::Get_UI_Tint(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Get UI Tint");

	ABP_Generic_Helicopter_C_Get_UI_Tint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetThrottle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_Generic_Helicopter_C::GetThrottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetThrottle");

	ABP_Generic_Helicopter_C_GetThrottle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetVisualCollective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Collectives                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::GetVisualCollective(float* Collectives)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetVisualCollective");

	ABP_Generic_Helicopter_C_GetVisualCollective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Collectives != nullptr)
		*Collectives = params.Collectives;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetMainRotorThrust
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_Generic_Helicopter_C::GetMainRotorThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetMainRotorThrust");

	ABP_Generic_Helicopter_C_GetMainRotorThrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetTailRotorThrust
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_Generic_Helicopter_C::GetTailRotorThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetTailRotorThrust");

	ABP_Generic_Helicopter_C_GetTailRotorThrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Set UI Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_UI                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::Set_UI_Enabled(bool Enable_UI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Set UI Enabled");

	ABP_Generic_Helicopter_C_Set_UI_Enabled_Params params;
	params.Enable_UI = Enable_UI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoRotors
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::DoRotors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoRotors");

	ABP_Generic_Helicopter_C_DoRotors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnRep_Warning On
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::OnRep_Warning_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnRep_Warning On");

	ABP_Generic_Helicopter_C_OnRep_Warning_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoRotationFromRoll
// (Private, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::DoRotationFromRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoRotationFromRoll");

	ABP_Generic_Helicopter_C_DoRotationFromRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DebugVectorToString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Vector                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            digits                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::DebugVectorToString(const struct FVector& Vector, int digits, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DebugVectorToString");

	ABP_Generic_Helicopter_C_DebugVectorToString_Params params;
	params.Vector = Vector;
	params.digits = digits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Manage Landing Camera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::Manage_Landing_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Manage Landing Camera");

	ABP_Generic_Helicopter_C_Manage_Landing_Camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DrawDebugLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::DrawDebugLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DrawDebugLocation");

	ABP_Generic_Helicopter_C_DrawDebugLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetEngineThrust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          EngineThrust                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::GetEngineThrust(float* EngineThrust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetEngineThrust");

	ABP_Generic_Helicopter_C_GetEngineThrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EngineThrust != nullptr)
		*EngineThrust = params.EngineThrust;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CheckPhysics
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::CheckPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CheckPhysics");

	ABP_Generic_Helicopter_C_CheckPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.IsLanded
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Generic_Helicopter_C::IsLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.IsLanded");

	ABP_Generic_Helicopter_C_IsLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoStabilizers
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::DoStabilizers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoStabilizers");

	ABP_Generic_Helicopter_C_DoStabilizers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.PilotZoom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::PilotZoom(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.PilotZoom");

	ABP_Generic_Helicopter_C_PilotZoom_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetThrustPower
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Thrust                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::GetThrustPower(float* Thrust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetThrustPower");

	ABP_Generic_Helicopter_C_GetThrustPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Thrust != nullptr)
		*Thrust = params.Thrust;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DebugVariablesMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FString, struct FString> Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FColor                  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::DebugVariablesMap(TMap<struct FString, struct FString> Map, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DebugVariablesMap");

	ABP_Generic_Helicopter_C_DebugVariablesMap_Params params;
	params.Map = Map;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetRotationDiff
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::GetRotationDiff(struct FRotator* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetRotationDiff");

	ABP_Generic_Helicopter_C_GetRotationDiff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DrawDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Draw                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::DrawDebug(bool Draw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DrawDebug");

	ABP_Generic_Helicopter_C_DrawDebug_Params params;
	params.Draw = Draw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.SetGroundEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::SetGroundEffect(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.SetGroundEffect");

	ABP_Generic_Helicopter_C_SetGroundEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ResetMovementState
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::ResetMovementState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ResetMovementState");

	ABP_Generic_Helicopter_C_ResetMovementState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ResetState
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::ResetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ResetState");

	ABP_Generic_Helicopter_C_ResetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetMaxRPM
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_Generic_Helicopter_C::GetMaxRPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetMaxRPM");

	ABP_Generic_Helicopter_C_GetMaxRPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.EnablePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::EnablePhysics(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.EnablePhysics");

	ABP_Generic_Helicopter_C_EnablePhysics_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.PolishPitchInput
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::PolishPitchInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.PolishPitchInput");

	ABP_Generic_Helicopter_C_PolishPitchInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetDistanceFromTheGround
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TraceSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           GotDistance                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::GetDistanceFromTheGround(float TraceSize, float* distance, bool* GotDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetDistanceFromTheGround");

	ABP_Generic_Helicopter_C_GetDistanceFromTheGround_Params params;
	params.TraceSize = TraceSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (distance != nullptr)
		*distance = params.distance;
	if (GotDistance != nullptr)
		*GotDistance = params.GotDistance;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.PolishRollInput
// (Private, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::PolishRollInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.PolishRollInput");

	ABP_Generic_Helicopter_C_PolishRollInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetGradualRotationIncrement
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Roll                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::GetGradualRotationIncrement(float* Roll, float* Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetGradualRotationIncrement");

	ABP_Generic_Helicopter_C_GetGradualRotationIncrement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Roll != nullptr)
		*Roll = params.Roll;
	if (Pitch != nullptr)
		*Pitch = params.Pitch;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoRollToYawTransfer
// (Private, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::DoRollToYawTransfer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoRollToYawTransfer");

	ABP_Generic_Helicopter_C_DoRollToYawTransfer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoPushAndBounce
// (Private, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::DoPushAndBounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoPushAndBounce");

	ABP_Generic_Helicopter_C_DoPushAndBounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddRoll
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Roll_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::AddRoll(float Roll_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddRoll");

	ABP_Generic_Helicopter_C_AddRoll_Params params;
	params.Roll_ = Roll_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddPitch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::AddPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddPitch");

	ABP_Generic_Helicopter_C_AddPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddYaw
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::AddYaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddYaw");

	ABP_Generic_Helicopter_C_AddYaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CalcBrakebyYaw
// (Private, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::CalcBrakebyYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CalcBrakebyYaw");

	ABP_Generic_Helicopter_C_CalcBrakebyYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CalcYawResistances
// (Private, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::CalcYawResistances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CalcYawResistances");

	ABP_Generic_Helicopter_C_CalcYawResistances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetVelocityLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::GetVelocityLength(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetVelocityLength");

	ABP_Generic_Helicopter_C_GetVelocityLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetRollNormalized
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::GetRollNormalized(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetRollNormalized");

	ABP_Generic_Helicopter_C_GetRollNormalized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetPitchNormalized
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::GetPitchNormalized(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetPitchNormalized");

	ABP_Generic_Helicopter_C_GetPitchNormalized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CanLand
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanLand_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::CanLand(bool* CanLand_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CanLand");

	ABP_Generic_Helicopter_C_CanLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanLand_ != nullptr)
		*CanLand_ = params.CanLand_;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CalcCustomVelocity
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::CalcCustomVelocity(struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CalcCustomVelocity");

	ABP_Generic_Helicopter_C_CalcCustomVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddAcceleration
// (Private, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::AddAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddAcceleration");

	ABP_Generic_Helicopter_C_AddAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.UserConstructionScript");

	ABP_Generic_Helicopter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
void ABP_Generic_Helicopter_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Timeline_2__FinishedFunc");

	ABP_Generic_Helicopter_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
void ABP_Generic_Helicopter_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Timeline_2__UpdateFunc");

	ABP_Generic_Helicopter_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__FinishedFunc
// (BlueprintEvent)
void ABP_Generic_Helicopter_C::Warning_Light_Animation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__FinishedFunc");

	ABP_Generic_Helicopter_C_Warning_Light_Animation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__UpdateFunc
// (BlueprintEvent)
void ABP_Generic_Helicopter_C::Warning_Light_Animation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__UpdateFunc");

	ABP_Generic_Helicopter_C_Warning_Light_Animation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__LightOff__EventFunc
// (BlueprintEvent)
void ABP_Generic_Helicopter_C::Warning_Light_Animation__LightOff__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__LightOff__EventFunc");

	ABP_Generic_Helicopter_C_Warning_Light_Animation__LightOff__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__LightOn__EventFunc
// (BlueprintEvent)
void ABP_Generic_Helicopter_C::Warning_Light_Animation__LightOn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__LightOn__EventFunc");

	ABP_Generic_Helicopter_C_Warning_Light_Animation__LightOn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpActEvt_ToggleView_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::InpActEvt_ToggleView_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpActEvt_ToggleView_K2Node_InputActionEvent_2");

	ABP_Generic_Helicopter_C_InpActEvt_ToggleView_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1");

	ABP_Generic_Helicopter_C_InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpActEvt_Y_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::InpActEvt_Y_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpActEvt_Y_K2Node_InputKeyEvent_1");

	ABP_Generic_Helicopter_C_InpActEvt_Y_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.LandVehicle
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::LandVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.LandVehicle");

	ABP_Generic_Helicopter_C_LandVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.MC_SetLandingState
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsLandedState               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::MC_SetLandingState(bool NewIsLandedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.MC_SetLandingState");

	ABP_Generic_Helicopter_C_MC_SetLandingState_Params params;
	params.NewIsLandedState = NewIsLandedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CheckLiftOff
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::CheckLiftOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CheckLiftOff");

	ABP_Generic_Helicopter_C_CheckLiftOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.StartCheckLiftOff
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::StartCheckLiftOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.StartCheckLiftOff");

	ABP_Generic_Helicopter_C_StartCheckLiftOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ROS_UpdateLandingState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLanded_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::ROS_UpdateLandingState(bool IsLanded_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ROS_UpdateLandingState");

	ABP_Generic_Helicopter_C_ROS_UpdateLandingState_Params params;
	params.IsLanded_ = IsLanded_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Acceleration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisInput                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::HandleInput_Acceleration(float AxisInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Acceleration");

	ABP_Generic_Helicopter_C_HandleInput_Acceleration_Params params;
	params.AxisInput = AxisInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Acceleration_ModifySensitivity
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::Acceleration_ModifySensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Acceleration_ModifySensitivity");

	ABP_Generic_Helicopter_C_Acceleration_ModifySensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Yaw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::HandleInput_Yaw(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Yaw");

	ABP_Generic_Helicopter_C_HandleInput_Yaw_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Roll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::HandleInput_Roll(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Roll");

	ABP_Generic_Helicopter_C_HandleInput_Roll_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Pitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::HandleInput_Pitch(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Pitch");

	ABP_Generic_Helicopter_C_HandleInput_Pitch_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_1");

	ABP_Generic_Helicopter_C_InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_2");

	ABP_Generic_Helicopter_C_InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_3");

	ABP_Generic_Helicopter_C_InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_4");

	ABP_Generic_Helicopter_C_InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTimeRatio                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::HandleInput(float DeltaTimeRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput");

	ABP_Generic_Helicopter_C_HandleInput_Params params;
	params.DeltaTimeRatio = DeltaTimeRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Generic_Helicopter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveBeginPlay");

	ABP_Generic_Helicopter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceivePossessed");

	ABP_Generic_Helicopter_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ROC_VehiclePosessed
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::ROC_VehiclePosessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ROC_VehiclePosessed");

	ABP_Generic_Helicopter_C_ROC_VehiclePosessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveUnpossessed");

	ABP_Generic_Helicopter_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.MC_VehicleUnpossessed
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::MC_VehicleUnpossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.MC_VehicleUnpossessed");

	ABP_Generic_Helicopter_C_MC_VehicleUnpossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.TurnOnPhysics
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IgnoreLandingCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 NewLinearVelocity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewAngularVelocity             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::TurnOnPhysics(bool IgnoreLandingCheck, const struct FVector& NewLinearVelocity, const struct FVector& NewAngularVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.TurnOnPhysics");

	ABP_Generic_Helicopter_C_TurnOnPhysics_Params params;
	params.IgnoreLandingCheck = IgnoreLandingCheck;
	params.NewLinearVelocity = NewLinearVelocity;
	params.NewAngularVelocity = NewAngularVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveTick");

	ABP_Generic_Helicopter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.BeginPlay_Landing
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::BeginPlay_Landing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.BeginPlay_Landing");

	ABP_Generic_Helicopter_C_BeginPlay_Landing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CheckIfCanLandVehicle
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::CheckIfCanLandVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CheckIfCanLandVehicle");

	ABP_Generic_Helicopter_C_CheckIfCanLandVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnEngineActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::OnEngineActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnEngineActive");

	ABP_Generic_Helicopter_C_OnEngineActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.BndEvt__VehicleMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Generic_Helicopter_C::BndEvt__VehicleMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.BndEvt__VehicleMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_Generic_Helicopter_C_BndEvt__VehicleMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_VehicleZoom_K2Node_InputAxisEvent_9
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::InpAxisEvt_VehicleZoom_K2Node_InputAxisEvent_9(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_VehicleZoom_K2Node_InputAxisEvent_9");

	ABP_Generic_Helicopter_C_InpAxisEvt_VehicleZoom_K2Node_InputAxisEvent_9_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.TickGroundEffect
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::TickGroundEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.TickGroundEffect");

	ABP_Generic_Helicopter_C_TickGroundEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.EnteredVehicle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQVehicleSeatComponent* NewSeat                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::EnteredVehicle(class ASQSoldier* Soldier, class USQVehicleSeatComponent* NewSeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.EnteredVehicle");

	ABP_Generic_Helicopter_C_EnteredVehicle_Params params;
	params.Soldier = Soldier;
	params.NewSeat = NewSeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.SwitchedSeat
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQVehicleSeatComponent* PreviousSeat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQVehicleSeatComponent* NewSeat                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::SwitchedSeat(class ASQSoldier* Soldier, class USQVehicleSeatComponent* PreviousSeat, class USQVehicleSeatComponent* NewSeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.SwitchedSeat");

	ABP_Generic_Helicopter_C_SwitchedSeat_Params params;
	params.Soldier = Soldier;
	params.PreviousSeat = PreviousSeat;
	params.NewSeat = NewSeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnPhysicsReplicated
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::OnPhysicsReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnPhysicsReplicated");

	ABP_Generic_Helicopter_C_OnPhysicsReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Toggle Landing Camera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::Toggle_Landing_Camera(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Toggle Landing Camera");

	ABP_Generic_Helicopter_C_Toggle_Landing_Camera_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.LeftVehicle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQVehicleSeatComponent* PreviousSeat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::LeftVehicle(class ASQSoldier* Soldier, class USQVehicleSeatComponent* PreviousSeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.LeftVehicle");

	ABP_Generic_Helicopter_C_LeftVehicle_Params params;
	params.Soldier = Soldier;
	params.PreviousSeat = PreviousSeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Anim
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::Warning_Light_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Anim");

	ABP_Generic_Helicopter_C_Warning_Light_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_Generic_Helicopter_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveDestroyed");

	ABP_Generic_Helicopter_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Start Warning Anim
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::Start_Warning_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Start Warning Anim");

	ABP_Generic_Helicopter_C_Start_Warning_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Stop Warning Anim
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::Stop_Warning_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Stop Warning Anim");

	ABP_Generic_Helicopter_C_Stop_Warning_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.On Entered Bounds
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::On_Entered_Bounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.On Entered Bounds");

	ABP_Generic_Helicopter_C_On_Entered_Bounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.On Out of Bounds
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::On_Out_of_Bounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.On Out of Bounds");

	ABP_Generic_Helicopter_C_On_Out_of_Bounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Evaluate Warning
// (BlueprintCallable, BlueprintEvent)
void ABP_Generic_Helicopter_C::Evaluate_Warning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Evaluate Warning");

	ABP_Generic_Helicopter_C_Evaluate_Warning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Set Landing Camera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Generic_Helicopter_C::Set_Landing_Camera(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Set Landing Camera");

	ABP_Generic_Helicopter_C_Set_Landing_Camera_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnFDMImpact
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          TimeSlice                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 MoveDelta                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::OnFDMImpact(const struct FHitResult& HitResult, float TimeSlice, const struct FVector& MoveDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnFDMImpact");

	ABP_Generic_Helicopter_C_OnFDMImpact_Params params;
	params.HitResult = HitResult;
	params.TimeSlice = TimeSlice;
	params.MoveDelta = MoveDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ExecuteUbergraph_BP_Generic_Helicopter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Generic_Helicopter_C::ExecuteUbergraph_BP_Generic_Helicopter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ExecuteUbergraph_BP_Generic_Helicopter");

	ABP_Generic_Helicopter_C_ExecuteUbergraph_BP_Generic_Helicopter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
