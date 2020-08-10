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

// Function W_SQMapGridLines.W_SQMapGridLines_C.InitializeTexture
struct UW_SQMapGridLines_C_InitializeTexture_Params
{
	struct FVector2D                                   GridNumbers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingZoom;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapGridLines.W_SQMapGridLines_C.UpdateZoom
struct UW_SQMapGridLines_C_UpdateZoom_Params
{
	float                                              ZoomAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapGridLines.W_SQMapGridLines_C.Update Grid Opacity
struct UW_SQMapGridLines_C_Update_Grid_Opacity_Params
{
};

// Function W_SQMapGridLines.W_SQMapGridLines_C.Construct
struct UW_SQMapGridLines_C_Construct_Params
{
};

// Function W_SQMapGridLines.W_SQMapGridLines_C.ExecuteUbergraph_W_SQMapGridLines
struct UW_SQMapGridLines_C_ExecuteUbergraph_W_SQMapGridLines_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
