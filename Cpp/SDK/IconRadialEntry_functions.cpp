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

// Function IconRadialEntry.IconRadialEntry_C.BPInit
// (Event, Public, BlueprintEvent)
void UIconRadialEntry_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRadialEntry.IconRadialEntry_C.BPInit");

	UIconRadialEntry_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IconRadialEntry.IconRadialEntry_C.UpdateActiveState
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UIconRadialEntry_C::UpdateActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRadialEntry.IconRadialEntry_C.UpdateActiveState");

	UIconRadialEntry_C_UpdateActiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IconRadialEntry.IconRadialEntry_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UIconRadialEntry_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRadialEntry.IconRadialEntry_C.OnHoverBegin");

	UIconRadialEntry_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IconRadialEntry.IconRadialEntry_C.ExecuteUbergraph_IconRadialEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIconRadialEntry_C::ExecuteUbergraph_IconRadialEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRadialEntry.IconRadialEntry_C.ExecuteUbergraph_IconRadialEntry");

	UIconRadialEntry_C_ExecuteUbergraph_IconRadialEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
