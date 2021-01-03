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
// Functions
//---------------------------------------------------------------------------

// Function W_RadialTimer.W_RadialTimer_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ProgressPct                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RadialTimer_C::SetProgress(float ProgressPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTimer.W_RadialTimer_C.SetProgress");

	UW_RadialTimer_C_SetProgress_Params params;
	params.ProgressPct = ProgressPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTimer.W_RadialTimer_C.BPOnTimerStarted
// (Event, Public, BlueprintEvent)
void UW_RadialTimer_C::BPOnTimerStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTimer.W_RadialTimer_C.BPOnTimerStarted");

	UW_RadialTimer_C_BPOnTimerStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTimer.W_RadialTimer_C.BPOnTimerProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          RemainingPct                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RadialTimer_C::BPOnTimerProgress(float RemainingPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTimer.W_RadialTimer_C.BPOnTimerProgress");

	UW_RadialTimer_C_BPOnTimerProgress_Params params;
	params.RemainingPct = RemainingPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTimer.W_RadialTimer_C.BPOnTimerCanceled
// (Event, Public, BlueprintEvent)
void UW_RadialTimer_C::BPOnTimerCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTimer.W_RadialTimer_C.BPOnTimerCanceled");

	UW_RadialTimer_C_BPOnTimerCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTimer.W_RadialTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_RadialTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTimer.W_RadialTimer_C.Construct");

	UW_RadialTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RadialTimer.W_RadialTimer_C.ExecuteUbergraph_W_RadialTimer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RadialTimer_C::ExecuteUbergraph_W_RadialTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RadialTimer.W_RadialTimer_C.ExecuteUbergraph_W_RadialTimer");

	UW_RadialTimer_C_ExecuteUbergraph_W_RadialTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
