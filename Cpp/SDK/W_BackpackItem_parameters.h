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

// Function W_BackpackItem.W_BackpackItem_C.Get Item Count
struct UW_BackpackItem_C_Get_Item_Count_Params
{
	struct FSQInventoryData                            SQInventoryData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int                                                Item_Count;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_BackpackItem.W_BackpackItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UW_BackpackItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_BackpackItem.W_BackpackItem_C.Construct
struct UW_BackpackItem_C_Construct_Params
{
};

// Function W_BackpackItem.W_BackpackItem_C.ExecuteUbergraph_W_BackpackItem
struct UW_BackpackItem_C_ExecuteUbergraph_W_BackpackItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_BackpackItem.W_BackpackItem_C.Hovered__DelegateSignature
struct UW_BackpackItem_C_Hovered__DelegateSignature_Params
{
	class ASQEquipableItem*                            Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
