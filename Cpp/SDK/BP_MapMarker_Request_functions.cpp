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

// Function BP_MapMarker_Request.BP_MapMarker_Request_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapMarker_Request_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Request.BP_MapMarker_Request_C.Construct");

	UBP_MapMarker_Request_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Request.BP_MapMarker_Request_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ScaleValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapMarker_Request_C::OnScaleChanged(float ScaleValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Request.BP_MapMarker_Request_C.OnScaleChanged");

	UBP_MapMarker_Request_C_OnScaleChanged_Params params;
	params.ScaleValue = ScaleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Request.BP_MapMarker_Request_C.OnHasFadedChanged
// (Event, Public, BlueprintEvent)
void UBP_MapMarker_Request_C::OnHasFadedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Request.BP_MapMarker_Request_C.OnHasFadedChanged");

	UBP_MapMarker_Request_C_OnHasFadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Request.BP_MapMarker_Request_C.ExecuteUbergraph_BP_MapMarker_Request
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapMarker_Request_C::ExecuteUbergraph_BP_MapMarker_Request(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Request.BP_MapMarker_Request_C.ExecuteUbergraph_BP_MapMarker_Request");

	UBP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
