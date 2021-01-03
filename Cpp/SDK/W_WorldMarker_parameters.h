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

// Function W_WorldMarker.W_WorldMarker_C.ADS
struct UW_WorldMarker_C_ADS_Params
{
	bool                                               In_ADS;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_WorldMarker.W_WorldMarker_C.Construct
struct UW_WorldMarker_C_Construct_Params
{
};

// Function W_WorldMarker.W_WorldMarker_C.Tick
struct UW_WorldMarker_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_WorldMarker.W_WorldMarker_C.End
struct UW_WorldMarker_C_End_Params
{
};

// Function W_WorldMarker.W_WorldMarker_C.ExecuteUbergraph_W_WorldMarker
struct UW_WorldMarker_C_ExecuteUbergraph_W_WorldMarker_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
