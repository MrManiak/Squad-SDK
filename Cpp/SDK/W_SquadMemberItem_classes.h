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

// WidgetBlueprintGeneratedClass W_SquadMemberItem.W_SquadMemberItem_C
// 0x007D (FullSize[0x0332] - InheritedSize[0x02B5])
// LastOffsetWithSize(0x02B5)
#define PADDING_040E - 0x0000 // Minimum to subtract -> (0003)
class UW_SquadMemberItem_C : public USQCoreStateSquadMemberWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_040E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000B PADDING_040E, class UBorder*,                                                        Border_1);                                                 // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0013 PADDING_040E, class UScaleBox*,                                                      Box_Weapon);                                               // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001B PADDING_040E, class UButton*,                                                        Button_Mute);                                              // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0023 PADDING_040E, class UImage*,                                                         IconBadge);                                                // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002B PADDING_040E, class UImage*,                                                         IconHealthState);                                          // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0033 PADDING_040E, class UImage*,                                                         IconMute);                                                 // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003B PADDING_040E, class UImage*,                                                         IconRole);                                                 // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0043 PADDING_040E, class UImage*,                                                         IconVehicle);                                              // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004B PADDING_040E, class UImage*,                                                         Image_tick);                                               // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0053 PADDING_040E, class UImage*,                                                         Image_Weapon);                                             // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005B PADDING_040E, class UButton*,                                                        SelectButton);                                             // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0063 PADDING_040E, class UTextBlock*,                                                     TBName);                                                   // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006B PADDING_040E, class ASQPlayerController*,                                            My_PC);                                                    // 0x0320(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0073 PADDING_040E, class UW_PopupOptionBox_C*,                                            Current_Popup);                                            // 0x0328(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007B PADDING_040E, bool,                                                                  bIsInVehicle);                                             // 0x0330(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x007C PADDING_040E, bool,                                                                  selected);                                                 // 0x0331(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SquadMemberItem.W_SquadMemberItem_C");
		return ptr;
	}


	void Self_Squad(bool* Is_SelfSquad);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Set_Role();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Update_Weapon_Visibility();
	void Update_Mute_Icon();
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void Update_Member_Item();
	ESQSelectionState Get_Selection_State();
	void Toggle_Selection();
	void Cache_Popup(class UW_PopupOptionBox_C* New_Popup);
	void Update_Rank();
	void Update_Border_Color();
	void OnIsSquadLeaderChanged();
	void OnPlayerNameChanged();
	void OnDeployRoleChanged();
	void Construct();
	void OnIsBleedingChanged();
	void OnIsWoundedChanged();
	void OnListLayoutChanged();
	void Reset_Selector();
	void OnFireTeamIndexChanged();
	void OnIsFireTeamLeaderChanged();
	void Create_Assign_Fireteam_Options();
	void Assign_Return(int ID);
	void Open_Options();
	void OnCurrentVehicleDataChanged();
	void OnSelectionStateChanged();
	void OnVoipChannelChanged();
	void OnIsMutedChanged();
	void BndEvt__Button_Mute_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature();
	void OnSquadIdChanged();
	void BndEvt__SelectButton_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void OnIsPossessingPawnChanged();
	void Popup_Option_Return(int ID);
	void Create_Promote_Options();
	void Promote_Return(int ID);
	void ExecuteUbergraph_W_SquadMemberItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
