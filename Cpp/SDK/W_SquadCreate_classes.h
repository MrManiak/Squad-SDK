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

// WidgetBlueprintGeneratedClass W_SquadCreate.W_SquadCreate_C
// 0x00A8 (FullSize[0x0288] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0257 - 0x0000 // Minimum to subtract -> (0050)
class UW_SquadCreate_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0257, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0257, class UMainMenu_Button_C*,                                             ButtonLocked);                                             // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0257, class UButton*,                                                        Create);                                                   // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0257, class UEditableTextBox*,                                               CreateSquad_TextBox);                                      // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0257, class UButton*,                                                        Leave);                                                    // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0257, class UWidgetSwitcher*,                                                SwitchCreateLeave);                                        // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0257, class UTextBlock*,                                                     TBSquadName);                                              // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0257, class UWidgetSwitcher*,                                                WidgetSwitcherName);                                       // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0257, class ASQPlayerController*,                                            Parent_Controller);                                        // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0257, struct FString,                                                        CustomName);                                               // 0x0278(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SquadCreate.W_SquadCreate_C");
		return ptr;
	}


	class UWidget* Get_ButtonLocked_ToolTipWidget_1();
	void Refresh_Widget();
	struct FText BIND___Num_Player();
	void Construct();
	void BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__Create_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Leave_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Update_Lock_Icon();
	void BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_W_SquadCreate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
