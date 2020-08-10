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

// Function BP_Marker_Widget_Objective.BP_Marker_Widget_Objective_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UBP_Marker_Widget_Objective_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Marker_Widget_Objective.BP_Marker_Widget_Objective_C.GetText_1");

	UBP_Marker_Widget_Objective_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Marker_Widget_Objective.BP_Marker_Widget_Objective_C.Get_MarkerImage_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UBP_Marker_Widget_Objective_C::Get_MarkerImage_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Marker_Widget_Objective.BP_Marker_Widget_Objective_C.Get_MarkerImage_Brush_1");

	UBP_Marker_Widget_Objective_C_Get_MarkerImage_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Marker_Widget_Objective.BP_Marker_Widget_Objective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_Marker_Widget_Objective_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Marker_Widget_Objective.BP_Marker_Widget_Objective_C.Construct");

	UBP_Marker_Widget_Objective_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Marker_Widget_Objective.BP_Marker_Widget_Objective_C.ExecuteUbergraph_BP_Marker_Widget_Objective
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Marker_Widget_Objective_C::ExecuteUbergraph_BP_Marker_Widget_Objective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Marker_Widget_Objective.BP_Marker_Widget_Objective_C.ExecuteUbergraph_BP_Marker_Widget_Objective");

	UBP_Marker_Widget_Objective_C_ExecuteUbergraph_BP_Marker_Widget_Objective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
