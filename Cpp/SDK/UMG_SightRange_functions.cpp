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

// Function UMG_SightRange.UMG_SightRange_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_SightRange_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SightRange.UMG_SightRange_C.Construct");

	UUMG_SightRange_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SightRange.UMG_SightRange_C.UpdateState
// (BlueprintCallable, BlueprintEvent)
void UUMG_SightRange_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SightRange.UMG_SightRange_C.UpdateState");

	UUMG_SightRange_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SightRange.UMG_SightRange_C.BPInit
// (Event, Public, BlueprintEvent)
void UUMG_SightRange_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SightRange.UMG_SightRange_C.BPInit");

	UUMG_SightRange_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SightRange.UMG_SightRange_C.ExecuteUbergraph_UMG_SightRange
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_SightRange_C::ExecuteUbergraph_UMG_SightRange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SightRange.UMG_SightRange_C.ExecuteUbergraph_UMG_SightRange");

	UUMG_SightRange_C_ExecuteUbergraph_UMG_SightRange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
