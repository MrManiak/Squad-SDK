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

// Function W_VoipPlayer.W_VoipPlayer_C.Fade Out
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VoipPlayer_C::Fade_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipPlayer.W_VoipPlayer_C.Fade Out");

	UW_VoipPlayer_C_Fade_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VoipPlayer.W_VoipPlayer_C.Refresh Speaker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQRemoteTalkerDisplayInfo Speaker_Info                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_VoipPlayer_C::Refresh_Speaker(const struct FSQRemoteTalkerDisplayInfo& Speaker_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipPlayer.W_VoipPlayer_C.Refresh Speaker");

	UW_VoipPlayer_C_Refresh_Speaker_Params params;
	params.Speaker_Info = Speaker_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VoipPlayer.W_VoipPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_VoipPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipPlayer.W_VoipPlayer_C.Construct");

	UW_VoipPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VoipPlayer.W_VoipPlayer_C.ExecuteUbergraph_W_VoipPlayer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VoipPlayer_C::ExecuteUbergraph_W_VoipPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipPlayer.W_VoipPlayer_C.ExecuteUbergraph_W_VoipPlayer");

	UW_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
