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

// Function W_GridHeader.W_GridHeader_C.Get Squad ID
struct UW_GridHeader_C_Get_Squad_ID_Params
{
	int                                                ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridHeader.W_GridHeader_C.Get Fireteam ID
struct UW_GridHeader_C_Get_Fireteam_ID_Params
{
	int                                                ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridHeader.W_GridHeader_C.Set Buttons Visibility
struct UW_GridHeader_C_Set_Buttons_Visibility_Params
{
	bool                                               Visible;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_GridHeader.W_GridHeader_C.Set Viewport Position
struct UW_GridHeader_C_Set_Viewport_Position_Params
{
};

// Function W_GridHeader.W_GridHeader_C.Construct
struct UW_GridHeader_C_Construct_Params
{
};

// Function W_GridHeader.W_GridHeader_C.Construct Buttons
struct UW_GridHeader_C_Construct_Buttons_Params
{
};

// Function W_GridHeader.W_GridHeader_C.ExecuteUbergraph_W_GridHeader
struct UW_GridHeader_C_ExecuteUbergraph_W_GridHeader_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
