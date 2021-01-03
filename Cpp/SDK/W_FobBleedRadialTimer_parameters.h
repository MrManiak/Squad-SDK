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

// Function W_FobBleedRadialTimer.W_FobBleedRadialTimer_C.SetProgress
struct UW_FobBleedRadialTimer_C_SetProgress_Params
{
	float                                              ProgressPct;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_FobBleedRadialTimer.W_FobBleedRadialTimer_C.BPOnTimerStarted
struct UW_FobBleedRadialTimer_C_BPOnTimerStarted_Params
{
};

// Function W_FobBleedRadialTimer.W_FobBleedRadialTimer_C.BPOnTimerProgress
struct UW_FobBleedRadialTimer_C_BPOnTimerProgress_Params
{
	float                                              RemainingPct;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_FobBleedRadialTimer.W_FobBleedRadialTimer_C.BPOnTimerCanceled
struct UW_FobBleedRadialTimer_C_BPOnTimerCanceled_Params
{
};

// Function W_FobBleedRadialTimer.W_FobBleedRadialTimer_C.Construct
struct UW_FobBleedRadialTimer_C_Construct_Params
{
};

// Function W_FobBleedRadialTimer.W_FobBleedRadialTimer_C.ExecuteUbergraph_W_FobBleedRadialTimer
struct UW_FobBleedRadialTimer_C_ExecuteUbergraph_W_FobBleedRadialTimer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
