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

// WidgetBlueprintGeneratedClass CaptureZoneStatusWidget.CaptureZoneStatusWidget_C
// 0x00B0 (0x0290 - 0x01E0)
public class UCaptureZoneStatusWidget_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UProgressBar>                      _offCaptureBar                                                 = new ExternalOffset<UProgressBar>(0x0238, true);              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offFlagImage                                                  = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offOverlay_Root                                               = new ExternalOffset<UOverlay>(0x0248, true);                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_CaptureBar                                         = new ExternalOffset<USizeBox>(0x0250, true);                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_FlagName                                                = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offUncapOverlay                                               = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offFriendly_Color                                             = new ExternalOffset<FLinearColor>(0x0268, false);             // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offEnemy_Color                                                = new ExternalOffset<FLinearColor>(0x0278, false);             // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQCaptureZoneComponent>           _offCaptureZone                                                = new ExternalOffset<USQCaptureZoneComponent>(0x0288, true);   // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UProgressBar                                       CaptureBar                                                     => _offCaptureBar.GetValue();
	public UImage                                             FlagImage                                                      => _offFlagImage.GetValue();
	public UOverlay                                           Overlay_Root                                                   => _offOverlay_Root.GetValue();
	public USizeBox                                           SizeBox_CaptureBar                                             => _offSizeBox_CaptureBar.GetValue();
	public UTextBlock                                         TB_FlagName                                                    => _offTB_FlagName.GetValue();
	public UImage                                             UncapOverlay                                                   => _offUncapOverlay.GetValue();
	public FLinearColor                                       Friendly_Color                                                 => _offFriendly_Color.GetValue();
	public FLinearColor                                       Enemy_Color                                                    => _offEnemy_Color.GetValue();
	public USQCaptureZoneComponent                            CaptureZone                                                    => _offCaptureZone.GetValue();
	#endregion


}


}