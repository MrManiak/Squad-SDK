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

// Function UMG_StagingTimerText.UMG_StagingTimerText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_StagingTimerText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StagingTimerText.UMG_StagingTimerText_C.Construct");

	UUMG_StagingTimerText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StagingTimerText.UMG_StagingTimerText_C.OnFellBelowThreshold
// (Event, Protected, BlueprintEvent)
void UUMG_StagingTimerText_C::OnFellBelowThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StagingTimerText.UMG_StagingTimerText_C.OnFellBelowThreshold");

	UUMG_StagingTimerText_C_OnFellBelowThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StagingTimerText.UMG_StagingTimerText_C.Get Player Team
// (BlueprintCallable, BlueprintEvent)
void UUMG_StagingTimerText_C::Get_Player_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StagingTimerText.UMG_StagingTimerText_C.Get Player Team");

	UUMG_StagingTimerText_C_Get_Player_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StagingTimerText.UMG_StagingTimerText_C.Team State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            OldTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQTeamState*            NewTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_StagingTimerText_C::Team_State_Changed(class ASQTeamState* OldTeam, class ASQTeamState* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StagingTimerText.UMG_StagingTimerText_C.Team State Changed");

	UUMG_StagingTimerText_C_Team_State_Changed_Params params;
	params.OldTeam = OldTeam;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StagingTimerText.UMG_StagingTimerText_C.ExecuteUbergraph_UMG_StagingTimerText
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_StagingTimerText_C::ExecuteUbergraph_UMG_StagingTimerText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StagingTimerText.UMG_StagingTimerText_C.ExecuteUbergraph_UMG_StagingTimerText");

	UUMG_StagingTimerText_C_ExecuteUbergraph_UMG_StagingTimerText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
