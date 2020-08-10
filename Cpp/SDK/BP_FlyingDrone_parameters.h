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

// Function BP_FlyingDrone.BP_FlyingDrone_C.Check Owner Death
struct ABP_FlyingDrone_C_Check_Owner_Death_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.Update Zoom
struct ABP_FlyingDrone_C_Update_Zoom_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.Add Zoom Delta
struct ABP_FlyingDrone_C_Add_Zoom_Delta_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.Set Can Increase Altitude
struct ABP_FlyingDrone_C_Set_Can_Increase_Altitude_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.Update Relative Rotation
struct ABP_FlyingDrone_C_Update_Relative_Rotation_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.InpActEvt_Interact_K2Node_InputActionEvent_2
struct ABP_FlyingDrone_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.InpActEvt_LeanLeft_K2Node_InputActionEvent_1
struct ABP_FlyingDrone_C_InpActEvt_LeanLeft_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_2
struct ABP_FlyingDrone_C_InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_3
struct ABP_FlyingDrone_C_InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_4
struct ABP_FlyingDrone_C_InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_5
struct ABP_FlyingDrone_C_InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.ReceiveTick
struct ABP_FlyingDrone_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.ReceiveBeginPlay
struct ABP_FlyingDrone_C_ReceiveBeginPlay_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health Zero__DelegateSignature
struct ABP_FlyingDrone_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health_Zero__DelegateSignature_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.Multicast Destroy
struct ABP_FlyingDrone_C_Multicast_Destroy_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_AircraftUp_K2Node_InputAxisEvent_1
struct ABP_FlyingDrone_C_InpAxisEvt_AircraftUp_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.Server Die
struct ABP_FlyingDrone_C_Server_Die_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.End Flight
struct ABP_FlyingDrone_C_End_Flight_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.Server Unpossess
struct ABP_FlyingDrone_C_Server_Unpossess_Params
{
	bool                                               Remove;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.ReceivePossessed
struct ABP_FlyingDrone_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.On Possess
struct ABP_FlyingDrone_C_On_Possess_Params
{
	struct FRotator                                    NewRotation;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.ReceiveUnpossessed
struct ABP_FlyingDrone_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.On Depossess
struct ABP_FlyingDrone_C_On_Depossess_Params
{
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.Kit Changed
struct ABP_FlyingDrone_C_Kit_Changed_Params
{
	class USQRoleSettings*                             CurrentRole;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
struct ABP_FlyingDrone_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_FlyingDrone.BP_FlyingDrone_C.ExecuteUbergraph_BP_FlyingDrone
struct ABP_FlyingDrone_C_ExecuteUbergraph_BP_FlyingDrone_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
