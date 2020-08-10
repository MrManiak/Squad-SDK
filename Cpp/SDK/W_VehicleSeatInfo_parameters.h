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

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.ShowHideCommanderStar
struct UW_VehicleSeatInfo_C_ShowHideCommanderStar_Params
{
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Set Squad ID
struct UW_VehicleSeatInfo_C_Set_Squad_ID_Params
{
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Set Self Team
struct UW_VehicleSeatInfo_C_Set_Self_Team_Params
{
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Self Squad
struct UW_VehicleSeatInfo_C_Self_Squad_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Update Fireteam
struct UW_VehicleSeatInfo_C_Update_Fireteam_Params
{
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.UpdateRank
struct UW_VehicleSeatInfo_C_UpdateRank_Params
{
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.UpdateSquadVisuals
struct UW_VehicleSeatInfo_C_UpdateSquadVisuals_Params
{
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.UpdateKitVisuals
struct UW_VehicleSeatInfo_C_UpdateKitVisuals_Params
{
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Get Tint
struct UW_VehicleSeatInfo_C_Get_Tint_Params
{
	struct FLinearColor                                Out_Color;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Construct
struct UW_VehicleSeatInfo_C_Construct_Params
{
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Update Occupant
struct UW_VehicleSeatInfo_C_Update_Occupant_Params
{
	int                                                Seat_Index;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              Player_State;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Driver;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.ExecuteUbergraph_W_VehicleSeatInfo
struct UW_VehicleSeatInfo_C_ExecuteUbergraph_W_VehicleSeatInfo_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
