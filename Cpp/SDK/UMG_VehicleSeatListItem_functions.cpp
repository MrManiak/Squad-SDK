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

// Function UMG_VehicleSeatListItem.UMG_VehicleSeatListItem_C.UpdateSquadVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_VehicleSeatListItem_C::UpdateSquadVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleSeatListItem.UMG_VehicleSeatListItem_C.UpdateSquadVisuals");

	UUMG_VehicleSeatListItem_C_UpdateSquadVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleSeatListItem.UMG_VehicleSeatListItem_C.UpdateKitVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_VehicleSeatListItem_C::UpdateKitVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleSeatListItem.UMG_VehicleSeatListItem_C.UpdateKitVisuals");

	UUMG_VehicleSeatListItem_C_UpdateKitVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleSeatListItem.UMG_VehicleSeatListItem_C.Same Squad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out_Same_Squad                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_VehicleSeatListItem_C::Same_Squad(bool* Out_Same_Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleSeatListItem.UMG_VehicleSeatListItem_C.Same Squad");

	UUMG_VehicleSeatListItem_C_Same_Squad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Same_Squad != nullptr)
		*Out_Same_Squad = params.Out_Same_Squad;

}


// Function UMG_VehicleSeatListItem.UMG_VehicleSeatListItem_C.UpdateState
// (BlueprintCallable, BlueprintEvent)
void UUMG_VehicleSeatListItem_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleSeatListItem.UMG_VehicleSeatListItem_C.UpdateState");

	UUMG_VehicleSeatListItem_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleSeatListItem.UMG_VehicleSeatListItem_C.ExecuteUbergraph_UMG_VehicleSeatListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_VehicleSeatListItem_C::ExecuteUbergraph_UMG_VehicleSeatListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleSeatListItem.UMG_VehicleSeatListItem_C.ExecuteUbergraph_UMG_VehicleSeatListItem");

	UUMG_VehicleSeatListItem_C_ExecuteUbergraph_UMG_VehicleSeatListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
