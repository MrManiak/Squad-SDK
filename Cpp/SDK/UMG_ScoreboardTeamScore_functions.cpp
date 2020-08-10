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

// Function UMG_ScoreboardTeamScore.UMG_ScoreboardTeamScore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_ScoreboardTeamScore_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardTeamScore.UMG_ScoreboardTeamScore_C.Construct");

	UUMG_ScoreboardTeamScore_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ScoreboardTeamScore.UMG_ScoreboardTeamScore_C.BPInit
// (Event, Public, BlueprintEvent)
void UUMG_ScoreboardTeamScore_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardTeamScore.UMG_ScoreboardTeamScore_C.BPInit");

	UUMG_ScoreboardTeamScore_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ScoreboardTeamScore.UMG_ScoreboardTeamScore_C.ExecuteUbergraph_UMG_ScoreboardTeamScore
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_ScoreboardTeamScore_C::ExecuteUbergraph_UMG_ScoreboardTeamScore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardTeamScore.UMG_ScoreboardTeamScore_C.ExecuteUbergraph_UMG_ScoreboardTeamScore");

	UUMG_ScoreboardTeamScore_C_ExecuteUbergraph_UMG_ScoreboardTeamScore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
