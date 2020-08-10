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

// Function W_CommandActionItem.W_CommandActionItem_C.Remove Other Pending Actions
struct UW_CommandActionItem_C_Remove_Other_Pending_Actions_Params
{
};

// Function W_CommandActionItem.W_CommandActionItem_C.Get Pre Placement Widget
struct UW_CommandActionItem_C_Get_Pre_Placement_Widget_Params
{
	class UW_CommandPrePlacement_C*                    Widget;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionItem.W_CommandActionItem_C.Auto Spawn Action
struct UW_CommandActionItem_C_Auto_Spawn_Action_Params
{
};

// Function W_CommandActionItem.W_CommandActionItem_C.Get Traced Map Location
struct UW_CommandActionItem_C_Get_Traced_Map_Location_Params
{
	struct FVector                                     Zero;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Local;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionItem.W_CommandActionItem_C.Get Tooltip Widget
struct UW_CommandActionItem_C_Get_Tooltip_Widget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionItem.W_CommandActionItem_C.Get Category Cooldown
struct UW_CommandActionItem_C_Get_Category_Cooldown_Params
{
	bool                                               Locked;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Remaining;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionItem.W_CommandActionItem_C.Get State
struct UW_CommandActionItem_C_Get_State_Params
{
	ESQCommandOptionState                              State;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              State_Time;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              State_Percent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Locked;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Category_Time;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Category_Percent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionItem.W_CommandActionItem_C.Update Color
struct UW_CommandActionItem_C_Update_Color_Params
{
	bool                                               Faded;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CommandActionItem.W_CommandActionItem_C.Update State
struct UW_CommandActionItem_C_Update_State_Params
{
};

// Function W_CommandActionItem.W_CommandActionItem_C.Tick
struct UW_CommandActionItem_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionItem.W_CommandActionItem_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_CommandActionItem_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_CommandActionItem.W_CommandActionItem_C.Construct
struct UW_CommandActionItem_C_Construct_Params
{
};

// Function W_CommandActionItem.W_CommandActionItem_C.Event Control Widget
struct UW_CommandActionItem_C_Event_Control_Widget_Params
{
	class UW_Command_ActionControl_C*                  Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionItem.W_CommandActionItem_C.Start Button Cooldown
struct UW_CommandActionItem_C_Start_Button_Cooldown_Params
{
};

// Function W_CommandActionItem.W_CommandActionItem_C.Fail Message
struct UW_CommandActionItem_C_Fail_Message_Params
{
};

// Function W_CommandActionItem.W_CommandActionItem_C.ExecuteUbergraph_W_CommandActionItem
struct UW_CommandActionItem_C_ExecuteUbergraph_W_CommandActionItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionItem.W_CommandActionItem_C.Created Control Widget__DelegateSignature
struct UW_CommandActionItem_C_Created_Control_Widget__DelegateSignature_Params
{
	class UW_Command_ActionControl_C*                  Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionItem.W_CommandActionItem_C.Clicked__DelegateSignature
struct UW_CommandActionItem_C_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
