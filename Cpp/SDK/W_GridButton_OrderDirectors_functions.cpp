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

// Function W_GridButton_OrderDirectors.W_GridButton_OrderDirectors_C.Grid Button Pressed
// (BlueprintCallable, BlueprintEvent)
void UW_GridButton_OrderDirectors_C::Grid_Button_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_OrderDirectors.W_GridButton_OrderDirectors_C.Grid Button Pressed");

	UW_GridButton_OrderDirectors_C_Grid_Button_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton_OrderDirectors.W_GridButton_OrderDirectors_C.ExecuteUbergraph_W_GridButton_OrderDirectors
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridButton_OrderDirectors_C::ExecuteUbergraph_W_GridButton_OrderDirectors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_OrderDirectors.W_GridButton_OrderDirectors_C.ExecuteUbergraph_W_GridButton_OrderDirectors");

	UW_GridButton_OrderDirectors_C_ExecuteUbergraph_W_GridButton_OrderDirectors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
