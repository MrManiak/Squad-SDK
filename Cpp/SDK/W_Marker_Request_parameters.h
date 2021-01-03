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

// Function W_Marker_Request.W_Marker_Request_C.OnPreviewMouseButtonDown
struct UW_Marker_Request_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_Marker_Request.W_Marker_Request_C.OnScaleChanged
struct UW_Marker_Request_C_OnScaleChanged_Params
{
	float                                              UniformScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Marker_Request.W_Marker_Request_C.Construct
struct UW_Marker_Request_C_Construct_Params
{
};

// Function W_Marker_Request.W_Marker_Request_C.Find Map Icon
struct UW_Marker_Request_C_Find_Map_Icon_Params
{
};

// Function W_Marker_Request.W_Marker_Request_C.OnRightClicked
struct UW_Marker_Request_C_OnRightClicked_Params
{
};

// Function W_Marker_Request.W_Marker_Request_C.Set Vis to Commander
struct UW_Marker_Request_C_Set_Vis_to_Commander_Params
{
};

// Function W_Marker_Request.W_Marker_Request_C.Tick
struct UW_Marker_Request_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Marker_Request.W_Marker_Request_C.ExecuteUbergraph_W_Marker_Request
struct UW_Marker_Request_C_ExecuteUbergraph_W_Marker_Request_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
