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

// Function RoleChangeRadialEntry.RoleChangeRadialEntry_C.BPInit
// (Event, Public, BlueprintEvent)
void URoleChangeRadialEntry_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoleChangeRadialEntry.RoleChangeRadialEntry_C.BPInit");

	URoleChangeRadialEntry_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RoleChangeRadialEntry.RoleChangeRadialEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URoleChangeRadialEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoleChangeRadialEntry.RoleChangeRadialEntry_C.Construct");

	URoleChangeRadialEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RoleChangeRadialEntry.RoleChangeRadialEntry_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URoleChangeRadialEntry_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoleChangeRadialEntry.RoleChangeRadialEntry_C.OnHoverBegin");

	URoleChangeRadialEntry_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RoleChangeRadialEntry.RoleChangeRadialEntry_C.ExecuteUbergraph_RoleChangeRadialEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URoleChangeRadialEntry_C::ExecuteUbergraph_RoleChangeRadialEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoleChangeRadialEntry.RoleChangeRadialEntry_C.ExecuteUbergraph_RoleChangeRadialEntry");

	URoleChangeRadialEntry_C_ExecuteUbergraph_RoleChangeRadialEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
