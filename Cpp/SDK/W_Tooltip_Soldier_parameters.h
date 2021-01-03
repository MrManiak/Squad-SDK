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

// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.ShowHideCommanderStar
struct UW_Tooltip_Soldier_C_ShowHideCommanderStar_Params
{
};

// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Fireteam
struct UW_Tooltip_Soldier_C_Update_Fireteam_Params
{
};

// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Rank
struct UW_Tooltip_Soldier_C_Update_Rank_Params
{
};

// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Tint Color
struct UW_Tooltip_Soldier_C_Update_Tint_Color_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.UpdateSquadVisuals
struct UW_Tooltip_Soldier_C_UpdateSquadVisuals_Params
{
};

// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.UpdateKitVisuals
struct UW_Tooltip_Soldier_C_UpdateKitVisuals_Params
{
};

// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Construct
struct UW_Tooltip_Soldier_C_Construct_Params
{
};

// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Info
struct UW_Tooltip_Soldier_C_Update_Info_Params
{
	struct FSQSoldierInfo                              Soldier_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.ExecuteUbergraph_W_Tooltip_Soldier
struct UW_Tooltip_Soldier_C_ExecuteUbergraph_W_Tooltip_Soldier_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
