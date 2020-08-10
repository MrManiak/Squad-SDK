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

// Function BP_Tooltip_RallyPoint.BP_Tooltip_RallyPoint_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UBP_Tooltip_RallyPoint_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tooltip_RallyPoint.BP_Tooltip_RallyPoint_C.GetText_1");

	UBP_Tooltip_RallyPoint_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Tooltip_RallyPoint.BP_Tooltip_RallyPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_Tooltip_RallyPoint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tooltip_RallyPoint.BP_Tooltip_RallyPoint_C.Construct");

	UBP_Tooltip_RallyPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Tooltip_RallyPoint.BP_Tooltip_RallyPoint_C.ExecuteUbergraph_BP_Tooltip_RallyPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Tooltip_RallyPoint_C::ExecuteUbergraph_BP_Tooltip_RallyPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tooltip_RallyPoint.BP_Tooltip_RallyPoint_C.ExecuteUbergraph_BP_Tooltip_RallyPoint");

	UBP_Tooltip_RallyPoint_C_ExecuteUbergraph_BP_Tooltip_RallyPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
