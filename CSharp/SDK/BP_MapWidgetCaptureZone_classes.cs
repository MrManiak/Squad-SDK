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

// WidgetBlueprintGeneratedClass BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C
// 0x008C (0x0368 - 0x02DC)
public class UBP_MapWidgetCaptureZone_C : USQMapWidgetCaptureZone
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02E0, false); // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOwnerChanged                                               = new ExternalOffset<UWidgetAnimation>(0x02E8, true);          // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offPulse                                                      = new ExternalOffset<UWidgetAnimation>(0x02F0, true);          // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offAttackDefend                                               = new ExternalOffset<UImage>(0x02F8, true);                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_1                                                   = new ExternalOffset<UBorder>(0x0300, true);                   // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offCaptureBar                                                 = new ExternalOffset<UProgressBar>(0x0308, true);              // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCaptureStateCircle                                         = new ExternalOffset<UImage>(0x0310, true);                    // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offFlagImage                                                  = new ExternalOffset<UImage>(0x0318, true);                    // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offFlagNameText                                               = new ExternalOffset<UTextBlock>(0x0320, true);                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_1                                                 = new ExternalOffset<UScaleBox>(0x0328, true);                 // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_CaptureBar                                         = new ExternalOffset<USizeBox>(0x0330, true);                  // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offUncapOverlay                                               = new ExternalOffset<UImage>(0x0338, true);                    // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0340, true);       // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offEnemy_Color                                                = new ExternalOffset<FLinearColor>(0x0348, false);             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offFriendly_Color                                             = new ExternalOffset<FLinearColor>(0x0358, false);             // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   OwnerChanged                                                   => _offOwnerChanged.GetValue();
	public UWidgetAnimation                                   Pulse                                                          => _offPulse.GetValue();
	public UImage                                             AttackDefend                                                   => _offAttackDefend.GetValue();
	public UBorder                                            Border_1                                                       => _offBorder_1.GetValue();
	public UProgressBar                                       CaptureBar                                                     => _offCaptureBar.GetValue();
	public UImage                                             CaptureStateCircle                                             => _offCaptureStateCircle.GetValue();
	public UImage                                             FlagImage                                                      => _offFlagImage.GetValue();
	public UTextBlock                                         FlagNameText                                                   => _offFlagNameText.GetValue();
	public UScaleBox                                          ScaleBox_1                                                     => _offScaleBox_1.GetValue();
	public USizeBox                                           SizeBox_CaptureBar                                             => _offSizeBox_CaptureBar.GetValue();
	public UImage                                             UncapOverlay                                                   => _offUncapOverlay.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public FLinearColor                                       Enemy_Color                                                    => _offEnemy_Color.GetValue();
	public FLinearColor                                       Friendly_Color                                                 => _offFriendly_Color.GetValue();
	#endregion


}


}