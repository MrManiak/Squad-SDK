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

// Function W_RadialTimer.W_RadialTimer_C.SetProgress
struct UW_RadialTimer_C_SetProgress_Params
{
	float                                              ProgressPct;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RadialTimer.W_RadialTimer_C.BPOnTimerStarted
struct UW_RadialTimer_C_BPOnTimerStarted_Params
{
};

// Function W_RadialTimer.W_RadialTimer_C.BPOnTimerProgress
struct UW_RadialTimer_C_BPOnTimerProgress_Params
{
	float                                              RemainingPct;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RadialTimer.W_RadialTimer_C.BPOnTimerCanceled
struct UW_RadialTimer_C_BPOnTimerCanceled_Params
{
};

// Function W_RadialTimer.W_RadialTimer_C.Construct
struct UW_RadialTimer_C_Construct_Params
{
};

// Function W_RadialTimer.W_RadialTimer_C.ExecuteUbergraph_W_RadialTimer
struct UW_RadialTimer_C_ExecuteUbergraph_W_RadialTimer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
