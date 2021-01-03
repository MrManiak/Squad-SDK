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

// Function RadialTextEntry.RadialTextEntry_C.BPInit
// (Event, Public, BlueprintEvent)
void URadialTextEntry_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialTextEntry.RadialTextEntry_C.BPInit");

	URadialTextEntry_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialTextEntry.RadialTextEntry_C.UpdateActiveState
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URadialTextEntry_C::UpdateActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialTextEntry.RadialTextEntry_C.UpdateActiveState");

	URadialTextEntry_C_UpdateActiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialTextEntry.RadialTextEntry_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URadialTextEntry_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialTextEntry.RadialTextEntry_C.OnHoverBegin");

	URadialTextEntry_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialTextEntry.RadialTextEntry_C.ExecuteUbergraph_RadialTextEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialTextEntry_C::ExecuteUbergraph_RadialTextEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialTextEntry.RadialTextEntry_C.ExecuteUbergraph_RadialTextEntry");

	URadialTextEntry_C_ExecuteUbergraph_RadialTextEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
