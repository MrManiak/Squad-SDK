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

// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsInteractingWithHelicopter
struct UBP_GoToTowingMenu_C_IsInteractingWithHelicopter_Params
{
	class UBaseRadialMenu_C*                           Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsInStagingPhase
struct UBP_GoToTowingMenu_C_IsInStagingPhase_Params
{
	class APlayerController*                           Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StagingPhaseActive;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsPlayerOutOfVehicle
struct UBP_GoToTowingMenu_C_IsPlayerOutOfVehicle_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOutOfVehicle;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsEmergencyMoveAvailable
struct UBP_GoToTowingMenu_C_IsEmergencyMoveAvailable_Params
{
	class UBaseRadialMenu_C*                           Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Available;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.SetActiveButton
struct UBP_GoToTowingMenu_C_SetActiveButton_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USQRadialButton*                             Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsInDriverSeatOfGroundVehicle
struct UBP_GoToTowingMenu_C_IsInDriverSeatOfGroundVehicle_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInDriverSeat;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.OnClicked
struct UBP_GoToTowingMenu_C_OnClicked_Params
{
	class UBaseRadialMenu_C*                           Radial;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.Populate
struct UBP_GoToTowingMenu_C_Populate_Params
{
	class USQRadialButton*                             Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseRadialMenu_C*                           Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.ExecuteUbergraph_BP_GoToTowingMenu
struct UBP_GoToTowingMenu_C_ExecuteUbergraph_BP_GoToTowingMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
