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

// WidgetBlueprintGeneratedClass W_RadialTowingWidget.W_RadialTowingWidget_C
// 0x0078 (0x0370 - 0x02F8)
public class UW_RadialTowingWidget_C : USQRadialButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02F8, false); // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBackground                                                 = new ExternalOffset<UImage>(0x0300, true);                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0308, true);                    // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIconbackground                                             = new ExternalOffset<UImage>(0x0310, true);                    // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offMove                                                       = new ExternalOffset<UTextBlock>(0x0318, true);                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offSubtitle                                                   = new ExternalOffset<UTextBlock>(0x0320, true);                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RadialTimer_C>                  _offTimer                                                      = new ExternalOffset<UW_RadialTimer_C>(0x0328, true);          // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offYawWaitDurationFactor                                      = new ExternalOffset<float>(0x0330);                           // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offJumpWaitDuration                                           = new ExternalOffset<float>(0x0334);                           // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offEmergencyJump                                              = new ExternalOffset<byte/*(bool)*/>(0x0338);                  // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offEmergencyYaw                                               = new ExternalOffset<float>(0x033C);                           // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQSoldier>                        _offLocalSoldier                                               = new ExternalOffset<ASQSoldier>(0x0340, true);                // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQGroundVehicle>                  _offCurrentVehicle                                             = new ExternalOffset<ASQGroundVehicle>(0x0348, true);          // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offJumpHeight                                                 = new ExternalOffset<float>(0x0350);                           // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBaseRadialMenu_C>                 _offBaseRadialMenu                                             = new ExternalOffset<UBaseRadialMenu_C>(0x0358, true);         // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBP_RadialItemModel_C>             _offRelatedActionModel                                         = new ExternalOffset<UBP_RadialItemModel_C>(0x0360, true);     // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offPlayerController                                           = new ExternalOffset<ASQPlayerController>(0x0368, true);       // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Background                                                     => _offBackground.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public UImage                                             Iconbackground                                                 => _offIconbackground.GetValue();
	public UTextBlock                                         Move                                                           => _offMove.GetValue();
	public UTextBlock                                         Subtitle                                                       => _offSubtitle.GetValue();
	public UW_RadialTimer_C                                   Timer                                                          => _offTimer.GetValue();
	public float                                              YawWaitDurationFactor                                          => _offYawWaitDurationFactor.GetValue();
	public float                                              JumpWaitDuration                                               => _offJumpWaitDuration.GetValue();
	public byte/*(bool)*/                                     EmergencyJump                                                  => _offEmergencyJump.GetValue();
	public float                                              EmergencyYaw                                                   => _offEmergencyYaw.GetValue();
	public ASQSoldier                                         LocalSoldier                                                   => _offLocalSoldier.GetValue();
	public ASQGroundVehicle                                   CurrentVehicle                                                 => _offCurrentVehicle.GetValue();
	public float                                              JumpHeight                                                     => _offJumpHeight.GetValue();
	public UBaseRadialMenu_C                                  BaseRadialMenu                                                 => _offBaseRadialMenu.GetValue();
	public UBP_RadialItemModel_C                              RelatedActionModel                                             => _offRelatedActionModel.GetValue();
	public ASQPlayerController                                PlayerController                                               => _offPlayerController.GetValue();
	#endregion


}


}