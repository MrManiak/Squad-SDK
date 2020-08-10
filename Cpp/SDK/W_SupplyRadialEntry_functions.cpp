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

// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.Is Faded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Faded                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SupplyRadialEntry_C::Is_Faded(bool* Faded)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.Is Faded");

	UW_SupplyRadialEntry_C_Is_Faded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Faded != nullptr)
		*Faded = params.Faded;

}


// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.Is Soldier Alive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Alive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SupplyRadialEntry_C::Is_Soldier_Alive(bool* Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.Is Soldier Alive");

	UW_SupplyRadialEntry_C_Is_Soldier_Alive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;

}


// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.Validate Resources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_SupplyRadialEntry_C::Validate_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.Validate Resources");

	UW_SupplyRadialEntry_C_Validate_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.UpdateActiveState
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UW_SupplyRadialEntry_C::UpdateActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.UpdateActiveState");

	UW_SupplyRadialEntry_C_UpdateActiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.OnHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UW_SupplyRadialEntry_C::OnHoverEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.OnHoverEnd");

	UW_SupplyRadialEntry_C_OnHoverEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.ExecuteUbergraph_W_SupplyRadialEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SupplyRadialEntry_C::ExecuteUbergraph_W_SupplyRadialEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.ExecuteUbergraph_W_SupplyRadialEntry");

	UW_SupplyRadialEntry_C_ExecuteUbergraph_W_SupplyRadialEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
