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

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Get 1st Occupant Info
struct UBP_MarkerWidget_Vehicle_C_Get_1st_Occupant_Info_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Leader;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Same_Squad;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       ID;                                                        // (Parm, OutParm)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateSquadInfo
struct UBP_MarkerWidget_Vehicle_C_UpdateSquadInfo_Params
{
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Get Claimed By
struct UBP_MarkerWidget_Vehicle_C_Get_Claimed_By_Params
{
	bool                                               Is_Claimed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Claim_ID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.GetLocalSeat
struct UBP_MarkerWidget_Vehicle_C_GetLocalSeat_Params
{
	class USQVehicleSeatComponent*                     Seat;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsLocalInDriverSeat
struct UBP_MarkerWidget_Vehicle_C_IsLocalInDriverSeat_Params
{
	bool                                               Driver;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateAngles
struct UBP_MarkerWidget_Vehicle_C_UpdateAngles_Params
{
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsInVehicle
struct UBP_MarkerWidget_Vehicle_C_IsInVehicle_Params
{
	bool                                               InVehicle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateVehicleConeVisbility
struct UBP_MarkerWidget_Vehicle_C_UpdateVehicleConeVisbility_Params
{
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsVehicleEmpty
struct UBP_MarkerWidget_Vehicle_C_IsVehicleEmpty_Params
{
	bool                                               Empty;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.GetVehicle
struct UBP_MarkerWidget_Vehicle_C_GetVehicle_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsSameSquad
struct UBP_MarkerWidget_Vehicle_C_IsSameSquad_Params
{
	bool                                               SquadVehicle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsSameTeam
struct UBP_MarkerWidget_Vehicle_C_IsSameTeam_Params
{
	bool                                               SameTeam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsNeutralTeam
struct UBP_MarkerWidget_Vehicle_C_IsNeutralTeam_Params
{
	bool                                               IsNeutralTeam;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.GetVehicleIcon
struct UBP_MarkerWidget_Vehicle_C_GetVehicleIcon_Params
{
	class UTexture*                                    NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateVehicleBrush
struct UBP_MarkerWidget_Vehicle_C_UpdateVehicleBrush_Params
{
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Construct
struct UBP_MarkerWidget_Vehicle_C_Construct_Params
{
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Tick
struct UBP_MarkerWidget_Vehicle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateStateEvent
struct UBP_MarkerWidget_Vehicle_C_UpdateStateEvent_Params
{
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateVisibilityEvent
struct UBP_MarkerWidget_Vehicle_C_UpdateVisibilityEvent_Params
{
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.ExecuteUbergraph_BP_MarkerWidget_Vehicle
struct UBP_MarkerWidget_Vehicle_C_ExecuteUbergraph_BP_MarkerWidget_Vehicle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.CloseTooltip__DelegateSignature
struct UBP_MarkerWidget_Vehicle_C_CloseTooltip__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
