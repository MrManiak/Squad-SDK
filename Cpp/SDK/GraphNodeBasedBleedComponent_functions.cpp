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

// Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.SetMercyBleedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGraphNodeBasedBleedComponent_C::SetMercyBleedState(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.SetMercyBleedState");

	UGraphNodeBasedBleedComponent_C_SetMercyBleedState_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.CalculateBleed
// (Public, BlueprintCallable, BlueprintEvent)
void UGraphNodeBasedBleedComponent_C::CalculateBleed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.CalculateBleed");

	UGraphNodeBasedBleedComponent_C_CalculateBleed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.FindLosers
// (Public, BlueprintCallable, BlueprintEvent)
void UGraphNodeBasedBleedComponent_C::FindLosers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.FindLosers");

	UGraphNodeBasedBleedComponent_C_FindLosers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.CountCaptureZonesByTeam
// (Public, BlueprintCallable, BlueprintEvent)
void UGraphNodeBasedBleedComponent_C::CountCaptureZonesByTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.CountCaptureZonesByTeam");

	UGraphNodeBasedBleedComponent_C_CountCaptureZonesByTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.CleanArrays
// (Public, BlueprintCallable, BlueprintEvent)
void UGraphNodeBasedBleedComponent_C::CleanArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.CleanArrays");

	UGraphNodeBasedBleedComponent_C_CleanArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.TickBleed
// (Public, BlueprintCallable, BlueprintEvent)
void UGraphNodeBasedBleedComponent_C::TickBleed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.TickBleed");

	UGraphNodeBasedBleedComponent_C_TickBleed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UGraphNodeBasedBleedComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.ReceiveBeginPlay");

	UGraphNodeBasedBleedComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.OnLatticeUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)
void UGraphNodeBasedBleedComponent_C::OnLatticeUpdated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.OnLatticeUpdated_Event_1");

	UGraphNodeBasedBleedComponent_C_OnLatticeUpdated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphNodeBasedBleedComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.ReceiveTick");

	UGraphNodeBasedBleedComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.ExecuteUbergraph_GraphNodeBasedBleedComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphNodeBasedBleedComponent_C::ExecuteUbergraph_GraphNodeBasedBleedComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C.ExecuteUbergraph_GraphNodeBasedBleedComponent");

	UGraphNodeBasedBleedComponent_C_ExecuteUbergraph_GraphNodeBasedBleedComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
