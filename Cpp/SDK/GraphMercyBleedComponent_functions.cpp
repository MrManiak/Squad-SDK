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

// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.IsLoser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CaptureZones                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGraphMercyBleedComponent_C::IsLoser(int CaptureZones, int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.IsLoser");

	UGraphMercyBleedComponent_C_IsLoser_Params params;
	params.CaptureZones = CaptureZones;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.FindLosers
// (Public, BlueprintCallable, BlueprintEvent)
void UGraphMercyBleedComponent_C::FindLosers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.FindLosers");

	UGraphMercyBleedComponent_C_FindLosers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.CountCaptureZonesByTeam
// (Public, BlueprintCallable, BlueprintEvent)
void UGraphMercyBleedComponent_C::CountCaptureZonesByTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.CountCaptureZonesByTeam");

	UGraphMercyBleedComponent_C_CountCaptureZonesByTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.TickBleed
// (Public, BlueprintCallable, BlueprintEvent)
void UGraphMercyBleedComponent_C::TickBleed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.TickBleed");

	UGraphMercyBleedComponent_C_TickBleed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UGraphMercyBleedComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ReceiveBeginPlay");

	UGraphMercyBleedComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.OnLatticeUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)
void UGraphMercyBleedComponent_C::OnLatticeUpdated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.OnLatticeUpdated_Event_1");

	UGraphMercyBleedComponent_C_OnLatticeUpdated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphMercyBleedComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ReceiveTick");

	UGraphMercyBleedComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ExecuteUbergraph_GraphMercyBleedComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphMercyBleedComponent_C::ExecuteUbergraph_GraphMercyBleedComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ExecuteUbergraph_GraphMercyBleedComponent");

	UGraphMercyBleedComponent_C_ExecuteUbergraph_GraphMercyBleedComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
