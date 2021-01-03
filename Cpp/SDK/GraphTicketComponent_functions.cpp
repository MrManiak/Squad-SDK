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

// Function GraphTicketComponent.GraphTicketComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UGraphTicketComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphTicketComponent.GraphTicketComponent_C.ReceiveBeginPlay");

	UGraphTicketComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphTicketComponent.GraphTicketComponent_C.OnLatticeUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)
void UGraphTicketComponent_C::OnLatticeUpdated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphTicketComponent.GraphTicketComponent_C.OnLatticeUpdated_Event_1");

	UGraphTicketComponent_C_OnLatticeUpdated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphTicketComponent.GraphTicketComponent_C.CaptureStateChangeEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCaptureZoneComponent* CaptureZone                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphTicketComponent_C::CaptureStateChangeEvent_Event_1(class USQCaptureZoneComponent* CaptureZone, unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphTicketComponent.GraphTicketComponent_C.CaptureStateChangeEvent_Event_1");

	UGraphTicketComponent_C_CaptureStateChangeEvent_Event_1_Params params;
	params.CaptureZone = CaptureZone;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphTicketComponent.GraphTicketComponent_C.ExecuteUbergraph_GraphTicketComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphTicketComponent_C::ExecuteUbergraph_GraphTicketComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphTicketComponent.GraphTicketComponent_C.ExecuteUbergraph_GraphTicketComponent");

	UGraphTicketComponent_C_ExecuteUbergraph_GraphTicketComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
