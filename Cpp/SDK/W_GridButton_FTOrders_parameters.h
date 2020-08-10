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

// Function W_GridButton_FTOrders.W_GridButton_FTOrders_C.Get Fireteam ID
struct UW_GridButton_FTOrders_C_Get_Fireteam_ID_Params
{
	int                                                ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridButton_FTOrders.W_GridButton_FTOrders_C.Get Text
struct UW_GridButton_FTOrders_C_Get_Text_Params
{
	struct FText                                       Text;                                                      // (Parm, OutParm)
};

// Function W_GridButton_FTOrders.W_GridButton_FTOrders_C.Get Color
struct UW_GridButton_FTOrders_C_Get_Color_Params
{
	struct FLinearColor                                Icon_Color;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
