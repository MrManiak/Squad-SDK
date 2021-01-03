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

// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.Update Size
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapMarker_FOB_C::Update_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.Update Size");

	UBP_MapMarker_FOB_C_Update_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.Update Radius Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapMarker_FOB_C::Update_Radius_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.Update Radius Visibility");

	UBP_MapMarker_FOB_C_Update_Radius_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapMarker_FOB_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.Construct");

	UBP_MapMarker_FOB_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ScaleValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapMarker_FOB_C::OnScaleChanged(float ScaleValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnScaleChanged");

	UBP_MapMarker_FOB_C_OnScaleChanged_Params params;
	params.ScaleValue = ScaleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnMapZoom
// (BlueprintCallable, BlueprintEvent)
void UBP_MapMarker_FOB_C::OnMapZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnMapZoom");

	UBP_MapMarker_FOB_C_OnMapZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnMapCoreChanged
// (BlueprintCallable, BlueprintEvent)
void UBP_MapMarker_FOB_C::OnMapCoreChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnMapCoreChanged");

	UBP_MapMarker_FOB_C_OnMapCoreChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnHasFadedChanged
// (Event, Public, BlueprintEvent)
void UBP_MapMarker_FOB_C::OnHasFadedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnHasFadedChanged");

	UBP_MapMarker_FOB_C_OnHasFadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.ExecuteUbergraph_BP_MapMarker_FOB
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapMarker_FOB_C::ExecuteUbergraph_BP_MapMarker_FOB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.ExecuteUbergraph_BP_MapMarker_FOB");

	UBP_MapMarker_FOB_C_ExecuteUbergraph_BP_MapMarker_FOB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
