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

// Function UMG_ScoreboardSquad.UMG_ScoreboardSquad_C.Sort Squad
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_ScoreboardSquad_C::Sort_Squad()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardSquad.UMG_ScoreboardSquad_C.Sort Squad");

	UUMG_ScoreboardSquad_C_Sort_Squad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ScoreboardSquad.UMG_ScoreboardSquad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_ScoreboardSquad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardSquad.UMG_ScoreboardSquad_C.Construct");

	UUMG_ScoreboardSquad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ScoreboardSquad.UMG_ScoreboardSquad_C.BPInit
// (Event, Public, BlueprintEvent)
void UUMG_ScoreboardSquad_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardSquad.UMG_ScoreboardSquad_C.BPInit");

	UUMG_ScoreboardSquad_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ScoreboardSquad.UMG_ScoreboardSquad_C.UpdateState
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UUMG_ScoreboardSquad_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardSquad.UMG_ScoreboardSquad_C.UpdateState");

	UUMG_ScoreboardSquad_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ScoreboardSquad.UMG_ScoreboardSquad_C.ExecuteUbergraph_UMG_ScoreboardSquad
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_ScoreboardSquad_C::ExecuteUbergraph_UMG_ScoreboardSquad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardSquad.UMG_ScoreboardSquad_C.ExecuteUbergraph_UMG_ScoreboardSquad");

	UUMG_ScoreboardSquad_C_ExecuteUbergraph_UMG_ScoreboardSquad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
