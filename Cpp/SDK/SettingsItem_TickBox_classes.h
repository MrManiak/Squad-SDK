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

// WidgetBlueprintGeneratedClass SettingsItem_TickBox.SettingsItem_TickBox_C
// 0x016C (FullSize[0x034C] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0009 - 0x0000 // Minimum to subtract -> (0050)
class USettingsItem_TickBox_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0009, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0009, class UButton*,                                                        Button);                                                   // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0009, class UHorizontalBox*,                                                 HorizontalBoxMain);                                        // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0009, class UScaleBox*,                                                      IconScaleBox);                                             // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0009, class UImage*,                                                         MyIcon);                                                   // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0009, class USizeBox*,                                                       SizeBox_1);                                                // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0009, class UTextBlock*,                                                     TB_Main);                                                  // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0009, struct FText,                                                          ButtonText);                                               // 0x0268(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0009, struct FLinearColor,                                                   RegularColor);                                             // 0x0280(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0009, struct FScriptMulticastDelegate,                                       OnClicked);                                                // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0009, struct FLinearColor,                                                   SelectedColor);                                            // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0009, struct FLinearColor,                                                   HoveredColor);                                             // 0x02B0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0009, struct FLinearColor,                                                   SelectedHoveredColor);                                     // 0x02C0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0009, bool,                                                                  bHovered);                                                 // 0x02D0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F1 PADDING_0009, bool,                                                                  bSelected);                                                // 0x02D1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0009, struct FScriptMulticastDelegate,                                       OnHover);                                                  // 0x02D8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0009, int,                                                                   Text_Size);                                                // 0x02E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x010C PADDING_0009, float,                                                                 Icon_Size);                                                // 0x02EC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0009, class UTexture2D*,                                                     Icon_Image);                                               // 0x02F0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0009, struct FSlateColor,                                                    Icon_Color);                                               // 0x02F8(0x0028)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0140 PADDING_0009, bool,                                                                  Use_Icon);                                                 // 0x0320(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0141 PADDING_0009, bool,                                                                  Use_Underline);                                            // 0x0321(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0142 PADDING_0009, TEnumAsByte<EHorizontalAlignment>,                                     BoxAlignment);                                             // 0x0322(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0144 PADDING_0009, struct FMargin,                                                        Text_Padding_Amount);                                      // 0x0324(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0154 PADDING_0009, struct FMargin,                                                        Button_Padding);                                           // 0x0334(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0164 PADDING_0009, int,                                                                   SteamTagID);                                               // 0x0344(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0168 PADDING_0009, float,                                                                 TextBoxWidth);                                             // 0x0348(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsItem_TickBox.SettingsItem_TickBox_C");
		return ptr;
	}


	void Update_Tick_Box();
	struct FSlateColor Bind_TextColor();
	struct FLinearColor Bind_LineColor();
	void SetText(const struct FText& Text);
	void UpdateColors();
	void SetSelected(bool bSelected);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_SettingsItem_TickBox(int EntryPoint);
	void OnHover__DelegateSignature(bool bHovered);
	void OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
