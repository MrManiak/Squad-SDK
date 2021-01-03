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

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.ShowHideCommanderStar
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetVehicle_C::ShowHideCommanderStar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.ShowHideCommanderStar");

	UBP_MapWidgetVehicle_C_ShowHideCommanderStar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.On_TooltipHitBox_MouseButtonUp_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MapWidgetVehicle_C::On_TooltipHitBox_MouseButtonUp_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.On_TooltipHitBox_MouseButtonUp_1");

	UBP_MapWidgetVehicle_C_On_TooltipHitBox_MouseButtonUp_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.On_TooltipHitBox_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MapWidgetVehicle_C::On_TooltipHitBox_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.On_TooltipHitBox_MouseButtonDown_1");

	UBP_MapWidgetVehicle_C_On_TooltipHitBox_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.Update Tooltip
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetVehicle_C::Update_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.Update Tooltip");

	UBP_MapWidgetVehicle_C_Update_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.Tooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UBP_MapWidgetVehicle_C::Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.Tooltip");

	UBP_MapWidgetVehicle_C_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnTintValueChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnTintValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnTintValueChanged");

	UBP_MapWidgetVehicle_C_OnTintValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnIsOwnedBySelfChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnIsOwnedBySelfChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnIsOwnedBySelfChanged");

	UBP_MapWidgetVehicle_C_OnIsOwnedBySelfChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnAngleChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnAngleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnAngleChanged");

	UBP_MapWidgetVehicle_C_OnAngleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnCameraRotationYawChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnCameraRotationYawChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnCameraRotationYawChanged");

	UBP_MapWidgetVehicle_C_OnCameraRotationYawChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnStaticUIDataChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnStaticUIDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnStaticUIDataChanged");

	UBP_MapWidgetVehicle_C_OnStaticUIDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnClaimingSquadIDChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnClaimingSquadIDChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnClaimingSquadIDChanged");

	UBP_MapWidgetVehicle_C_OnClaimingSquadIDChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnHoldsSquadLeaderChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnHoldsSquadLeaderChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnHoldsSquadLeaderChanged");

	UBP_MapWidgetVehicle_C_OnHoldsSquadLeaderChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnVehicleOccupantInfoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            AtIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetVehicle_C::OnVehicleOccupantInfoChanged(int AtIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnVehicleOccupantInfoChanged");

	UBP_MapWidgetVehicle_C_OnVehicleOccupantInfoChanged_Params params;
	params.AtIndex = AtIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnSelfInVehicleSeatChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnSelfInVehicleSeatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnSelfInVehicleSeatChanged");

	UBP_MapWidgetVehicle_C_OnSelfInVehicleSeatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnIsInSelfTeam
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnIsInSelfTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnIsInSelfTeam");

	UBP_MapWidgetVehicle_C_OnIsInSelfTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnSelectionStateChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnSelectionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnSelectionStateChanged");

	UBP_MapWidgetVehicle_C_OnSelectionStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetVehicle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.Construct");

	UBP_MapWidgetVehicle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetVehicle_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnScaleChanged");

	UBP_MapWidgetVehicle_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnCommanderChangedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerState*          OldCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          NewCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetVehicle_C::OnCommanderChangedEvent_Event_1(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnCommanderChangedEvent_Event_1");

	UBP_MapWidgetVehicle_C_OnCommanderChangedEvent_Event_1_Params params;
	params.OldCommander = OldCommander;
	params.NewCommander = NewCommander;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnHoldsCommanderChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicle_C::OnHoldsCommanderChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnHoldsCommanderChanged");

	UBP_MapWidgetVehicle_C_OnHoldsCommanderChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.ExecuteUbergraph_BP_MapWidgetVehicle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetVehicle_C::ExecuteUbergraph_BP_MapWidgetVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.ExecuteUbergraph_BP_MapWidgetVehicle");

	UBP_MapWidgetVehicle_C_ExecuteUbergraph_BP_MapWidgetVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
