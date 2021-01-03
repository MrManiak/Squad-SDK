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

// Function UMG_VehicleAmmoExtended.UMG_VehicleAmmoExtended_C.ValueSizeBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InPoints                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TotalPoints                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_VehicleAmmoExtended_C::ValueSizeBox(float InPoints, float TotalPoints, float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleAmmoExtended.UMG_VehicleAmmoExtended_C.ValueSizeBox");

	UUMG_VehicleAmmoExtended_C_ValueSizeBox_Params params;
	params.InPoints = InPoints;
	params.TotalPoints = TotalPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;

}


// Function UMG_VehicleAmmoExtended.UMG_VehicleAmmoExtended_C.UpdateWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_VehicleAmmoExtended_C::UpdateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleAmmoExtended.UMG_VehicleAmmoExtended_C.UpdateWidget");

	UUMG_VehicleAmmoExtended_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleAmmoExtended.UMG_VehicleAmmoExtended_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_VehicleAmmoExtended_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleAmmoExtended.UMG_VehicleAmmoExtended_C.Construct");

	UUMG_VehicleAmmoExtended_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleAmmoExtended.UMG_VehicleAmmoExtended_C.ExecuteUbergraph_UMG_VehicleAmmoExtended
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_VehicleAmmoExtended_C::ExecuteUbergraph_UMG_VehicleAmmoExtended(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleAmmoExtended.UMG_VehicleAmmoExtended_C.ExecuteUbergraph_UMG_VehicleAmmoExtended");

	UUMG_VehicleAmmoExtended_C_ExecuteUbergraph_UMG_VehicleAmmoExtended_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
