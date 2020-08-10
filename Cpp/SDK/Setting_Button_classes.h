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

// WidgetBlueprintGeneratedClass Setting_Button.Setting_Button_C
// 0x0244 (FullSize[0x0424] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_01EA - 0x0000 // Minimum to subtract -> (0050)
class USetting_Button_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_01EA, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_01EA, class UWidgetAnimation*,                                               Press);                                                    // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_01EA, class UImage*,                                                         BottomLine);                                               // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_01EA, class UButton*,                                                        Button);                                                   // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_01EA, class UHorizontalBox*,                                                 HorizontalBoxMain);                                        // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_01EA, class UScaleBox*,                                                      IconScaleBox);                                             // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_01EA, class UImage*,                                                         LeftLine);                                                 // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_01EA, class UOverlay*,                                                       LineParent);                                               // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_01EA, class UImage*,                                                         MyIcon);                                                   // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_01EA, class UImage*,                                                         RightLine);                                                // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_01EA, class UTextBlock*,                                                     TB_Bold);                                                  // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_01EA, class UTextBlock*,                                                     TB_Main);                                                  // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_01EA, class UImage*,                                                         TopLine);                                                  // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_01EA, class UWidgetSwitcher*,                                                WidgetSwitcher_Bold);                                      // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_01EA, TEnumAsByte<EHorizontalAlignment>,                                     BoxAlignment);                                             // 0x02A0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C1 PADDING_01EA, TEnumAsByte<EButtonLineSide>,                                          Line_Position);                                            // 0x02A1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C2 PADDING_01EA, bool,                                                                  Use_Line);                                                 // 0x02A2(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00C4 PADDING_01EA, struct FLinearColor,                                                   RegularColor);                                             // 0x02A4(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_01EA, struct FScriptMulticastDelegate,                                       OnClicked);                                                // 0x02B8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_01EA, struct FLinearColor,                                                   SelectedColor);                                            // 0x02C8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_01EA, struct FLinearColor,                                                   HoveredColor);                                             // 0x02D8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_01EA, struct FLinearColor,                                                   SelectedHoveredColor);                                     // 0x02E8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_01EA, bool,                                                                  bHovered);                                                 // 0x02F8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0119 PADDING_01EA, bool,                                                                  bSelected);                                                // 0x02F9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x011A PADDING_01EA, bool,                                                                  bIsToggle);                                                // 0x02FA(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0120 PADDING_01EA, struct FScriptMulticastDelegate,                                       OnHover);                                                  // 0x0300(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0130 PADDING_01EA, bool,                                                                  Use_Icon);                                                 // 0x0310(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0131 PADDING_01EA, bool,                                                                  Bold_Text);                                                // 0x0311(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0138 PADDING_01EA, class UTexture2D*,                                                     Icon_Image);                                               // 0x0318(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_01EA, float,                                                                 Icon_Size);                                                // 0x0320(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0148 PADDING_01EA, struct FSlateColor,                                                    Icon_Color);                                               // 0x0328(0x0028)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0170 PADDING_01EA, struct FText,                                                          Display_Text);                                             // 0x0350(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0188 PADDING_01EA, int,                                                                   Text_Size);                                                // 0x0368(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x018C PADDING_01EA, struct FMargin,                                                        Text_Padding_Amount);                                      // 0x036C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x019C PADDING_01EA, struct FMargin,                                                        Button_Padding);                                           // 0x037C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x01AC PADDING_01EA, struct FLinearColor,                                                   Text_Normal);                                              // 0x038C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01BC PADDING_01EA, struct FLinearColor,                                                   Text_Toggle_Normal);                                       // 0x039C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01CC PADDING_01EA, struct FLinearColor,                                                   Text_Selected);                                            // 0x03AC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01DC PADDING_01EA, struct FLinearColor,                                                   Text_Hovered);                                             // 0x03BC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01EC PADDING_01EA, struct FLinearColor,                                                   Text_Selected_Hovered);                                    // 0x03CC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01FC PADDING_01EA, struct FLinearColor,                                                   Line_Color);                                               // 0x03DC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x020C PADDING_01EA, struct FLinearColor,                                                   Line_Hover_Color);                                         // 0x03EC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x021C PADDING_01EA, struct FLinearColor,                                                   Line_Unhover_Color);                                       // 0x03FC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0230 PADDING_01EA, struct FScriptMulticastDelegate,                                       OnDoubleClicked);                                          // 0x0410(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0240 PADDING_01EA, float,                                                                 Last_Click_Time);                                          // 0x0420(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Setting_Button.Setting_Button_C");
		return ptr;
	}


	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Refresh_Line();
	void Setup_Button();
	void Update_Button();
	struct FSlateColor Bind_TextColor();
	struct FLinearColor Bind_LineColor();
	void SetText(const struct FText& Text);
	void UpdateColors();
	void SetSelected(bool bSelected);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_Setting_Button(int EntryPoint);
	void OnDoubleClicked__DelegateSignature();
	void OnHover__DelegateSignature(bool bHovered);
	void OnClicked__DelegateSignature(bool bSelected, class USetting_Button_C* Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
