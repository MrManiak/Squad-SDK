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

// Function BP_MapWidgetMapMarkerPing.BP_MapWidgetMapMarkerPing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetMapMarkerPing_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerPing.BP_MapWidgetMapMarkerPing_C.Construct");

	UBP_MapWidgetMapMarkerPing_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerPing.BP_MapWidgetMapMarkerPing_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarkerPing_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerPing.BP_MapWidgetMapMarkerPing_C.OnScaleChanged");

	UBP_MapWidgetMapMarkerPing_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerPing.BP_MapWidgetMapMarkerPing_C.ExecuteUbergraph_BP_MapWidgetMapMarkerPing
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarkerPing_C::ExecuteUbergraph_BP_MapWidgetMapMarkerPing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerPing.BP_MapWidgetMapMarkerPing_C.ExecuteUbergraph_BP_MapWidgetMapMarkerPing");

	UBP_MapWidgetMapMarkerPing_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
