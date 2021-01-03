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

// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.InitializeMap
struct UW_Helicopter_MiniMap_C_InitializeMap_Params
{
	class ASQHelicopter2*                              OwningVehicle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.Tick
struct UW_Helicopter_MiniMap_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.PlayOpenAnim
struct UW_Helicopter_MiniMap_C_PlayOpenAnim_Params
{
};

// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.FinishOpen
struct UW_Helicopter_MiniMap_C_FinishOpen_Params
{
};

// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.PlayCloseAnim
struct UW_Helicopter_MiniMap_C_PlayCloseAnim_Params
{
};

// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.Get World
struct UW_Helicopter_MiniMap_C_Get_World_Params
{
};

// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.ExecuteUbergraph_W_Helicopter_MiniMap
struct UW_Helicopter_MiniMap_C_ExecuteUbergraph_W_Helicopter_MiniMap_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
