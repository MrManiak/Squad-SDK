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

// WidgetBlueprintGeneratedClass W_ChatBox.W_ChatBox_C
// 0x00A9 (FullSize[0x0289] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_01F5 - 0x0000 // Minimum to subtract -> (0050)
class UW_ChatBox_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_01F5, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_01F5, class UBorder*,                                                        Border_MainChat);                                          // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_01F5, class UEditableTextBox*,                                               EditableTextBox_166);                                      // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_01F5, class UVerticalBox*,                                                   MessageList);                                              // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_01F5, class UButton*,                                                        ScrollButton);                                             // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_01F5, class UScrollBox*,                                                     ScrollList);                                               // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_01F5, class UBorder*,                                                        ServerMessage);                                            // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_01F5, class UTextBlock*,                                                     TBChannel);                                                // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_01F5, class UBorder*,                                                        TextEntryBorder);                                          // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_01F5, TEnumAsByte<EChatChannels>,                                            Current_Channel);                                          // 0x0278(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_01F5, class ABP_PlayerController_C*,                                         My_PC);                                                    // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_01F5, bool,                                                                  Auto_Scroll);                                              // 0x0288(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ChatBox.W_ChatBox_C");
		return ptr;
	}


	class UWidget* Get_ScrollButton_ToolTipWidget_1();
	void Refresh_Scroll_Button();
	void Refresh_Visuals();
	void Focus_Menu();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void BndEvt__EditableTextBox_165_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void Change_Channel();
	void Construct();
	void Add_New_Chat(const struct FString& PlayerName, const struct FString& Message, ESQChat Channel, const struct FLinearColor& Color, ESQNotificationTypes NotificationType);
	void Focus_and_Change_Channel(ESQChat Channel);
	void Set_Chat_Visibility(bool Visible);
	void BndEvt__SelectButton_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void Bind_To_Menu_Open_Close(class UUMG_MenuBase_C* Menu);
	void Parent_Closed();
	void Parent_Opened();
	void ExecuteUbergraph_W_ChatBox(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
