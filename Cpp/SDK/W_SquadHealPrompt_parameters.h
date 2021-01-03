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

// Function W_SquadHealPrompt.W_SquadHealPrompt_C.Update Soldier
struct UW_SquadHealPrompt_C_Update_Soldier_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadHealPrompt.W_SquadHealPrompt_C.Tick
struct UW_SquadHealPrompt_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadHealPrompt.W_SquadHealPrompt_C.Construct
struct UW_SquadHealPrompt_C_Construct_Params
{
};

// Function W_SquadHealPrompt.W_SquadHealPrompt_C.ExecuteUbergraph_W_SquadHealPrompt
struct UW_SquadHealPrompt_C_ExecuteUbergraph_W_SquadHealPrompt_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
