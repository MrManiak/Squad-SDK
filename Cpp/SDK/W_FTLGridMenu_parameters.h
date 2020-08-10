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

// Function W_FTLGridMenu.W_FTLGridMenu_C.Build Grid
struct UW_FTLGridMenu_C_Build_Grid_Params
{
	struct FGeometry                                   In_Geometry;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               In_Mouse_Event;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     Zero_Based_World_Location;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_FTLGridMenu.W_FTLGridMenu_C.Grid Main Action
struct UW_FTLGridMenu_C_Grid_Main_Action_Params
{
};

// Function W_FTLGridMenu.W_FTLGridMenu_C.ExecuteUbergraph_W_FTLGridMenu
struct UW_FTLGridMenu_C_ExecuteUbergraph_W_FTLGridMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
