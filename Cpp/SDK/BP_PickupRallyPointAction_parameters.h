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

// Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.Player Enter Radius
struct UBP_PickupRallyPointAction_C_Player_Enter_Radius_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_Pickup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.Player Left Radius
struct UBP_PickupRallyPointAction_C_Player_Left_Radius_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.Pickup Item
struct UBP_PickupRallyPointAction_C_Pickup_Item_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.OnClicked
struct UBP_PickupRallyPointAction_C_OnClicked_Params
{
	class UBaseRadialMenu_C*                           Raidal_Menu;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.ExecuteUbergraph_BP_PickupRallyPointAction
struct UBP_PickupRallyPointAction_C_ExecuteUbergraph_BP_PickupRallyPointAction_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
