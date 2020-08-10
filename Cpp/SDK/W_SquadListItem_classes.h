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

// WidgetBlueprintGeneratedClass W_SquadListItem.W_SquadListItem_C
// 0x00F0 (FullSize[0x0398] - InheritedSize[0x02A8])
// LastOffsetWithSize(0x02A8)
#define PADDING_000D - 0x0000 // Minimum to subtract -> (0008)
class UW_SquadListItem_C : public USQCoreStateSquadItemWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_000D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_000D, class UBorder*,                                                        Border_5);                                                 // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_000D, class UButton*,                                                        Button_Squad);                                             // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_000D, class UMainMenu_Button_C*,                                             ButtonCommander);                                          // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_000D, class UMainMenu_Button_C*,                                             ButtonFull);                                               // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_000D, class UMainMenu_Button_C*,                                             ButtonJoin);                                               // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_000D, class UMainMenu_Button_C*,                                             ButtonLocked);                                             // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_000D, class UW_FireteamGroup_C*,                                             FireteamA);                                                // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_000D, class UW_FireteamGroup_C*,                                             FireteamB);                                                // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_000D, class UW_FireteamGroup_C*,                                             FireteamC);                                                // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_000D, class UImage*,                                                         IconCO);                                                   // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_000D, class UImage*,                                                         IconSquad);                                                // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_000D, class UWidgetSwitcher*,                                                IconSwitch);                                               // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_000D, class UImage*,                                                         Image_Arrow);                                              // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_000D, class UGridPanel*,                                                     MembersGrid);                                              // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_000D, class USizeBox*,                                                       SizeBox_Arrow);                                            // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_000D, class UBorder*,                                                        SquadColorBorder);                                         // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_000D, class UWidgetSwitcher*,                                                Switch_JoinContext);                                       // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_000D, class UWidgetSwitcher*,                                                Switch_SquadButton);                                       // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_000D, class UWidgetSwitcher*,                                                Switch_SquadDisplayState);                                 // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_000D, class UWidgetSwitcher*,                                                Switch_SquadType);                                         // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_000D, class UTextBlock*,                                                     TB_Leader);                                                // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_000D, class UTextBlock*,                                                     TB_MemberNum);                                             // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_000D, class UTextBlock*,                                                     TB_SquadID);                                               // 0x0368(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_000D, class UTextBlock*,                                                     TB_SquadName);                                             // 0x0370(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_000D, class UW_TrashPlayer_C*,                                               W_Dismiss);                                                // 0x0378(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_000D, bool,                                                                  Hovered);                                                  // 0x0380(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00D9 PADDING_000D, bool,                                                                  selected);                                                 // 0x0381(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00DA PADDING_000D, bool,                                                                  Is_Header);                                                // 0x0382(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00DB PADDING_000D, bool,                                                                  Show_Fireteams);                                           // 0x0383(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00DC PADDING_000D, bool,                                                                  bIsAllMuted);                                              // 0x0384(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00DD PADDING_000D, bool,                                                                  bIsShowWeapons);                                           // 0x0385(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00DE PADDING_000D, bool,                                                                  bCommandSquad_TEMP);                                       // 0x0386(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00DF PADDING_000D, bool,                                                                  bCommandVoteActive_TEMP);                                  // 0x0387(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_000D, bool,                                                                  bCanDemote_TEMP);                                          // 0x0388(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00E4 PADDING_000D, float,                                                                 VoteTimerDuration);                                        // 0x038C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_000D, struct FTimerHandle,                                                   Vote_Handle);                                              // 0x0390(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SquadListItem.W_SquadListItem_C");
		return ptr;
	}


	struct FText Get_TB_VoteActiveText_Text_1();
	void Toggle_Weapon_Setting();
	void ToggleMuteAll();
	void Check_for_Self(bool* found);
	ESQSelectionState Get_Selection_State();
	void Instigator_Is_In_Squad(bool* Is_In_Squad);
	void Check_Member_Highlights(bool* Has_Highlights);
	void Update_Color();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Toggle_Selection_State();
	void Clear_Selections();
	void Update_Show_Fireteams(bool Show_Fireteams);
	class UPanelWidget* GetMemberRoot(int FireTeamIndex);
	void Update_List_Visibility();
	void BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void OnSquadIdChanged();
	void OnSquadNameChanged();
	void OnLeaderNameChanged();
	void OnMemberNumChanged();
	void OnMaxMembersChanged();
	void OnIsSelfInSquadChanged();
	void OnJoinButtonStateChanged();
	void OnListLayoutChanged();
	void OnSelectionStateChanged();
	void Open_Options();
	void Create_Disband_Options();
	void BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	void Disband_Events(int ID);
	void BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Construct();
	void Popup_Option_Return(int ID);
	void BndEvt__Button_Squad_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonDemote_K2Node_ComponentBoundEvent_595_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void OnIsCommandSquadChanged();
	void On_Can_Demote_Changed_TEMP();
	void ExecuteUbergraph_W_SquadListItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
