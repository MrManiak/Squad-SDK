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

// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.Is Faded
struct UW_SupplyRadialEntry_C_Is_Faded_Params
{
	bool                                               Faded;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.Is Soldier Alive
struct UW_SupplyRadialEntry_C_Is_Soldier_Alive_Params
{
	bool                                               Alive;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.Validate Resources
struct UW_SupplyRadialEntry_C_Validate_Resources_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.UpdateActiveState
struct UW_SupplyRadialEntry_C_UpdateActiveState_Params
{
};

// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.OnHoverEnd
struct UW_SupplyRadialEntry_C_OnHoverEnd_Params
{
};

// Function W_SupplyRadialEntry.W_SupplyRadialEntry_C.ExecuteUbergraph_W_SupplyRadialEntry
struct UW_SupplyRadialEntry_C_ExecuteUbergraph_W_SupplyRadialEntry_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
