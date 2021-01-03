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

// Function BP_MapWidgetDeployableExplosive.BP_MapWidgetDeployableExplosive_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetDeployableExplosive_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetDeployableExplosive.BP_MapWidgetDeployableExplosive_C.OnScaleChanged");

	UBP_MapWidgetDeployableExplosive_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetDeployableExplosive.BP_MapWidgetDeployableExplosive_C.OnExplosiveTypeChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetDeployableExplosive_C::OnExplosiveTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetDeployableExplosive.BP_MapWidgetDeployableExplosive_C.OnExplosiveTypeChanged");

	UBP_MapWidgetDeployableExplosive_C_OnExplosiveTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetDeployableExplosive.BP_MapWidgetDeployableExplosive_C.ExecuteUbergraph_BP_MapWidgetDeployableExplosive
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetDeployableExplosive_C::ExecuteUbergraph_BP_MapWidgetDeployableExplosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetDeployableExplosive.BP_MapWidgetDeployableExplosive_C.ExecuteUbergraph_BP_MapWidgetDeployableExplosive");

	UBP_MapWidgetDeployableExplosive_C_ExecuteUbergraph_BP_MapWidgetDeployableExplosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
