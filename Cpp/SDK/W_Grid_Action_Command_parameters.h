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

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get Action Ready
struct UW_Grid_Action_Command_C_Get_Action_Ready_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get Tooltip
struct UW_Grid_Action_Command_C_Get_Tooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get Color
struct UW_Grid_Action_Command_C_Get_Color_Params
{
	struct FLinearColor                                Tint;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get State
struct UW_Grid_Action_Command_C_Get_State_Params
{
	ESQCommandOptionState                              State;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              State_Time;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              State_Percent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Category_Locked;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Category_Time;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Category_Percent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Construct
struct UW_Grid_Action_Command_C_Construct_Params
{
};

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Refresh Info
struct UW_Grid_Action_Command_C_Refresh_Info_Params
{
};

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Tick
struct UW_Grid_Action_Command_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.PreConstruct
struct UW_Grid_Action_Command_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Action Button Pressed
struct UW_Grid_Action_Command_C_Action_Button_Pressed_Params
{
};

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Fail Message
struct UW_Grid_Action_Command_C_Fail_Message_Params
{
};

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.ExecuteUbergraph_W_Grid_Action_Command
struct UW_Grid_Action_Command_C_ExecuteUbergraph_W_Grid_Action_Command_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
