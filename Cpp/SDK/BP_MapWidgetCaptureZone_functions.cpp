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

// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.update fog of war
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::update_fog_of_war()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.update fog of war");

	UBP_MapWidgetCaptureZone_C_update_fog_of_war_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.Update Capture Bar Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::Update_Capture_Bar_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.Update Capture Bar Visibility");

	UBP_MapWidgetCaptureZone_C_Update_Capture_Bar_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.Get Same Team
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Same                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MapWidgetCaptureZone_C::Get_Same_Team(bool* Same)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.Get Same Team");

	UBP_MapWidgetCaptureZone_C_Get_Same_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Same != nullptr)
		*Same = params.Same;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.Get_FlagImage_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UBP_MapWidgetCaptureZone_C::Get_FlagImage_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.Get_FlagImage_ToolTipWidget_1");

	UBP_MapWidgetCaptureZone_C_Get_FlagImage_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.Construct");

	UBP_MapWidgetCaptureZone_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnFlagNameChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::OnFlagNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnFlagNameChanged");

	UBP_MapWidgetCaptureZone_C_OnFlagNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnFlagTextureChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::OnFlagTextureChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnFlagTextureChanged");

	UBP_MapWidgetCaptureZone_C_OnFlagTextureChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnUncappableChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::OnUncappableChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnUncappableChanged");

	UBP_MapWidgetCaptureZone_C_OnUncappableChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnContestingChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::OnContestingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnContestingChanged");

	UBP_MapWidgetCaptureZone_C_OnContestingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnCapturePercentChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::OnCapturePercentChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnCapturePercentChanged");

	UBP_MapWidgetCaptureZone_C_OnCapturePercentChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnOwningTeamChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::OnOwningTeamChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnOwningTeamChanged");

	UBP_MapWidgetCaptureZone_C_OnOwningTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnCapturingTeamChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::OnCapturingTeamChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnCapturingTeamChanged");

	UBP_MapWidgetCaptureZone_C_OnCapturingTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetCaptureZone_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.OnScaleChanged");

	UBP_MapWidgetCaptureZone_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.Update Contested State
// (BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetCaptureZone_C::Update_Contested_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.Update Contested State");

	UBP_MapWidgetCaptureZone_C_Update_Contested_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.ExecuteUbergraph_BP_MapWidgetCaptureZone
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetCaptureZone_C::ExecuteUbergraph_BP_MapWidgetCaptureZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C.ExecuteUbergraph_BP_MapWidgetCaptureZone");

	UBP_MapWidgetCaptureZone_C_ExecuteUbergraph_BP_MapWidgetCaptureZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
