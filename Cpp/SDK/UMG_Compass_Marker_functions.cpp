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

// Function UMG_Compass_Marker.UMG_Compass_Marker_C.Set Info
// (BlueprintCallable, BlueprintEvent)
void UUMG_Compass_Marker_C::Set_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass_Marker.UMG_Compass_Marker_C.Set Info");

	UUMG_Compass_Marker_C_Set_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Compass_Marker.UMG_Compass_Marker_C.BPInit
// (Event, Public, BlueprintEvent)
void UUMG_Compass_Marker_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass_Marker.UMG_Compass_Marker_C.BPInit");

	UUMG_Compass_Marker_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Compass_Marker.UMG_Compass_Marker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_Compass_Marker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass_Marker.UMG_Compass_Marker_C.Construct");

	UUMG_Compass_Marker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Compass_Marker.UMG_Compass_Marker_C.ExecuteUbergraph_UMG_Compass_Marker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_Compass_Marker_C::ExecuteUbergraph_UMG_Compass_Marker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass_Marker.UMG_Compass_Marker_C.ExecuteUbergraph_UMG_Compass_Marker");

	UUMG_Compass_Marker_C_ExecuteUbergraph_UMG_Compass_Marker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
