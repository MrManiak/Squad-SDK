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

// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Fog of War
struct UCaptureZoneStatusWidget_C_Fog_of_War_Params
{
};

// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Get Location
struct UCaptureZoneStatusWidget_C_Get_Location_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Refresh Widget
struct UCaptureZoneStatusWidget_C_Refresh_Widget_Params
{
};

// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.UpdateCaptureZone
struct UCaptureZoneStatusWidget_C_UpdateCaptureZone_Params
{
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Update Widget
struct UCaptureZoneStatusWidget_C_Update_Widget_Params
{
};

// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.GetFlagBrush
struct UCaptureZoneStatusWidget_C_GetFlagBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.GetProgressColor
struct UCaptureZoneStatusWidget_C_GetProgressColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Construct
struct UCaptureZoneStatusWidget_C_Construct_Params
{
};

// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.ExecuteUbergraph_CaptureZoneStatusWidget
struct UCaptureZoneStatusWidget_C_ExecuteUbergraph_CaptureZoneStatusWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
