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

// Function UMG_VehicleAmmo.UMG_VehicleAmmo_C.UpdateWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_VehicleAmmo_C::UpdateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleAmmo.UMG_VehicleAmmo_C.UpdateWidget");

	UUMG_VehicleAmmo_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleAmmo.UMG_VehicleAmmo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_VehicleAmmo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleAmmo.UMG_VehicleAmmo_C.Construct");

	UUMG_VehicleAmmo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleAmmo.UMG_VehicleAmmo_C.ExecuteUbergraph_UMG_VehicleAmmo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_VehicleAmmo_C::ExecuteUbergraph_UMG_VehicleAmmo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleAmmo.UMG_VehicleAmmo_C.ExecuteUbergraph_UMG_VehicleAmmo");

	UUMG_VehicleAmmo_C_ExecuteUbergraph_UMG_VehicleAmmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
