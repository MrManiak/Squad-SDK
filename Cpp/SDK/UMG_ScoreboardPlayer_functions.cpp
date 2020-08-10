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

// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Get Position
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
void UUMG_ScoreboardPlayer_C::Get_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Get Position");

	UUMG_ScoreboardPlayer_C_Get_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.FT Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UUMG_ScoreboardPlayer_C::FT_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.FT Color");

	UUMG_ScoreboardPlayer_C_FT_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Leader Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUMG_ScoreboardPlayer_C::Leader_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Leader Text");

	UUMG_ScoreboardPlayer_C_Leader_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Same Squad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUMG_ScoreboardPlayer_C::Same_Squad()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Same Squad");

	UUMG_ScoreboardPlayer_C_Same_Squad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_ScoreboardPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Construct");

	UUMG_ScoreboardPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.BPInit
// (Event, Public, BlueprintEvent)
void UUMG_ScoreboardPlayer_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.BPInit");

	UUMG_ScoreboardPlayer_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.UpdateState
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UUMG_ScoreboardPlayer_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.UpdateState");

	UUMG_ScoreboardPlayer_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.ExecuteUbergraph_UMG_ScoreboardPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_ScoreboardPlayer_C::ExecuteUbergraph_UMG_ScoreboardPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.ExecuteUbergraph_UMG_ScoreboardPlayer");

	UUMG_ScoreboardPlayer_C_ExecuteUbergraph_UMG_ScoreboardPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
