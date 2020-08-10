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

// WidgetBlueprintGeneratedClass SettingsItem_ControlList.SettingsItem_ControlList_C
// 0x00B8 (FullSize[0x0298] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_025B - 0x0000 // Minimum to subtract -> (0050)
class USettingsItem_ControlList_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_025B, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_025B, class UBorder*,                                                        Border_1);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_025B, class UButton*,                                                        Button_5);                                                 // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_025B, class UGlowingButton_12_C*,                                            NewKey_Alternative);                                       // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_025B, class UGlowingButton_12_C*,                                            NewKey_JoystickGamepad);                                   // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_025B, class UGlowingButton_12_C*,                                            NewKey_Primary);                                           // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_025B, class UTextBlock*,                                                     TB_ActionName);                                            // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_025B, struct FName,                                                          ActionName);                                               // 0x0268(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_025B, class UControlsWindow_C*,                                              ControlsWindow);                                           // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_025B, int,                                                                   CapturingKey);                                             // 0x0278(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009C PADDING_025B, bool,                                                                  Axis);                                                     // 0x027C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x009D PADDING_025B, bool,                                                                  NegativeAxis);                                             // 0x027D(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_025B, struct FText,                                                          FriendlyName);                                             // 0x0280(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsItem_ControlList.SettingsItem_ControlList_C");
		return ptr;
	}


	void Is_Action_Key_Valid(bool* Key_Is_Valid);
	void Get_Axis_Map_to_Edit(struct FInputAxisKeyMapping* Map, bool* Valid);
	void RebindAxisKey(const struct FKey& Key);
	void RebindActionKey(const struct FKey& Key);
	void GetMappedKeys(TArray<struct FKey>* Keys);
	void TranslateKey(const struct FKey& Key, struct FString* Text);
	void GetMappedAxisKeys(TArray<struct FKey>* Keys);
	void GetMappedActionKeys(TArray<struct FKey>* Keys);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnInput(const struct FKey& InputKey);
	void FinishInputCapture(const struct FKey& newKey);
	void StartInputCapture(int KeyId);
	void UpdateKeys();
	void Init(class UControlsWindow_C* ControlsWindow, const struct FName& ActionName, const struct FText& FriendlyName);
	void BndEvt__NewKey1_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature(bool bHovered);
	void BndEvt__NewKey2_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature(bool bHovered);
	void BindInputCaptureEvents();
	void OnInput_Event_1(const struct FKey& InputKey);
	void BndEvt__NewKey1_K2Node_ComponentBoundEvent_355_OnClicked__DelegateSignature(bool bSelected, class UGlowingButton_12_C* Button);
	void BndEvt__NewKey2_K2Node_ComponentBoundEvent_364_OnClicked__DelegateSignature(bool bSelected, class UGlowingButton_12_C* Button);
	void BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature(bool bHovered);
	void BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UGlowingButton_12_C* Button);
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_244_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_SettingsItem_ControlList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
