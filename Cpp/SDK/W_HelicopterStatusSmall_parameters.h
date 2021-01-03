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

// Function W_HelicopterStatusSmall.W_HelicopterStatusSmall_C.Update Tail Rotor State
struct UW_HelicopterStatusSmall_C_Update_Tail_Rotor_State_Params
{
};

// Function W_HelicopterStatusSmall.W_HelicopterStatusSmall_C.Get Specific Blades
struct UW_HelicopterStatusSmall_C_Get_Specific_Blades_Params
{
	bool                                               Main;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USQRotorBladesComponent*                     Rotor;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HelicopterStatusSmall.W_HelicopterStatusSmall_C.Update Main Rotor State
struct UW_HelicopterStatusSmall_C_Update_Main_Rotor_State_Params
{
};

// Function W_HelicopterStatusSmall.W_HelicopterStatusSmall_C.Update Engine State
struct UW_HelicopterStatusSmall_C_Update_Engine_State_Params
{
};

// Function W_HelicopterStatusSmall.W_HelicopterStatusSmall_C.Get Helicopter
struct UW_HelicopterStatusSmall_C_Get_Helicopter_Params
{
};

// Function W_HelicopterStatusSmall.W_HelicopterStatusSmall_C.Construct
struct UW_HelicopterStatusSmall_C_Construct_Params
{
};

// Function W_HelicopterStatusSmall.W_HelicopterStatusSmall_C.Refresh Vehicle
struct UW_HelicopterStatusSmall_C_Refresh_Vehicle_Params
{
};

// Function W_HelicopterStatusSmall.W_HelicopterStatusSmall_C.Tick
struct UW_HelicopterStatusSmall_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HelicopterStatusSmall.W_HelicopterStatusSmall_C.ExecuteUbergraph_W_HelicopterStatusSmall
struct UW_HelicopterStatusSmall_C_ExecuteUbergraph_W_HelicopterStatusSmall_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
