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

// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.RemoveWidget
struct UBP_MarkerWidget_SpawnPoint_C_RemoveWidget_Params
{
};

// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.OnMouseButtonDoubleClick
struct UBP_MarkerWidget_SpawnPoint_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.DoSelect
struct UBP_MarkerWidget_SpawnPoint_C_DoSelect_Params
{
	bool                                               bNewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.HandleDelete
struct UBP_MarkerWidget_SpawnPoint_C_HandleDelete_Params
{
};

// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.SelfTick
struct UBP_MarkerWidget_SpawnPoint_C_SelfTick_Params
{
};

// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.Handle_Select
struct UBP_MarkerWidget_SpawnPoint_C_Handle_Select_Params
{
};

// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.OnMouseButtonDown
struct UBP_MarkerWidget_SpawnPoint_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.Construct
struct UBP_MarkerWidget_SpawnPoint_C_Construct_Params
{
};

// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.ExecuteUbergraph_BP_MarkerWidget_SpawnPoint
struct UBP_MarkerWidget_SpawnPoint_C_ExecuteUbergraph_BP_MarkerWidget_SpawnPoint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
