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

// WidgetBlueprintGeneratedClass W_LandingCamUI.W_LandingCamUI_C
// 0x0145 (0x0325 - 0x01E0)
public class UW_LandingCamUI_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTextBlock>                        _offAltitudeText                                               = new ExternalOffset<UTextBlock>(0x0238, true);                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBlinkingLight01                                            = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBlinkingLight02                                            = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCompassCentre                                              = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCompassCircle                                              = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x0270, true);                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_4                                                    = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_8                                                    = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_11                                                   = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_13                                                   = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offKNOTSHSPEED                                                = new ExternalOffset<UTextBlock>(0x0298, true);                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offpitchValue                                                 = new ExternalOffset<UTextBlock>(0x02A0, true);                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offProg_PitchDown                                             = new ExternalOffset<UProgressBar>(0x02A8, true);              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offProg_PitchUp                                               = new ExternalOffset<UProgressBar>(0x02B0, true);              // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offProg_RollLeft                                              = new ExternalOffset<UProgressBar>(0x02B8, true);              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offProg_RollRight                                             = new ExternalOffset<UProgressBar>(0x02C0, true);              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offRollValue                                                  = new ExternalOffset<UTextBlock>(0x02C8, true);                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offScreenBorder                                               = new ExternalOffset<UImage>(0x02D0, true);                    // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTAXI_Indicator                                             = new ExternalOffset<UTextBlock>(0x02D8, true);                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_2                                                = new ExternalOffset<UTextBlock>(0x02E0, true);                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_78                                               = new ExternalOffset<UTextBlock>(0x02E8, true);                // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_80                                               = new ExternalOffset<UTextBlock>(0x02F0, true);                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offThrottle                                                   = new ExternalOffset<UProgressBar>(0x02F8, true);              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offThrottlePercent                                            = new ExternalOffset<UTextBlock>(0x0300, true);                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offTint                                                       = new ExternalOffset<UBorder>(0x0308, true);                   // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_3                                           = new ExternalOffset<UWidgetSwitcher>(0x0310, true);           // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ABP_Generic_Helicopter_C>          _offHelicopter                                                 = new ExternalOffset<ABP_Generic_Helicopter_C>(0x0318, true);  // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRPMTarget                                                  = new ExternalOffset<float>(0x0320);                           // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offScreenEnabled                                              = new ExternalOffset<byte/*(bool)*/>(0x0324);                  // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTextBlock                                         AltitudeText                                                   => _offAltitudeText.GetValue();
	public UImage                                             BlinkingLight01                                                => _offBlinkingLight01.GetValue();
	public UImage                                             BlinkingLight02                                                => _offBlinkingLight02.GetValue();
	public UImage                                             CompassCentre                                                  => _offCompassCentre.GetValue();
	public UImage                                             CompassCircle                                                  => _offCompassCircle.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UImage                                             Image_4                                                        => _offImage_4.GetValue();
	public UImage                                             Image_8                                                        => _offImage_8.GetValue();
	public UImage                                             Image_11                                                       => _offImage_11.GetValue();
	public UImage                                             Image_13                                                       => _offImage_13.GetValue();
	public UTextBlock                                         KNOTSHSPEED                                                    => _offKNOTSHSPEED.GetValue();
	public UTextBlock                                         pitchValue                                                     => _offpitchValue.GetValue();
	public UProgressBar                                       Prog_PitchDown                                                 => _offProg_PitchDown.GetValue();
	public UProgressBar                                       Prog_PitchUp                                                   => _offProg_PitchUp.GetValue();
	public UProgressBar                                       Prog_RollLeft                                                  => _offProg_RollLeft.GetValue();
	public UProgressBar                                       Prog_RollRight                                                 => _offProg_RollRight.GetValue();
	public UTextBlock                                         RollValue                                                      => _offRollValue.GetValue();
	public UImage                                             ScreenBorder                                                   => _offScreenBorder.GetValue();
	public UTextBlock                                         TAXI_Indicator                                                 => _offTAXI_Indicator.GetValue();
	public UTextBlock                                         TextBlock_2                                                    => _offTextBlock_2.GetValue();
	public UTextBlock                                         TextBlock_78                                                   => _offTextBlock_78.GetValue();
	public UTextBlock                                         TextBlock_80                                                   => _offTextBlock_80.GetValue();
	public UProgressBar                                       Throttle                                                       => _offThrottle.GetValue();
	public UTextBlock                                         ThrottlePercent                                                => _offThrottlePercent.GetValue();
	public UBorder                                            Tint                                                           => _offTint.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_3                                               => _offWidgetSwitcher_3.GetValue();
	public ABP_Generic_Helicopter_C                           Helicopter                                                     => _offHelicopter.GetValue();
	public float                                              RPMTarget                                                      => _offRPMTarget.GetValue();
	public byte/*(bool)*/                                     ScreenEnabled                                                  => _offScreenEnabled.GetValue();
	#endregion


}


}