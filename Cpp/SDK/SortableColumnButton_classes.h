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

// WidgetBlueprintGeneratedClass SortableColumnButton.SortableColumnButton_C
// 0x0182 (FullSize[0x0362] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_03F7 - 0x0000 // Minimum to subtract -> (0050)
class USortableColumnButton_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_03F7, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03F7, class UButton*,                                                        Button);                                                   // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03F7, class UImage*,                                                         Icon);                                                     // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_03F7, class UScaleBox*,                                                      IconScaleBox);                                             // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03F7, class UImage*,                                                         SortingArrow);                                             // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03F7, class UTextBlock*,                                                     TB_Main);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03F7, class UVerticalBox*,                                                   VerticalBox_Main);                                         // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_03F7, struct FText,                                                          ButtonText);                                               // 0x0268(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_03F7, struct FLinearColor,                                                   RegularColor);                                             // 0x0280(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_03F7, struct FScriptMulticastDelegate,                                       OnClicked);                                                // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_03F7, struct FLinearColor,                                                   SelectedColor);                                            // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_03F7, struct FLinearColor,                                                   HoveredColor);                                             // 0x02B0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_03F7, struct FLinearColor,                                                   SelectedHoveredColor);                                     // 0x02C0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_03F7, bool,                                                                  bHovered);                                                 // 0x02D0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F1 PADDING_03F7, bool,                                                                  bSelected);                                                // 0x02D1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F2 PADDING_03F7, bool,                                                                  bIsToggle);                                                // 0x02D2(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F3 PADDING_03F7, bool,                                                                  bScaleGlowByResolution);                                   // 0x02D3(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_03F7, class UClass*,                                                         TextSampleClass);                                          // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_03F7, struct FScriptMulticastDelegate,                                       OnHover);                                                  // 0x02E0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0110 PADDING_03F7, bool,                                                                  bShowShadow);                                              // 0x02F0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0111 PADDING_03F7, bool,                                                                  bConstructed);                                             // 0x02F1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0112 PADDING_03F7, ESQSortStates,                                                         SortState);                                                // 0x02F2(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0114 PADDING_03F7, int,                                                                   Text_Size);                                                // 0x02F4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_03F7, bool,                                                                  Use_Sort_Arrow);                                           // 0x02F8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x011C PADDING_03F7, struct FMargin,                                                        Text_Padding_Amount);                                      // 0x02FC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x012C PADDING_03F7, bool,                                                                  Use_Icon);                                                 // 0x030C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0130 PADDING_03F7, struct FSlateColor,                                                    Icon_Color);                                               // 0x0310(0x0028)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0158 PADDING_03F7, float,                                                                 Icon_Size);                                                // 0x0338(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0160 PADDING_03F7, class UTexture2D*,                                                     Icon_Image);                                               // 0x0340(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0168 PADDING_03F7, TEnumAsByte<EHorizontalAlignment>,                                     Fill_Style);                                               // 0x0348(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x016C PADDING_03F7, struct FMargin,                                                        Button_Padding);                                           // 0x034C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x017C PADDING_03F7, float,                                                                 ArrowSize);                                                // 0x035C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0180 PADDING_03F7, ESQSortStates,                                                         First_Click_Unsorted);                                     // 0x0360(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0181 PADDING_03F7, TEnumAsByte<E_SortType>,                                               Sort_Type);                                                // 0x0361(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SortableColumnButton.SortableColumnButton_C");
		return ptr;
	}


	void Set_Sort_State(ESQSortStates SortState, bool bSelected);
	ESlateVisibility Set_Arrow();
	void Set_Text(const struct FText& Text);
	void Update_Widget();
	void Set_Selected(bool bSelected);
	void BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_SortableColumnButton(int EntryPoint);
	void OnHover__DelegateSignature(bool bHovered);
	void OnClicked__DelegateSignature(bool bIsAscending, TEnumAsByte<E_SortType> Sort_Type);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
