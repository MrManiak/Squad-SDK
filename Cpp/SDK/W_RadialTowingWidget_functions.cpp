// Name: Sq, Version: b21

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

// Function W_RadialTowingWidget.W_RadialTowingWidget_C.UpdateCentralButton
// (Public, BlueprintCallable, BlueprintEvent)
void UW_RadialTowingWidget_C::UpdateCentralButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.UpdateCentralButton");

	UW_RadialTowingWidget_C_UpdateCentralButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_RadialTowingWidget_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.UpdateText");

	UW_RadialTowingWidget_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.SetupWaitDuration
// (Public, BlueprintCallable, BlueprintEvent)
void UW_RadialTowingWidget_C::SetupWaitDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.SetupWaitDuration");

	UW_RadialTowingWidget_C_SetupWaitDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.IsTeleportationValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RadialTowingWidget_C::IsTeleportationValid(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.IsTeleportationValid");

	UW_RadialTowingWidget_C_IsTeleportationValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.CollectSoldierReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RadialTowingWidget_C::CollectSoldierReference(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.CollectSoldierReference");

	UW_RadialTowingWidget_C_CollectSoldierReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.CollectVehicleReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RadialTowingWidget_C::CollectVehicleReference(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.CollectVehicleReference");

	UW_RadialTowingWidget_C_CollectVehicleReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.ComputeEmergencyYaw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Degress                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RadialTowingWidget_C::ComputeEmergencyYaw(float Degress)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.ComputeEmergencyYaw");

	UW_RadialTowingWidget_C_ComputeEmergencyYaw_Params params;
	params.Degress = Degress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.OnTimerReached
// (BlueprintCallable, BlueprintEvent)
void UW_RadialTowingWidget_C::OnTimerReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.OnTimerReached");

	UW_RadialTowingWidget_C_OnTimerReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.AddEmergencyYaw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Degrees                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RadialTowingWidget_C::AddEmergencyYaw(float Degrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.AddEmergencyYaw");

	UW_RadialTowingWidget_C_AddEmergencyYaw_Params params;
	params.Degrees = Degrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.ToggleEmergencyJump
// (BlueprintCallable, BlueprintEvent)
void UW_RadialTowingWidget_C::ToggleEmergencyJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.ToggleEmergencyJump");

	UW_RadialTowingWidget_C_ToggleEmergencyJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.OnHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UW_RadialTowingWidget_C::OnHoverEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.OnHoverEnd");

	UW_RadialTowingWidget_C_OnHoverEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UW_RadialTowingWidget_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.OnHoverBegin");

	UW_RadialTowingWidget_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_RadialTowingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.Construct");

	UW_RadialTowingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTowingWidget.W_RadialTowingWidget_C.ExecuteUbergraph_W_RadialTowingWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RadialTowingWidget_C::ExecuteUbergraph_W_RadialTowingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTowingWidget.W_RadialTowingWidget_C.ExecuteUbergraph_W_RadialTowingWidget");

	UW_RadialTowingWidget_C_ExecuteUbergraph_W_RadialTowingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
