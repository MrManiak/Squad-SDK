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

// Function W_SQMapScaleBars.W_SQMapScaleBars_C.InitializeScaleBars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InitialZoom                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                ZoomLayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapScaleBars_C::InitializeScaleBars(float InitialZoom, class USizeBox* ZoomLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapScaleBars.W_SQMapScaleBars_C.InitializeScaleBars");

	UW_SQMapScaleBars_C_InitializeScaleBars_Params params;
	params.InitialZoom = InitialZoom;
	params.ZoomLayer = ZoomLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapScaleBars.W_SQMapScaleBars_C.UpdateZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ZoomAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapScaleBars_C::UpdateZoom(float ZoomAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapScaleBars.W_SQMapScaleBars_C.UpdateZoom");

	UW_SQMapScaleBars_C_UpdateZoom_Params params;
	params.ZoomAmount = ZoomAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapScaleBars.W_SQMapScaleBars_C.ExecuteUbergraph_W_SQMapScaleBars
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapScaleBars_C::ExecuteUbergraph_W_SQMapScaleBars(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapScaleBars.W_SQMapScaleBars_C.ExecuteUbergraph_W_SQMapScaleBars");

	UW_SQMapScaleBars_C_ExecuteUbergraph_W_SQMapScaleBars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
