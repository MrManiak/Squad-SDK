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

// Function BP_ControlledCamera.BP_ControlledCamera_C.Can Become View Target
struct ABP_ControlledCamera_C_Can_Become_View_Target_Params
{
	bool                                               Can_View;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Init Camera
struct ABP_ControlledCamera_C_Init_Camera_Params
{
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Check Soldier Wound
struct ABP_ControlledCamera_C_Check_Soldier_Wound_Params
{
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Create Stabilisation Point
struct ABP_ControlledCamera_C_Create_Stabilisation_Point_Params
{
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Update Follow
struct ABP_ControlledCamera_C_Update_Follow_Params
{
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Find Vehicle
struct ABP_ControlledCamera_C_Find_Vehicle_Params
{
	bool                                               Found_Vehicle;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Update Zoom
struct ABP_ControlledCamera_C_Update_Zoom_Params
{
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Clamp Camera Rotation
struct ABP_ControlledCamera_C_Clamp_Camera_Rotation_Params
{
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Add Camera Movement
struct ABP_ControlledCamera_C_Add_Camera_Movement_Params
{
	float                                              X_Delta;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y_Delta;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Add Zoom Delta
struct ABP_ControlledCamera_C_Add_Zoom_Delta_Params
{
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_LeanLeft_K2Node_InputActionEvent_5
struct ABP_ControlledCamera_C_InpActEvt_LeanLeft_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_Sprint_K2Node_InputActionEvent_4
struct ABP_ControlledCamera_C_InpActEvt_Sprint_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_Sprint_K2Node_InputActionEvent_3
struct ABP_ControlledCamera_C_InpActEvt_Sprint_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_ToggleStabilization_K2Node_InputActionEvent_2
struct ABP_ControlledCamera_C_InpActEvt_ToggleStabilization_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_Interact_K2Node_InputActionEvent_1
struct ABP_ControlledCamera_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct ABP_ControlledCamera_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
struct ABP_ControlledCamera_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.ReceiveTick
struct ABP_ControlledCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.ReceiveBeginPlay
struct ABP_ControlledCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Toggle View
struct ABP_ControlledCamera_C_Toggle_View_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.K2_OnBecomeViewTarget
struct ABP_ControlledCamera_C_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.K2_OnEndViewTarget
struct ABP_ControlledCamera_C_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Disable Cam
struct ABP_ControlledCamera_C_Disable_Cam_Params
{
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.ExecuteUbergraph_BP_ControlledCamera
struct ABP_ControlledCamera_C_ExecuteUbergraph_BP_ControlledCamera_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ControlledCamera.BP_ControlledCamera_C.Created Button__DelegateSignature
struct ABP_ControlledCamera_C_Created_Button__DelegateSignature_Params
{
	class UW_CamControlButton_C*                       Cam_Button;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
