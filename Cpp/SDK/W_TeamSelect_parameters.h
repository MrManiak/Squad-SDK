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

// Function W_TeamSelect.W_TeamSelect_C.Set Arrow Visibility
struct UW_TeamSelect_C_Set_Arrow_Visibility_Params
{
	bool                                               Arrow_left;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Arrow_Right;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_TeamSelect.W_TeamSelect_C.Get Map Info
struct UW_TeamSelect_C_Get_Map_Info_Params
{
};

// Function W_TeamSelect.W_TeamSelect_C.BIND - Map and Mode
struct UW_TeamSelect_C_BIND___Map_and_Mode_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_TeamSelect.W_TeamSelect_C.BIND - Server Message
struct UW_TeamSelect_C_BIND___Server_Message_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_TeamSelect.W_TeamSelect_C.BndEvt__TeamInfo_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_TeamSelect_C_BndEvt__TeamInfo_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
	class ASQTeamState*                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TeamSelect.W_TeamSelect_C.BndEvt__TeamInfo_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_TeamSelect_C_BndEvt__TeamInfo_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
	class ASQTeamState*                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TeamSelect.W_TeamSelect_C.BndEvt__Nav_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UW_TeamSelect_C_BndEvt__Nav_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TeamSelect.W_TeamSelect_C.BndEvt__Nav_Server_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UW_TeamSelect_C_BndEvt__Nav_Server_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TeamSelect.W_TeamSelect_C.Set Navigation
struct UW_TeamSelect_C_Set_Navigation_Params
{
	class UObject*                                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TeamSelect.W_TeamSelect_C.Construct
struct UW_TeamSelect_C_Construct_Params
{
};

// Function W_TeamSelect.W_TeamSelect_C.Enable Selection
struct UW_TeamSelect_C_Enable_Selection_Params
{
};

// Function W_TeamSelect.W_TeamSelect_C.Refresh
struct UW_TeamSelect_C_Refresh_Params
{
};

// Function W_TeamSelect.W_TeamSelect_C.BndEvt__LeftHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UW_TeamSelect_C_BndEvt__LeftHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_TeamSelect.W_TeamSelect_C.BndEvt__RightHover_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UW_TeamSelect_C_BndEvt__RightHover_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_TeamSelect.W_TeamSelect_C.BndEvt__Centre_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UW_TeamSelect_C_BndEvt__Centre_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_TeamSelect.W_TeamSelect_C.Set Box Widths
struct UW_TeamSelect_C_Set_Box_Widths_Params
{
	float                                              Left;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Right;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TeamSelect.W_TeamSelect_C.Tick
struct UW_TeamSelect_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TeamSelect.W_TeamSelect_C.Reset Hover
struct UW_TeamSelect_C_Reset_Hover_Params
{
};

// Function W_TeamSelect.W_TeamSelect_C.ExecuteUbergraph_W_TeamSelect
struct UW_TeamSelect_C_ExecuteUbergraph_W_TeamSelect_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TeamSelect.W_TeamSelect_C.Team Button Pressed__DelegateSignature
struct UW_TeamSelect_C_Team_Button_Pressed__DelegateSignature_Params
{
	class ASQTeamState*                                New_Team;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
