#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_DeploymentMenu.W_DeploymentMenu_C
// 0x01A0 (FullSize[0x0450] - InheritedSize[0x02B0])
// LastOffsetWithSize(0x02B0)
#define PADDING_02EA - 0x0000 // Minimum to subtract -> (0000)
class UW_DeploymentMenu_C : public UUMG_MenuBase_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02EA, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02EA, class UWidgetAnimation*,                                               LoadFade);                                                 // 0x02B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02EA, class UWidgetAnimation*,                                               CentreTransition);                                         // 0x02C0(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02EA, class UWidgetAnimation*,                                               BlackTransition);                                          // 0x02C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02EA, class UWidgetAnimation*,                                               DeploymentOpenCloseAnim);                                  // 0x02D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02EA, class UBorder*,                                                        Blackout);                                                 // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02EA, class UImage*,                                                         BlockInput);                                               // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_02EA, class UMainMenu_Button_C*,                                             BottomBarRole);                                            // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_02EA, class UWidgetSwitcher*,                                                BottomSwitcher);                                           // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_02EA, class UChallengeWindow_C*,                                             ChallengeGiveUp);                                          // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_02EA, class UChallengeWindow_C*,                                             ChallengeLeaveSquad);                                      // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02EA, class UChallengeWindow_C*,                                             ChallengeLeaveTeam);                                       // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02EA, class UImage*,                                                         DeployArrow);                                              // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_02EA, class UMainMenu_Button_C*,                                             DeployButton);                                             // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_02EA, class USizeBox*,                                                       GiveupPanel);                                              // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_02EA, class UImage*,                                                         Image_1);                                                  // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_02EA, class UImage*,                                                         Image_9);                                                  // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_02EA, class UImage*,                                                         Image_BGFlag);                                             // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_02EA, class UImage*,                                                         Image_FlagTopRight);                                       // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_02EA, class UImage*,                                                         Line);                                                     // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_02EA, class UImage*,                                                         LineBottom);                                               // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_02EA, class UCanvasPanel*,                                                   MainPanel);                                                // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_02EA, class UMainMenu_Button_C*,                                             NAV_ROLES);                                                // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_02EA, class UMainMenu_Button_C*,                                             NAV_SQUADS);                                               // 0x0368(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_02EA, class UMainMenu_Button_C*,                                             NAV_TEAMSELECT);                                           // 0x0370(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_02EA, class UOverlay*,                                                       Overlay_DeployButton);                                     // 0x0378(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_02EA, class UW_RoleSelect_C*,                                                RoleScreen);                                               // 0x0380(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_02EA, class USizeBox*,                                                       Size_Centre);                                              // 0x0388(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_02EA, class UW_SquadSelect_C*,                                               SquadScreen);                                              // 0x0390(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_02EA, class UWidgetSwitcher*,                                                SwitchCentre);                                             // 0x0398(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_02EA, class UWidgetSwitcher*,                                                SwitchLoad);                                               // 0x03A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_02EA, class UTextBlock*,                                                     TB_ServerName);                                            // 0x03A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_02EA, class UTextBlock*,                                                     TB_TeamName);                                              // 0x03B0(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_02EA, class UTextBlock*,                                                     TB_Title);                                                 // 0x03B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_02EA, class UW_TeamSelect_C*,                                                TeamScreen);                                               // 0x03C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_02EA, class UHorizontalBox*,                                                 TopNavigation);                                            // 0x03C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_02EA, class UW_GameTime_C*,                                                  W_GameTime);                                               // 0x03D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0128 PADDING_02EA, class UW_GameTime_C*,                                                  W_GameTime_3);                                             // 0x03D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_02EA, class UW_GiveUp_C*,                                                    W_GiveUp);                                                 // 0x03E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0138 PADDING_02EA, class UW_PlayerRankAndRole_C*,                                         W_PlayerRankAndRole);                                      // 0x03E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_02EA, class UW_TeamTickets_C*,                                               W_TeamTickets);                                            // 0x03F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0148 PADDING_02EA, class UW_TerritoryControl_Bar_C*,                                      W_TerritoryControl_TugofWar);                              // 0x03F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0150 PADDING_02EA, class UW_VoipOwningPlayer_C*,                                          W_VoipOwningPlayer);                                       // 0x0400(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0158 PADDING_02EA, class UWidgetSwitcher*,                                                WidgetSwitcherTitle);                                      // 0x0408(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0160 PADDING_02EA, TEnumAsByte<EDeploymentProgressionState>,                              Deploy_State);                                             // 0x0410(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0161 PADDING_02EA, bool,                                                                  First_Team_Selection);                                     // 0x0411(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0168 PADDING_02EA, class ASQPlayerController*,                                            My_PC);                                                    // 0x0418(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0170 PADDING_02EA, class ASQPlayerState*,                                                 My_PS);                                                    // 0x0420(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0178 PADDING_02EA, class UMaterialInstanceDynamic*,                                       MI_BGFlag);                                                // 0x0428(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0180 PADDING_02EA, struct FTimerHandle,                                                   Respawn_Timer);                                            // 0x0430(0x0008)  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0188 PADDING_02EA, TEnumAsByte<EDeploymentScreen>,                                        Deploy_Screen);                                            // 0x0438(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0189 PADDING_02EA, bool,                                                                  Spawn_Point_Sieged);                                       // 0x0439(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0190 PADDING_02EA, struct FTimerHandle,                                                   Update_Timer);                                             // 0x0440(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0198 PADDING_02EA, class UW_DeploymentTutorial_C*,                                        Deployment_Tutorial);                                      // 0x0448(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_DeploymentMenu.W_DeploymentMenu_C");
		return ptr;
	}


	void Check_Mouse_Visibility();
	void Init_Icon_Scale();
	void Create_Deployment_Tutorial();
	void Transition_Event();
	void Is_Current_Role_Available(bool* Available);
	void Get_Voting_Widget(class UUserWidget** Voting_Widget);
	void Set_All_Timers(bool Active);
	void Get_Spawn_Point_Roots(class UGridPanel** SpawnBase, class UGridPanel** SpawnHab, class UGridPanel** SpawnRally);
	void Get_Squad_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel, class UPanelWidget** Commander_Panel);
	void Get_Role_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel);
	void Timer_Menu_Update();
	void Update_Next_Button();
	void Anim_Centre_Fade(bool Reverse);
	void Update_Team_Flag(class ASQTeamState* Team_State);
	struct FSlateBrush BIND___Image_Current_Team_Flag();
	struct FText BIND___Team_Name();
	struct FText BIND_Text___Server_Name();
	void Init_Deployment_Menu();
	void Goto_Team_Screen();
	ESlateVisibility BIND_Visibility___Block_Input();
	void Set_Deployment_Screen(TEnumAsByte<EDeploymentScreen> New_Deploy_Screen);
	void Next_Screen();
	struct FText BIND_Text___Map___Mode();
	void Anim_Black_Transition(bool Reverse);
	void Set_Navigation(class UMainMenu_Button_C* Button);
	void Construct();
	void BndEvt__TEAM_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ROLES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_651_OnRightButtonClicked__DelegateSignature();
	void BndEvt__ChallengeLeaveSquad_K2Node_ComponentBoundEvent_665_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__ButtonSwitch_K2Node_ComponentBoundEvent_1148_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__RoleScreen_K2Node_ComponentBoundEvent_276_Role_Selected__DelegateSignature();
	void BndEvt__SquadScreen_K2Node_ComponentBoundEvent_249_Try_Leave_Squad__DelegateSignature();
	void Destruct();
	void Team_Changed(class ASQTeamState* OldTeam, class ASQTeamState* NewTeam);
	void BndEvt__BottomBarRole_K2Node_ComponentBoundEvent_361_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__DeployButton_K2Node_ComponentBoundEvent_453_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_589_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__ChallengeLeaveTeam_K2Node_ComponentBoundEvent_606_OnRightButtonClicked__DelegateSignature();
	void Key_Action();
	void BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature();
	void BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature();
	void BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide_Confirmation__DelegateSignature();
	void SetVisible();
	void Set_Menu_Update(bool On);
	void Opened();
	void Closed();
	void On_Close();
	void On_Open();
	void Loading_Team();
	void Bind_Team_Change();
	void BndEvt__TeamScreen_K2Node_ComponentBoundEvent_1_Team_Button_Pressed__DelegateSignature(class ASQTeamState* New_Team);
	void OnSetRootWidget();
	void ExecuteUbergraph_W_DeploymentMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
