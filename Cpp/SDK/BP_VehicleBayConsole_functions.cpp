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

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ShouldDisplayPrompt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_VehicleBayConsole_C::ShouldDisplayPrompt(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ShouldDisplayPrompt");

	ABP_VehicleBayConsole_C_ShouldDisplayPrompt_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.GetInterfaceTeam
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_VehicleBayConsole_C::GetInterfaceTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.GetInterfaceTeam");

	ABP_VehicleBayConsole_C_GetInterfaceTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.GetUsableData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQUsableData           ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSQUsableData ABP_VehicleBayConsole_C::GetUsableData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.GetUsableData");

	ABP_VehicleBayConsole_C_GetUsableData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ServerOnUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBayConsole_C::ServerOnUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ServerOnUsed");

	ABP_VehicleBayConsole_C_ServerOnUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ServerStopUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBayConsole_C::ServerStopUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ServerStopUsed");

	ABP_VehicleBayConsole_C_ServerStopUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPDisplayPrompt
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBayConsole_C::BPDisplayPrompt(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPDisplayPrompt");

	ABP_VehicleBayConsole_C_BPDisplayPrompt_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPHidePrompt
// (Event, Public, BlueprintEvent)
void ABP_VehicleBayConsole_C::BPHidePrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPHidePrompt");

	ABP_VehicleBayConsole_C_BPHidePrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPOnUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBayConsole_C::BPOnUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPOnUsed");

	ABP_VehicleBayConsole_C_BPOnUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPStopUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBayConsole_C::BPStopUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPStopUsed");

	ABP_VehicleBayConsole_C_BPStopUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_VehicleBayConsole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ReceiveBeginPlay");

	ABP_VehicleBayConsole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ExecuteUbergraph_BP_VehicleBayConsole
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBayConsole_C::ExecuteUbergraph_BP_VehicleBayConsole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ExecuteUbergraph_BP_VehicleBayConsole");

	ABP_VehicleBayConsole_C_ExecuteUbergraph_BP_VehicleBayConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
