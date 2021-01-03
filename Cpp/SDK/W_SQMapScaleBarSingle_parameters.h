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

// Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.BarSizeInPixels
struct UW_SQMapScaleBarSingle_C_BarSizeInPixels_Params
{
	float                                              OutWidth;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.Construct
struct UW_SQMapScaleBarSingle_C_Construct_Params
{
};

// Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.UpdateZoom
struct UW_SQMapScaleBarSingle_C_UpdateZoom_Params
{
	float                                              ZoomAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.InitializeScaleBar
struct UW_SQMapScaleBarSingle_C_InitializeScaleBar_Params
{
	float                                              InitialZoomAmount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                                    ZoomLayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C.ExecuteUbergraph_W_SQMapScaleBarSingle
struct UW_SQMapScaleBarSingle_C_ExecuteUbergraph_W_SQMapScaleBarSingle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
