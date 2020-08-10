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

// WidgetBlueprintGeneratedClass SettingsItem_Slider_LR.SettingsItem_Slider_LR_C
// 0x0134 (FullSize[0x0314] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0132 - 0x0000 // Minimum to subtract -> (0050)
class USettingsItem_Slider_LR_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0132, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0132, class UButton*,                                                        Button_1);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0132, class UHorizontalBox*,                                                 HorizontalBox_1);                                          // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0132, class USizeBox*,                                                       SizeBox_5);                                                // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0132, class USlider*,                                                        Slider);                                                   // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0132, class UEditableText*,                                                  SliderText);                                               // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0132, class UTextBlock*,                                                     TB_Title);                                                 // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0132, struct FText,                                                          SettingName);                                              // 0x0268(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0132, float,                                                                 SliderMin);                                                // 0x0280(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0132, float,                                                                 SliderMax);                                                // 0x0284(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0132, float,                                                                 MinValue);                                                 // 0x0288(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00AC PADDING_0132, float,                                                                 MaxValue);                                                 // 0x028C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0132, float,                                                                 Value);                                                    // 0x0290(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_0132, int,                                                                   MinFractionDigits);                                        // 0x0294(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0132, int,                                                                   MaxFractionDigits);                                        // 0x0298(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0132, struct FText,                                                          CachedSliderText);                                         // 0x02A0(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0132, struct FScriptMulticastDelegate,                                       OnValueChanged);                                           // 0x02B8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0132, bool,                                                                  bConstructed);                                             // 0x02C8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00E9 PADDING_0132, bool,                                                                  bIsPercentage);                                            // 0x02C9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00EC PADDING_0132, struct FLinearColor,                                                   Regular_Color);                                            // 0x02CC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00FC PADDING_0132, struct FLinearColor,                                                   Hovered_Color);                                            // 0x02DC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x010C PADDING_0132, struct FLinearColor,                                                   Pressed_Color);                                            // 0x02EC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_0132, struct FScriptMulticastDelegate,                                       OnCaptureEnd);                                             // 0x0300(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0130 PADDING_0132, float,                                                                 TextBoxSize);                                              // 0x0310(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsItem_Slider_LR.SettingsItem_Slider_LR_C");
		return ptr;
	}


	void RemovePercentage(const struct FText& InText, struct FText* OutText);
	struct FSlateBrush Get_SpacerImg_Brush_1();
	void UpdateSliderValue();
	void UpdateSliderTextValue();
	void SetValue(float Value);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_361_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__SliderText_K2Node_ComponentBoundEvent_191_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__SliderText_K2Node_ComponentBoundEvent_275_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_15_OnMouseCaptureEndEvent__DelegateSignature();
	void ExecuteUbergraph_SettingsItem_Slider_LR(int EntryPoint);
	void OnCaptureEnd__DelegateSignature(float Value);
	void OnValueChanged__DelegateSignature(float Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
