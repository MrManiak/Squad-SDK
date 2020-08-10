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

// Function W_DroneUI.W_DroneUI_C.Set Pitch
struct UW_DroneUI_C_Set_Pitch_Params
{
};

// Function W_DroneUI.W_DroneUI_C.Set Elevation
struct UW_DroneUI_C_Set_Elevation_Params
{
};

// Function W_DroneUI.W_DroneUI_C.Set Time
struct UW_DroneUI_C_Set_Time_Params
{
};

// Function W_DroneUI.W_DroneUI_C.Set Grid Ref
struct UW_DroneUI_C_Set_Grid_Ref_Params
{
};

// Function W_DroneUI.W_DroneUI_C.Tick
struct UW_DroneUI_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DroneUI.W_DroneUI_C.Construct
struct UW_DroneUI_C_Construct_Params
{
};

// Function W_DroneUI.W_DroneUI_C.ExecuteUbergraph_W_DroneUI
struct UW_DroneUI_C_ExecuteUbergraph_W_DroneUI_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
