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

// Function MarkerRadialEntry.MarkerRadialEntry_C.BPInit
// (Event, Public, BlueprintEvent)
void UMarkerRadialEntry_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerRadialEntry.MarkerRadialEntry_C.BPInit");

	UMarkerRadialEntry_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MarkerRadialEntry.MarkerRadialEntry_C.UpdateActiveState
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UMarkerRadialEntry_C::UpdateActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerRadialEntry.MarkerRadialEntry_C.UpdateActiveState");

	UMarkerRadialEntry_C_UpdateActiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MarkerRadialEntry.MarkerRadialEntry_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UMarkerRadialEntry_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerRadialEntry.MarkerRadialEntry_C.OnHoverBegin");

	UMarkerRadialEntry_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MarkerRadialEntry.MarkerRadialEntry_C.ExecuteUbergraph_MarkerRadialEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMarkerRadialEntry_C::ExecuteUbergraph_MarkerRadialEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerRadialEntry.MarkerRadialEntry_C.ExecuteUbergraph_MarkerRadialEntry");

	UMarkerRadialEntry_C_ExecuteUbergraph_MarkerRadialEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
