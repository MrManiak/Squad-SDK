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

// Function W_OutOfBounds.W_OutOfBounds_C.Show Out of Bounds Widget
// (BlueprintCallable, BlueprintEvent)
void UW_OutOfBounds_C::Show_Out_of_Bounds_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_OutOfBounds.W_OutOfBounds_C.Show Out of Bounds Widget");

	UW_OutOfBounds_C_Show_Out_of_Bounds_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_OutOfBounds.W_OutOfBounds_C.Hide Out of Bounds Widget
// (BlueprintCallable, BlueprintEvent)
void UW_OutOfBounds_C::Hide_Out_of_Bounds_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_OutOfBounds.W_OutOfBounds_C.Hide Out of Bounds Widget");

	UW_OutOfBounds_C_Hide_Out_of_Bounds_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_OutOfBounds.W_OutOfBounds_C.ExecuteUbergraph_W_OutOfBounds
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_OutOfBounds_C::ExecuteUbergraph_W_OutOfBounds(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_OutOfBounds.W_OutOfBounds_C.ExecuteUbergraph_W_OutOfBounds");

	UW_OutOfBounds_C_ExecuteUbergraph_W_OutOfBounds_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
