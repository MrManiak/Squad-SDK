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

// Function M1a2_Ammocook.M1a2_Ammocook_C.ReceiveBeginPlay
struct AM1a2_Ammocook_C_ReceiveBeginPlay_Params
{
};

// Function M1a2_Ammocook.M1a2_Ammocook_C.OnBeginDestroyedVehicle
struct AM1a2_Ammocook_C_OnBeginDestroyedVehicle_Params
{
};

// Function M1a2_Ammocook.M1a2_Ammocook_C.BndEvt__Turret_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct AM1a2_Ammocook_C_BndEvt__Turret_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function M1a2_Ammocook.M1a2_Ammocook_C.ExecuteUbergraph_M1a2_Ammocook
struct AM1a2_Ammocook_C_ExecuteUbergraph_M1a2_Ammocook_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
