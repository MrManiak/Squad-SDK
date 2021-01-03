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

// Function W_DragDropFireteamSlot.W_DragDropFireteamSlot_C.OnDrop
struct UW_DragDropFireteamSlot_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_DragDropFireteamSlot.W_DragDropFireteamSlot_C.Construct
struct UW_DragDropFireteamSlot_C_Construct_Params
{
};

// Function W_DragDropFireteamSlot.W_DragDropFireteamSlot_C.OnDragLeave
struct UW_DragDropFireteamSlot_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DragDropFireteamSlot.W_DragDropFireteamSlot_C.OnDragEnter
struct UW_DragDropFireteamSlot_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DragDropFireteamSlot.W_DragDropFireteamSlot_C.Refresh Text
struct UW_DragDropFireteamSlot_C_Refresh_Text_Params
{
};

// Function W_DragDropFireteamSlot.W_DragDropFireteamSlot_C.PreConstruct
struct UW_DragDropFireteamSlot_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_DragDropFireteamSlot.W_DragDropFireteamSlot_C.ExecuteUbergraph_W_DragDropFireteamSlot
struct UW_DragDropFireteamSlot_C_ExecuteUbergraph_W_DragDropFireteamSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
