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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C
// 0x0134 (0x0410 - 0x02DC)
public class UBP_MarkerWidget_CaptureZoneTC_C : USQMapWidgetCaptureZone
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02E0, false); // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offPulse                                                      = new ExternalOffset<UWidgetAnimation>(0x02E8, true);          // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offAnchor                                                     = new ExternalOffset<UImage>(0x02F0, true);                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offAnchorBG                                                   = new ExternalOffset<UBorder>(0x02F8, true);                   // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offAnchorIcon                                                 = new ExternalOffset<UScaleBox>(0x0300, true);                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offB                                                          = new ExternalOffset<UImage>(0x0308, true);                    // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBL                                                         = new ExternalOffset<UImage>(0x0310, true);                    // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBR                                                         = new ExternalOffset<UImage>(0x0318, true);                    // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offCanvasPanel_Main                                           = new ExternalOffset<UCanvasPanel>(0x0320, true);              // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offCaptureBar                                                 = new ExternalOffset<UProgressBar>(0x0328, true);              // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offFlagNameText                                               = new ExternalOffset<UTextBlock>(0x0330, true);                // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offHexFill                                                    = new ExternalOffset<UImage>(0x0338, true);                    // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offHexHashed                                                  = new ExternalOffset<UImage>(0x0340, true);                    // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offHexOutline                                                 = new ExternalOffset<UImage>(0x0348, true);                    // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offHexParent                                                  = new ExternalOffset<UOverlay>(0x0350, true);                  // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offProtected                                                  = new ExternalOffset<UImage>(0x0358, true);                    // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offProtectIcon                                                = new ExternalOffset<UScaleBox>(0x0360, true);                 // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_Info                                              = new ExternalOffset<UScaleBox>(0x0368, true);                 // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_CaptureBar                                         = new ExternalOffset<USizeBox>(0x0370, true);                  // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_Main                                               = new ExternalOffset<USizeBox>(0x0378, true);                  // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offT                                                          = new ExternalOffset<UImage>(0x0380, true);                    // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTL                                                         = new ExternalOffset<UImage>(0x0388, true);                    // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTR                                                         = new ExternalOffset<UImage>(0x0390, true);                    // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offCloseTooltip                                               = new ExternalOffset<FScriptMulticastDelegate>(0x0398, false); // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<float>                             _offUpdateStateTime                                            = new ExternalOffset<float>(0x03A8);                           // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ATC_HexZone_C>                     _offThis_Hex_Zone                                              = new ExternalOffset<ATC_HexZone_C>(0x03B0, true);             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x03B8, true);       // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UImage>>                    _offEdge_Lines                                                 = new ExternalOffset<TArray<UImage>>(0x03C0, false);           // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<float>                             _offFlag_Radius                                                = new ExternalOffset<float>(0x03D0);                           // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offGrid_Ref                                                   = new ExternalOffset<FString>(0x03D8, false);                  // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxZoomFactor                                              = new ExternalOffset<float>(0x03E8);                           // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZoom_Alpha                                                 = new ExternalOffset<float>(0x03EC);                           // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offShow_Large_Text_Threshold                                  = new ExternalOffset<float>(0x03F0);                           // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offShow_Data_Threshold                                        = new ExternalOffset<float>(0x03F4);                           // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Animate_Capture_Fade                                   = new ExternalOffset<byte/*(bool)*/>(0x03F8);                  // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offUpdate_Timer                                               = new ExternalOffset<FTimerHandle>(0x0400, false);             // 0x0400(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Point_of_Interest                                       = new ExternalOffset<byte/*(bool)*/>(0x0408);                  // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offPlayerController_Team_ID                                   = new ExternalOffset<int>(0x040C);                             // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Pulse                                                          => _offPulse.GetValue();
	public UImage                                             Anchor                                                         => _offAnchor.GetValue();
	public UBorder                                            AnchorBG                                                       => _offAnchorBG.GetValue();
	public UScaleBox                                          AnchorIcon                                                     => _offAnchorIcon.GetValue();
	public UImage                                             B                                                              => _offB.GetValue();
	public UImage                                             BL                                                             => _offBL.GetValue();
	public UImage                                             BR                                                             => _offBR.GetValue();
	public UCanvasPanel                                       CanvasPanel_Main                                               => _offCanvasPanel_Main.GetValue();
	public UProgressBar                                       CaptureBar                                                     => _offCaptureBar.GetValue();
	public UTextBlock                                         FlagNameText                                                   => _offFlagNameText.GetValue();
	public UImage                                             HexFill                                                        => _offHexFill.GetValue();
	public UImage                                             HexHashed                                                      => _offHexHashed.GetValue();
	public UImage                                             HexOutline                                                     => _offHexOutline.GetValue();
	public UOverlay                                           HexParent                                                      => _offHexParent.GetValue();
	public UImage                                             Protected                                                      => _offProtected.GetValue();
	public UScaleBox                                          ProtectIcon                                                    => _offProtectIcon.GetValue();
	public UScaleBox                                          ScaleBox_Info                                                  => _offScaleBox_Info.GetValue();
	public USizeBox                                           SizeBox_CaptureBar                                             => _offSizeBox_CaptureBar.GetValue();
	public USizeBox                                           SizeBox_Main                                                   => _offSizeBox_Main.GetValue();
	public UImage                                             T                                                              => _offT.GetValue();
	public UImage                                             TL                                                             => _offTL.GetValue();
	public UImage                                             TR                                                             => _offTR.GetValue();
	public FScriptMulticastDelegate                           CloseTooltip                                                   => _offCloseTooltip.GetValue();
	public float                                              UpdateStateTime                                                => _offUpdateStateTime.GetValue();
	public ATC_HexZone_C                                      This_Hex_Zone                                                  => _offThis_Hex_Zone.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public TArray<UImage>                                     Edge_Lines                                                     => _offEdge_Lines.GetValue();
	public float                                              Flag_Radius                                                    => _offFlag_Radius.GetValue();
	public FString                                            Grid_Ref                                                       => _offGrid_Ref.GetValue();
	public float                                              MaxZoomFactor                                                  => _offMaxZoomFactor.GetValue();
	public float                                              Zoom_Alpha                                                     => _offZoom_Alpha.GetValue();
	public float                                              Show_Large_Text_Threshold                                      => _offShow_Large_Text_Threshold.GetValue();
	public float                                              Show_Data_Threshold                                            => _offShow_Data_Threshold.GetValue();
	public byte/*(bool)*/                                     Can_Animate_Capture_Fade                                       => _offCan_Animate_Capture_Fade.GetValue();
	public FTimerHandle                                       Update_Timer                                                   => _offUpdate_Timer.GetValue();
	public byte/*(bool)*/                                     Is_Point_of_Interest                                           => _offIs_Point_of_Interest.GetValue();
	public int                                                PlayerController_Team_ID                                       => _offPlayerController_Team_ID.GetValue();
	#endregion


}


}