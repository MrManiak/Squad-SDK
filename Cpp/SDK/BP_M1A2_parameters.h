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

// Function BP_M1A2.BP_M1A2_C.UpdateDamagedTrackVisual
struct ABP_M1A2_C_UpdateDamagedTrackVisual_Params
{
	class UObject*                                     VehicleTrack;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsTrackDestroyed;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowOriginalTrack;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_M1A2.BP_M1A2_C.UpdateTrackMaterial
struct ABP_M1A2_C_UpdateTrackMaterial_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    TrackMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TrackOffset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewUVOffset;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_M1A2.BP_M1A2_C.UserConstructionScript
struct ABP_M1A2_C_UserConstructionScript_Params
{
};

// Function BP_M1A2.BP_M1A2_C.InpActEvt_ToggleView_K2Node_InputActionEvent_1
struct ABP_M1A2_C_InpActEvt_ToggleView_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_M1A2.BP_M1A2_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2
struct ABP_M1A2_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_M1A2.BP_M1A2_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1
struct ABP_M1A2_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_M1A2.BP_M1A2_C.ReceiveTick
struct ABP_M1A2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_M1A2.BP_M1A2_C.ReceiveBeginPlay
struct ABP_M1A2_C_ReceiveBeginPlay_Params
{
};

// Function BP_M1A2.BP_M1A2_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16
struct ABP_M1A2_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_M1A2.BP_M1A2_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18
struct ABP_M1A2_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_M1A2.BP_M1A2_C.DrivetrainComponentRepaired
struct ABP_M1A2_C_DrivetrainComponentRepaired_Params
{
	class USQDriveTrainComponent*                      DriveTrainComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_M1A2.BP_M1A2_C.DrivetrainComponentDestroyed
struct ABP_M1A2_C_DrivetrainComponentDestroyed_Params
{
	class USQDriveTrainComponent*                      DriveTrainComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_M1A2.BP_M1A2_C.Attach CROWS
struct ABP_M1A2_C_Attach_CROWS_Params
{
};

// Function BP_M1A2.BP_M1A2_C.Attach m240
struct ABP_M1A2_C_Attach_m240_Params
{
};

// Function BP_M1A2.BP_M1A2_C.ExecuteUbergraph_BP_M1A2
struct ABP_M1A2_C_ExecuteUbergraph_BP_M1A2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
