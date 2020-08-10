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

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Action Name
struct UW_InteractableList_VehicleBay_C_Get_Action_Name_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // (Parm, OutParm)
};

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Original Offset
struct UW_InteractableList_VehicleBay_C_Get_Original_Offset_Params
{
};

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Fade Animation
struct UW_InteractableList_VehicleBay_C_Get_Fade_Animation_Params
{
	class UWidgetAnimation*                            Fade_Animation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Interact List
struct UW_InteractableList_VehicleBay_C_Get_Interact_List_Params
{
	class UVerticalBox*                                InteractList;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Check for Repair Kit
struct UW_InteractableList_VehicleBay_C_Check_for_Repair_Kit_Params
{
	bool                                               bSuccess;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Update Vehicle Build
struct UW_InteractableList_VehicleBay_C_Update_Vehicle_Build_Params
{
};

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Tick
struct UW_InteractableList_VehicleBay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Set Interactable Actor
struct UW_InteractableList_VehicleBay_C_Set_Interactable_Actor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Update Queue Items
struct UW_InteractableList_VehicleBay_C_Update_Queue_Items_Params
{
};

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.ExecuteUbergraph_W_InteractableList_VehicleBay
struct UW_InteractableList_VehicleBay_C_ExecuteUbergraph_W_InteractableList_VehicleBay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
