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

// Function BP_WaypointMapMarker.BP_WaypointMapMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_WaypointMapMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointMapMarker.BP_WaypointMapMarker_C.ReceiveBeginPlay");

	ABP_WaypointMapMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaypointMapMarker.BP_WaypointMapMarker_C.ExecuteUbergraph_BP_WaypointMapMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WaypointMapMarker_C::ExecuteUbergraph_BP_WaypointMapMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointMapMarker.BP_WaypointMapMarker_C.ExecuteUbergraph_BP_WaypointMapMarker");

	ABP_WaypointMapMarker_C_ExecuteUbergraph_BP_WaypointMapMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
