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

// Function BP_CaptureZoneMain.BP_CaptureZoneMain_C.GetTeamId
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_CaptureZoneMain_C::GetTeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureZoneMain.BP_CaptureZoneMain_C.GetTeamId");

	ABP_CaptureZoneMain_C_GetTeamId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_CaptureZoneMain.BP_CaptureZoneMain_C.OnTeamChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PreviousTeam                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CaptureZoneMain_C::OnTeamChange(int PreviousTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureZoneMain.BP_CaptureZoneMain_C.OnTeamChange");

	ABP_CaptureZoneMain_C_OnTeamChange_Params params;
	params.PreviousTeam = PreviousTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CaptureZoneMain.BP_CaptureZoneMain_C.ExecuteUbergraph_BP_CaptureZoneMain
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CaptureZoneMain_C::ExecuteUbergraph_BP_CaptureZoneMain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureZoneMain.BP_CaptureZoneMain_C.ExecuteUbergraph_BP_CaptureZoneMain");

	ABP_CaptureZoneMain_C_ExecuteUbergraph_BP_CaptureZoneMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
