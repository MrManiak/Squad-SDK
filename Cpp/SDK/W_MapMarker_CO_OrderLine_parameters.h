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

// Function W_MapMarker_CO_OrderLine.W_MapMarker_CO_OrderLine_C.Construct
struct UW_MapMarker_CO_OrderLine_C_Construct_Params
{
};

// Function W_MapMarker_CO_OrderLine.W_MapMarker_CO_OrderLine_C.Init Director Marker
struct UW_MapMarker_CO_OrderLine_C_Init_Director_Marker_Params
{
};

// Function W_MapMarker_CO_OrderLine.W_MapMarker_CO_OrderLine_C.Update Size
struct UW_MapMarker_CO_OrderLine_C_Update_Size_Params
{
};

// Function W_MapMarker_CO_OrderLine.W_MapMarker_CO_OrderLine_C.Tick
struct UW_MapMarker_CO_OrderLine_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MapMarker_CO_OrderLine.W_MapMarker_CO_OrderLine_C.ExecuteUbergraph_W_MapMarker_CO_OrderLine
struct UW_MapMarker_CO_OrderLine_C_ExecuteUbergraph_W_MapMarker_CO_OrderLine_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
