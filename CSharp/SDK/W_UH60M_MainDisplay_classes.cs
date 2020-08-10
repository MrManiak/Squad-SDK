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

// WidgetBlueprintGeneratedClass W_UH60M_MainDisplay.W_UH60M_MainDisplay_C
// 0x0170 (0x0350 - 0x01E0)
public class UW_UH60M_MainDisplay_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offDeactivateSequence                                         = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offActivationSequence                                         = new ExternalOffset<UWidgetAnimation>(0x0240, true);          // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offAltitudeText                                               = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBootScreen                                                 = new ExternalOffset<UBorder>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCompassCentre                                              = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCompassCircle                                              = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offdisabledmask                                               = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offHorizon                                                    = new ExternalOffset<UCanvasPanel>(0x0270, true);              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offHorizonBG                                                  = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offHorizonElementLeft                                         = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offHorizonElementRight                                        = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offHorizonMask                                                = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0298, true);                    // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_105                                                  = new ExternalOffset<UImage>(0x02A0, true);                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offKNOTSHSPEED                                                = new ExternalOffset<UTextBlock>(0x02A8, true);                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPitch                                                      = new ExternalOffset<UImage>(0x02B0, true);                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPitch20_                                                   = new ExternalOffset<UImage>(0x02B8, true);                    // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPitch50minus                                               = new ExternalOffset<UImage>(0x02C0, true);                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPitch50plus                                                = new ExternalOffset<UImage>(0x02C8, true);                    // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offpitchValue                                                 = new ExternalOffset<UTextBlock>(0x02D0, true);                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRoll                                                       = new ExternalOffset<UImage>(0x02D8, true);                    // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRollStatic                                                 = new ExternalOffset<UImage>(0x02E0, true);                    // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offRollValue                                                  = new ExternalOffset<UTextBlock>(0x02E8, true);                // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRPM_Gauge                                                  = new ExternalOffset<UImage>(0x02F0, true);                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTAXI_Indicator                                             = new ExternalOffset<UTextBlock>(0x02F8, true);                // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_78                                               = new ExternalOffset<UTextBlock>(0x0300, true);                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_80                                               = new ExternalOffset<UTextBlock>(0x0308, true);                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offThrottle                                                   = new ExternalOffset<UProgressBar>(0x0310, true);              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offThrottlePercent                                            = new ExternalOffset<UTextBlock>(0x0318, true);                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_HelicopterDisplayDecor_C>       _offW_HelicopterDisplayDecor_93                                = new ExternalOffset<UW_HelicopterDisplayDecor_C>(0x0320, true); // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_HelicopterInputDisplay_C>       _offW_HelicopterInputDisplay_40                                = new ExternalOffset<UW_HelicopterInputDisplay_C>(0x0328, true); // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ABP_Generic_Helicopter_C>          _offOwningVehicle                                              = new ExternalOffset<ABP_Generic_Helicopter_C>(0x0330, true);  // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRPMTarget                                                  = new ExternalOffset<float>(0x0338);                           // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offScreenEnabled                                              = new ExternalOffset<byte/*(bool)*/>(0x033C);                  // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offCurrent_Knot_Speed                                         = new ExternalOffset<float>(0x0340);                           // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offRefresh                                                    = new ExternalOffset<FTimerHandle>(0x0348, false);             // 0x0348(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   DeactivateSequence                                             => _offDeactivateSequence.GetValue();
	public UWidgetAnimation                                   ActivationSequence                                             => _offActivationSequence.GetValue();
	public UTextBlock                                         AltitudeText                                                   => _offAltitudeText.GetValue();
	public UBorder                                            BootScreen                                                     => _offBootScreen.GetValue();
	public UImage                                             CompassCentre                                                  => _offCompassCentre.GetValue();
	public UImage                                             CompassCircle                                                  => _offCompassCircle.GetValue();
	public UImage                                             disabledmask                                                   => _offdisabledmask.GetValue();
	public UCanvasPanel                                       Horizon                                                        => _offHorizon.GetValue();
	public UImage                                             HorizonBG                                                      => _offHorizonBG.GetValue();
	public UImage                                             HorizonElementLeft                                             => _offHorizonElementLeft.GetValue();
	public UImage                                             HorizonElementRight                                            => _offHorizonElementRight.GetValue();
	public UImage                                             HorizonMask                                                    => _offHorizonMask.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_105                                                      => _offImage_105.GetValue();
	public UTextBlock                                         KNOTSHSPEED                                                    => _offKNOTSHSPEED.GetValue();
	public UImage                                             Pitch                                                          => _offPitch.GetValue();
	public UImage                                             Pitch20_                                                       => _offPitch20_.GetValue();
	public UImage                                             Pitch50minus                                                   => _offPitch50minus.GetValue();
	public UImage                                             Pitch50plus                                                    => _offPitch50plus.GetValue();
	public UTextBlock                                         pitchValue                                                     => _offpitchValue.GetValue();
	public UImage                                             Roll                                                           => _offRoll.GetValue();
	public UImage                                             RollStatic                                                     => _offRollStatic.GetValue();
	public UTextBlock                                         RollValue                                                      => _offRollValue.GetValue();
	public UImage                                             RPM_Gauge                                                      => _offRPM_Gauge.GetValue();
	public UTextBlock                                         TAXI_Indicator                                                 => _offTAXI_Indicator.GetValue();
	public UTextBlock                                         TextBlock_78                                                   => _offTextBlock_78.GetValue();
	public UTextBlock                                         TextBlock_80                                                   => _offTextBlock_80.GetValue();
	public UProgressBar                                       Throttle                                                       => _offThrottle.GetValue();
	public UTextBlock                                         ThrottlePercent                                                => _offThrottlePercent.GetValue();
	public UW_HelicopterDisplayDecor_C                        W_HelicopterDisplayDecor_93                                    => _offW_HelicopterDisplayDecor_93.GetValue();
	public UW_HelicopterInputDisplay_C                        W_HelicopterInputDisplay_40                                    => _offW_HelicopterInputDisplay_40.GetValue();
	public ABP_Generic_Helicopter_C                           OwningVehicle                                                  => _offOwningVehicle.GetValue();
	public float                                              RPMTarget                                                      => _offRPMTarget.GetValue();
	public byte/*(bool)*/                                     ScreenEnabled                                                  => _offScreenEnabled.GetValue();
	public float                                              Current_Knot_Speed                                             => _offCurrent_Knot_Speed.GetValue();
	public FTimerHandle                                       Refresh                                                        => _offRefresh.GetValue();
	#endregion


}


}