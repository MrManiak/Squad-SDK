#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.IsLoser
struct UGraphMercyBleedComponent_C_IsLoser_Params
{
	int                                                CaptureZones;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.FindLosers
struct UGraphMercyBleedComponent_C_FindLosers_Params
{
};

// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.CountCaptureZonesByTeam
struct UGraphMercyBleedComponent_C_CountCaptureZonesByTeam_Params
{
};

// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.TickBleed
struct UGraphMercyBleedComponent_C_TickBleed_Params
{
};

// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ReceiveBeginPlay
struct UGraphMercyBleedComponent_C_ReceiveBeginPlay_Params
{
};

// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.OnLatticeUpdated_Event_1
struct UGraphMercyBleedComponent_C_OnLatticeUpdated_Event_1_Params
{
};

// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ReceiveTick
struct UGraphMercyBleedComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ExecuteUbergraph_GraphMercyBleedComponent
struct UGraphMercyBleedComponent_C_ExecuteUbergraph_GraphMercyBleedComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
