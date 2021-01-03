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

// Function BP_MapMarker_Command_SLRequest.BP_MapMarker_Command_SLRequest_C.SetSquad
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MapMarker_Command_SLRequest_C::SetSquad(int Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Command_SLRequest.BP_MapMarker_Command_SLRequest_C.SetSquad");

	ABP_MapMarker_Command_SLRequest_C_SetSquad_Params params;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Command_SLRequest.BP_MapMarker_Command_SLRequest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MapMarker_Command_SLRequest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Command_SLRequest.BP_MapMarker_Command_SLRequest_C.ReceiveBeginPlay");

	ABP_MapMarker_Command_SLRequest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Command_SLRequest.BP_MapMarker_Command_SLRequest_C.Owner SL Notify
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_MapMarker_Command_SLRequest_C::Owner_SL_Notify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Command_SLRequest.BP_MapMarker_Command_SLRequest_C.Owner SL Notify");

	ABP_MapMarker_Command_SLRequest_C_Owner_SL_Notify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Command_SLRequest.BP_MapMarker_Command_SLRequest_C.ExecuteUbergraph_BP_MapMarker_Command_SLRequest
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MapMarker_Command_SLRequest_C::ExecuteUbergraph_BP_MapMarker_Command_SLRequest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Command_SLRequest.BP_MapMarker_Command_SLRequest_C.ExecuteUbergraph_BP_MapMarker_Command_SLRequest");

	ABP_MapMarker_Command_SLRequest_C_ExecuteUbergraph_BP_MapMarker_Command_SLRequest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
