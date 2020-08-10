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

// WidgetBlueprintGeneratedClass MainMenu_Button.MainMenu_Button_C
// 0x0244 (0x0424 - 0x01E0)
public class UMainMenu_Button_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offPress                                                      = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBottomLine                                                 = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton                                                     = new ExternalOffset<UButton>(0x0248, true);                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBoxMain                                          = new ExternalOffset<UHorizontalBox>(0x0250, true);            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offIconScaleBox                                               = new ExternalOffset<UScaleBox>(0x0258, true);                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLeftLine                                                   = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offLineParent                                                 = new ExternalOffset<UOverlay>(0x0268, true);                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offMyIcon                                                     = new ExternalOffset<UImage>(0x0270, true);                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRightLine                                                  = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Bold                                                    = new ExternalOffset<UTextBlock>(0x0280, true);                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Main                                                    = new ExternalOffset<UTextBlock>(0x0288, true);                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTopLine                                                    = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_Bold                                        = new ExternalOffset<UWidgetSwitcher>(0x0298, true);           // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offBoxAlignment                                               = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x02A0, false); // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EButtonLineSide>>      _offLine_Position                                              = new ExternalOffset<TEnumAsByte<EButtonLineSide>>(0x02A1, false); // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offUse_Line                                                   = new ExternalOffset<byte/*(bool)*/>(0x02A2);                  // 0x02A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FLinearColor>                      _offRegularColor                                               = new ExternalOffset<FLinearColor>(0x02A4, false);             // 0x02A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnClicked                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x02B8, false); // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FLinearColor>                      _offSelectedColor                                              = new ExternalOffset<FLinearColor>(0x02C8, false);             // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offHoveredColor                                               = new ExternalOffset<FLinearColor>(0x02D8, false);             // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSelectedHoveredColor                                       = new ExternalOffset<FLinearColor>(0x02E8, false);             // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbHovered                                                   = new ExternalOffset<byte/*(bool)*/>(0x02F8);                  // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbSelected                                                  = new ExternalOffset<byte/*(bool)*/>(0x02F9);                  // 0x02F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsToggle                                                  = new ExternalOffset<byte/*(bool)*/>(0x02FA);                  // 0x02FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnHover                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0300, false); // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offUse_Icon                                                   = new ExternalOffset<byte/*(bool)*/>(0x0310);                  // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offBold_Text                                                  = new ExternalOffset<byte/*(bool)*/>(0x0311);                  // 0x0311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<UTexture2D>                        _offIcon_Image                                                 = new ExternalOffset<UTexture2D>(0x0318, true);                // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offIcon_Size                                                  = new ExternalOffset<float>(0x0320);                           // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FSlateColor>                       _offIcon_Color                                                 = new ExternalOffset<FSlateColor>(0x0328, false);              // 0x0328(0x0028) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                             _offDisplay_Text                                               = new ExternalOffset<FText>(0x0350, false);                    // 0x0350(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<int>                               _offText_Size                                                  = new ExternalOffset<int>(0x0368);                             // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FMargin>                           _offText_Padding_Amount                                        = new ExternalOffset<FMargin>(0x036C, false);                  // 0x036C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FMargin>                           _offButton_Padding                                             = new ExternalOffset<FMargin>(0x037C, false);                  // 0x037C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FLinearColor>                      _offText_Normal                                                = new ExternalOffset<FLinearColor>(0x038C, false);             // 0x038C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offText_Toggle_Normal                                         = new ExternalOffset<FLinearColor>(0x039C, false);             // 0x039C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offText_Selected                                              = new ExternalOffset<FLinearColor>(0x03AC, false);             // 0x03AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offText_Hovered                                               = new ExternalOffset<FLinearColor>(0x03BC, false);             // 0x03BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offText_Selected_Hovered                                      = new ExternalOffset<FLinearColor>(0x03CC, false);             // 0x03CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offLine_Color                                                 = new ExternalOffset<FLinearColor>(0x03DC, false);             // 0x03DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offLine_Hover_Color                                           = new ExternalOffset<FLinearColor>(0x03EC, false);             // 0x03EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offLine_Unhover_Color                                         = new ExternalOffset<FLinearColor>(0x03FC, false);             // 0x03FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnDoubleClicked                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0410, false); // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<float>                             _offLast_Click_Time                                            = new ExternalOffset<float>(0x0420);                           // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Press                                                          => _offPress.GetValue();
	public UImage                                             BottomLine                                                     => _offBottomLine.GetValue();
	public UButton                                            Button                                                         => _offButton.GetValue();
	public UHorizontalBox                                     HorizontalBoxMain                                              => _offHorizontalBoxMain.GetValue();
	public UScaleBox                                          IconScaleBox                                                   => _offIconScaleBox.GetValue();
	public UImage                                             LeftLine                                                       => _offLeftLine.GetValue();
	public UOverlay                                           LineParent                                                     => _offLineParent.GetValue();
	public UImage                                             MyIcon                                                         => _offMyIcon.GetValue();
	public UImage                                             RightLine                                                      => _offRightLine.GetValue();
	public UTextBlock                                         TB_Bold                                                        => _offTB_Bold.GetValue();
	public UTextBlock                                         TB_Main                                                        => _offTB_Main.GetValue();
	public UImage                                             TopLine                                                        => _offTopLine.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_Bold                                            => _offWidgetSwitcher_Bold.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  BoxAlignment                                                   => _offBoxAlignment.GetValue();
	public TEnumAsByte<EButtonLineSide>                       Line_Position                                                  => _offLine_Position.GetValue();
	public byte/*(bool)*/                                     Use_Line                                                       => _offUse_Line.GetValue();
	public FLinearColor                                       RegularColor                                                   => _offRegularColor.GetValue();
	public FScriptMulticastDelegate                           OnClicked                                                      => _offOnClicked.GetValue();
	public FLinearColor                                       SelectedColor                                                  => _offSelectedColor.GetValue();
	public FLinearColor                                       HoveredColor                                                   => _offHoveredColor.GetValue();
	public FLinearColor                                       SelectedHoveredColor                                           => _offSelectedHoveredColor.GetValue();
	public byte/*(bool)*/                                     bHovered                                                       => _offbHovered.GetValue();
	public byte/*(bool)*/                                     bSelected                                                      => _offbSelected.GetValue();
	public byte/*(bool)*/                                     bIsToggle                                                      => _offbIsToggle.GetValue();
	public FScriptMulticastDelegate                           OnHover                                                        => _offOnHover.GetValue();
	public byte/*(bool)*/                                     Use_Icon                                                       => _offUse_Icon.GetValue();
	public byte/*(bool)*/                                     Bold_Text                                                      => _offBold_Text.GetValue();
	public UTexture2D                                         Icon_Image                                                     => _offIcon_Image.GetValue();
	public float                                              Icon_Size                                                      => _offIcon_Size.GetValue();
	public FSlateColor                                        Icon_Color                                                     => _offIcon_Color.GetValue();
	public FText                                              Display_Text                                                   => _offDisplay_Text.GetValue();
	public int                                                Text_Size                                                      => _offText_Size.GetValue();
	public FMargin                                            Text_Padding_Amount                                            => _offText_Padding_Amount.GetValue();
	public FMargin                                            Button_Padding                                                 => _offButton_Padding.GetValue();
	public FLinearColor                                       Text_Normal                                                    => _offText_Normal.GetValue();
	public FLinearColor                                       Text_Toggle_Normal                                             => _offText_Toggle_Normal.GetValue();
	public FLinearColor                                       Text_Selected                                                  => _offText_Selected.GetValue();
	public FLinearColor                                       Text_Hovered                                                   => _offText_Hovered.GetValue();
	public FLinearColor                                       Text_Selected_Hovered                                          => _offText_Selected_Hovered.GetValue();
	public FLinearColor                                       Line_Color                                                     => _offLine_Color.GetValue();
	public FLinearColor                                       Line_Hover_Color                                               => _offLine_Hover_Color.GetValue();
	public FLinearColor                                       Line_Unhover_Color                                             => _offLine_Unhover_Color.GetValue();
	public FScriptMulticastDelegate                           OnDoubleClicked                                                => _offOnDoubleClicked.GetValue();
	public float                                              Last_Click_Time                                                => _offLast_Click_Time.GetValue();
	#endregion


}


}