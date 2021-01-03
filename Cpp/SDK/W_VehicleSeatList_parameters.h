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

// Function W_VehicleSeatList.W_VehicleSeatList_C.Update Seats
struct UW_VehicleSeatList_C_Update_Seats_Params
{
};

// Function W_VehicleSeatList.W_VehicleSeatList_C.Update List
struct UW_VehicleSeatList_C_Update_List_Params
{
};

// Function W_VehicleSeatList.W_VehicleSeatList_C.Construct
struct UW_VehicleSeatList_C_Construct_Params
{
};

// Function W_VehicleSeatList.W_VehicleSeatList_C.Refresh Vehicle
struct UW_VehicleSeatList_C_Refresh_Vehicle_Params
{
};

// Function W_VehicleSeatList.W_VehicleSeatList_C.Play Fade
struct UW_VehicleSeatList_C_Play_Fade_Params
{
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_VehicleSeatList.W_VehicleSeatList_C.Collapse
struct UW_VehicleSeatList_C_Collapse_Params
{
};

// Function W_VehicleSeatList.W_VehicleSeatList_C.ExecuteUbergraph_W_VehicleSeatList
struct UW_VehicleSeatList_C_ExecuteUbergraph_W_VehicleSeatList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
