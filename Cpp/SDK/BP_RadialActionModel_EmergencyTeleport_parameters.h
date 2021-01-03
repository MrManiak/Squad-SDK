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

// Function BP_RadialActionModel_EmergencyTeleport.BP_RadialActionModel_EmergencyTeleport_C.OnClicked
struct UBP_RadialActionModel_EmergencyTeleport_C_OnClicked_Params
{
	class UBaseRadialMenu_C*                           Radial;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialActionModel_EmergencyTeleport.BP_RadialActionModel_EmergencyTeleport_C.Populate
struct UBP_RadialActionModel_EmergencyTeleport_C_Populate_Params
{
	class USQRadialButton*                             Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseRadialMenu_C*                           Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialActionModel_EmergencyTeleport.BP_RadialActionModel_EmergencyTeleport_C.ExecuteUbergraph_BP_RadialActionModel_EmergencyTeleport
struct UBP_RadialActionModel_EmergencyTeleport_C_ExecuteUbergraph_BP_RadialActionModel_EmergencyTeleport_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
