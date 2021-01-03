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

// Function BP_MapMarker_Command_Request.BP_MapMarker_Command_Request_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MapMarker_Command_Request_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Command_Request.BP_MapMarker_Command_Request_C.ReceiveBeginPlay");

	ABP_MapMarker_Command_Request_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Command_Request.BP_MapMarker_Command_Request_C.Owner Accept Deny
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accepted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MapMarker_Command_Request_C::Owner_Accept_Deny(bool Accepted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Command_Request.BP_MapMarker_Command_Request_C.Owner Accept Deny");

	ABP_MapMarker_Command_Request_C_Owner_Accept_Deny_Params params;
	params.Accepted = Accepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Command_Request.BP_MapMarker_Command_Request_C.ExecuteUbergraph_BP_MapMarker_Command_Request
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MapMarker_Command_Request_C::ExecuteUbergraph_BP_MapMarker_Command_Request(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Command_Request.BP_MapMarker_Command_Request_C.ExecuteUbergraph_BP_MapMarker_Command_Request");

	ABP_MapMarker_Command_Request_C_ExecuteUbergraph_BP_MapMarker_Command_Request_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
