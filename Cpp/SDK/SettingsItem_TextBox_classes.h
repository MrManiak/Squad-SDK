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

// WidgetBlueprintGeneratedClass SettingsItem_TextBox.SettingsItem_TextBox_C
// 0x00C8 (FullSize[0x02A8] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_01BC - 0x0000 // Minimum to subtract -> (0050)
class USettingsItem_TextBox_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_01BC, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_01BC, class UButton*,                                                        Button_1);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_01BC, class UHorizontalBox*,                                                 HorizontalBox_1);                                          // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_01BC, class UImage*,                                                         SpacerImg);                                                // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_01BC, class UTextBlock*,                                                     TB_Title);                                                 // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_01BC, class UEditableTextBox*,                                               TextBox);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_01BC, struct FText,                                                          SettingName);                                              // 0x0260(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0098 PADDING_01BC, struct FText,                                                          DefaultText);                                              // 0x0278(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_01BC, struct FScriptMulticastDelegate,                                       OnValueChanged);                                           // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_01BC, bool,                                                                  bConstructed);                                             // 0x02A0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00C4 PADDING_01BC, int,                                                                   MaxLength);                                                // 0x02A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsItem_TextBox.SettingsItem_TextBox_C");
		return ptr;
	}


	void SetTextBoxText(const struct FText& NewTextBoxString);
	struct FSlateBrush Get_SpacerImg_Brush_1();
	void Construct();
	void BndEvt__TextBox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void BndEvt__TextBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_SettingsItem_TextBox(int EntryPoint);
	void OnValueChanged__DelegateSignature(const struct FText& NewText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
