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

// Function BP_Role_Inventory.BP_Role_Inventory_C.ClearWidget
struct UBP_Role_Inventory_C_ClearWidget_Params
{
};

// Function BP_Role_Inventory.BP_Role_Inventory_C.GetRulesetModifications
struct UBP_Role_Inventory_C_GetRulesetModifications_Params
{
};

// Function BP_Role_Inventory.BP_Role_Inventory_C.AddItemToInventory
struct UBP_Role_Inventory_C_AddItemToInventory_Params
{
	struct FSQInventoryData                            InventoryData;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int                                                Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Offset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Role_Inventory.BP_Role_Inventory_C.PopulateInventoryUI
struct UBP_Role_Inventory_C_PopulateInventoryUI_Params
{
};

// Function BP_Role_Inventory.BP_Role_Inventory_C.UpdateStateAndVisibilityEvent
struct UBP_Role_Inventory_C_UpdateStateAndVisibilityEvent_Params
{
};

// Function BP_Role_Inventory.BP_Role_Inventory_C.ExecuteUbergraph_BP_Role_Inventory
struct UBP_Role_Inventory_C_ExecuteUbergraph_BP_Role_Inventory_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
