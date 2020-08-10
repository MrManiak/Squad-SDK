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

// Function BP_MapWidgetRepairStation.BP_MapWidgetRepairStation_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetRepairStation_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRepairStation.BP_MapWidgetRepairStation_C.OnScaleChanged");

	UBP_MapWidgetRepairStation_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRepairStation.BP_MapWidgetRepairStation_C.ExecuteUbergraph_BP_MapWidgetRepairStation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetRepairStation_C::ExecuteUbergraph_BP_MapWidgetRepairStation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRepairStation.BP_MapWidgetRepairStation_C.ExecuteUbergraph_BP_MapWidgetRepairStation");

	UBP_MapWidgetRepairStation_C_ExecuteUbergraph_BP_MapWidgetRepairStation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
