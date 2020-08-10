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

// Function BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C.CanClick
struct UBP_BackToPreviousMenuAction_C_CanClick_Params
{
	class APlayerController*                           Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_RadialItemModel_C*                       Model;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanClick;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C.OnClicked
struct UBP_BackToPreviousMenuAction_C_OnClicked_Params
{
	class UBaseRadialMenu_C*                           Raidal_Menu;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C.ExecuteUbergraph_BP_BackToPreviousMenuAction
struct UBP_BackToPreviousMenuAction_C_ExecuteUbergraph_BP_BackToPreviousMenuAction_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
