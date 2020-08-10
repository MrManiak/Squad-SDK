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

// Function W_GameTime.W_GameTime_C.Get Prep Zone
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GameTime_C::Get_Prep_Zone()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GameTime.W_GameTime_C.Get Prep Zone");

	UW_GameTime_C_Get_Prep_Zone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GameTime.W_GameTime_C.Set Staging Text Prefix
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_GameTime_C::Set_Staging_Text_Prefix()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GameTime.W_GameTime_C.Set Staging Text Prefix");

	UW_GameTime_C_Set_Staging_Text_Prefix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GameTime.W_GameTime_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_GameTime_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GameTime.W_GameTime_C.Construct");

	UW_GameTime_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GameTime.W_GameTime_C.OnTeamStateChangedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            OldTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQTeamState*            NewTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GameTime_C::OnTeamStateChangedEvent_Event_1(class ASQTeamState* OldTeam, class ASQTeamState* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GameTime.W_GameTime_C.OnTeamStateChangedEvent_Event_1");

	UW_GameTime_C_OnTeamStateChangedEvent_Event_1_Params params;
	params.OldTeam = OldTeam;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GameTime.W_GameTime_C.Get Player State
// (BlueprintCallable, BlueprintEvent)
void UW_GameTime_C::Get_Player_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GameTime.W_GameTime_C.Get Player State");

	UW_GameTime_C_Get_Player_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GameTime.W_GameTime_C.ExecuteUbergraph_W_GameTime
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GameTime_C::ExecuteUbergraph_W_GameTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GameTime.W_GameTime_C.ExecuteUbergraph_W_GameTime");

	UW_GameTime_C_ExecuteUbergraph_W_GameTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
