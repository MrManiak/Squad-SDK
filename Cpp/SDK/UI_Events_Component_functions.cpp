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

// Function UI_Events_Component.UI_Events_Component_C.Commander Nomination Sounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::Commander_Nomination_Sounds(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Commander Nomination Sounds");

	UUI_Events_Component_C_Commander_Nomination_Sounds_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Commander Changed Sounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerState*          Old                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          New                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::Commander_Changed_Sounds(class ASQPlayerState* Old, class ASQPlayerState* New, int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Commander Changed Sounds");

	UUI_Events_Component_C_Commander_Changed_Sounds_Params params;
	params.Old = Old;
	params.New = New;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Get Mode Intro ID from Team Short Name
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Short_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::Get_Mode_Intro_ID_from_Team_Short_Name(const struct FString& Short_Name, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Get Mode Intro ID from Team Short Name");

	UUI_Events_Component_C_Get_Mode_Intro_ID_from_Team_Short_Name_Params params;
	params.Short_Name = Short_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function UI_Events_Component.UI_Events_Component_C.Get Ticket Bleed Component
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Get_Ticket_Bleed_Component()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Get Ticket Bleed Component");

	UUI_Events_Component_C_Get_Ticket_Bleed_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Get Intro Audio
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQTeamState*            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::Get_Intro_Audio(class ASQTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Get Intro Audio");

	UUI_Events_Component_C_Get_Intro_Audio_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Play Flag Capture Animation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCaptureZoneComponent* Capture_Zone_Component         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  New_Owning_Team                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  Last_Owning_Team               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::Play_Flag_Capture_Animation(class USQCaptureZoneComponent* Capture_Zone_Component, unsigned char New_Owning_Team, unsigned char Last_Owning_Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Play Flag Capture Animation");

	UUI_Events_Component_C_Play_Flag_Capture_Animation_Params params;
	params.Capture_Zone_Component = Capture_Zone_Component;
	params.New_Owning_Team = New_Owning_Team;
	params.Last_Owning_Team = Last_Owning_Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Play Destruction Objective Animation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Owner_Team                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::Play_Destruction_Objective_Animation(unsigned char Owner_Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Play Destruction Objective Animation");

	UUI_Events_Component_C_Play_Destruction_Objective_Animation_Params params;
	params.Owner_Team = Owner_Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Match is Valid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Events_Component_C::Match_is_Valid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Match is Valid");

	UUI_Events_Component_C_Match_is_Valid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function UI_Events_Component.UI_Events_Component_C.Self Team is Attacker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Is_Attacker                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Events_Component_C::Self_Team_is_Attacker(int ID, bool* Is_Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Self Team is Attacker");

	UUI_Events_Component_C_Self_Team_is_Attacker_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Attacker != nullptr)
		*Is_Attacker = params.Is_Attacker;

}


// Function UI_Events_Component.UI_Events_Component_C.Init Deployment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Deployment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::Init_Deployment(class UUMG_MenuBase_C* Deployment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Init Deployment");

	UUI_Events_Component_C_Init_Deployment_Params params;
	params.Deployment = Deployment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.OnLoaded_C2C962FD46CDE84F4452D5B6F1C39B2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::OnLoaded_C2C962FD46CDE84F4452D5B6F1C39B2F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.OnLoaded_C2C962FD46CDE84F4452D5B6F1C39B2F");

	UUI_Events_Component_C_OnLoaded_C2C962FD46CDE84F4452D5B6F1C39B2F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Team Selection Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::Team_Selection_Changed(class ASQTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Team Selection Changed");

	UUI_Events_Component_C_Team_Selection_Changed_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Add Sound to Async Queue
// (BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Add_Sound_to_Async_Queue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Add Sound to Async Queue");

	UUI_Events_Component_C_Add_Sound_to_Async_Queue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UUI_Events_Component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.ReceiveBeginPlay");

	UUI_Events_Component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Play Low Ticket Sounds
// (BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Play_Low_Ticket_Sounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Play Low Ticket Sounds");

	UUI_Events_Component_C_Play_Low_Ticket_Sounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Reset Enemy Ticket Bleed Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Reset_Enemy_Ticket_Bleed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Reset Enemy Ticket Bleed Event");

	UUI_Events_Component_C_Reset_Enemy_Ticket_Bleed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Reset Player Ticket Low Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Reset_Player_Ticket_Low_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Reset Player Ticket Low Event");

	UUI_Events_Component_C_Reset_Player_Ticket_Low_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Load and Play Queued Sound
// (BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Load_and_Play_Queued_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Load and Play Queued Sound");

	UUI_Events_Component_C_Load_and_Play_Queued_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Delay and Load Queued Sound
// (BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Delay_and_Load_Queued_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Delay and Load Queued Sound");

	UUI_Events_Component_C_Delay_and_Load_Queued_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Init Commander Team 1
// (BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Init_Commander_Team_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Init Commander Team 1");

	UUI_Events_Component_C_Init_Commander_Team_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Team 1 Cmdr Changed Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerState*          OldCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          NewCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::Team_1_Cmdr_Changed_Event(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Team 1 Cmdr Changed Event");

	UUI_Events_Component_C_Team_1_Cmdr_Changed_Event_Params params;
	params.OldCommander = OldCommander;
	params.NewCommander = NewCommander;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Team 2 Cmdr Changed Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerState*          OldCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          NewCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::Team_2_Cmdr_Changed_Event(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Team 2 Cmdr Changed Event");

	UUI_Events_Component_C_Team_2_Cmdr_Changed_Event_Params params;
	params.OldCommander = OldCommander;
	params.NewCommander = NewCommander;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Team 1 Nomination Started
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Team_1_Nomination_Started()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Team 1 Nomination Started");

	UUI_Events_Component_C_Team_1_Nomination_Started_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Team 2 Nomination Started
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Team_2_Nomination_Started()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Team 2 Nomination Started");

	UUI_Events_Component_C_Team_2_Nomination_Started_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.Init Commander Team 2
// (BlueprintCallable, BlueprintEvent)
void UUI_Events_Component_C::Init_Commander_Team_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.Init Commander Team 2");

	UUI_Events_Component_C_Init_Commander_Team_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Events_Component.UI_Events_Component_C.ExecuteUbergraph_UI_Events_Component
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Events_Component_C::ExecuteUbergraph_UI_Events_Component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Events_Component.UI_Events_Component_C.ExecuteUbergraph_UI_Events_Component");

	UUI_Events_Component_C_ExecuteUbergraph_UI_Events_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
