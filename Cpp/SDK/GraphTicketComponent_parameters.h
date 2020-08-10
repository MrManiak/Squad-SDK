#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function GraphTicketComponent.GraphTicketComponent_C.ReceiveBeginPlay
struct UGraphTicketComponent_C_ReceiveBeginPlay_Params
{
};

// Function GraphTicketComponent.GraphTicketComponent_C.OnLatticeUpdated_Event_1
struct UGraphTicketComponent_C_OnLatticeUpdated_Event_1_Params
{
};

// Function GraphTicketComponent.GraphTicketComponent_C.CaptureStateChangeEvent_Event_1
struct UGraphTicketComponent_C_CaptureStateChangeEvent_Event_1_Params
{
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GraphTicketComponent.GraphTicketComponent_C.ExecuteUbergraph_GraphTicketComponent
struct UGraphTicketComponent_C_ExecuteUbergraph_GraphTicketComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
