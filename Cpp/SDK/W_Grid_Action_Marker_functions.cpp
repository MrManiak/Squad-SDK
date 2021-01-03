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

// Function W_Grid_Action_Marker.W_Grid_Action_Marker_C.Action Button Pressed
// (BlueprintCallable, BlueprintEvent)
void UW_Grid_Action_Marker_C::Action_Button_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Marker.W_Grid_Action_Marker_C.Action Button Pressed");

	UW_Grid_Action_Marker_C_Action_Button_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_Marker.W_Grid_Action_Marker_C.ExecuteUbergraph_W_Grid_Action_Marker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Action_Marker_C::ExecuteUbergraph_W_Grid_Action_Marker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Marker.W_Grid_Action_Marker_C.ExecuteUbergraph_W_Grid_Action_Marker");

	UW_Grid_Action_Marker_C_ExecuteUbergraph_W_Grid_Action_Marker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
