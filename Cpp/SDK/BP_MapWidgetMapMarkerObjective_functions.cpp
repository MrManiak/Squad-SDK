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

// Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.Get Owning Player Map Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USQMapWidgetSoldier*     Local_Player_Soldier_Widget    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarkerObjective_C::Get_Owning_Player_Map_Widget(class USQMapWidgetSoldier** Local_Player_Soldier_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.Get Owning Player Map Widget");

	UBP_MapWidgetMapMarkerObjective_C_Get_Owning_Player_Map_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Local_Player_Soldier_Widget != nullptr)
		*Local_Player_Soldier_Widget = params.Local_Player_Soldier_Widget;

}


// Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetMapMarkerObjective_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.Construct");

	UBP_MapWidgetMapMarkerObjective_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.OnTextureChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetMapMarkerObjective_C::OnTextureChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.OnTextureChanged");

	UBP_MapWidgetMapMarkerObjective_C_OnTextureChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.OnTintChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetMapMarkerObjective_C::OnTintChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.OnTintChanged");

	UBP_MapWidgetMapMarkerObjective_C_OnTintChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarkerObjective_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.OnScaleChanged");

	UBP_MapWidgetMapMarkerObjective_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.ExecuteUbergraph_BP_MapWidgetMapMarkerObjective
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarkerObjective_C::ExecuteUbergraph_BP_MapWidgetMapMarkerObjective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C.ExecuteUbergraph_BP_MapWidgetMapMarkerObjective");

	UBP_MapWidgetMapMarkerObjective_C_ExecuteUbergraph_BP_MapWidgetMapMarkerObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
