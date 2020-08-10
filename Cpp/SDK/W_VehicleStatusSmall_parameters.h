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

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Update Turret State
struct UW_VehicleStatusSmall_C_Update_Turret_State_Params
{
};

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Wheel State
struct UW_VehicleStatusSmall_C_Wheel_State_Params
{
};

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Update Ammo State
struct UW_VehicleStatusSmall_C_Update_Ammo_State_Params
{
};

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Update Engine State
struct UW_VehicleStatusSmall_C_Update_Engine_State_Params
{
};

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Get_VehicleHealthPercent
struct UW_VehicleStatusSmall_C_Get_VehicleHealthPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Get Vehicle
struct UW_VehicleStatusSmall_C_Get_Vehicle_Params
{
};

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Construct
struct UW_VehicleStatusSmall_C_Construct_Params
{
};

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Refresh Vehicle
struct UW_VehicleStatusSmall_C_Refresh_Vehicle_Params
{
};

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Tick
struct UW_VehicleStatusSmall_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.ExecuteUbergraph_W_VehicleStatusSmall
struct UW_VehicleStatusSmall_C_ExecuteUbergraph_W_VehicleStatusSmall_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
