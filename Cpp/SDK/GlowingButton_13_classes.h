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

// WidgetBlueprintGeneratedClass GlowingButton_13.GlowingButton_12_C
// 0x00E9 (FullSize[0x02C9] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0312 - 0x0000 // Minimum to subtract -> (0050)
class UGlowingButton_12_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0312, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0312, class UButton*,                                                        Button);                                                   // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0312, class UGlowingText_12_C*,                                              GlowingText_12_C_1);                                       // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0312, struct FText,                                                          ButtonText);                                               // 0x0248(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0312, struct FLinearColor,                                                   RegularColor);                                             // 0x0260(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0312, struct FScriptMulticastDelegate,                                       OnClicked);                                                // 0x0270(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0312, struct FLinearColor,                                                   SelectedColor);                                            // 0x0280(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0312, struct FLinearColor,                                                   HoveredColor);                                             // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0312, struct FLinearColor,                                                   SelectedHoveredColor);                                     // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0312, bool,                                                                  bHovered);                                                 // 0x02B0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00D1 PADDING_0312, bool,                                                                  bSelected);                                                // 0x02B1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00D2 PADDING_0312, bool,                                                                  bIsToggle);                                                // 0x02B2(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0312, struct FScriptMulticastDelegate,                                       OnHover);                                                  // 0x02B8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0312, bool,                                                                  bShowShadow);                                              // 0x02C8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GlowingButton_13.GlowingButton_12_C");
		return ptr;
	}


	void SetText(const struct FText& Text);
	void UpdateButtonColor();
	void SetSelected(bool bSelected);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_GlowingButton_13(int EntryPoint);
	void OnHover__DelegateSignature(bool bHovered);
	void OnClicked__DelegateSignature(bool bSelected, class UGlowingButton_12_C* Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
