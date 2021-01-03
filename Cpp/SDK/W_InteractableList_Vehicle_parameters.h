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

// Function W_InteractableList_Vehicle.W_InteractableList_Vehicle_C.Get Original Offset
struct UW_InteractableList_Vehicle_C_Get_Original_Offset_Params
{
};

// Function W_InteractableList_Vehicle.W_InteractableList_Vehicle_C.Get Fade Animation
struct UW_InteractableList_Vehicle_C_Get_Fade_Animation_Params
{
	class UWidgetAnimation*                            Fade_Animation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_Vehicle.W_InteractableList_Vehicle_C.Get Interact List
struct UW_InteractableList_Vehicle_C_Get_Interact_List_Params
{
	class UVerticalBox*                                InteractList;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_Vehicle.W_InteractableList_Vehicle_C.Check for Repair Kit
struct UW_InteractableList_Vehicle_C_Check_for_Repair_Kit_Params
{
	bool                                               bSuccess;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableList_Vehicle.W_InteractableList_Vehicle_C.Update Vehicle Claim
struct UW_InteractableList_Vehicle_C_Update_Vehicle_Claim_Params
{
};

// Function W_InteractableList_Vehicle.W_InteractableList_Vehicle_C.Create Interaction Items
struct UW_InteractableList_Vehicle_C_Create_Interaction_Items_Params
{
	bool                                               Force;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableList_Vehicle.W_InteractableList_Vehicle_C.Tick
struct UW_InteractableList_Vehicle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_Vehicle.W_InteractableList_Vehicle_C.ExecuteUbergraph_W_InteractableList_Vehicle
struct UW_InteractableList_Vehicle_C_ExecuteUbergraph_W_InteractableList_Vehicle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
