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

// Function BP_minsk.BP_minsk_C.UpdateDamageWheelVisual
struct ABP_minsk_C_UpdateDamageWheelVisual_Params
{
	struct FName                                       Bone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Destroyed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USQVehicleWheel*                             Wheel;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Do_Effects;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_minsk.BP_minsk_C.UserConstructionScript
struct ABP_minsk_C_UserConstructionScript_Params
{
};

// Function BP_minsk.BP_minsk_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2
struct ABP_minsk_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_minsk.BP_minsk_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1
struct ABP_minsk_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_minsk.BP_minsk_C.InpActEvt_ToggleView_K2Node_InputActionEvent_1
struct ABP_minsk_C_InpActEvt_ToggleView_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_minsk.BP_minsk_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18
struct ABP_minsk_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_minsk.BP_minsk_C.EnteredVehicle
struct ABP_minsk_C_EnteredVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQVehicleSeatComponent*                     NewSeat;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_minsk.BP_minsk_C.LeftVehicle
struct ABP_minsk_C_LeftVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_minsk.BP_minsk_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16
struct ABP_minsk_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_minsk.BP_minsk_C.SwitchedSeat
struct ABP_minsk_C_SwitchedSeat_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQVehicleSeatComponent*                     NewSeat;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_minsk.BP_minsk_C.ReceiveBeginPlay
struct ABP_minsk_C_ReceiveBeginPlay_Params
{
};

// Function BP_minsk.BP_minsk_C.DrivetrainComponentDestroyed
struct ABP_minsk_C_DrivetrainComponentDestroyed_Params
{
	class USQDriveTrainComponent*                      DriveTrainComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_minsk.BP_minsk_C.DrivetrainComponentRepaired
struct ABP_minsk_C_DrivetrainComponentRepaired_Params
{
	class USQDriveTrainComponent*                      DriveTrainComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_minsk.BP_minsk_C.ExecuteUbergraph_BP_minsk
struct ABP_minsk_C_ExecuteUbergraph_BP_minsk_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
