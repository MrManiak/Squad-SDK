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

// Function BP_Squad.BP_Squad_C.On Leave Event
struct ABP_Squad_C_On_Leave_Event_Params
{
	class ASQSquad*                                    Squad;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Joining_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Squad.BP_Squad_C.Become SL Notification
struct ABP_Squad_C_Become_SL_Notification_Params
{
	class ASQSquad*                                    State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Squad.BP_Squad_C.Parting Notification
struct ABP_Squad_C_Parting_Notification_Params
{
	class ASQSquad*                                    Squad;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Leaving_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Squad.BP_Squad_C.Fireteam Notification
struct ABP_Squad_C_Fireteam_Notification_Params
{
	class ASQSquad*                                    Squad;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FT;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Squad.BP_Squad_C.Destroy Fireteam Markers
struct ABP_Squad_C_Destroy_Fireteam_Markers_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Squad.BP_Squad_C.Destroy All Markers
struct ABP_Squad_C_Destroy_All_Markers_Params
{
};

// Function BP_Squad.BP_Squad_C.ReceiveDestroyed
struct ABP_Squad_C_ReceiveDestroyed_Params
{
};

// Function BP_Squad.BP_Squad_C.OnFireteamDisbanded_Event_1
struct ABP_Squad_C_OnFireteamDisbanded_Event_1_Params
{
	class ASQSquad*                                    Squad;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FireTeamId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Squad.BP_Squad_C.ReceiveBeginPlay
struct ABP_Squad_C_ReceiveBeginPlay_Params
{
};

// Function BP_Squad.BP_Squad_C.OnFireteamUpdated_Event_1
struct ABP_Squad_C_OnFireteamUpdated_Event_1_Params
{
	class ASQSquad*                                    Squad;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FireTeamId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Squad.BP_Squad_C.OnPlayerPartSquad_Event_1
struct ABP_Squad_C_OnPlayerPartSquad_Event_1_Params
{
	class ASQSquad*                                    Squad;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                         Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Squad.BP_Squad_C.OnPlayerJoinSquad_Event_1
struct ABP_Squad_C_OnPlayerJoinSquad_Event_1_Params
{
	class ASQSquad*                                    Squad;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                         Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Squad.BP_Squad_C.OnPlayerBecomeSquadLeader_Event_1
struct ABP_Squad_C_OnPlayerBecomeSquadLeader_Event_1_Params
{
	class ASQSquad*                                    Squad;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                         Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Squad.BP_Squad_C.ExecuteUbergraph_BP_Squad
struct ABP_Squad_C_ExecuteUbergraph_BP_Squad_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
