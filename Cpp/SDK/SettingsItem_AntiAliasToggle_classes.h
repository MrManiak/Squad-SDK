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

// WidgetBlueprintGeneratedClass SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C
// 0x00FA (FullSize[0x02DA] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_015D - 0x0000 // Minimum to subtract -> (0050)
class USettingsItem_AntiAliasToggle_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_015D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_015D, class UButton*,                                                        Button_1);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_015D, class UMainMenu_Button_C*,                                             FXAA);                                                     // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_015D, class UHorizontalBox*,                                                 HorizontalBox_1);                                          // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_015D, class UMainMenu_Button_C*,                                             MSAAdisabled_required);                                    // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_015D, class UMainMenu_Button_C*,                                             Off);                                                      // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_015D, class UMainMenu_Button_C*,                                             SMAA);                                                     // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_015D, class UImage*,                                                         SpacerImg);                                                // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_015D, class UMainMenu_Button_C*,                                             TAA);                                                      // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_015D, class UTextBlock*,                                                     TB_Title);                                                 // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_015D, class UMainMenu_Button_C*,                                             TFXAA);                                                    // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_015D, struct FText,                                                          SettingName);                                              // 0x0288(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_015D, TArray<struct FText>,                                                  ButtonNames);                                              // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_015D, TArray<class UMainMenu_Button_C*>,                                     Buttons);                                                  // 0x02B0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_015D, int,                                                                   SelectedButton);                                           // 0x02C0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_015D, struct FScriptMulticastDelegate,                                       OnButtonClick);                                            // 0x02C8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_015D, bool,                                                                  bHovered);                                                 // 0x02D8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F9 PADDING_015D, bool,                                                                  bConstructed);                                             // 0x02D9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C");
		return ptr;
	}


	struct FSlateBrush GetBrush_1();
	void SetSelected(int Index);
	void Setup_Button(class UMainMenu_Button_C* Button, int Index);
	void Construct();
	void OnClicked_Event(bool bSelected, class UMainMenu_Button_C* Button);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_SettingsItem_AntiAliasToggle(int EntryPoint);
	void OnButtonClick__DelegateSignature(int ButtonNumber);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
