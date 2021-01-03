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

// WidgetBlueprintGeneratedClass SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C
// 0x0088 (FullSize[0x02B8] - InheritedSize[0x0230])
class USettingsItem_GraphicsToggle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     GlobalButton;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalButtonBox;                                       // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TB_Title;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       SettingName;                                               // 0x0250(0x0018) (Edit, BlueprintVisible)
	TArray<struct FText>                               ButtonNames;                                               // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SelectedButton;                                            // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MOXP[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnButtonClick;                                             // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bHovered;                                                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bConstructed;                                              // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_29I2[0x2];                                     // 0x0292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Tag;                                                       // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnButtonClick2;                                            // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class USetting_Button_C*>                   My_Buttons;                                                // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)


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
