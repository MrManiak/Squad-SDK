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

// Function W_HealPrompt.W_HealPrompt_C.Update Soldier
struct UW_HealPrompt_C_Update_Soldier_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HealPrompt.W_HealPrompt_C.Tick
struct UW_HealPrompt_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HealPrompt.W_HealPrompt_C.Collapse
struct UW_HealPrompt_C_Collapse_Params
{
};

// Function W_HealPrompt.W_HealPrompt_C.Show
struct UW_HealPrompt_C_Show_Params
{
};

// Function W_HealPrompt.W_HealPrompt_C.ExecuteUbergraph_W_HealPrompt
struct UW_HealPrompt_C_ExecuteUbergraph_W_HealPrompt_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
