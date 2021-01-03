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

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Update Handbrake
struct UUMG_VehicleSpeedo_C_Update_Handbrake_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Refresh Handbrake
struct UUMG_VehicleSpeedo_C_Refresh_Handbrake_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Refresh Data
struct UUMG_VehicleSpeedo_C_Refresh_Data_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Rearm Cost
struct UUMG_VehicleSpeedo_C_Rearm_Cost_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Hide Widget
struct UUMG_VehicleSpeedo_C_Hide_Widget_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Refresh Icon
struct UUMG_VehicleSpeedo_C_Refresh_Icon_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Update Revs
struct UUMG_VehicleSpeedo_C_Update_Revs_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Clear Dial Numbers
struct UUMG_VehicleSpeedo_C_Clear_Dial_Numbers_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.DrawDialNumbers
struct UUMG_VehicleSpeedo_C_DrawDialNumbers_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.GearColor
struct UUMG_VehicleSpeedo_C_GearColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Refresh Widget
struct UUMG_VehicleSpeedo_C_Refresh_Widget_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.GearText
struct UUMG_VehicleSpeedo_C_GearText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Construct
struct UUMG_VehicleSpeedo_C_Construct_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Tick
struct UUMG_VehicleSpeedo_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Refresh Dial
struct UUMG_VehicleSpeedo_C_Refresh_Dial_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Update Vehicle
struct UUMG_VehicleSpeedo_C_Update_Vehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQVehicle*                                  Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQVehicleSeatComponent*                     FromSeat;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQVehicleSeatComponent*                     ToSeat;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Changed Team
struct UUMG_VehicleSpeedo_C_Changed_Team_Params
{
	class ASQTeamState*                                OldTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQTeamState*                                NewTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Get Soldier
struct UUMG_VehicleSpeedo_C_Get_Soldier_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Soldier Died
struct UUMG_VehicleSpeedo_C_Soldier_Died_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.Validate Visibility
struct UUMG_VehicleSpeedo_C_Validate_Visibility_Params
{
};

// Function UMG_VehicleSpeedo.UMG_VehicleSpeedo_C.ExecuteUbergraph_UMG_VehicleSpeedo
struct UUMG_VehicleSpeedo_C_ExecuteUbergraph_UMG_VehicleSpeedo_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
