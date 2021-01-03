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

// Function UI_Events_Component.UI_Events_Component_C.Commander Nomination Sounds
struct UUI_Events_Component_C_Commander_Nomination_Sounds_Params
{
	int                                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.Commander Changed Sounds
struct UUI_Events_Component_C_Commander_Changed_Sounds_Params
{
	class ASQPlayerState*                              Old;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              New;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.Get Mode Intro ID from Team Short Name
struct UUI_Events_Component_C_Get_Mode_Intro_ID_from_Team_Short_Name_Params
{
	struct FString                                     Short_Name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.Get Ticket Bleed Component
struct UUI_Events_Component_C_Get_Ticket_Bleed_Component_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.Get Intro Audio
struct UUI_Events_Component_C_Get_Intro_Audio_Params
{
	class ASQTeamState*                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.Play Flag Capture Animation
struct UUI_Events_Component_C_Play_Flag_Capture_Animation_Params
{
	class USQCaptureZoneComponent*                     Capture_Zone_Component;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      New_Owning_Team;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Last_Owning_Team;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.Play Destruction Objective Animation
struct UUI_Events_Component_C_Play_Destruction_Objective_Animation_Params
{
	unsigned char                                      Owner_Team;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.Match is Valid
struct UUI_Events_Component_C_Match_is_Valid_Params
{
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Events_Component.UI_Events_Component_C.Self Team is Attacker
struct UUI_Events_Component_C_Self_Team_is_Attacker_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Attacker;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Events_Component.UI_Events_Component_C.Init Deployment
struct UUI_Events_Component_C_Init_Deployment_Params
{
	class UUMG_MenuBase_C*                             Deployment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.OnLoaded_C2C962FD46CDE84F4452D5B6F1C39B2F
struct UUI_Events_Component_C_OnLoaded_C2C962FD46CDE84F4452D5B6F1C39B2F_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.Team Selection Changed
struct UUI_Events_Component_C_Team_Selection_Changed_Params
{
	class ASQTeamState*                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.Add Sound to Async Queue
struct UUI_Events_Component_C_Add_Sound_to_Async_Queue_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.ReceiveBeginPlay
struct UUI_Events_Component_C_ReceiveBeginPlay_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.Play Low Ticket Sounds
struct UUI_Events_Component_C_Play_Low_Ticket_Sounds_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.Reset Enemy Ticket Bleed Event
struct UUI_Events_Component_C_Reset_Enemy_Ticket_Bleed_Event_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.Reset Player Ticket Low Event
struct UUI_Events_Component_C_Reset_Player_Ticket_Low_Event_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.Load and Play Queued Sound
struct UUI_Events_Component_C_Load_and_Play_Queued_Sound_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.Delay and Load Queued Sound
struct UUI_Events_Component_C_Delay_and_Load_Queued_Sound_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.Init Commander Team 1
struct UUI_Events_Component_C_Init_Commander_Team_1_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.Team 1 Cmdr Changed Event
struct UUI_Events_Component_C_Team_1_Cmdr_Changed_Event_Params
{
	class ASQPlayerState*                              OldCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              NewCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.Team 2 Cmdr Changed Event
struct UUI_Events_Component_C_Team_2_Cmdr_Changed_Event_Params
{
	class ASQPlayerState*                              OldCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              NewCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Events_Component.UI_Events_Component_C.Team 1 Nomination Started
struct UUI_Events_Component_C_Team_1_Nomination_Started_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.Team 2 Nomination Started
struct UUI_Events_Component_C_Team_2_Nomination_Started_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.Init Commander Team 2
struct UUI_Events_Component_C_Init_Commander_Team_2_Params
{
};

// Function UI_Events_Component.UI_Events_Component_C.ExecuteUbergraph_UI_Events_Component
struct UUI_Events_Component_C_ExecuteUbergraph_UI_Events_Component_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
