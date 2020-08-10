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

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Cache Local World Location
struct UW_CommandPrePlacement_C_Cache_Local_World_Location_Params
{
};

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Get Traced Map Location
struct UW_CommandPrePlacement_C_Get_Traced_Map_Location_Params
{
	struct FVector                                     Zero;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Local;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Set Action
struct UW_CommandPrePlacement_C_Set_Action_Params
{
	class UClass*                                      SQAction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Construct
struct UW_CommandPrePlacement_C_Construct_Params
{
};

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Tick
struct UW_CommandPrePlacement_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.On Map Mouse Down
struct UW_CommandPrePlacement_C_On_Map_Mouse_Down_Params
{
	struct FPointerEvent                               Mouse_Event;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     World_Location;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Reset Use
struct UW_CommandPrePlacement_C_Reset_Use_Params
{
};

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.ExecuteUbergraph_W_CommandPrePlacement
struct UW_CommandPrePlacement_C_ExecuteUbergraph_W_CommandPrePlacement_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Created Command Control Widget__DelegateSignature
struct UW_CommandPrePlacement_C_Created_Command_Control_Widget__DelegateSignature_Params
{
	class UW_Command_ActionControl_C*                  Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
