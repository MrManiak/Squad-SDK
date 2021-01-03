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

// Function W_GameTime.W_GameTime_C.Get Prep Zone
struct UW_GameTime_C_Get_Prep_Zone_Params
{
};

// Function W_GameTime.W_GameTime_C.Set Staging Text Prefix
struct UW_GameTime_C_Set_Staging_Text_Prefix_Params
{
};

// Function W_GameTime.W_GameTime_C.Construct
struct UW_GameTime_C_Construct_Params
{
};

// Function W_GameTime.W_GameTime_C.OnTeamStateChangedEvent_Event_1
struct UW_GameTime_C_OnTeamStateChangedEvent_Event_1_Params
{
	class ASQTeamState*                                OldTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQTeamState*                                NewTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GameTime.W_GameTime_C.Get Player State
struct UW_GameTime_C_Get_Player_State_Params
{
};

// Function W_GameTime.W_GameTime_C.ExecuteUbergraph_W_GameTime
struct UW_GameTime_C_ExecuteUbergraph_W_GameTime_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
