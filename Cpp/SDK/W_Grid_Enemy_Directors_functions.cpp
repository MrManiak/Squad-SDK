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

// Function W_Grid_Enemy_Directors.W_Grid_Enemy_Directors_C.Grid Button Pressed
// (BlueprintCallable, BlueprintEvent)
void UW_Grid_Enemy_Directors_C::Grid_Button_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Enemy_Directors.W_Grid_Enemy_Directors_C.Grid Button Pressed");

	UW_Grid_Enemy_Directors_C_Grid_Button_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Enemy_Directors.W_Grid_Enemy_Directors_C.ExecuteUbergraph_W_Grid_Enemy_Directors
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Enemy_Directors_C::ExecuteUbergraph_W_Grid_Enemy_Directors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Enemy_Directors.W_Grid_Enemy_Directors_C.ExecuteUbergraph_W_Grid_Enemy_Directors");

	UW_Grid_Enemy_Directors_C_ExecuteUbergraph_W_Grid_Enemy_Directors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
