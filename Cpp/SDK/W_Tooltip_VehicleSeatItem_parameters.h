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

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.ShowHideCommanderStar
struct UW_Tooltip_VehicleSeatItem_C_ShowHideCommanderStar_Params
{
};

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Self Squad
struct UW_Tooltip_VehicleSeatItem_C_Self_Squad_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Update Fireteam
struct UW_Tooltip_VehicleSeatItem_C_Update_Fireteam_Params
{
};

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.UpdateRank
struct UW_Tooltip_VehicleSeatItem_C_UpdateRank_Params
{
};

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.UpdateSquadVisuals
struct UW_Tooltip_VehicleSeatItem_C_UpdateSquadVisuals_Params
{
};

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.UpdateKitVisuals
struct UW_Tooltip_VehicleSeatItem_C_UpdateKitVisuals_Params
{
};

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Get Tint
struct UW_Tooltip_VehicleSeatItem_C_Get_Tint_Params
{
	struct FLinearColor                                Out_Color;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Construct
struct UW_Tooltip_VehicleSeatItem_C_Construct_Params
{
};

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.Update Occupant
struct UW_Tooltip_VehicleSeatItem_C_Update_Occupant_Params
{
	struct FSQVehicleOccupantInfo                      Occupant_Info;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USQMapWidgetVehicle*                         Vehicle_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Self_Team;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                My_Seat_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Seat_Index;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C.ExecuteUbergraph_W_Tooltip_VehicleSeatItem
struct UW_Tooltip_VehicleSeatItem_C_ExecuteUbergraph_W_Tooltip_VehicleSeatItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
