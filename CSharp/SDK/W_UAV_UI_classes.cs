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

// WidgetBlueprintGeneratedClass W_UAV_UI.W_UAV_UI_C
// 0x0136 (0x0380 - 0x024A)
public class UW_UAV_UI_C : UW_CameraWidget_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0250, false); // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offClose                                                      = new ExternalOffset<UWidgetAnimation>(0x0258, true);          // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offfuellow                                                    = new ExternalOffset<UWidgetAnimation>(0x0260, true);          // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offBattery                                                    = new ExternalOffset<UProgressBar>(0x0268, true);              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Back                                                = new ExternalOffset<UButton>(0x0270, true);                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCameraPitchLadder                                          = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCorner1                                                    = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCorner2                                                    = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCorner3                                                    = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCorner4                                                    = new ExternalOffset<UImage>(0x0298, true);                    // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offcross                                                      = new ExternalOffset<UImage>(0x02A0, true);                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x02A8, true);                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_4                                                    = new ExternalOffset<UImage>(0x02B0, true);                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offNorthArrow                                                 = new ExternalOffset<UOverlay>(0x02B8, true);                  // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offPitchPanel                                                 = new ExternalOffset<UOverlay>(0x02C0, true);                  // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offStableText                                                 = new ExternalOffset<UTextBlock>(0x02C8, true);                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_CameraPitchAngle                                        = new ExternalOffset<UTextBlock>(0x02D0, true);                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_DroneState                                              = new ExternalOffset<UTextBlock>(0x02D8, true);                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Elevation                                               = new ExternalOffset<UTextBlock>(0x02E0, true);                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_GridRef                                                 = new ExternalOffset<UTextBlock>(0x02E8, true);                // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_North                                                   = new ExternalOffset<UTextBlock>(0x02F0, true);                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_RangeFromUAV                                            = new ExternalOffset<UTextBlock>(0x02F8, true);                // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_SelfGridRef                                             = new ExternalOffset<UTextBlock>(0x0300, true);                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ZoomLevel                                               = new ExternalOffset<UTextBlock>(0x0308, true);                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_1                                                = new ExternalOffset<UTextBlock>(0x0310, true);                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_2                                                = new ExternalOffset<UTextBlock>(0x0318, true);                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_3                                                = new ExternalOffset<UTextBlock>(0x0320, true);                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_5                                                = new ExternalOffset<UTextBlock>(0x0328, true);                // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_7                                                = new ExternalOffset<UTextBlock>(0x0330, true);                // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_12                                               = new ExternalOffset<UTextBlock>(0x0338, true);                // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTime                                                       = new ExternalOffset<UTextBlock>(0x0340, true);                // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_CustomCompass_C>                _offW_CustomCompass                                            = new ExternalOffset<UW_CustomCompass_C>(0x0348, true);        // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem                                         = new ExternalOffset<UW_ParseKeybindItem_C>(0x0350, true);     // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_1                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x0358, true);     // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_2                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x0360, true);     // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_3                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x0368, true);     // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_4                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x0370, true);     // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_VoipOwningPlayer_C>             _offW_VoipOwningPlayer_188                                     = new ExternalOffset<UW_VoipOwningPlayer_C>(0x0378, true);     // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Close                                                          => _offClose.GetValue();
	public UWidgetAnimation                                   fuellow                                                        => _offfuellow.GetValue();
	public UProgressBar                                       Battery                                                        => _offBattery.GetValue();
	public UButton                                            Button_Back                                                    => _offButton_Back.GetValue();
	public UImage                                             CameraPitchLadder                                              => _offCameraPitchLadder.GetValue();
	public UImage                                             Corner1                                                        => _offCorner1.GetValue();
	public UImage                                             Corner2                                                        => _offCorner2.GetValue();
	public UImage                                             Corner3                                                        => _offCorner3.GetValue();
	public UImage                                             Corner4                                                        => _offCorner4.GetValue();
	public UImage                                             cross                                                          => _offcross.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UImage                                             Image_4                                                        => _offImage_4.GetValue();
	public UOverlay                                           NorthArrow                                                     => _offNorthArrow.GetValue();
	public UOverlay                                           PitchPanel                                                     => _offPitchPanel.GetValue();
	public UTextBlock                                         StableText                                                     => _offStableText.GetValue();
	public UTextBlock                                         TB_CameraPitchAngle                                            => _offTB_CameraPitchAngle.GetValue();
	public UTextBlock                                         TB_DroneState                                                  => _offTB_DroneState.GetValue();
	public UTextBlock                                         TB_Elevation                                                   => _offTB_Elevation.GetValue();
	public UTextBlock                                         TB_GridRef                                                     => _offTB_GridRef.GetValue();
	public UTextBlock                                         TB_North                                                       => _offTB_North.GetValue();
	public UTextBlock                                         TB_RangeFromUAV                                                => _offTB_RangeFromUAV.GetValue();
	public UTextBlock                                         TB_SelfGridRef                                                 => _offTB_SelfGridRef.GetValue();
	public UTextBlock                                         TB_ZoomLevel                                                   => _offTB_ZoomLevel.GetValue();
	public UTextBlock                                         TextBlock_1                                                    => _offTextBlock_1.GetValue();
	public UTextBlock                                         TextBlock_2                                                    => _offTextBlock_2.GetValue();
	public UTextBlock                                         TextBlock_3                                                    => _offTextBlock_3.GetValue();
	public UTextBlock                                         TextBlock_5                                                    => _offTextBlock_5.GetValue();
	public UTextBlock                                         TextBlock_7                                                    => _offTextBlock_7.GetValue();
	public UTextBlock                                         TextBlock_12                                                   => _offTextBlock_12.GetValue();
	public UTextBlock                                         Time                                                           => _offTime.GetValue();
	public UW_CustomCompass_C                                 W_CustomCompass                                                => _offW_CustomCompass.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem                                             => _offW_ParseKeybindItem.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_1                                         => _offW_ParseKeybindItem_C_1.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_2                                         => _offW_ParseKeybindItem_C_2.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_3                                         => _offW_ParseKeybindItem_C_3.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_4                                         => _offW_ParseKeybindItem_C_4.GetValue();
	public UW_VoipOwningPlayer_C                              W_VoipOwningPlayer_188                                         => _offW_VoipOwningPlayer_188.GetValue();
	#endregion


}


}