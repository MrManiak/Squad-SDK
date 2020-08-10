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

// Function ServerListItem.ServerListItem_C.Toggle Favourite
struct UServerListItem_C_Toggle_Favourite_Params
{
};

// Function ServerListItem.ServerListItem_C.GetFavouriteColor
struct UServerListItem_C_GetFavouriteColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerListItem.ServerListItem_C.TooltipFavourite
struct UServerListItem_C_TooltipFavourite_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerListItem.ServerListItem_C.TooltipVAC
struct UServerListItem_C_TooltipVAC_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerListItem.ServerListItem_C.TooltipLocked
struct UServerListItem_C_TooltipLocked_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerListItem.ServerListItem_C.TooltipModIcon
struct UServerListItem_C_TooltipModIcon_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerListItem.ServerListItem_C.OnMouseButtonDown
struct UServerListItem_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ServerListItem.ServerListItem_C.OnMouseButtonDoubleClick
struct UServerListItem_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ServerListItem.ServerListItem_C.Get_Modded_Icon_Color
struct UServerListItem_C_Get_Modded_Icon_Color_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerListItem.ServerListItem_C.Is Modded
struct UServerListItem_C_Is_Modded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerListItem.ServerListItem_C.Is Whitelisted
struct UServerListItem_C_Is_Whitelisted_Params
{
	bool                                               Is_Whitelisted;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ServerListItem.ServerListItem_C.Set Friend Count
struct UServerListItem_C_Set_Friend_Count_Params
{
};

// Function ServerListItem.ServerListItem_C.Get_ImageHealth_ToolTipWidget_1
struct UServerListItem_C_Get_ImageHealth_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerListItem.ServerListItem_C.IsJoinServer
struct UServerListItem_C_IsJoinServer_Params
{
	bool                                               selected;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ServerListItem.ServerListItem_C.Get Queue Object
struct UServerListItem_C_Get_Queue_Object_Params
{
	bool                                               In_Queue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ServerListItem.ServerListItem_C.UpdatePlayerCounts
struct UServerListItem_C_UpdatePlayerCounts_Params
{
};

// Function ServerListItem.ServerListItem_C.IsSelected
struct UServerListItem_C_IsSelected_Params
{
	bool                                               selected;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ServerListItem.ServerListItem_C.Get Main Color
struct UServerListItem_C_Get_Main_Color_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerListItem.ServerListItem_C.Init
struct UServerListItem_C_Init_Params
{
};

// Function ServerListItem.ServerListItem_C.ClientJoinAccepted
struct UServerListItem_C_ClientJoinAccepted_Params
{
};

// Function ServerListItem.ServerListItem_C.Construct
struct UServerListItem_C_Construct_Params
{
};

// Function ServerListItem.ServerListItem_C.Marquee
struct UServerListItem_C_Marquee_Params
{
};

// Function ServerListItem.ServerListItem_C.Finished Refresh_Event_1
struct UServerListItem_C_Finished_Refresh_Event_1_Params
{
};

// Function ServerListItem.ServerListItem_C.OnMouseEnter
struct UServerListItem_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ServerListItem.ServerListItem_C.Start Marquee
struct UServerListItem_C_Start_Marquee_Params
{
};

// Function ServerListItem.ServerListItem_C.Tick
struct UServerListItem_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerListItem.ServerListItem_C.BndEvt__Button_Fave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UServerListItem_C_BndEvt__Button_Fave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerListItem.ServerListItem_C.ExecuteUbergraph_ServerListItem
struct UServerListItem_C_ExecuteUbergraph_ServerListItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerListItem.ServerListItem_C.RequestJoin__DelegateSignature
struct UServerListItem_C_RequestJoin__DelegateSignature_Params
{
	class UServerListItem_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
