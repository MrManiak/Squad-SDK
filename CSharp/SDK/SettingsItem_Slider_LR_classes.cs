// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SettingsItem_Slider_LR.SettingsItem_Slider_LR_C
// 0x0134 (0x0314 - 0x01E0)
public class USettingsItem_Slider_LR_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton_1                                                   = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_1                                            = new ExternalOffset<UHorizontalBox>(0x0240, true);            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_5                                                  = new ExternalOffset<USizeBox>(0x0248, true);                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USlider>                           _offSlider                                                     = new ExternalOffset<USlider>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UEditableText>                     _offSliderText                                                 = new ExternalOffset<UEditableText>(0x0258, true);             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Title                                                   = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offSettingName                                                = new ExternalOffset<FText>(0x0268, false);                    // 0x0268(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<float>                             _offSliderMin                                                  = new ExternalOffset<float>(0x0280);                           // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSliderMax                                                  = new ExternalOffset<float>(0x0284);                           // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMinValue                                                   = new ExternalOffset<float>(0x0288);                           // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxValue                                                   = new ExternalOffset<float>(0x028C);                           // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offValue                                                      = new ExternalOffset<float>(0x0290);                           // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMinFractionDigits                                          = new ExternalOffset<int>(0x0294);                             // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMaxFractionDigits                                          = new ExternalOffset<int>(0x0298);                             // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offCachedSliderText                                           = new ExternalOffset<FText>(0x02A0, false);                    // 0x02A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnValueChanged                                             = new ExternalOffset<FScriptMulticastDelegate>(0x02B8, false); // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offbConstructed                                               = new ExternalOffset<byte/*(bool)*/>(0x02C8);                  // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsPercentage                                              = new ExternalOffset<byte/*(bool)*/>(0x02C9);                  // 0x02C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FLinearColor>                      _offRegular_Color                                              = new ExternalOffset<FLinearColor>(0x02CC, false);             // 0x02CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offHovered_Color                                              = new ExternalOffset<FLinearColor>(0x02DC, false);             // 0x02DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offPressed_Color                                              = new ExternalOffset<FLinearColor>(0x02EC, false);             // 0x02EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCaptureEnd                                               = new ExternalOffset<FScriptMulticastDelegate>(0x0300, false); // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<float>                             _offTextBoxSize                                                = new ExternalOffset<float>(0x0310);                           // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button_1                                                       => _offButton_1.GetValue();
	public UHorizontalBox                                     HorizontalBox_1                                                => _offHorizontalBox_1.GetValue();
	public USizeBox                                           SizeBox_5                                                      => _offSizeBox_5.GetValue();
	public USlider                                            Slider                                                         => _offSlider.GetValue();
	public UEditableText                                      SliderText                                                     => _offSliderText.GetValue();
	public UTextBlock                                         TB_Title                                                       => _offTB_Title.GetValue();
	public FText                                              SettingName                                                    => _offSettingName.GetValue();
	public float                                              SliderMin                                                      => _offSliderMin.GetValue();
	public float                                              SliderMax                                                      => _offSliderMax.GetValue();
	public float                                              MinValue                                                       => _offMinValue.GetValue();
	public float                                              MaxValue                                                       => _offMaxValue.GetValue();
	public float                                              Value                                                          => _offValue.GetValue();
	public int                                                MinFractionDigits                                              => _offMinFractionDigits.GetValue();
	public int                                                MaxFractionDigits                                              => _offMaxFractionDigits.GetValue();
	public FText                                              CachedSliderText                                               => _offCachedSliderText.GetValue();
	public FScriptMulticastDelegate                           OnValueChanged                                                 => _offOnValueChanged.GetValue();
	public byte/*(bool)*/                                     bConstructed                                                   => _offbConstructed.GetValue();
	public byte/*(bool)*/                                     bIsPercentage                                                  => _offbIsPercentage.GetValue();
	public FLinearColor                                       Regular_Color                                                  => _offRegular_Color.GetValue();
	public FLinearColor                                       Hovered_Color                                                  => _offHovered_Color.GetValue();
	public FLinearColor                                       Pressed_Color                                                  => _offPressed_Color.GetValue();
	public FScriptMulticastDelegate                           OnCaptureEnd                                                   => _offOnCaptureEnd.GetValue();
	public float                                              TextBoxSize                                                    => _offTextBoxSize.GetValue();
	#endregion


}


}