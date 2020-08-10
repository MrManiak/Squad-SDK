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

// Function W_ModTooltip.W_ModTooltip_C.Set Position
struct UW_ModTooltip_C_Set_Position_Params
{
};

// Function W_ModTooltip.W_ModTooltip_C.Is Modded
struct UW_ModTooltip_C_Is_Modded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_ModTooltip.W_ModTooltip_C.Is Whitelisted
struct UW_ModTooltip_C_Is_Whitelisted_Params
{
	bool                                               Is_Whitelisted;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ModTooltip.W_ModTooltip_C.Get_TB_Whitelist_Text_1
struct UW_ModTooltip_C_Get_TB_Whitelist_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_ModTooltip.W_ModTooltip_C.Display Mods
struct UW_ModTooltip_C_Display_Mods_Params
{
};

// Function W_ModTooltip.W_ModTooltip_C.Construct
struct UW_ModTooltip_C_Construct_Params
{
};

// Function W_ModTooltip.W_ModTooltip_C.Tick
struct UW_ModTooltip_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ModTooltip.W_ModTooltip_C.Destruct
struct UW_ModTooltip_C_Destruct_Params
{
};

// Function W_ModTooltip.W_ModTooltip_C.ExecuteUbergraph_W_ModTooltip
struct UW_ModTooltip_C_ExecuteUbergraph_W_ModTooltip_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ModTooltip.W_ModTooltip_C.Removed__DelegateSignature
struct UW_ModTooltip_C_Removed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
