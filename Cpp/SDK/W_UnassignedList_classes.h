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

// WidgetBlueprintGeneratedClass W_UnassignedList.W_UnassignedList_C
// 0x0090 (FullSize[0x0270] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0272 - 0x0000 // Minimum to subtract -> (0050)
class UW_UnassignedList_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0272, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0272, class UBorder*,                                                        Border_List);                                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0272, class UMainMenu_Button_C*,                                             Button_InviteAll);                                         // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0272, class UMainMenu_Button_C*,                                             Button_InviteSelected);                                    // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0272, class UHorizontalBox*,                                                 HorizontalBox_Invites);                                    // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0272, class UMainMenu_Button_C*,                                             MainMenu_Button);                                          // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0272, class UScrollBox*,                                                     Member_SelectorBox);                                       // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0272, class ASQPlayerController*,                                            My_PC);                                                    // 0x0268(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_UnassignedList.W_UnassignedList_C");
		return ptr;
	}


	void Update_List();
	void Construct();
	void Refresh_Invite_List();
	void Close_List();
	void Button_Selection_Changed(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_InviteAll_K2Node_ComponentBoundEvent_128_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_InviteSelected_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void ExecuteUbergraph_W_UnassignedList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
