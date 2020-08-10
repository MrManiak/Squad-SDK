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

// WidgetBlueprintGeneratedClass SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C
// 0x00D8 (FullSize[0x02B8] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0CCD - 0x0000 // Minimum to subtract -> (0050)
class USettingsItem_GraphicsToggle_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CCD, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CCD, class UButton*,                                                        GlobalButton);                                             // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CCD, class UHorizontalBox*,                                                 HorizontalButtonBox);                                      // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CCD, class UTextBlock*,                                                     TB_Title);                                                 // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CCD, struct FText,                                                          SettingName);                                              // 0x0250(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0CCD, TArray<struct FText>,                                                  ButtonNames);                                              // 0x0268(0x0010)  (Edit, BlueprintVisible, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0CCD, int,                                                                   SelectedButton);                                           // 0x0278(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0CCD, struct FScriptMulticastDelegate,                                       OnButtonClick);                                            // 0x0280(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0CCD, bool,                                                                  bHovered);                                                 // 0x0290(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00B1 PADDING_0CCD, bool,                                                                  bConstructed);                                             // 0x0291(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_0CCD, int,                                                                   Tag);                                                      // 0x0294(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0CCD, struct FScriptMulticastDelegate,                                       OnButtonClick2);                                           // 0x0298(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0CCD, TArray<class USetting_Button_C*>,                                      My_Buttons);                                               // 0x02A8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C");
		return ptr;
	}


	class USetting_Button_C* Setup_Button(const struct FText& ButtonText);
	struct FSlateBrush GetBrush();
	void SetSelected(int Index);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Create_Buttons();
	void On_Button_Clicked(bool bSelected, class USetting_Button_C* Button);
	void ExecuteUbergraph_SettingsItem_GraphicsToggle(int EntryPoint);
	void OnButtonClick2__DelegateSignature(int ButtonNumber, class USettingsItem_GraphicsToggle_C* ToggleItem);
	void OnButtonClick__DelegateSignature(int ButtonNumber);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
