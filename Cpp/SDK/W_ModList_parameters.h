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

// Function W_ModList.W_ModList_C.Is Modded
struct UW_ModList_C_Is_Modded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_ModList.W_ModList_C.Is Whitelisted
struct UW_ModList_C_Is_Whitelisted_Params
{
	bool                                               Is_Whitelisted;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ModList.W_ModList_C.Get_TB_Whitelist_Text_1
struct UW_ModList_C_Get_TB_Whitelist_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_ModList.W_ModList_C.Display Mods
struct UW_ModList_C_Display_Mods_Params
{
};

// Function W_ModList.W_ModList_C.Init
struct UW_ModList_C_Init_Params
{
	class USQServerListItemWidget*                     ServerListItem;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ModList.W_ModList_C.ExecuteUbergraph_W_ModList
struct UW_ModList_C_ExecuteUbergraph_W_ModList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
