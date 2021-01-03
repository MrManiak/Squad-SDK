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

// Function W_SQMapScaleBars.W_SQMapScaleBars_C.InitializeScaleBars
struct UW_SQMapScaleBars_C_InitializeScaleBars_Params
{
	float                                              InitialZoom;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                                    ZoomLayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapScaleBars.W_SQMapScaleBars_C.UpdateZoom
struct UW_SQMapScaleBars_C_UpdateZoom_Params
{
	float                                              ZoomAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapScaleBars.W_SQMapScaleBars_C.ExecuteUbergraph_W_SQMapScaleBars
struct UW_SQMapScaleBars_C_ExecuteUbergraph_W_SQMapScaleBars_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
