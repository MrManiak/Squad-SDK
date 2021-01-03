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

// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Setup Fill Image
struct UW_DestructionObjectiveEvent_C_Setup_Fill_Image_Params
{
};

// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Play Destroy Animation
struct UW_DestructionObjectiveEvent_C_Play_Destroy_Animation_Params
{
	unsigned char                                      Objective_Owner;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Tick
struct UW_DestructionObjectiveEvent_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Construct
struct UW_DestructionObjectiveEvent_C_Construct_Params
{
};

// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.ExecuteUbergraph_W_DestructionObjectiveEvent
struct UW_DestructionObjectiveEvent_C_ExecuteUbergraph_W_DestructionObjectiveEvent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
