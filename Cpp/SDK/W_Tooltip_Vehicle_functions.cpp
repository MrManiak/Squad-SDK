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

// Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.Update Seat ID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_Vehicle_C::Update_Seat_ID(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.Update Seat ID");

	UW_Tooltip_Vehicle_C_Update_Seat_ID_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.Update All Seats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Self_Team                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            My_Seat_ID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_Vehicle_C::Update_All_Seats(bool Is_Self_Team, int My_Seat_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.Update All Seats");

	UW_Tooltip_Vehicle_C_Update_All_Seats_Params params;
	params.Is_Self_Team = Is_Self_Team;
	params.My_Seat_ID = My_Seat_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Tooltip_Vehicle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.Construct");

	UW_Tooltip_Vehicle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.ExecuteUbergraph_W_Tooltip_Vehicle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_Vehicle_C::ExecuteUbergraph_W_Tooltip_Vehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.ExecuteUbergraph_W_Tooltip_Vehicle");

	UW_Tooltip_Vehicle_C_ExecuteUbergraph_W_Tooltip_Vehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
