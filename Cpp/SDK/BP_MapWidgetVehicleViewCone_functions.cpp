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

// Function BP_MapWidgetVehicleViewCone.BP_MapWidgetVehicleViewCone_C.OnCameraRotationYawChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetVehicleViewCone_C::OnCameraRotationYawChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicleViewCone.BP_MapWidgetVehicleViewCone_C.OnCameraRotationYawChanged");

	UBP_MapWidgetVehicleViewCone_C_OnCameraRotationYawChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicleViewCone.BP_MapWidgetVehicleViewCone_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetVehicleViewCone_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicleViewCone.BP_MapWidgetVehicleViewCone_C.OnScaleChanged");

	UBP_MapWidgetVehicleViewCone_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetVehicleViewCone.BP_MapWidgetVehicleViewCone_C.ExecuteUbergraph_BP_MapWidgetVehicleViewCone
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetVehicleViewCone_C::ExecuteUbergraph_BP_MapWidgetVehicleViewCone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetVehicleViewCone.BP_MapWidgetVehicleViewCone_C.ExecuteUbergraph_BP_MapWidgetVehicleViewCone");

	UBP_MapWidgetVehicleViewCone_C_ExecuteUbergraph_BP_MapWidgetVehicleViewCone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
