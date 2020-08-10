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

// Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.Is Soldier Alive
struct UBP_RadialActionModel_ControlSupplies_C_Is_Soldier_Alive_Params
{
	class AController*                                 Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Alive;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.Validate Logistics
struct UBP_RadialActionModel_ControlSupplies_C_Validate_Logistics_Params
{
	class UBaseRadialMenu_C*                           Radial;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Valid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.OnClicked
struct UBP_RadialActionModel_ControlSupplies_C_OnClicked_Params
{
	class UBaseRadialMenu_C*                           Radial;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.OnReleased
struct UBP_RadialActionModel_ControlSupplies_C_OnReleased_Params
{
	class UBaseRadialMenu_C*                           Radial;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.ExecuteUbergraph_BP_RadialActionModel_ControlSupplies
struct UBP_RadialActionModel_ControlSupplies_C_ExecuteUbergraph_BP_RadialActionModel_ControlSupplies_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
