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

// Function W_Grid_Action_DirectorCO.W_Grid_Action_DirectorCO_C.Action Button Pressed
// (BlueprintCallable, BlueprintEvent)
void UW_Grid_Action_DirectorCO_C::Action_Button_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_DirectorCO.W_Grid_Action_DirectorCO_C.Action Button Pressed");

	UW_Grid_Action_DirectorCO_C_Action_Button_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_DirectorCO.W_Grid_Action_DirectorCO_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Grid_Action_DirectorCO_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_DirectorCO.W_Grid_Action_DirectorCO_C.Construct");

	UW_Grid_Action_DirectorCO_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_DirectorCO.W_Grid_Action_DirectorCO_C.ExecuteUbergraph_W_Grid_Action_DirectorCO
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Action_DirectorCO_C::ExecuteUbergraph_W_Grid_Action_DirectorCO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_DirectorCO.W_Grid_Action_DirectorCO_C.ExecuteUbergraph_W_Grid_Action_DirectorCO");

	UW_Grid_Action_DirectorCO_C_ExecuteUbergraph_W_Grid_Action_DirectorCO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
