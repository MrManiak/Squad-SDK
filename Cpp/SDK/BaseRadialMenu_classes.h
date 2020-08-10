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

// WidgetBlueprintGeneratedClass BaseRadialMenu.BaseRadialMenu_C
// 0x0190 (FullSize[0x0370] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_011A - 0x0000 // Minimum to subtract -> (0050)
class UBaseRadialMenu_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_011A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_011A, class UWidgetAnimation*,                                               Fade);                                                     // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_011A, class UNamedSlot*,                                                     CenterSlot);                                               // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_011A, class UBorder*,                                                        CursorRing);                                               // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_011A, class UCanvasPanel*,                                                   Panel);                                                    // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_011A, class UOverlay*,                                                       RightClickTooltip);                                        // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_011A, class UImage*,                                                         RingBG);                                                   // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_011A, class UCanvasPanel*,                                                   RingWidgetsPanel);                                         // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_011A, class UTextBlock*,                                                     TextBlock_2);                                              // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_011A, TArray<class USQRadialButton*>,                                        OuterRingWidgets);                                         // 0x0278(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_011A, class USQRadialButton*,                                                Center_Widget);                                            // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_011A, float,                                                                 MaxOuterDistance);                                         // 0x0290(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_011A, float,                                                                 ActiveOuterRingDistance);                                  // 0x0294(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_011A, float,                                                                 InactiveOuterRingDistance);                                // 0x0298(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_011A, struct FScriptMulticastDelegate,                                       OnOptionClicked);                                          // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_011A, struct FScriptMulticastDelegate,                                       OnCenterClicked);                                          // 0x02B0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_011A, struct FName,                                                          CloseMenuActionName);                                      // 0x02C0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_011A, bool,                                                                  Inactive);                                                 // 0x02C8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_011A, class UClass*,                                                         RadialMenuModel);                                          // 0x02D0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_011A, class UObject*,                                                        Context);                                                  // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_011A, class UCurveFloat*,                                                    RingScale);                                                // 0x02E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_011A, float,                                                                 MaxDistanceFromContext);                                   // 0x02E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x010C PADDING_011A, float,                                                                 RadialSize);                                               // 0x02EC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_011A, struct FScriptMulticastDelegate,                                       HoverWidgetChanged);                                       // 0x02F0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0120 PADDING_011A, class USoundBase*,                                                     MouseClickSoundCue);                                       // 0x0300(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0128 PADDING_011A, float,                                                                 Desired_Angle);                                            // 0x0308(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x012C PADDING_011A, float,                                                                 Mouse_Speed_Threshold);                                    // 0x030C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_011A, struct FVector2D,                                                      LastMousePos);                                             // 0x0310(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0138 PADDING_011A, int,                                                                   Last_Hover_Index);                                         // 0x0318(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_011A, TArray<class UClass*>,                                                 Last_Radial_Models);                                       // 0x0320(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0150 PADDING_011A, struct FScriptMulticastDelegate,                                       Centre_Hover_Changed);                                     // 0x0330(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0160 PADDING_011A, bool,                                                                  Hovering_Centre);                                          // 0x0340(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0168 PADDING_011A, struct FScriptMulticastDelegate,                                       OnRadialMenuDestroyed);                                    // 0x0348(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0178 PADDING_011A, TArray<class UBP_RadialItemModel_C*>,                                  OuterRingModels);                                          // 0x0358(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0188 PADDING_011A, bool,                                                                  Is_Open);                                                  // 0x0368(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x018C PADDING_011A, float,                                                                 Radial_Centre_Hover_Division);                             // 0x036C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BaseRadialMenu.BaseRadialMenu_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetVoiceTooltipVisibility();
	void Finished_Closed_Animation();
	void FadeAnimation(bool Reverse);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	void Check_Add_Back_Model(class UBP_GotoMenuActionModel_C* Goto_Button);
	void Return_to_Previous_Menu();
	void Sort_Radial_Z_Order();
	void prepareToolTip(class UBP_RadialItemModel_C* ItemModel, class UUserWidget** ToolTipWidget);
	void CreateRadialWidget(class UClass* WidgetClass, class USQUserWidget** CreatedWidget);
	void GetSelectedOuterWidget(int* Output_Get, float* Actual_Angle);
	void Destroy();
	void CloseSelf();
	void CreateMenuFromModel();
	void SetHoveringWidget(class USQRadialButton* NewHover, class USQRadialButton* OldHover);
	void GetHoverWidget(class USQRadialButton** HoverWidget);
	void Notify_HoverOver();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void LayoutOuterRing();
	void AddChild(class USQRadialButton* Entry, class UBP_RadialItemModel_C* Model);
	void Clear_Menu();
	void Add_Center_Widget(class USQRadialButton* Entry);
	void GetOuterWidgetIndex(int* WidgetIndex);
	void IsMouseInCenterHitbox(bool* CenterHitbox);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Center_Button_Clicked();
	void Radial_Option_Clicked(int Index);
	void ButtonPress(class UBP_RadialItemModel_C* Item);
	void Reset();
	void Radial_Option_Released(int Index);
	void ButtonRelease(class UBP_RadialItemModel_C* Item);
	void ExecuteUbergraph_BaseRadialMenu(int EntryPoint);
	void OnRadialMenuDestroyed__DelegateSignature();
	void Centre_Hover_Changed__DelegateSignature(bool Centre_Hovered);
	void HoverWidgetChanged__DelegateSignature();
	void OnCenterClicked__DelegateSignature(class UBaseRadialMenu_C* Context);
	void OnOptionClicked__DelegateSignature(int OptionIndex, class UBaseRadialMenu_C* Context);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
