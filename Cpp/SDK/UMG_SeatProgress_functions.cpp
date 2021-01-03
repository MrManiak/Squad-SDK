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

// Function UMG_SeatProgress.UMG_SeatProgress_C.Close Radial Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_SeatProgress_C::Close_Radial_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.Close Radial Menu");

	UUMG_SeatProgress_C_Close_Radial_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.Update Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility               Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_SeatProgress_C::Update_Visibility(bool Force, ESlateVisibility Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.Update Visibility");

	UUMG_SeatProgress_C_Update_Visibility_Params params;
	params.Force = Force;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.Create Radial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_SeatProgress_C::Create_Radial(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.Create Radial");

	UUMG_SeatProgress_C_Create_Radial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_SeatProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.Construct");

	UUMG_SeatProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerStarted
// (Event, Public, BlueprintEvent)
void UUMG_SeatProgress_C::BPOnTimerStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerStarted");

	UUMG_SeatProgress_C_BPOnTimerStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerCanceled
// (Event, Public, BlueprintEvent)
void UUMG_SeatProgress_C::BPOnTimerCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerCanceled");

	UUMG_SeatProgress_C_BPOnTimerCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.CloseProgressWidget
// (BlueprintCallable, BlueprintEvent)
void UUMG_SeatProgress_C::CloseProgressWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.CloseProgressWidget");

	UUMG_SeatProgress_C_CloseProgressWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnShowVehicleInventory
// (Event, Public, BlueprintEvent)
void UUMG_SeatProgress_C::BPOnShowVehicleInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnShowVehicleInventory");

	UUMG_SeatProgress_C_BPOnShowVehicleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerReached
// (Event, Public, BlueprintEvent)
void UUMG_SeatProgress_C::BPOnTimerReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerReached");

	UUMG_SeatProgress_C_BPOnTimerReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          RemainingPct                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_SeatProgress_C::BPOnTimerProgress(float RemainingPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerProgress");

	UUMG_SeatProgress_C_BPOnTimerProgress_Params params;
	params.RemainingPct = RemainingPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerPaused
// (Event, Public, BlueprintEvent)
void UUMG_SeatProgress_C::BPOnTimerPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerPaused");

	UUMG_SeatProgress_C_BPOnTimerPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerResumed
// (Event, Public, BlueprintEvent)
void UUMG_SeatProgress_C::BPOnTimerResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.BPOnTimerResumed");

	UUMG_SeatProgress_C_BPOnTimerResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.ExecuteUbergraph_UMG_SeatProgress
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_SeatProgress_C::ExecuteUbergraph_UMG_SeatProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.ExecuteUbergraph_UMG_SeatProgress");

	UUMG_SeatProgress_C_ExecuteUbergraph_UMG_SeatProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.ClosedSeatProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUMG_SeatProgress_C::ClosedSeatProgress__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.ClosedSeatProgress__DelegateSignature");

	UUMG_SeatProgress_C_ClosedSeatProgress__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SeatProgress.UMG_SeatProgress_C.ShowedSeatProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUMG_SeatProgress_C::ShowedSeatProgress__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SeatProgress.UMG_SeatProgress_C.ShowedSeatProgress__DelegateSignature");

	UUMG_SeatProgress_C_ShowedSeatProgress__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
