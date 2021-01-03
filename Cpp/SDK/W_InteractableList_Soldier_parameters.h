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

// Function W_InteractableList_Soldier.W_InteractableList_Soldier_C.Set Position
struct UW_InteractableList_Soldier_C_Set_Position_Params
{
};

// Function W_InteractableList_Soldier.W_InteractableList_Soldier_C.Tick
struct UW_InteractableList_Soldier_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_Soldier.W_InteractableList_Soldier_C.ExecuteUbergraph_W_InteractableList_Soldier
struct UW_InteractableList_Soldier_C_ExecuteUbergraph_W_InteractableList_Soldier_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
