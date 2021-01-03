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

// Function W_CameraWidget.W_CameraWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CameraWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CameraWidget.W_CameraWidget_C.Construct");

	UW_CameraWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CameraWidget.W_CameraWidget_C.ExecuteUbergraph_W_CameraWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CameraWidget_C::ExecuteUbergraph_W_CameraWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CameraWidget.W_CameraWidget_C.ExecuteUbergraph_W_CameraWidget");

	UW_CameraWidget_C_ExecuteUbergraph_W_CameraWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
