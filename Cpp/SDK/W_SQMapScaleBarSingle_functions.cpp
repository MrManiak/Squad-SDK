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

// Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.BarSizeInPixels
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OutWidth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapScaleBarSingle_C::BarSizeInPixels(float* OutWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.BarSizeInPixels");

	UW_SQMapScaleBarSingle_C_BarSizeInPixels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWidth != nullptr)
		*OutWidth = params.OutWidth;

}


// Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SQMapScaleBarSingle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.Construct");

	UW_SQMapScaleBarSingle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.UpdateZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ZoomAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapScaleBarSingle_C::UpdateZoom(float ZoomAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.UpdateZoom");

	UW_SQMapScaleBarSingle_C_UpdateZoom_Params params;
	params.ZoomAmount = ZoomAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.InitializeScaleBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InitialZoomAmount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                ZoomLayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapScaleBarSingle_C::InitializeScaleBar(float InitialZoomAmount, class USizeBox* ZoomLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.InitializeScaleBar");

	UW_SQMapScaleBarSingle_C_InitializeScaleBar_Params params;
	params.InitialZoomAmount = InitialZoomAmount;
	params.ZoomLayer = ZoomLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.ExecuteUbergraph_W_SQMapScaleBarSingle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapScaleBarSingle_C::ExecuteUbergraph_W_SQMapScaleBarSingle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.ExecuteUbergraph_W_SQMapScaleBarSingle");

	UW_SQMapScaleBarSingle_C_ExecuteUbergraph_W_SQMapScaleBarSingle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
