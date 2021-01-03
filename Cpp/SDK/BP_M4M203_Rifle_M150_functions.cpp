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

// Function BP_M4M203_Rifle_M150.BP_M4M203_Rifle_M150_C.BlueprintOnZoom
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewZoom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_M4M203_Rifle_M150_C::BlueprintOnZoom(bool bNewZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M4M203_Rifle_M150.BP_M4M203_Rifle_M150_C.BlueprintOnZoom");

	ABP_M4M203_Rifle_M150_C_BlueprintOnZoom_Params params;
	params.bNewZoom = bNewZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_M4M203_Rifle_M150.BP_M4M203_Rifle_M150_C.ExecuteUbergraph_BP_M4M203_Rifle_M150
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_M4M203_Rifle_M150_C::ExecuteUbergraph_BP_M4M203_Rifle_M150(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M4M203_Rifle_M150.BP_M4M203_Rifle_M150_C.ExecuteUbergraph_BP_M4M203_Rifle_M150");

	ABP_M4M203_Rifle_M150_C_ExecuteUbergraph_BP_M4M203_Rifle_M150_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
