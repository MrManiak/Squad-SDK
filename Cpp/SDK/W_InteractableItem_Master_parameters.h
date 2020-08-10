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

// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Get Format Box
struct UW_InteractableItem_Master_C_Get_Format_Box_Params
{
	class UHorizontalBox*                              FormatBox;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Format Text
struct UW_InteractableItem_Master_C_Format_Text_Params
{
};

// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Get Short Action Name
struct UW_InteractableItem_Master_C_Get_Short_Action_Name_Params
{
	struct FString                                     In_Action;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Short_Name;                                                // (Parm, OutParm)
};

// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Set Interactable Actor
struct UW_InteractableItem_Master_C_Set_Interactable_Actor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Clear Interactable
struct UW_InteractableItem_Master_C_Clear_Interactable_Params
{
};

// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Set Interact Data
struct UW_InteractableItem_Master_C_Set_Interact_Data_Params
{
	struct FSQUsableWidgetData                         Interact_Data;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableItem_Master.W_InteractableItem_Master_C.ExecuteUbergraph_W_InteractableItem_Master
struct UW_InteractableItem_Master_C_ExecuteUbergraph_W_InteractableItem_Master_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
