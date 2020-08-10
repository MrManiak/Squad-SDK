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

// Function BP_RequestPickUp_Marker.BP_RequestPickUp_Marker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_RequestPickUp_Marker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RequestPickUp_Marker.BP_RequestPickUp_Marker_C.ReceiveBeginPlay");

	ABP_RequestPickUp_Marker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RequestPickUp_Marker.BP_RequestPickUp_Marker_C.ExecuteUbergraph_BP_RequestPickUp_Marker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RequestPickUp_Marker_C::ExecuteUbergraph_BP_RequestPickUp_Marker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RequestPickUp_Marker.BP_RequestPickUp_Marker_C.ExecuteUbergraph_BP_RequestPickUp_Marker");

	ABP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
