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

// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Set Flags
struct UW_TerritoryControl_Bar_C_Set_Flags_Params
{
};

// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Tick
struct UW_TerritoryControl_Bar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Construct
struct UW_TerritoryControl_Bar_C_Construct_Params
{
};

// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Bind Team Change
struct UW_TerritoryControl_Bar_C_Bind_Team_Change_Params
{
};

// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Team Changed Event
struct UW_TerritoryControl_Bar_C_Team_Changed_Event_Params
{
	class ASQTeamState*                                OldTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQTeamState*                                NewTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.ExecuteUbergraph_W_TerritoryControl_Bar
struct UW_TerritoryControl_Bar_C_ExecuteUbergraph_W_TerritoryControl_Bar_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
