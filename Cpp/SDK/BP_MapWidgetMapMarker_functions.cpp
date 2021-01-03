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

// Function BP_MapWidgetMapMarker.BP_MapWidgetMapMarker_C.OnTextureChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetMapMarker_C::OnTextureChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker.BP_MapWidgetMapMarker_C.OnTextureChanged");

	UBP_MapWidgetMapMarker_C_OnTextureChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker.BP_MapWidgetMapMarker_C.OnTintChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetMapMarker_C::OnTintChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker.BP_MapWidgetMapMarker_C.OnTintChanged");

	UBP_MapWidgetMapMarker_C_OnTintChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker.BP_MapWidgetMapMarker_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarker_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker.BP_MapWidgetMapMarker_C.OnScaleChanged");

	UBP_MapWidgetMapMarker_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker.BP_MapWidgetMapMarker_C.ExecuteUbergraph_BP_MapWidgetMapMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarker_C::ExecuteUbergraph_BP_MapWidgetMapMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker.BP_MapWidgetMapMarker_C.ExecuteUbergraph_BP_MapWidgetMapMarker");

	UBP_MapWidgetMapMarker_C_ExecuteUbergraph_BP_MapWidgetMapMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
