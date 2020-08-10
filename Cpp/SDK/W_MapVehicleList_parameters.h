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

// Function W_MapVehicleList.W_MapVehicleList_C.Cache KillDeath Ruleset
struct UW_MapVehicleList_C_Cache_KillDeath_Ruleset_Params
{
};

// Function W_MapVehicleList.W_MapVehicleList_C.Sort Vics by Cost
struct UW_MapVehicleList_C_Sort_Vics_by_Cost_Params
{
	TArray<struct FS_VehicleListData>                  To_Sort;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_VehicleListData>                  Out_Sorted;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function W_MapVehicleList.W_MapVehicleList_C.Draw Sorted Vehicle Data
struct UW_MapVehicleList_C_Draw_Sorted_Vehicle_Data_Params
{
};

// Function W_MapVehicleList.W_MapVehicleList_C.Get Tickets For Vehicle
struct UW_MapVehicleList_C_Get_Tickets_For_Vehicle_Params
{
	int                                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Vehicle_Ref;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Tickets_Lost_on_Vehicle_Destroy;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MapVehicleList.W_MapVehicleList_C.Collect Vehicle Data
struct UW_MapVehicleList_C_Collect_Vehicle_Data_Params
{
};

// Function W_MapVehicleList.W_MapVehicleList_C.Construct
struct UW_MapVehicleList_C_Construct_Params
{
};

// Function W_MapVehicleList.W_MapVehicleList_C.ExecuteUbergraph_W_MapVehicleList
struct UW_MapVehicleList_C_ExecuteUbergraph_W_MapVehicleList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
