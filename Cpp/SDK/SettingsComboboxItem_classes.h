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

// WidgetBlueprintGeneratedClass SettingsComboboxItem.SettingsComboboxItem_C
// 0x00B9 (FullSize[0x0299] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_00E8 - 0x0000 // Minimum to subtract -> (0050)
class USettingsComboboxItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_00E8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_00E8, class UButton*,                                                        Button_1);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_00E8, class UComboBoxString*,                                                ComboBoxString);                                           // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_00E8, class UHorizontalBox*,                                                 HorizontalBox_1);                                          // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_00E8, class UImage*,                                                         SpacerImg);                                                // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_00E8, class UTextBlock*,                                                     TB_Title);                                                 // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_00E8, struct FText,                                                          SettingName);                                              // 0x0260(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0098 PADDING_00E8, TArray<struct FString>,                                                DefaultOptions);                                           // 0x0278(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_00E8, struct FScriptMulticastDelegate,                                       OnValueChanged);                                           // 0x0288(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_00E8, bool,                                                                  bConstructed);                                             // 0x0298(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsComboboxItem.SettingsComboboxItem_C");
		return ptr;
	}


	void SetSelectedIndex(int Index);
	void SetSelected(const struct FString& Option);
	void SetOptions(TArray<struct FString>* NewOptions);
	struct FSlateBrush Get_SpacerImg_Brush_1();
	void Construct();
	void BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_289_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void ExecuteUbergraph_SettingsComboboxItem(int EntryPoint);
	void OnValueChanged__DelegateSignature(const struct FString& Option, int Index);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
