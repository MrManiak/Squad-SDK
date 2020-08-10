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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_Player.BP_MarkerWidget_Player_C
// 0x0138 (0x03AC - 0x0274)
public class UBP_MarkerWidget_Player_C : USQMapSoldierIconWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0278, false); // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offPlayerWoundedAnim                                          = new ExternalOffset<UWidgetAnimation>(0x0280, true);          // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offPlayerIncapAnim                                            = new ExternalOffset<UWidgetAnimation>(0x0288, true);          // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offSelfPulseAnim                                              = new ExternalOffset<UWidgetAnimation>(0x0290, true);          // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offIncapPanel                                                 = new ExternalOffset<UCanvasPanel>(0x0298, true);              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offMedicOverlayImage                                          = new ExternalOffset<UImage>(0x02A0, true);                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPlayer_Cone_Image                                          = new ExternalOffset<UImage>(0x02A8, true);                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPlayer_Image                                               = new ExternalOffset<UImage>(0x02B0, true);                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offPlayerPulseScaleBox                                        = new ExternalOffset<UScaleBox>(0x02B8, true);                 // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPulseImage                                                 = new ExternalOffset<UImage>(0x02C0, true);                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offSL_Text                                                    = new ExternalOffset<UTextBlock>(0x02C8, true);                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offWidgetOverlay                                              = new ExternalOffset<UOverlay>(0x02D0, true);                  // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offWoundedBackground                                          = new ExternalOffset<UImage>(0x02D8, true);                    // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offWoundedBloodDrop                                           = new ExternalOffset<UImage>(0x02E0, true);                    // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offWoundedPanel                                               = new ExternalOffset<UCanvasPanel>(0x02E8, true);              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offWoundedRing                                                = new ExternalOffset<UImage>(0x02F0, true);                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSelf_Color                                                 = new ExternalOffset<FLinearColor>(0x02F8, false);             // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offEnemyColor                                                 = new ExternalOffset<FLinearColor>(0x0308, false);             // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSquadColor                                                 = new ExternalOffset<FLinearColor>(0x0318, false);             // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offTeamColor                                                  = new ExternalOffset<FLinearColor>(0x0328, false);             // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offSquadLeaderImage                                           = new ExternalOffset<UTexture2D>(0x0338, true);                // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offMedic_Overlay_Image                                        = new ExternalOffset<UTexture2D>(0x0340, true);                // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offSelf_Image                                                 = new ExternalOffset<UTexture2D>(0x0348, true);                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offPlayerImage                                                = new ExternalOffset<UTexture2D>(0x0350, true);                // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMapAngleAdjust                                             = new ExternalOffset<float>(0x0358);                           // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSL_Scale                                                   = new ExternalOffset<float>(0x035C);                           // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSelfScale                                                  = new ExternalOffset<float>(0x0360);                           // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMedic_Overlay_Scale                                        = new ExternalOffset<float>(0x0364);                           // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSoldierScale                                               = new ExternalOffset<float>(0x0368);                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMedic_Scale                                                = new ExternalOffset<float>(0x036C);                           // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offCloseTooltip                                               = new ExternalOffset<FScriptMulticastDelegate>(0x0370, false); // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FVector2D>                         _offDefaultPulseScale                                          = new ExternalOffset<FVector2D>(0x0380, false);                // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offPlayerPulseSLScale                                         = new ExternalOffset<FVector2D>(0x0388, false);                // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbIncapAnimPlaying                                          = new ExternalOffset<byte/*(bool)*/>(0x0390);                  // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbBleedingAnimPlaying                                       = new ExternalOffset<byte/*(bool)*/>(0x0391);                  // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UTexture2D>                        _offVehicleImage                                               = new ExternalOffset<UTexture2D>(0x0398, true);                // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offVehicleScale                                               = new ExternalOffset<float>(0x03A0);                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offStateUpdateTime                                            = new ExternalOffset<float>(0x03A4);                           // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offVisualsUpdateTime                                          = new ExternalOffset<float>(0x03A8);                           // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   PlayerWoundedAnim                                              => _offPlayerWoundedAnim.GetValue();
	public UWidgetAnimation                                   PlayerIncapAnim                                                => _offPlayerIncapAnim.GetValue();
	public UWidgetAnimation                                   SelfPulseAnim                                                  => _offSelfPulseAnim.GetValue();
	public UCanvasPanel                                       IncapPanel                                                     => _offIncapPanel.GetValue();
	public UImage                                             MedicOverlayImage                                              => _offMedicOverlayImage.GetValue();
	public UImage                                             Player_Cone_Image                                              => _offPlayer_Cone_Image.GetValue();
	public UImage                                             Player_Image                                                   => _offPlayer_Image.GetValue();
	public UScaleBox                                          PlayerPulseScaleBox                                            => _offPlayerPulseScaleBox.GetValue();
	public UImage                                             PulseImage                                                     => _offPulseImage.GetValue();
	public UTextBlock                                         SL_Text                                                        => _offSL_Text.GetValue();
	public UOverlay                                           WidgetOverlay                                                  => _offWidgetOverlay.GetValue();
	public UImage                                             WoundedBackground                                              => _offWoundedBackground.GetValue();
	public UImage                                             WoundedBloodDrop                                               => _offWoundedBloodDrop.GetValue();
	public UCanvasPanel                                       WoundedPanel                                                   => _offWoundedPanel.GetValue();
	public UImage                                             WoundedRing                                                    => _offWoundedRing.GetValue();
	public FLinearColor                                       Self_Color                                                     => _offSelf_Color.GetValue();
	public FLinearColor                                       EnemyColor                                                     => _offEnemyColor.GetValue();
	public FLinearColor                                       SquadColor                                                     => _offSquadColor.GetValue();
	public FLinearColor                                       TeamColor                                                      => _offTeamColor.GetValue();
	public UTexture2D                                         SquadLeaderImage                                               => _offSquadLeaderImage.GetValue();
	public UTexture2D                                         Medic_Overlay_Image                                            => _offMedic_Overlay_Image.GetValue();
	public UTexture2D                                         Self_Image                                                     => _offSelf_Image.GetValue();
	public UTexture2D                                         PlayerImage                                                    => _offPlayerImage.GetValue();
	public float                                              MapAngleAdjust                                                 => _offMapAngleAdjust.GetValue();
	public float                                              SL_Scale                                                       => _offSL_Scale.GetValue();
	public float                                              SelfScale                                                      => _offSelfScale.GetValue();
	public float                                              Medic_Overlay_Scale                                            => _offMedic_Overlay_Scale.GetValue();
	public float                                              SoldierScale                                                   => _offSoldierScale.GetValue();
	public float                                              Medic_Scale                                                    => _offMedic_Scale.GetValue();
	public FScriptMulticastDelegate                           CloseTooltip                                                   => _offCloseTooltip.GetValue();
	public FVector2D                                          DefaultPulseScale                                              => _offDefaultPulseScale.GetValue();
	public FVector2D                                          PlayerPulseSLScale                                             => _offPlayerPulseSLScale.GetValue();
	public byte/*(bool)*/                                     bIncapAnimPlaying                                              => _offbIncapAnimPlaying.GetValue();
	public byte/*(bool)*/                                     bBleedingAnimPlaying                                           => _offbBleedingAnimPlaying.GetValue();
	public UTexture2D                                         VehicleImage                                                   => _offVehicleImage.GetValue();
	public float                                              VehicleScale                                                   => _offVehicleScale.GetValue();
	public float                                              StateUpdateTime                                                => _offStateUpdateTime.GetValue();
	public float                                              VisualsUpdateTime                                              => _offVisualsUpdateTime.GetValue();
	#endregion


}


}