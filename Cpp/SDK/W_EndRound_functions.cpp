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

// Function W_EndRound.W_EndRound_C.Init End Round Screen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_EndRound_C::Init_End_Round_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EndRound.W_EndRound_C.Init End Round Screen");

	UW_EndRound_C_Init_End_Round_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_EndRound.W_EndRound_C.OnLoaded_4D00979747334CD613094AA5E0E4B4C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_EndRound_C::OnLoaded_4D00979747334CD613094AA5E0E4B4C2(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EndRound.W_EndRound_C.OnLoaded_4D00979747334CD613094AA5E0E4B4C2");

	UW_EndRound_C_OnLoaded_4D00979747334CD613094AA5E0E4B4C2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_EndRound.W_EndRound_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_EndRound_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EndRound.W_EndRound_C.Construct");

	UW_EndRound_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_EndRound.W_EndRound_C.HUD Scoreboard
// (BlueprintCallable, BlueprintEvent)
void UW_EndRound_C::HUD_Scoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EndRound.W_EndRound_C.HUD Scoreboard");

	UW_EndRound_C_HUD_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_EndRound.W_EndRound_C.Event Play Team Sounds
// (BlueprintCallable, BlueprintEvent)
void UW_EndRound_C::Event_Play_Team_Sounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EndRound.W_EndRound_C.Event Play Team Sounds");

	UW_EndRound_C_Event_Play_Team_Sounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_EndRound.W_EndRound_C.ExecuteUbergraph_W_EndRound
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_EndRound_C::ExecuteUbergraph_W_EndRound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EndRound.W_EndRound_C.ExecuteUbergraph_W_EndRound");

	UW_EndRound_C_ExecuteUbergraph_W_EndRound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
