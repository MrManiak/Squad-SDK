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

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Has Field Dressings
struct UW_InteractableItem_SelfHeal_C_Has_Field_Dressings_Params
{
	class ASQSoldier*                                  Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Has_Dressing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Slot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Set Visibility
struct UW_InteractableItem_SelfHeal_C_Set_Visibility_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Has Healing Item
struct UW_InteractableItem_SelfHeal_C_Has_Healing_Item_Params
{
};

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Update Self Heal
struct UW_InteractableItem_SelfHeal_C_Update_Self_Heal_Params
{
};

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Get Format Box
struct UW_InteractableItem_SelfHeal_C_Get_Format_Box_Params
{
	class UHorizontalBox*                              FormatBox;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Construct
struct UW_InteractableItem_SelfHeal_C_Construct_Params
{
};

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.ExecuteUbergraph_W_InteractableItem_SelfHeal
struct UW_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
