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

// WidgetBlueprintGeneratedClass SettingsItem_TickBox.SettingsItem_TickBox_C
// 0x016C (0x034C - 0x01E0)
public class USettingsItem_TickBox_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton                                                     = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBoxMain                                          = new ExternalOffset<UHorizontalBox>(0x0240, true);            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offIconScaleBox                                               = new ExternalOffset<UScaleBox>(0x0248, true);                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offMyIcon                                                     = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_1                                                  = new ExternalOffset<USizeBox>(0x0258, true);                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Main                                                    = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offButtonText                                                 = new ExternalOffset<FText>(0x0268, false);                    // 0x0268(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FLinearColor>                      _offRegularColor                                               = new ExternalOffset<FLinearColor>(0x0280, false);             // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnClicked                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0290, false); // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FLinearColor>                      _offSelectedColor                                              = new ExternalOffset<FLinearColor>(0x02A0, false);             // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offHoveredColor                                               = new ExternalOffset<FLinearColor>(0x02B0, false);             // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSelectedHoveredColor                                       = new ExternalOffset<FLinearColor>(0x02C0, false);             // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbHovered                                                   = new ExternalOffset<byte/*(bool)*/>(0x02D0);                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbSelected                                                  = new ExternalOffset<byte/*(bool)*/>(0x02D1);                  // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnHover                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x02D8, false); // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<int>                               _offText_Size                                                  = new ExternalOffset<int>(0x02E8);                             // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offIcon_Size                                                  = new ExternalOffset<float>(0x02EC);                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offIcon_Image                                                 = new ExternalOffset<UTexture2D>(0x02F0, true);                // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FSlateColor>                       _offIcon_Color                                                 = new ExternalOffset<FSlateColor>(0x02F8, false);              // 0x02F8(0x0028) (Edit, BlueprintVisible)
	private ExternalOffset<byte/*(bool)*/>                    _offUse_Icon                                                   = new ExternalOffset<byte/*(bool)*/>(0x0320);                  // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offUse_Underline                                              = new ExternalOffset<byte/*(bool)*/>(0x0321);                  // 0x0321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offBoxAlignment                                               = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0322, false); // 0x0322(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FMargin>                           _offText_Padding_Amount                                        = new ExternalOffset<FMargin>(0x0324, false);                  // 0x0324(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FMargin>                           _offButton_Padding                                             = new ExternalOffset<FMargin>(0x0334, false);                  // 0x0334(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offSteamTagID                                                 = new ExternalOffset<int>(0x0344);                             // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTextBoxWidth                                               = new ExternalOffset<float>(0x0348);                           // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button                                                         => _offButton.GetValue();
	public UHorizontalBox                                     HorizontalBoxMain                                              => _offHorizontalBoxMain.GetValue();
	public UScaleBox                                          IconScaleBox                                                   => _offIconScaleBox.GetValue();
	public UImage                                             MyIcon                                                         => _offMyIcon.GetValue();
	public USizeBox                                           SizeBox_1                                                      => _offSizeBox_1.GetValue();
	public UTextBlock                                         TB_Main                                                        => _offTB_Main.GetValue();
	public FText                                              ButtonText                                                     => _offButtonText.GetValue();
	public FLinearColor                                       RegularColor                                                   => _offRegularColor.GetValue();
	public FScriptMulticastDelegate                           OnClicked                                                      => _offOnClicked.GetValue();
	public FLinearColor                                       SelectedColor                                                  => _offSelectedColor.GetValue();
	public FLinearColor                                       HoveredColor                                                   => _offHoveredColor.GetValue();
	public FLinearColor                                       SelectedHoveredColor                                           => _offSelectedHoveredColor.GetValue();
	public byte/*(bool)*/                                     bHovered                                                       => _offbHovered.GetValue();
	public byte/*(bool)*/                                     bSelected                                                      => _offbSelected.GetValue();
	public FScriptMulticastDelegate                           OnHover                                                        => _offOnHover.GetValue();
	public int                                                Text_Size                                                      => _offText_Size.GetValue();
	public float                                              Icon_Size                                                      => _offIcon_Size.GetValue();
	public UTexture2D                                         Icon_Image                                                     => _offIcon_Image.GetValue();
	public FSlateColor                                        Icon_Color                                                     => _offIcon_Color.GetValue();
	public byte/*(bool)*/                                     Use_Icon                                                       => _offUse_Icon.GetValue();
	public byte/*(bool)*/                                     Use_Underline                                                  => _offUse_Underline.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  BoxAlignment                                                   => _offBoxAlignment.GetValue();
	public FMargin                                            Text_Padding_Amount                                            => _offText_Padding_Amount.GetValue();
	public FMargin                                            Button_Padding                                                 => _offButton_Padding.GetValue();
	public int                                                SteamTagID                                                     => _offSteamTagID.GetValue();
	public float                                              TextBoxWidth                                                   => _offTextBoxWidth.GetValue();
	#endregion


}


}