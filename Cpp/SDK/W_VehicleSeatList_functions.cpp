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

// Function W_VehicleSeatList.W_VehicleSeatList_C.Update Seats
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatList_C::Update_Seats()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatList.W_VehicleSeatList_C.Update Seats");

	UW_VehicleSeatList_C_Update_Seats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatList.W_VehicleSeatList_C.Update List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatList_C::Update_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatList.W_VehicleSeatList_C.Update List");

	UW_VehicleSeatList_C_Update_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatList.W_VehicleSeatList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_VehicleSeatList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatList.W_VehicleSeatList_C.Construct");

	UW_VehicleSeatList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatList.W_VehicleSeatList_C.Refresh Vehicle
// (BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatList_C::Refresh_Vehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatList.W_VehicleSeatList_C.Refresh Vehicle");

	UW_VehicleSeatList_C_Refresh_Vehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatList.W_VehicleSeatList_C.Play Fade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUMGSequencePlayMode> PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VehicleSeatList_C::Play_Fade(TEnumAsByte<EUMGSequencePlayMode> PlayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatList.W_VehicleSeatList_C.Play Fade");

	UW_VehicleSeatList_C_Play_Fade_Params params;
	params.PlayMode = PlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatList.W_VehicleSeatList_C.Collapse
// (BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatList_C::Collapse()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatList.W_VehicleSeatList_C.Collapse");

	UW_VehicleSeatList_C_Collapse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatList.W_VehicleSeatList_C.ExecuteUbergraph_W_VehicleSeatList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VehicleSeatList_C::ExecuteUbergraph_W_VehicleSeatList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatList.W_VehicleSeatList_C.ExecuteUbergraph_W_VehicleSeatList");

	UW_VehicleSeatList_C_ExecuteUbergraph_W_VehicleSeatList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
