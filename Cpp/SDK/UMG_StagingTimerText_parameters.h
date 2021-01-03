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

// Function UMG_StagingTimerText.UMG_StagingTimerText_C.Construct
struct UUMG_StagingTimerText_C_Construct_Params
{
};

// Function UMG_StagingTimerText.UMG_StagingTimerText_C.OnFellBelowThreshold
struct UUMG_StagingTimerText_C_OnFellBelowThreshold_Params
{
};

// Function UMG_StagingTimerText.UMG_StagingTimerText_C.Get Player Team
struct UUMG_StagingTimerText_C_Get_Player_Team_Params
{
};

// Function UMG_StagingTimerText.UMG_StagingTimerText_C.Team State Changed
struct UUMG_StagingTimerText_C_Team_State_Changed_Params
{
	class ASQTeamState*                                OldTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQTeamState*                                NewTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_StagingTimerText.UMG_StagingTimerText_C.ExecuteUbergraph_UMG_StagingTimerText
struct UUMG_StagingTimerText_C_ExecuteUbergraph_UMG_StagingTimerText_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
