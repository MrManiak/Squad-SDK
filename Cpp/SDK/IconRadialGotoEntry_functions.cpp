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

// Function IconRadialGotoEntry.IconRadialGotoEntry_C.BPInit
// (Event, Public, BlueprintEvent)
void UIconRadialGotoEntry_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRadialGotoEntry.IconRadialGotoEntry_C.BPInit");

	UIconRadialGotoEntry_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IconRadialGotoEntry.IconRadialGotoEntry_C.UpdateActiveState
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UIconRadialGotoEntry_C::UpdateActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRadialGotoEntry.IconRadialGotoEntry_C.UpdateActiveState");

	UIconRadialGotoEntry_C_UpdateActiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IconRadialGotoEntry.IconRadialGotoEntry_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UIconRadialGotoEntry_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRadialGotoEntry.IconRadialGotoEntry_C.OnHoverBegin");

	UIconRadialGotoEntry_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IconRadialGotoEntry.IconRadialGotoEntry_C.ExecuteUbergraph_IconRadialGotoEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIconRadialGotoEntry_C::ExecuteUbergraph_IconRadialGotoEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRadialGotoEntry.IconRadialGotoEntry_C.ExecuteUbergraph_IconRadialGotoEntry");

	UIconRadialGotoEntry_C_ExecuteUbergraph_IconRadialGotoEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
