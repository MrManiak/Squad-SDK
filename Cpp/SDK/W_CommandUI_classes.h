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

// WidgetBlueprintGeneratedClass W_CommandUI.W_CommandUI_C
// 0x00D8 (FullSize[0x0388] - InheritedSize[0x02B0])
// LastOffsetWithSize(0x02B0)
#define PADDING_0317 - 0x0000 // Minimum to subtract -> (0000)
class UW_CommandUI_C : public UUMG_MenuBase_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0317, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0317, class UWidgetAnimation*,                                               CommandOpenCloseAnim);                                     // 0x02B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0317, class UBackgroundBlur*,                                                BackgroundBlur_1);                                         // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0317, class UChallengeWindow_C*,                                             ChallengeGiveUp);                                          // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0317, class UW_SlideComponent_C*,                                            ChatSlide);                                                // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0317, class UW_SlideComponent_C*,                                            CommandSlide);                                             // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0317, class USizeBox*,                                                       GiveupPanel);                                              // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0317, class UHorizontalBox*,                                                 MainObject);                                               // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0317, class UW_SQMapCore_C*,                                                 MapCoreWidget);                                            // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0317, class UMainMenu_Button_C*,                                             NAV_ROLES);                                                // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0317, class UMainMenu_Button_C*,                                             NAV_SQUADS);                                               // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0317, class UImage*,                                                         slideimage);                                               // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0317, class USizeBox*,                                                       SquadBox);                                                 // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0317, class UButton*,                                                        SquadsSlideButton);                                        // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0317, class UW_ControlledCameraList_C*,                                      W_ControlledCameraList);                                   // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0317, class UW_GameTime_C*,                                                  W_GameTime);                                               // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0317, class UW_GiveUp_C*,                                                    W_GiveUp);                                                 // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0317, class UW_MapControls_C*,                                               W_MapControls);                                            // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0317, class UW_MarkedPosition_C*,                                            W_MarkedPosition);                                         // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0317, class UW_PlayerPosition_C*,                                            W_PlayerPosition);                                         // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0317, class UW_SquadList_C*,                                                 W_SquadList);                                              // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0317, class UW_TeamTickets_C*,                                               W_TeamTickets);                                            // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0317, class UW_TerritoryControl_Bar_C*,                                      W_TerritoryControl_Bar);                                   // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0317, class UW_VoipOwningPlayer_C*,                                          W_VoipOwningPlayer);                                       // 0x0368(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0317, class ASQPlayerController*,                                            My_PC);                                                    // 0x0370(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0317, bool,                                                                  Always_Allow_Action);                                      // 0x0378(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0317, class UW_CommandActionList_C*,                                         Command_List_Widget);                                      // 0x0380(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CommandUI.W_CommandUI_C");
		return ptr;
	}


	void Set_Command_Slide_Visibility();
	void Get_Voting_Widget(class UUserWidget** Voting_Widget);
	void Get_Squad_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel, class UPanelWidget** Commander_Panel);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature();
	void BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature();
	void BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide_Confirmation__DelegateSignature();
	void Construct();
	void Open_Chat_Slide(ESQChat Channel);
	void Opened();
	void Closed();
	void Bind_Commander_Changed();
	void Command_Changed(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander);
	void BndEvt__SquadsSlideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_CommandUI(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
