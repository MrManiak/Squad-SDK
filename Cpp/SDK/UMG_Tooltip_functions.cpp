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

// Function UMG_Tooltip.UMG_Tooltip_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUMG_Tooltip_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Tooltip.UMG_Tooltip_C.GetText_1");

	UUMG_Tooltip_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_Tooltip.UMG_Tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_Tooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Tooltip.UMG_Tooltip_C.Construct");

	UUMG_Tooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Tooltip.UMG_Tooltip_C.ExecuteUbergraph_UMG_Tooltip
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_Tooltip_C::ExecuteUbergraph_UMG_Tooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Tooltip.UMG_Tooltip_C.ExecuteUbergraph_UMG_Tooltip");

	UUMG_Tooltip_C_ExecuteUbergraph_UMG_Tooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
