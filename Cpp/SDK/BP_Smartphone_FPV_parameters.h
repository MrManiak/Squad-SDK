#pragma once

// Name: S, Version: b

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

// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.Control Drone UI
struct ABP_Smartphone_FPV_C_Control_Drone_UI_Params
{
};

// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.BlueprintOnUnequip
struct ABP_Smartphone_FPV_C_BlueprintOnUnequip_Params
{
};

// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.BlueprintOnZoom
struct ABP_Smartphone_FPV_C_BlueprintOnZoom_Params
{
	bool                                               bNewZoom;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.ReceiveTick
struct ABP_Smartphone_FPV_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.Server Possess Drone
struct ABP_Smartphone_FPV_C_Server_Possess_Drone_Params
{
	bool                                               Possess;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.ReceiveBeginPlay
struct ABP_Smartphone_FPV_C_ReceiveBeginPlay_Params
{
};

// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.BlueprintOnEquip
struct ABP_Smartphone_FPV_C_BlueprintOnEquip_Params
{
};

// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.Init
struct ABP_Smartphone_FPV_C_Init_Params
{
	class ABP_FlyingDrone_C*                           My_Drone;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Action;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.ExecuteUbergraph_BP_Smartphone_FPV
struct ABP_Smartphone_FPV_C_ExecuteUbergraph_BP_Smartphone_FPV_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
