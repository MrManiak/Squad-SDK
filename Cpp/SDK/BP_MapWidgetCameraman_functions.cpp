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

// Function BP_MapWidgetCameraman.BP_MapWidgetCameraman_C.OnTintValueChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetCameraman_C::OnTintValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCameraman.BP_MapWidgetCameraman_C.OnTintValueChanged");

	UBP_MapWidgetCameraman_C_OnTintValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCameraman.BP_MapWidgetCameraman_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetCameraman_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCameraman.BP_MapWidgetCameraman_C.OnScaleChanged");

	UBP_MapWidgetCameraman_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetCameraman.BP_MapWidgetCameraman_C.ExecuteUbergraph_BP_MapWidgetCameraman
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetCameraman_C::ExecuteUbergraph_BP_MapWidgetCameraman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetCameraman.BP_MapWidgetCameraman_C.ExecuteUbergraph_BP_MapWidgetCameraman");

	UBP_MapWidgetCameraman_C_ExecuteUbergraph_BP_MapWidgetCameraman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
