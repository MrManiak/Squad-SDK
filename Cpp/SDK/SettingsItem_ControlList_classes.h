#pragma once

// Name: S, Version: b


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
// 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
class USettingsItem_ControlList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_5;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGlowingButton_12_C*                         NewKey_Alternative;                                        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGlowingButton_12_C*                         NewKey_JoystickGamepad;                                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGlowingButton_12_C*                         NewKey_Primary;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TB_ActionName;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FName                                       ActionName;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UControlsWindow_C*                           ControlsWindow;                                            // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CapturingKey;                                              // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Axis;                                                      // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               NegativeAxis;                                              // 0x027D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_6Y7C[0x2];                                     // 0x027E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       FriendlyName;                                              // 0x0280(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


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
