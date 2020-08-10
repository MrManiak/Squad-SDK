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

// Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.Update Seat ID
struct UW_Tooltip_Vehicle_C_Update_Seat_ID_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.Update All Seats
struct UW_Tooltip_Vehicle_C_Update_All_Seats_Params
{
	bool                                               Is_Self_Team;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                My_Seat_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.Construct
struct UW_Tooltip_Vehicle_C_Construct_Params
{
};

// Function W_Tooltip_Vehicle.W_Tooltip_Vehicle_C.ExecuteUbergraph_W_Tooltip_Vehicle
struct UW_Tooltip_Vehicle_C_ExecuteUbergraph_W_Tooltip_Vehicle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
