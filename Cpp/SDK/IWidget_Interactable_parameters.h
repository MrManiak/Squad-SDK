#pragma once

// Name: Sq, Version: b21

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

// Function IWidget_Interactable.IWidget_Interactable_C.Clear Interactable
struct UIWidget_Interactable_C_Clear_Interactable_Params
{
};

// Function IWidget_Interactable.IWidget_Interactable_C.Set Interact Data
struct UIWidget_Interactable_C_Set_Interact_Data_Params
{
	struct FSQUsableWidgetData                         Interact_Data;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IWidget_Interactable.IWidget_Interactable_C.Set Interactable Actor
struct UIWidget_Interactable_C_Set_Interactable_Actor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
