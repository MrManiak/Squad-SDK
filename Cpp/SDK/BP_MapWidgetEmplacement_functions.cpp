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

// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.On_TooltipVisible_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MapWidgetEmplacement_C::On_TooltipVisible_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.On_TooltipVisible_MouseButtonDown_1");

	UBP_MapWidgetEmplacement_C_On_TooltipVisible_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.Update Tooltip
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::Update_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.Update Tooltip");

	UBP_MapWidgetEmplacement_C_Update_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.Tooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UBP_MapWidgetEmplacement_C::Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.Tooltip");

	UBP_MapWidgetEmplacement_C_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnVehicleOccupantInfoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            AtIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetEmplacement_C::OnVehicleOccupantInfoChanged(int AtIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnVehicleOccupantInfoChanged");

	UBP_MapWidgetEmplacement_C_OnVehicleOccupantInfoChanged_Params params;
	params.AtIndex = AtIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnSelfInVehicleSeatChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnSelfInVehicleSeatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnSelfInVehicleSeatChanged");

	UBP_MapWidgetEmplacement_C_OnSelfInVehicleSeatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnIsInSelfTeam
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnIsInSelfTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnIsInSelfTeam");

	UBP_MapWidgetEmplacement_C_OnIsInSelfTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnSelectionStateChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnSelectionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnSelectionStateChanged");

	UBP_MapWidgetEmplacement_C_OnSelectionStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.Construct");

	UBP_MapWidgetEmplacement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnStaticUIDataChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnStaticUIDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnStaticUIDataChanged");

	UBP_MapWidgetEmplacement_C_OnStaticUIDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnIsOwnedBySelfChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnIsOwnedBySelfChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnIsOwnedBySelfChanged");

	UBP_MapWidgetEmplacement_C_OnIsOwnedBySelfChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnAngleChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnAngleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnAngleChanged");

	UBP_MapWidgetEmplacement_C_OnAngleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnCameraRotationYawChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnCameraRotationYawChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnCameraRotationYawChanged");

	UBP_MapWidgetEmplacement_C_OnCameraRotationYawChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnHoldsOccupantChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnHoldsOccupantChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnHoldsOccupantChanged");

	UBP_MapWidgetEmplacement_C_OnHoldsOccupantChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnHoldsSquadLeaderChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnHoldsSquadLeaderChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnHoldsSquadLeaderChanged");

	UBP_MapWidgetEmplacement_C_OnHoldsSquadLeaderChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnClaimingSquadIDChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnClaimingSquadIDChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnClaimingSquadIDChanged");

	UBP_MapWidgetEmplacement_C_OnClaimingSquadIDChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnTintValueChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetEmplacement_C::OnTintValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnTintValueChanged");

	UBP_MapWidgetEmplacement_C_OnTintValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetEmplacement_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.OnScaleChanged");

	UBP_MapWidgetEmplacement_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.ExecuteUbergraph_BP_MapWidgetEmplacement
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetEmplacement_C::ExecuteUbergraph_BP_MapWidgetEmplacement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C.ExecuteUbergraph_BP_MapWidgetEmplacement");

	UBP_MapWidgetEmplacement_C_ExecuteUbergraph_BP_MapWidgetEmplacement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
