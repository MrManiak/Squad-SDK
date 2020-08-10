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

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.ShowHideCommanderStar
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_VehicleSeatItem_C::ShowHideCommanderStar()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.ShowHideCommanderStar");

	UW_Tooltip_VehicleSeatItem_C_ShowHideCommanderStar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Self Squad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_Tooltip_VehicleSeatItem_C::Self_Squad()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Self Squad");

	UW_Tooltip_VehicleSeatItem_C_Self_Squad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Update Fireteam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_VehicleSeatItem_C::Update_Fireteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Update Fireteam");

	UW_Tooltip_VehicleSeatItem_C_Update_Fireteam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.UpdateRank
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_VehicleSeatItem_C::UpdateRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.UpdateRank");

	UW_Tooltip_VehicleSeatItem_C_UpdateRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.UpdateSquadVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_VehicleSeatItem_C::UpdateSquadVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.UpdateSquadVisuals");

	UW_Tooltip_VehicleSeatItem_C_UpdateSquadVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.UpdateKitVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_VehicleSeatItem_C::UpdateKitVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.UpdateKitVisuals");

	UW_Tooltip_VehicleSeatItem_C_UpdateKitVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Get Tint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Out_Color                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_VehicleSeatItem_C::Get_Tint(struct FLinearColor* Out_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Get Tint");

	UW_Tooltip_VehicleSeatItem_C_Get_Tint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Color != nullptr)
		*Out_Color = params.Out_Color;

}


// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Tooltip_VehicleSeatItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Construct");

	UW_Tooltip_VehicleSeatItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Update Occupant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQVehicleOccupantInfo  Occupant_Info                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class USQMapWidgetVehicle*     Vehicle_Widget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Is_Self_Team                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            My_Seat_ID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Seat_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_VehicleSeatItem_C::Update_Occupant(const struct FSQVehicleOccupantInfo& Occupant_Info, class USQMapWidgetVehicle* Vehicle_Widget, bool Is_Self_Team, int My_Seat_ID, int Seat_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Update Occupant");

	UW_Tooltip_VehicleSeatItem_C_Update_Occupant_Params params;
	params.Occupant_Info = Occupant_Info;
	params.Vehicle_Widget = Vehicle_Widget;
	params.Is_Self_Team = Is_Self_Team;
	params.My_Seat_ID = My_Seat_ID;
	params.Seat_Index = Seat_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.ExecuteUbergraph_W_Tooltip_VehicleSeatItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_VehicleSeatItem_C::ExecuteUbergraph_W_Tooltip_VehicleSeatItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.ExecuteUbergraph_W_Tooltip_VehicleSeatItem");

	UW_Tooltip_VehicleSeatItem_C_ExecuteUbergraph_W_Tooltip_VehicleSeatItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
