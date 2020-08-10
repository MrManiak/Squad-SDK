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

// Function BP_Tooltip_Vehicle.BP_Tooltip_Vehicle_C.Refresh Seat Info
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Tooltip_Vehicle_C::Refresh_Seat_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tooltip_Vehicle.BP_Tooltip_Vehicle_C.Refresh Seat Info");

	UBP_Tooltip_Vehicle_C_Refresh_Seat_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Tooltip_Vehicle.BP_Tooltip_Vehicle_C.Get Vehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQVehicle*              AsSQVehicle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Tooltip_Vehicle_C::Get_Vehicle(class ASQVehicle** AsSQVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tooltip_Vehicle.BP_Tooltip_Vehicle_C.Get Vehicle");

	UBP_Tooltip_Vehicle_C_Get_Vehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsSQVehicle != nullptr)
		*AsSQVehicle = params.AsSQVehicle;

}


// Function BP_Tooltip_Vehicle.BP_Tooltip_Vehicle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_Tooltip_Vehicle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tooltip_Vehicle.BP_Tooltip_Vehicle_C.Construct");

	UBP_Tooltip_Vehicle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Tooltip_Vehicle.BP_Tooltip_Vehicle_C.ExecuteUbergraph_BP_Tooltip_Vehicle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Tooltip_Vehicle_C::ExecuteUbergraph_BP_Tooltip_Vehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tooltip_Vehicle.BP_Tooltip_Vehicle_C.ExecuteUbergraph_BP_Tooltip_Vehicle");

	UBP_Tooltip_Vehicle_C_ExecuteUbergraph_BP_Tooltip_Vehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
