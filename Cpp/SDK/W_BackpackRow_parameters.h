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

// Function W_BackpackRow.W_BackpackRow_C.Set Items
struct UW_BackpackRow_C_Set_Items_Params
{
	TArray<class ASQEquipableItem*>                    In_Array;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSQInventoryData>                    Data_Array;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function W_BackpackRow.W_BackpackRow_C.Update Details
struct UW_BackpackRow_C_Update_Details_Params
{
	class ASQEquipableItem*                            Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_BackpackRow.W_BackpackRow_C.ExecuteUbergraph_W_BackpackRow
struct UW_BackpackRow_C_ExecuteUbergraph_W_BackpackRow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
