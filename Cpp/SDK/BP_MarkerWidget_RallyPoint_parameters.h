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

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateRallyPointBrush
struct UBP_MarkerWidget_RallyPoint_C_UpdateRallyPointBrush_Params
{
};

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.OnMouseButtonDoubleClick
struct UBP_MarkerWidget_RallyPoint_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.SelectSpawn
struct UBP_MarkerWidget_RallyPoint_C_SelectSpawn_Params
{
	bool                                               Commit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateSelectVisibility
struct UBP_MarkerWidget_RallyPoint_C_UpdateSelectVisibility_Params
{
};

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.OnMouseButtonDown
struct UBP_MarkerWidget_RallyPoint_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateSquadIDText
struct UBP_MarkerWidget_RallyPoint_C_UpdateSquadIDText_Params
{
};

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.Construct
struct UBP_MarkerWidget_RallyPoint_C_Construct_Params
{
};

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.Tick
struct UBP_MarkerWidget_RallyPoint_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateStateEvent
struct UBP_MarkerWidget_RallyPoint_C_UpdateStateEvent_Params
{
};

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.ExecuteUbergraph_BP_MarkerWidget_RallyPoint
struct UBP_MarkerWidget_RallyPoint_C_ExecuteUbergraph_BP_MarkerWidget_RallyPoint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
