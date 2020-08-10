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

// WidgetBlueprintGeneratedClass SettingsItem_Slider.SettingsItem_Slider_C
// 0x0144 (FullSize[0x0324] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0255 - 0x0000 // Minimum to subtract -> (0050)
class USettingsItem_Slider_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0255, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0255, class UButton*,                                                        Button_1);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0255, class UHorizontalBox*,                                                 HorizontalBox_1);                                          // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0255, class USizeBox*,                                                       SizeBox_5);                                                // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0255, class USlider*,                                                        Slider);                                                   // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0255, class UEditableText*,                                                  SliderText);                                               // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0255, class UImage*,                                                         SpacerImg);                                                // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0255, class UImage*,                                                         SpacerImg_2);                                              // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0255, class UTextBlock*,                                                     TB_Title);                                                 // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0255, struct FText,                                                          SettingName);                                              // 0x0278(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0255, float,                                                                 SliderMin);                                                // 0x0290(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_0255, float,                                                                 SliderMax);                                                // 0x0294(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0255, float,                                                                 MinValue);                                                 // 0x0298(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BC PADDING_0255, float,                                                                 MaxValue);                                                 // 0x029C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0255, float,                                                                 Value);                                                    // 0x02A0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C4 PADDING_0255, int,                                                                   MinFractionDigits);                                        // 0x02A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0255, int,                                                                   MaxFractionDigits);                                        // 0x02A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0255, struct FText,                                                          CachedSliderText);                                         // 0x02B0(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0255, struct FScriptMulticastDelegate,                                       OnValueChanged);                                           // 0x02C8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0255, bool,                                                                  bConstructed);                                             // 0x02D8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F9 PADDING_0255, bool,                                                                  bIsPercentage);                                            // 0x02D9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00FC PADDING_0255, struct FLinearColor,                                                   Regular_Color);                                            // 0x02DC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x010C PADDING_0255, struct FLinearColor,                                                   Hovered_Color);                                            // 0x02EC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x011C PADDING_0255, struct FLinearColor,                                                   Pressed_Color);                                            // 0x02FC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_0255, struct FScriptMulticastDelegate,                                       OnCaptureEnd);                                             // 0x0310(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0140 PADDING_0255, float,                                                                 TextBoxSize);                                              // 0x0320(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsItem_Slider.SettingsItem_Slider_C");
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
	void ExecuteUbergraph_SettingsItem_Slider(int EntryPoint);
	void OnCaptureEnd__DelegateSignature(float Value);
	void OnValueChanged__DelegateSignature(float Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
