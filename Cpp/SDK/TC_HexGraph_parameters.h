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

// Function TC_HexGraph.TC_HexGraph_C.Get Valid Anchor Hexes
struct ATC_HexGraph_C_Get_Valid_Anchor_Hexes_Params
{
	TArray<class ATC_HexZone_C*>                       Out_Team_1_Hexes;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<class ATC_HexZone_C*>                       Out_Team_2_Hexes;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function TC_HexGraph.TC_HexGraph_C.Get Neighbour Chain
struct ATC_HexGraph_C_Get_Neighbour_Chain_Params
{
	TArray<class ATC_HexZone_C*>                       Chain;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATC_HexZone_C*                               Zone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATC_HexZone_C*>                       Out_Chain;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TC_HexGraph.TC_HexGraph_C.Update Anchor Flags
struct ATC_HexGraph_C_Update_Anchor_Flags_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.Check Win Condition
struct ATC_HexGraph_C_Check_Win_Condition_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.Construct Hex Data
struct ATC_HexGraph_C_Construct_Hex_Data_Params
{
	TArray<class ATC_HexZone_C*>                       In_Zones;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TC_HexGraph.TC_HexGraph_C.Refresh Zones
struct ATC_HexGraph_C_Refresh_Zones_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.Init Start Zones
struct ATC_HexGraph_C_Init_Start_Zones_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.Get Start Zones
struct ATC_HexGraph_C_Get_Start_Zones_Params
{
	class ATC_HexZone_C*                               Start_Team_1;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATC_HexZone_C*                               Start_Team_2;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TC_HexGraph.TC_HexGraph_C.Get Team Zone Capture
struct ATC_HexGraph_C_Get_Team_Zone_Capture_Params
{
	int                                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Num_Zones_Owned;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Percentage_Owned;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TC_HexGraph.TC_HexGraph_C.Clamp Ownership
struct ATC_HexGraph_C_Clamp_Ownership_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.Init Play Hex Data
struct ATC_HexGraph_C_Init_Play_Hex_Data_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.Destroy Hex Zones
struct ATC_HexGraph_C_Destroy_Hex_Zones_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.Create Hex Zones
struct ATC_HexGraph_C_Create_Hex_Zones_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.Can Spawn Hex
struct ATC_HexGraph_C_Can_Spawn_Hex_Params
{
	struct FVector                                     WorldLocation;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_Spawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TC_HexGraph.TC_HexGraph_C.UserConstructionScript
struct ATC_HexGraph_C_UserConstructionScript_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.ReceiveBeginPlay
struct ATC_HexGraph_C_ReceiveBeginPlay_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.State Changed
struct ATC_HexGraph_C_State_Changed_Params
{
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TC_HexGraph.TC_HexGraph_C.Cache Team Hex Ownership
struct ATC_HexGraph_C_Cache_Team_Hex_Ownership_Params
{
};

// Function TC_HexGraph.TC_HexGraph_C.ExecuteUbergraph_TC_HexGraph
struct ATC_HexGraph_C_ExecuteUbergraph_TC_HexGraph_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
