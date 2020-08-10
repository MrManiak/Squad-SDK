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

// Function RadialCenterVehicle.RadialCenterVehicle_C.HelicopterAltitudeCheck
struct URadialCenterVehicle_C_HelicopterAltitudeCheck_Params
{
	bool                                               AltitudeValid;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Is Soldier Alive
struct URadialCenterVehicle_C_Is_Soldier_Alive_Params
{
	bool                                               Alive;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Get Widget Text
struct URadialCenterVehicle_C_Get_Widget_Text_Params
{
	class USQRadialButton*                             Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       DisplayText;                                               // (Parm, OutParm)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Get Action Text
struct URadialCenterVehicle_C_Get_Action_Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Validate FOB
struct URadialCenterVehicle_C_Validate_FOB_Params
{
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Validate Transaction
struct URadialCenterVehicle_C_Validate_Transaction_Params
{
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Con_Valid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Ammo_Valid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Is_Loading;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Zone_has_Points;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Is Action Ammo
struct URadialCenterVehicle_C_Is_Action_Ammo_Params
{
	bool                                               Is_Ammo_Action;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Vehicle Denied
struct URadialCenterVehicle_C_Vehicle_Denied_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Vehicle Speed Check
struct URadialCenterVehicle_C_Vehicle_Speed_Check_Params
{
	bool                                               Speed_Is_Valid;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Get_Text_SupplyStatus
struct URadialCenterVehicle_C_Get_Text_SupplyStatus_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.SetTimerActivation
struct URadialCenterVehicle_C_SetTimerActivation_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.SetTimerProgress
struct URadialCenterVehicle_C_SetTimerProgress_Params
{
	float                                              RemainingTimePct;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Get_Background_ColorAndOpacity_1
struct URadialCenterVehicle_C_Get_Background_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.OnHoverBegin
struct URadialCenterVehicle_C_OnHoverBegin_Params
{
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Tick
struct URadialCenterVehicle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.OnHoverEnd
struct URadialCenterVehicle_C_OnHoverEnd_Params
{
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.Construct
struct URadialCenterVehicle_C_Construct_Params
{
};

// Function RadialCenterVehicle.RadialCenterVehicle_C.ExecuteUbergraph_RadialCenterVehicle
struct URadialCenterVehicle_C_ExecuteUbergraph_RadialCenterVehicle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
