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

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Close Radial From Interactable
struct UW_InteractableWidgetList_Master_C_Close_Radial_From_Interactable_Params
{
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Get Fade Animation
struct UW_InteractableWidgetList_Master_C_Get_Fade_Animation_Params
{
	class UWidgetAnimation*                            Fade_Animation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Fade Anim
struct UW_InteractableWidgetList_Master_C_Fade_Anim_Params
{
	bool                                               Open;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Get Interact List
struct UW_InteractableWidgetList_Master_C_Get_Interact_List_Params
{
	class UVerticalBox*                                InteractList;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Create Interaction Items
struct UW_InteractableWidgetList_Master_C_Create_Interaction_Items_Params
{
	bool                                               Force;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Is Player Zoomed
struct UW_InteractableWidgetList_Master_C_Is_Player_Zoomed_Params
{
	bool                                               Is_Zoomed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Close Animation
struct UW_InteractableWidgetList_Master_C_Close_Animation_Params
{
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Open Animation
struct UW_InteractableWidgetList_Master_C_Open_Animation_Params
{
	bool                                               Force;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Clear Interactable
struct UW_InteractableWidgetList_Master_C_Clear_Interactable_Params
{
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Tick
struct UW_InteractableWidgetList_Master_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Set Position
struct UW_InteractableWidgetList_Master_C_Set_Position_Params
{
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Set Interactable Actor
struct UW_InteractableWidgetList_Master_C_Set_Interactable_Actor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Set Interact Data
struct UW_InteractableWidgetList_Master_C_Set_Interact_Data_Params
{
	struct FSQUsableWidgetData                         Interact_Data;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.ExecuteUbergraph_W_InteractableWidgetList_Master
struct UW_InteractableWidgetList_Master_C_ExecuteUbergraph_W_InteractableWidgetList_Master_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
