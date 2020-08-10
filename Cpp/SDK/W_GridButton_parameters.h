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

// Function W_GridButton.W_GridButton_C.Get Text
struct UW_GridButton_C_Get_Text_Params
{
	struct FText                                       Text;                                                      // (Parm, OutParm)
};

// Function W_GridButton.W_GridButton_C.Get Squad ID
struct UW_GridButton_C_Get_Squad_ID_Params
{
	int                                                ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridButton.W_GridButton_C.Get Color
struct UW_GridButton_C_Get_Color_Params
{
	struct FLinearColor                                Icon_Color;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridButton.W_GridButton_C.Draw List
struct UW_GridButton_C_Draw_List_Params
{
};

// Function W_GridButton.W_GridButton_C.Get Fireteam ID
struct UW_GridButton_C_Get_Fireteam_ID_Params
{
	int                                                ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridButton.W_GridButton_C.Get_Button_Main_ToolTipWidget_1
struct UW_GridButton_C_Get_Button_Main_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridButton.W_GridButton_C.Close Actions
struct UW_GridButton_C_Close_Actions_Params
{
};

// Function W_GridButton.W_GridButton_C.Show Actions
struct UW_GridButton_C_Show_Actions_Params
{
};

// Function W_GridButton.W_GridButton_C.Update Appearance
struct UW_GridButton_C_Update_Appearance_Params
{
};

// Function W_GridButton.W_GridButton_C.PreConstruct
struct UW_GridButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_GridButton.W_GridButton_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UW_GridButton_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_GridButton.W_GridButton_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UW_GridButton_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GridButton.W_GridButton_C.Grid Button Pressed
struct UW_GridButton_C_Grid_Button_Pressed_Params
{
};

// Function W_GridButton.W_GridButton_C.ExecuteUbergraph_W_GridButton
struct UW_GridButton_C_ExecuteUbergraph_W_GridButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
