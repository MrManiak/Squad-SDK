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
// Functions
//---------------------------------------------------------------------------

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ShouldDisplayPrompt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_SquadRallyPoint_C::ShouldDisplayPrompt(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ShouldDisplayPrompt");

	ABP_SquadRallyPoint_C_ShouldDisplayPrompt_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetInterfaceTeam
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_SquadRallyPoint_C::GetInterfaceTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetInterfaceTeam");

	ABP_SquadRallyPoint_C_GetInterfaceTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetUsableData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQUsableData           ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSQUsableData ABP_SquadRallyPoint_C::GetUsableData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetUsableData");

	ABP_SquadRallyPoint_C_GetUsableData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPOnUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::BPOnUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPOnUsed");

	ABP_SquadRallyPoint_C_BPOnUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPStopUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::BPStopUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPStopUsed");

	ABP_SquadRallyPoint_C_BPStopUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerOnUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::ServerOnUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerOnUsed");

	ABP_SquadRallyPoint_C_ServerOnUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerStopUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::ServerStopUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerStopUsed");

	ABP_SquadRallyPoint_C_ServerStopUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPDisplayPrompt
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::BPDisplayPrompt(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPDisplayPrompt");

	ABP_SquadRallyPoint_C_BPDisplayPrompt_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPHidePrompt
// (Event, Public, BlueprintEvent)
void ABP_SquadRallyPoint_C::BPHidePrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPHidePrompt");

	ABP_SquadRallyPoint_C_BPHidePrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ExecuteUbergraph_BP_SquadRallyPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::ExecuteUbergraph_BP_SquadRallyPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ExecuteUbergraph_BP_SquadRallyPoint");

	ABP_SquadRallyPoint_C_ExecuteUbergraph_BP_SquadRallyPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
