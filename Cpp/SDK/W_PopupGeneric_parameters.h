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

// Function W_PopupGeneric.W_PopupGeneric_C.OnMouseButtonUp
struct UW_PopupGeneric_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_PopupGeneric.W_PopupGeneric_C.Setup Dragging
struct UW_PopupGeneric_C_Setup_Dragging_Params
{
	bool                                               Can_Drag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PopupGeneric.W_PopupGeneric_C.OnDragDetected
struct UW_PopupGeneric_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PopupGeneric.W_PopupGeneric_C.OnMouseButtonDown
struct UW_PopupGeneric_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_PopupGeneric.W_PopupGeneric_C.PreConstruct
struct UW_PopupGeneric_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PopupGeneric.W_PopupGeneric_C.Construct
struct UW_PopupGeneric_C_Construct_Params
{
};

// Function W_PopupGeneric.W_PopupGeneric_C.Tick
struct UW_PopupGeneric_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PopupGeneric.W_PopupGeneric_C.OnDragCancelled
struct UW_PopupGeneric_C_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PopupGeneric.W_PopupGeneric_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_PopupGeneric_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PopupGeneric.W_PopupGeneric_C.Reset
struct UW_PopupGeneric_C_Reset_Params
{
};

// Function W_PopupGeneric.W_PopupGeneric_C.Destruct
struct UW_PopupGeneric_C_Destruct_Params
{
};

// Function W_PopupGeneric.W_PopupGeneric_C.Clear
struct UW_PopupGeneric_C_Clear_Params
{
};

// Function W_PopupGeneric.W_PopupGeneric_C.ExecuteUbergraph_W_PopupGeneric
struct UW_PopupGeneric_C_ExecuteUbergraph_W_PopupGeneric_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PopupGeneric.W_PopupGeneric_C.Removed__DelegateSignature
struct UW_PopupGeneric_C_Removed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
