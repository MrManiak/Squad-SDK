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

// Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.OnHoverBegin
struct URadialCenterVoiceTimer_C_OnHoverBegin_Params
{
};

// Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.Construct
struct URadialCenterVoiceTimer_C_Construct_Params
{
};

// Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.Tick
struct URadialCenterVoiceTimer_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.ExecuteUbergraph_RadialCenterVoiceTimer
struct URadialCenterVoiceTimer_C_ExecuteUbergraph_RadialCenterVoiceTimer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
