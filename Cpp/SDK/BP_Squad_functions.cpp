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

// Function BP_Squad.BP_Squad_C.On Leave Event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSquad*                Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             Joining_State                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::On_Leave_Event(class ASQSquad* Squad, class AController* Joining_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.On Leave Event");

	ABP_Squad_C_On_Leave_Event_Params params;
	params.Squad = Squad;
	params.Joining_State = Joining_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.Become SL Notification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSquad*                State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::Become_SL_Notification(class ASQSquad* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.Become SL Notification");

	ABP_Squad_C_Become_SL_Notification_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.Parting Notification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSquad*                Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             Leaving_State                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::Parting_Notification(class ASQSquad* Squad, class AController* Leaving_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.Parting Notification");

	ABP_Squad_C_Parting_Notification_Params params;
	params.Squad = Squad;
	params.Leaving_State = Leaving_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.Fireteam Notification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSquad*                Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FT                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::Fireteam_Notification(class ASQSquad* Squad, int FT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.Fireteam Notification");

	ABP_Squad_C_Fireteam_Notification_Params params;
	params.Squad = Squad;
	params.FT = FT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.Destroy Fireteam Markers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::Destroy_Fireteam_Markers(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.Destroy Fireteam Markers");

	ABP_Squad_C_Destroy_Fireteam_Markers_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.Destroy All Markers
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Squad_C::Destroy_All_Markers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.Destroy All Markers");

	ABP_Squad_C_Destroy_All_Markers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_Squad_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.ReceiveDestroyed");

	ABP_Squad_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.OnFireteamDisbanded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSquad*                Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FireTeamId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::OnFireteamDisbanded_Event_1(class ASQSquad* Squad, int FireTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.OnFireteamDisbanded_Event_1");

	ABP_Squad_C_OnFireteamDisbanded_Event_1_Params params;
	params.Squad = Squad;
	params.FireTeamId = FireTeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Squad_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.ReceiveBeginPlay");

	ABP_Squad_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.OnFireteamUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSquad*                Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FireTeamId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::OnFireteamUpdated_Event_1(class ASQSquad* Squad, int FireTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.OnFireteamUpdated_Event_1");

	ABP_Squad_C_OnFireteamUpdated_Event_1_Params params;
	params.Squad = Squad;
	params.FireTeamId = FireTeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.OnPlayerPartSquad_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSquad*                Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerController*     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::OnPlayerPartSquad_Event_1(class ASQSquad* Squad, class ASQPlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.OnPlayerPartSquad_Event_1");

	ABP_Squad_C_OnPlayerPartSquad_Event_1_Params params;
	params.Squad = Squad;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.OnPlayerJoinSquad_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSquad*                Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerController*     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::OnPlayerJoinSquad_Event_1(class ASQSquad* Squad, class ASQPlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.OnPlayerJoinSquad_Event_1");

	ABP_Squad_C_OnPlayerJoinSquad_Event_1_Params params;
	params.Squad = Squad;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.OnPlayerBecomeSquadLeader_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSquad*                Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerController*     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::OnPlayerBecomeSquadLeader_Event_1(class ASQSquad* Squad, class ASQPlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.OnPlayerBecomeSquadLeader_Event_1");

	ABP_Squad_C_OnPlayerBecomeSquadLeader_Event_1_Params params;
	params.Squad = Squad;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Squad.BP_Squad_C.ExecuteUbergraph_BP_Squad
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Squad_C::ExecuteUbergraph_BP_Squad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Squad.BP_Squad_C.ExecuteUbergraph_BP_Squad");

	ABP_Squad_C_ExecuteUbergraph_BP_Squad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
