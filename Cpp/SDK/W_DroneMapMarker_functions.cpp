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

// Function W_DroneMapMarker.W_DroneMapMarker_C.OnIsInSelfSquad
// (Event, Protected, BlueprintEvent)
void UW_DroneMapMarker_C::OnIsInSelfSquad()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneMapMarker.W_DroneMapMarker_C.OnIsInSelfSquad");

	UW_DroneMapMarker_C_OnIsInSelfSquad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DroneMapMarker.W_DroneMapMarker_C.Update Colors
// (BlueprintCallable, BlueprintEvent)
void UW_DroneMapMarker_C::Update_Colors()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneMapMarker.W_DroneMapMarker_C.Update Colors");

	UW_DroneMapMarker_C_Update_Colors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DroneMapMarker.W_DroneMapMarker_C.OnIsOwnedBySelfChanged
// (Event, Protected, BlueprintEvent)
void UW_DroneMapMarker_C::OnIsOwnedBySelfChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneMapMarker.W_DroneMapMarker_C.OnIsOwnedBySelfChanged");

	UW_DroneMapMarker_C_OnIsOwnedBySelfChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DroneMapMarker.W_DroneMapMarker_C.ExecuteUbergraph_W_DroneMapMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DroneMapMarker_C::ExecuteUbergraph_W_DroneMapMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneMapMarker.W_DroneMapMarker_C.ExecuteUbergraph_W_DroneMapMarker");

	UW_DroneMapMarker_C_ExecuteUbergraph_W_DroneMapMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
