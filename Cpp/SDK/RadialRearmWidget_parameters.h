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

// Function RadialRearmWidget.RadialRearmWidget_C.UpdateBackgroundColors
struct URadialRearmWidget_C_UpdateBackgroundColors_Params
{
	bool                                               CanClick;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsAmmoFull;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RadialRearmWidget.RadialRearmWidget_C.OnMouseButtonDoubleClick
struct URadialRearmWidget_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialRearmWidget.RadialRearmWidget_C.OnPreviewMouseButtonDown
struct URadialRearmWidget_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialRearmWidget.RadialRearmWidget_C.GetMagsToRearmText
struct URadialRearmWidget_C_GetMagsToRearmText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialRearmWidget.RadialRearmWidget_C.BPInit
struct URadialRearmWidget_C_BPInit_Params
{
};

// Function RadialRearmWidget.RadialRearmWidget_C.OnHoverBegin
struct URadialRearmWidget_C_OnHoverBegin_Params
{
};

// Function RadialRearmWidget.RadialRearmWidget_C.UpdateRadialAngle
struct URadialRearmWidget_C_UpdateRadialAngle_Params
{
	float                                              UpdatedAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialRearmWidget.RadialRearmWidget_C.AmmoRemainingUpdated
struct URadialRearmWidget_C_AmmoRemainingUpdated_Params
{
	float                                              AmmoRemaining;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialRearmWidget.RadialRearmWidget_C.SetCenterWidget
struct URadialRearmWidget_C_SetCenterWidget_Params
{
	class URadialCenterRearmButton_C*                  CenterWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialRearmWidget.RadialRearmWidget_C.OnRightClicked
struct URadialRearmWidget_C_OnRightClicked_Params
{
};

// Function RadialRearmWidget.RadialRearmWidget_C.RecalculateCanClick
struct URadialRearmWidget_C_RecalculateCanClick_Params
{
};

// Function RadialRearmWidget.RadialRearmWidget_C.InventoryUpdated
struct URadialRearmWidget_C_InventoryUpdated_Params
{
};

// Function RadialRearmWidget.RadialRearmWidget_C.Destruct
struct URadialRearmWidget_C_Destruct_Params
{
};

// Function RadialRearmWidget.RadialRearmWidget_C.ExecuteUbergraph_RadialRearmWidget
struct URadialRearmWidget_C_ExecuteUbergraph_RadialRearmWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
