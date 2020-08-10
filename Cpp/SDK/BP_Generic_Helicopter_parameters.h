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

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Is Using Landing Camera
struct ABP_Generic_Helicopter_C_Is_Using_Landing_Camera_Params
{
	bool                                               Using_Landing_Camera;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Get UI Tint
struct ABP_Generic_Helicopter_C_Get_UI_Tint_Params
{
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetThrottle
struct ABP_Generic_Helicopter_C_GetThrottle_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetVisualCollective
struct ABP_Generic_Helicopter_C_GetVisualCollective_Params
{
	float                                              Collectives;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetMainRotorThrust
struct ABP_Generic_Helicopter_C_GetMainRotorThrust_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetTailRotorThrust
struct ABP_Generic_Helicopter_C_GetTailRotorThrust_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Set UI Enabled
struct ABP_Generic_Helicopter_C_Set_UI_Enabled_Params
{
	bool                                               Enable_UI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoRotors
struct ABP_Generic_Helicopter_C_DoRotors_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnRep_Warning On
struct ABP_Generic_Helicopter_C_OnRep_Warning_On_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoRotationFromRoll
struct ABP_Generic_Helicopter_C_DoRotationFromRoll_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DebugVectorToString
struct ABP_Generic_Helicopter_C_DebugVectorToString_Params
{
	struct FVector                                     Vector;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                digits;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     String;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Manage Landing Camera
struct ABP_Generic_Helicopter_C_Manage_Landing_Camera_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DrawDebugLocation
struct ABP_Generic_Helicopter_C_DrawDebugLocation_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetEngineThrust
struct ABP_Generic_Helicopter_C_GetEngineThrust_Params
{
	float                                              EngineThrust;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CheckPhysics
struct ABP_Generic_Helicopter_C_CheckPhysics_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.IsLanded
struct ABP_Generic_Helicopter_C_IsLanded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoStabilizers
struct ABP_Generic_Helicopter_C_DoStabilizers_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.PilotZoom
struct ABP_Generic_Helicopter_C_PilotZoom_Params
{
	float                                              InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetThrustPower
struct ABP_Generic_Helicopter_C_GetThrustPower_Params
{
	float                                              Thrust;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DebugVariablesMap
struct ABP_Generic_Helicopter_C_DebugVariablesMap_Params
{
	TMap<struct FString, struct FString>               Map;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FColor                                      Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetRotationDiff
struct ABP_Generic_Helicopter_C_GetRotationDiff_Params
{
	struct FRotator                                    NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DrawDebug
struct ABP_Generic_Helicopter_C_DrawDebug_Params
{
	bool                                               Draw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.SetGroundEffect
struct ABP_Generic_Helicopter_C_SetGroundEffect_Params
{
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ResetMovementState
struct ABP_Generic_Helicopter_C_ResetMovementState_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ResetState
struct ABP_Generic_Helicopter_C_ResetState_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetMaxRPM
struct ABP_Generic_Helicopter_C_GetMaxRPM_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.EnablePhysics
struct ABP_Generic_Helicopter_C_EnablePhysics_Params
{
	bool                                               bEnable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.PolishPitchInput
struct ABP_Generic_Helicopter_C_PolishPitchInput_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetDistanceFromTheGround
struct ABP_Generic_Helicopter_C_GetDistanceFromTheGround_Params
{
	float                                              TraceSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GotDistance;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.PolishRollInput
struct ABP_Generic_Helicopter_C_PolishRollInput_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetGradualRotationIncrement
struct ABP_Generic_Helicopter_C_GetGradualRotationIncrement_Params
{
	float                                              Roll;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoRollToYawTransfer
struct ABP_Generic_Helicopter_C_DoRollToYawTransfer_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.DoPushAndBounce
struct ABP_Generic_Helicopter_C_DoPushAndBounce_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddRoll
struct ABP_Generic_Helicopter_C_AddRoll_Params
{
	float                                              Roll_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddPitch
struct ABP_Generic_Helicopter_C_AddPitch_Params
{
	float                                              Pitch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddYaw
struct ABP_Generic_Helicopter_C_AddYaw_Params
{
	float                                              Yaw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CalcBrakebyYaw
struct ABP_Generic_Helicopter_C_CalcBrakebyYaw_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CalcYawResistances
struct ABP_Generic_Helicopter_C_CalcYawResistances_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetVelocityLength
struct ABP_Generic_Helicopter_C_GetVelocityLength_Params
{
	float                                              NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetRollNormalized
struct ABP_Generic_Helicopter_C_GetRollNormalized_Params
{
	float                                              NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.GetPitchNormalized
struct ABP_Generic_Helicopter_C_GetPitchNormalized_Params
{
	float                                              NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CanLand
struct ABP_Generic_Helicopter_C_CanLand_Params
{
	bool                                               CanLand_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CalcCustomVelocity
struct ABP_Generic_Helicopter_C_CalcCustomVelocity_Params
{
	struct FVector                                     Velocity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.AddAcceleration
struct ABP_Generic_Helicopter_C_AddAcceleration_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.UserConstructionScript
struct ABP_Generic_Helicopter_C_UserConstructionScript_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Timeline_2__FinishedFunc
struct ABP_Generic_Helicopter_C_Timeline_2__FinishedFunc_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Timeline_2__UpdateFunc
struct ABP_Generic_Helicopter_C_Timeline_2__UpdateFunc_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__FinishedFunc
struct ABP_Generic_Helicopter_C_Warning_Light_Animation__FinishedFunc_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__UpdateFunc
struct ABP_Generic_Helicopter_C_Warning_Light_Animation__UpdateFunc_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__LightOff__EventFunc
struct ABP_Generic_Helicopter_C_Warning_Light_Animation__LightOff__EventFunc_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Animation__LightOn__EventFunc
struct ABP_Generic_Helicopter_C_Warning_Light_Animation__LightOn__EventFunc_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpActEvt_ToggleView_K2Node_InputActionEvent_2
struct ABP_Generic_Helicopter_C_InpActEvt_ToggleView_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1
struct ABP_Generic_Helicopter_C_InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpActEvt_Y_K2Node_InputKeyEvent_1
struct ABP_Generic_Helicopter_C_InpActEvt_Y_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.LandVehicle
struct ABP_Generic_Helicopter_C_LandVehicle_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.MC_SetLandingState
struct ABP_Generic_Helicopter_C_MC_SetLandingState_Params
{
	bool                                               NewIsLandedState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CheckLiftOff
struct ABP_Generic_Helicopter_C_CheckLiftOff_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.StartCheckLiftOff
struct ABP_Generic_Helicopter_C_StartCheckLiftOff_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ROS_UpdateLandingState
struct ABP_Generic_Helicopter_C_ROS_UpdateLandingState_Params
{
	bool                                               IsLanded_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Acceleration
struct ABP_Generic_Helicopter_C_HandleInput_Acceleration_Params
{
	float                                              AxisInput;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Acceleration_ModifySensitivity
struct ABP_Generic_Helicopter_C_Acceleration_ModifySensitivity_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Yaw
struct ABP_Generic_Helicopter_C_HandleInput_Yaw_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Roll
struct ABP_Generic_Helicopter_C_HandleInput_Roll_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.HandleInput_Pitch
struct ABP_Generic_Helicopter_C_HandleInput_Pitch_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_1
struct ABP_Generic_Helicopter_C_InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_2
struct ABP_Generic_Helicopter_C_InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_3
struct ABP_Generic_Helicopter_C_InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_4
struct ABP_Generic_Helicopter_C_InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveBeginPlay
struct ABP_Generic_Helicopter_C_ReceiveBeginPlay_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceivePossessed
struct ABP_Generic_Helicopter_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ROC_VehiclePosessed
struct ABP_Generic_Helicopter_C_ROC_VehiclePosessed_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveUnpossessed
struct ABP_Generic_Helicopter_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.MC_VehicleUnpossessed
struct ABP_Generic_Helicopter_C_MC_VehicleUnpossessed_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.TurnOnPhysics
struct ABP_Generic_Helicopter_C_TurnOnPhysics_Params
{
	bool                                               IgnoreLandingCheck;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     NewLinearVelocity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewAngularVelocity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveTick
struct ABP_Generic_Helicopter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.BeginPlay_Landing
struct ABP_Generic_Helicopter_C_BeginPlay_Landing_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.CheckIfCanLandVehicle
struct ABP_Generic_Helicopter_C_CheckIfCanLandVehicle_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnEngineActive
struct ABP_Generic_Helicopter_C_OnEngineActive_Params
{
	bool                                               bActive;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.BndEvt__VehicleMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_Generic_Helicopter_C_BndEvt__VehicleMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.InpAxisEvt_VehicleZoom_K2Node_InputAxisEvent_9
struct ABP_Generic_Helicopter_C_InpAxisEvt_VehicleZoom_K2Node_InputAxisEvent_9_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.TickGroundEffect
struct ABP_Generic_Helicopter_C_TickGroundEffect_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.EnteredVehicle
struct ABP_Generic_Helicopter_C_EnteredVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQVehicleSeatComponent*                     NewSeat;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.SwitchedSeat
struct ABP_Generic_Helicopter_C_SwitchedSeat_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQVehicleSeatComponent*                     NewSeat;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnPhysicsReplicated
struct ABP_Generic_Helicopter_C_OnPhysicsReplicated_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Toggle Landing Camera
struct ABP_Generic_Helicopter_C_Toggle_Landing_Camera_Params
{
	bool                                               Condition;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.LeftVehicle
struct ABP_Generic_Helicopter_C_LeftVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Warning Light Anim
struct ABP_Generic_Helicopter_C_Warning_Light_Anim_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ReceiveDestroyed
struct ABP_Generic_Helicopter_C_ReceiveDestroyed_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Start Warning Anim
struct ABP_Generic_Helicopter_C_Start_Warning_Anim_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Stop Warning Anim
struct ABP_Generic_Helicopter_C_Stop_Warning_Anim_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.On Entered Bounds
struct ABP_Generic_Helicopter_C_On_Entered_Bounds_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.On Out of Bounds
struct ABP_Generic_Helicopter_C_On_Out_of_Bounds_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Evaluate Warning
struct ABP_Generic_Helicopter_C_Evaluate_Warning_Params
{
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.Set Landing Camera
struct ABP_Generic_Helicopter_C_Set_Landing_Camera_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.OnFDMImpact
struct ABP_Generic_Helicopter_C_OnFDMImpact_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                              TimeSlice;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     MoveDelta;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Generic_Helicopter.BP_Generic_Helicopter_C.ExecuteUbergraph_BP_Generic_Helicopter
struct ABP_Generic_Helicopter_C_ExecuteUbergraph_BP_Generic_Helicopter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
