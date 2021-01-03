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

// Function W_InteractableList_Mines.W_InteractableList_Mines_C.Get Fade Animation
struct UW_InteractableList_Mines_C_Get_Fade_Animation_Params
{
	class UWidgetAnimation*                            Fade_Animation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_Mines.W_InteractableList_Mines_C.Get Interact List
struct UW_InteractableList_Mines_C_Get_Interact_List_Params
{
	class UVerticalBox*                                InteractList;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_Mines.W_InteractableList_Mines_C.Create Shovel Items
struct UW_InteractableList_Mines_C_Create_Shovel_Items_Params
{
};

// Function W_InteractableList_Mines.W_InteractableList_Mines_C.Is Deployable Built
struct UW_InteractableList_Mines_C_Is_Deployable_Built_Params
{
	bool                                               Is_Built;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Full_Health;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableList_Mines.W_InteractableList_Mines_C.Soldier Has Shovel
struct UW_InteractableList_Mines_C_Soldier_Has_Shovel_Params
{
	bool                                               Shovel_Equipped;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Owns_Shovel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableList_Mines.W_InteractableList_Mines_C.Tick
struct UW_InteractableList_Mines_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_Mines.W_InteractableList_Mines_C.Set Custom Data
struct UW_InteractableList_Mines_C_Set_Custom_Data_Params
{
};

// Function W_InteractableList_Mines.W_InteractableList_Mines_C.ExecuteUbergraph_W_InteractableList_Mines
struct UW_InteractableList_Mines_C_ExecuteUbergraph_W_InteractableList_Mines_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
