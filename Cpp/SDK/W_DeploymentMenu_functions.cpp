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

// Function W_DeploymentMenu.W_DeploymentMenu_C.Check Mouse Visibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Check_Mouse_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Check Mouse Visibility");

	UW_DeploymentMenu_C_Check_Mouse_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Init Icon Scale
// (Public, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Init_Icon_Scale()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Init Icon Scale");

	UW_DeploymentMenu_C_Init_Icon_Scale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Create Deployment Tutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Create_Deployment_Tutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Create Deployment Tutorial");

	UW_DeploymentMenu_C_Create_Deployment_Tutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Transition Event
// (Public, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Transition_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Transition Event");

	UW_DeploymentMenu_C_Transition_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Is Current Role Available
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_DeploymentMenu_C::Is_Current_Role_Available(bool* Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Is Current Role Available");

	UW_DeploymentMenu_C_Is_Current_Role_Available_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Get Voting Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Voting_Widget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::Get_Voting_Widget(class UUserWidget** Voting_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Get Voting Widget");

	UW_DeploymentMenu_C_Get_Voting_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Voting_Widget != nullptr)
		*Voting_Widget = params.Voting_Widget;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Set All Timers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_DeploymentMenu_C::Set_All_Timers(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Set All Timers");

	UW_DeploymentMenu_C_Set_All_Timers_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Get Spawn Point Roots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*              SpawnBase                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridPanel*              SpawnHab                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridPanel*              SpawnRally                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::Get_Spawn_Point_Roots(class UGridPanel** SpawnBase, class UGridPanel** SpawnHab, class UGridPanel** SpawnRally)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Get Spawn Point Roots");

	UW_DeploymentMenu_C_Get_Spawn_Point_Roots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnBase != nullptr)
		*SpawnBase = params.SpawnBase;
	if (SpawnHab != nullptr)
		*SpawnHab = params.SpawnHab;
	if (SpawnRally != nullptr)
		*SpawnRally = params.SpawnRally;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Get Squad List Roots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Squad_Panel                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Unassigned_Panel               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Commander_Panel                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::Get_Squad_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel, class UPanelWidget** Commander_Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Get Squad List Roots");

	UW_DeploymentMenu_C_Get_Squad_List_Roots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Squad_Panel != nullptr)
		*Squad_Panel = params.Squad_Panel;
	if (Unassigned_Panel != nullptr)
		*Unassigned_Panel = params.Unassigned_Panel;
	if (Commander_Panel != nullptr)
		*Commander_Panel = params.Commander_Panel;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Get Role List Roots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Squad_Panel                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Unassigned_Panel               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::Get_Role_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Get Role List Roots");

	UW_DeploymentMenu_C_Get_Role_List_Roots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Squad_Panel != nullptr)
		*Squad_Panel = params.Squad_Panel;
	if (Unassigned_Panel != nullptr)
		*Unassigned_Panel = params.Unassigned_Panel;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Timer Menu Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Timer_Menu_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Timer Menu Update");

	UW_DeploymentMenu_C_Timer_Menu_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Update Next Button
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Update_Next_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Update Next Button");

	UW_DeploymentMenu_C_Update_Next_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Anim Centre Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_DeploymentMenu_C::Anim_Centre_Fade(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Anim Centre Fade");

	UW_DeploymentMenu_C_Anim_Centre_Fade_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Update Team Flag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            Team_State                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::Update_Team_Flag(class ASQTeamState* Team_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Update Team Flag");

	UW_DeploymentMenu_C_Update_Team_Flag_Params params;
	params.Team_State = Team_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BIND - Image Current Team Flag
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UW_DeploymentMenu_C::BIND___Image_Current_Team_Flag()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BIND - Image Current Team Flag");

	UW_DeploymentMenu_C_BIND___Image_Current_Team_Flag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BIND - Team Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_DeploymentMenu_C::BIND___Team_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BIND - Team Name");

	UW_DeploymentMenu_C_BIND___Team_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BIND Text - Server Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_DeploymentMenu_C::BIND_Text___Server_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BIND Text - Server Name");

	UW_DeploymentMenu_C_BIND_Text___Server_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Init Deployment Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Init_Deployment_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Init Deployment Menu");

	UW_DeploymentMenu_C_Init_Deployment_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Goto Team Screen
// (Public, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Goto_Team_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Goto Team Screen");

	UW_DeploymentMenu_C_Goto_Team_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BIND Visibility - Block Input
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UW_DeploymentMenu_C::BIND_Visibility___Block_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BIND Visibility - Block Input");

	UW_DeploymentMenu_C_BIND_Visibility___Block_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Set Deployment Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDeploymentScreen> New_Deploy_Screen              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::Set_Deployment_Screen(TEnumAsByte<EDeploymentScreen> New_Deploy_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Set Deployment Screen");

	UW_DeploymentMenu_C_Set_Deployment_Screen_Params params;
	params.New_Deploy_Screen = New_Deploy_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Next Screen
// (Public, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Next_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Next Screen");

	UW_DeploymentMenu_C_Next_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BIND Text - Map & Mode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_DeploymentMenu_C::BIND_Text___Map___Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BIND Text - Map & Mode");

	UW_DeploymentMenu_C_BIND_Text___Map___Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Anim Black Transition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_DeploymentMenu_C::Anim_Black_Transition(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Anim Black Transition");

	UW_DeploymentMenu_C_Anim_Black_Transition_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Set Navigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::Set_Navigation(class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Set Navigation");

	UW_DeploymentMenu_C_Set_Navigation_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_DeploymentMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Construct");

	UW_DeploymentMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__TEAM_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::BndEvt__TEAM_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__TEAM_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__TEAM_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ROLES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::BndEvt__ROLES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ROLES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__ROLES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_651_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_DeploymentMenu_C::BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_651_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_651_OnRightButtonClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_651_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_665_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_DeploymentMenu_C::BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_665_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_665_OnLeftButtonClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_665_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ButtonSwitch_K2Node_ComponentBoundEvent_1148_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::BndEvt__ButtonSwitch_K2Node_ComponentBoundEvent_1148_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ButtonSwitch_K2Node_ComponentBoundEvent_1148_OnClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__ButtonSwitch_K2Node_ComponentBoundEvent_1148_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_DeploymentMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.PreConstruct");

	UW_DeploymentMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__RoleScreen_K2Node_ComponentBoundEvent_276_Role Selected__DelegateSignature
// (BlueprintEvent)
void UW_DeploymentMenu_C::BndEvt__RoleScreen_K2Node_ComponentBoundEvent_276_Role_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__RoleScreen_K2Node_ComponentBoundEvent_276_Role Selected__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__RoleScreen_K2Node_ComponentBoundEvent_276_Role_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__SquadScreen_K2Node_ComponentBoundEvent_249_Try Leave Squad__DelegateSignature
// (BlueprintEvent)
void UW_DeploymentMenu_C::BndEvt__SquadScreen_K2Node_ComponentBoundEvent_249_Try_Leave_Squad__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__SquadScreen_K2Node_ComponentBoundEvent_249_Try Leave Squad__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__SquadScreen_K2Node_ComponentBoundEvent_249_Try_Leave_Squad__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_DeploymentMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Destruct");

	UW_DeploymentMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Team Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            OldTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQTeamState*            NewTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::Team_Changed(class ASQTeamState* OldTeam, class ASQTeamState* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Team Changed");

	UW_DeploymentMenu_C_Team_Changed_Params params;
	params.OldTeam = OldTeam;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__BottomBarRole_K2Node_ComponentBoundEvent_361_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::BndEvt__BottomBarRole_K2Node_ComponentBoundEvent_361_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__BottomBarRole_K2Node_ComponentBoundEvent_361_OnClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__BottomBarRole_K2Node_ComponentBoundEvent_361_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_453_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::BndEvt__DeployButton_K2Node_ComponentBoundEvent_453_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_453_OnClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_453_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_589_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_DeploymentMenu_C::BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_589_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_589_OnLeftButtonClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_589_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_606_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_DeploymentMenu_C::BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_606_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_606_OnRightButtonClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_606_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Key Action
// (Public, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Key_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Key Action");

	UW_DeploymentMenu_C_Key_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_DeploymentMenu_C::BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_DeploymentMenu_C::BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature
// (BlueprintEvent)
void UW_DeploymentMenu_C::BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide Confirmation__DelegateSignature
// (BlueprintEvent)
void UW_DeploymentMenu_C::BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide_Confirmation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide Confirmation__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide_Confirmation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.SetVisible
// (BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.SetVisible");

	UW_DeploymentMenu_C_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Set Menu Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_DeploymentMenu_C::Set_Menu_Update(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Set Menu Update");

	UW_DeploymentMenu_C_Set_Menu_Update_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Opened
// (BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Opened");

	UW_DeploymentMenu_C_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Closed
// (BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Closed");

	UW_DeploymentMenu_C_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.On Close
// (Public, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::On_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.On Close");

	UW_DeploymentMenu_C_On_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.On Open
// (Public, BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::On_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.On Open");

	UW_DeploymentMenu_C_On_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Loading Team
// (BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Loading_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Loading Team");

	UW_DeploymentMenu_C_Loading_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.Bind Team Change
// (BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::Bind_Team_Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.Bind Team Change");

	UW_DeploymentMenu_C_Bind_Team_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__TeamScreen_K2Node_ComponentBoundEvent_1_Team Button Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASQTeamState*            New_Team                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::BndEvt__TeamScreen_K2Node_ComponentBoundEvent_1_Team_Button_Pressed__DelegateSignature(class ASQTeamState* New_Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__TeamScreen_K2Node_ComponentBoundEvent_1_Team Button Pressed__DelegateSignature");

	UW_DeploymentMenu_C_BndEvt__TeamScreen_K2Node_ComponentBoundEvent_1_Team_Button_Pressed__DelegateSignature_Params params;
	params.New_Team = New_Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.OnSetRootWidget
// (BlueprintCallable, BlueprintEvent)
void UW_DeploymentMenu_C::OnSetRootWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.OnSetRootWidget");

	UW_DeploymentMenu_C_OnSetRootWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentMenu.W_DeploymentMenu_C.ExecuteUbergraph_W_DeploymentMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentMenu_C::ExecuteUbergraph_W_DeploymentMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentMenu.W_DeploymentMenu_C.ExecuteUbergraph_W_DeploymentMenu");

	UW_DeploymentMenu_C_ExecuteUbergraph_W_DeploymentMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
