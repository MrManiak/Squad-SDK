#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function W_DeploymentMenu.W_DeploymentMenu_C.Check Mouse Visibility
struct UW_DeploymentMenu_C_Check_Mouse_Visibility_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Init Icon Scale
struct UW_DeploymentMenu_C_Init_Icon_Scale_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Create Deployment Tutorial
struct UW_DeploymentMenu_C_Create_Deployment_Tutorial_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Transition Event
struct UW_DeploymentMenu_C_Transition_Event_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Is Current Role Available
struct UW_DeploymentMenu_C_Is_Current_Role_Available_Params
{
	bool                                               Available;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Get Voting Widget
struct UW_DeploymentMenu_C_Get_Voting_Widget_Params
{
	class UUserWidget*                                 Voting_Widget;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Set All Timers
struct UW_DeploymentMenu_C_Set_All_Timers_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Get Spawn Point Roots
struct UW_DeploymentMenu_C_Get_Spawn_Point_Roots_Params
{
	class UGridPanel*                                  SpawnBase;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                                  SpawnHab;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                                  SpawnRally;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Get Squad List Roots
struct UW_DeploymentMenu_C_Get_Squad_List_Roots_Params
{
	class UPanelWidget*                                Squad_Panel;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                Unassigned_Panel;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                Commander_Panel;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Get Role List Roots
struct UW_DeploymentMenu_C_Get_Role_List_Roots_Params
{
	class UPanelWidget*                                Squad_Panel;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                Unassigned_Panel;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Timer Menu Update
struct UW_DeploymentMenu_C_Timer_Menu_Update_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Update Next Button
struct UW_DeploymentMenu_C_Update_Next_Button_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Anim Centre Fade
struct UW_DeploymentMenu_C_Anim_Centre_Fade_Params
{
	bool                                               Reverse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Update Team Flag
struct UW_DeploymentMenu_C_Update_Team_Flag_Params
{
	class ASQTeamState*                                Team_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BIND - Image Current Team Flag
struct UW_DeploymentMenu_C_BIND___Image_Current_Team_Flag_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BIND - Team Name
struct UW_DeploymentMenu_C_BIND___Team_Name_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BIND Text - Server Name
struct UW_DeploymentMenu_C_BIND_Text___Server_Name_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Init Deployment Menu
struct UW_DeploymentMenu_C_Init_Deployment_Menu_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Goto Team Screen
struct UW_DeploymentMenu_C_Goto_Team_Screen_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BIND Visibility - Block Input
struct UW_DeploymentMenu_C_BIND_Visibility___Block_Input_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Set Deployment Screen
struct UW_DeploymentMenu_C_Set_Deployment_Screen_Params
{
	TEnumAsByte<EDeploymentScreen>                     New_Deploy_Screen;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Next Screen
struct UW_DeploymentMenu_C_Next_Screen_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BIND Text - Map & Mode
struct UW_DeploymentMenu_C_BIND_Text___Map___Mode_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Anim Black Transition
struct UW_DeploymentMenu_C_Anim_Black_Transition_Params
{
	bool                                               Reverse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Set Navigation
struct UW_DeploymentMenu_C_Set_Navigation_Params
{
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Construct
struct UW_DeploymentMenu_C_Construct_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__TEAM_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__TEAM_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ROLES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__ROLES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_651_OnRightButtonClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_651_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_665_OnLeftButtonClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_665_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ButtonSwitch_K2Node_ComponentBoundEvent_1148_OnClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__ButtonSwitch_K2Node_ComponentBoundEvent_1148_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.PreConstruct
struct UW_DeploymentMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__RoleScreen_K2Node_ComponentBoundEvent_276_Role Selected__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__RoleScreen_K2Node_ComponentBoundEvent_276_Role_Selected__DelegateSignature_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__SquadScreen_K2Node_ComponentBoundEvent_249_Try Leave Squad__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__SquadScreen_K2Node_ComponentBoundEvent_249_Try_Leave_Squad__DelegateSignature_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Destruct
struct UW_DeploymentMenu_C_Destruct_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Team Changed
struct UW_DeploymentMenu_C_Team_Changed_Params
{
	class ASQTeamState*                                OldTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQTeamState*                                NewTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__BottomBarRole_K2Node_ComponentBoundEvent_361_OnClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__BottomBarRole_K2Node_ComponentBoundEvent_361_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_453_OnClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_453_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_589_OnLeftButtonClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_589_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_606_OnRightButtonClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_606_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Key Action
struct UW_DeploymentMenu_C_Key_Action_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide Confirmation__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide_Confirmation__DelegateSignature_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.SetVisible
struct UW_DeploymentMenu_C_SetVisible_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Set Menu Update
struct UW_DeploymentMenu_C_Set_Menu_Update_Params
{
	bool                                               On;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Opened
struct UW_DeploymentMenu_C_Opened_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Closed
struct UW_DeploymentMenu_C_Closed_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.On Close
struct UW_DeploymentMenu_C_On_Close_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.On Open
struct UW_DeploymentMenu_C_On_Open_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Loading Team
struct UW_DeploymentMenu_C_Loading_Team_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.Bind Team Change
struct UW_DeploymentMenu_C_Bind_Team_Change_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.BndEvt__TeamScreen_K2Node_ComponentBoundEvent_1_Team Button Pressed__DelegateSignature
struct UW_DeploymentMenu_C_BndEvt__TeamScreen_K2Node_ComponentBoundEvent_1_Team_Button_Pressed__DelegateSignature_Params
{
	class ASQTeamState*                                New_Team;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.OnSetRootWidget
struct UW_DeploymentMenu_C_OnSetRootWidget_Params
{
};

// Function W_DeploymentMenu.W_DeploymentMenu_C.ExecuteUbergraph_W_DeploymentMenu
struct UW_DeploymentMenu_C_ExecuteUbergraph_W_DeploymentMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
