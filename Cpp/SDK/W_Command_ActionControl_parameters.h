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

// Function W_Command_ActionControl.W_Command_ActionControl_C.Create Accept Deny
struct UW_Command_ActionControl_C_Create_Accept_Deny_Params
{
};

// Function W_Command_ActionControl.W_Command_ActionControl_C.Get Pixel Distance
struct UW_Command_ActionControl_C_Get_Pixel_Distance_Params
{
	float                                              distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Command_ActionControl.W_Command_ActionControl_C.Get World Distance
struct UW_Command_ActionControl_C_Get_World_Distance_Params
{
	float                                              World_Distance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Command_ActionControl.W_Command_ActionControl_C.Get Angle
struct UW_Command_ActionControl_C_Get_Angle_Params
{
	float                                              Widget_Angle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    World_Rotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Command_ActionControl.W_Command_ActionControl_C.Construct
struct UW_Command_ActionControl_C_Construct_Params
{
};

// Function W_Command_ActionControl.W_Command_ActionControl_C.Remove
struct UW_Command_ActionControl_C_Remove_Params
{
};

// Function W_Command_ActionControl.W_Command_ActionControl_C.Destruct
struct UW_Command_ActionControl_C_Destruct_Params
{
};

// Function W_Command_ActionControl.W_Command_ActionControl_C.On Map Mouse Down
struct UW_Command_ActionControl_C_On_Map_Mouse_Down_Params
{
	struct FPointerEvent                               Mouse_Event;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     World_Location;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Command_ActionControl.W_Command_ActionControl_C.Add Self to Canvas
struct UW_Command_ActionControl_C_Add_Self_to_Canvas_Params
{
};

// Function W_Command_ActionControl.W_Command_ActionControl_C.ExecuteUbergraph_W_Command_ActionControl
struct UW_Command_ActionControl_C_ExecuteUbergraph_W_Command_ActionControl_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Command_ActionControl.W_Command_ActionControl_C.Placement Complete__DelegateSignature
struct UW_Command_ActionControl_C_Placement_Complete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
