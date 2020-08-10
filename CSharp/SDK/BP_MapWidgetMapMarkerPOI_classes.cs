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

// WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerPOI.BP_MapWidgetMapMarkerPOI_C
// 0x0051 (0x0321 - 0x02D0)
public class UBP_MapWidgetMapMarkerPOI_C : USQMapWidgetMapMarkerSelectable
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02D0, false); // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offIn                                                         = new ExternalOffset<UWidgetAnimation>(0x02D8, true);          // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_Content                                             = new ExternalOffset<UBorder>(0x02E0, true);                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x02E8, true);                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offMainIcon                                                   = new ExternalOffset<UBorder>(0x02F0, true);                   // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_1                                                 = new ExternalOffset<UScaleBox>(0x02F8, true);                 // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_1                                                  = new ExternalOffset<USizeBox>(0x0300, true);                  // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Pos                                                     = new ExternalOffset<UTextBlock>(0x0308, true);                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Squad                                                   = new ExternalOffset<UTextBlock>(0x0310, true);                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offFade_Timer                                                 = new ExternalOffset<FTimerHandle>(0x0318, false);             // 0x0318(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offFaded                                                      = new ExternalOffset<byte/*(bool)*/>(0x0320);                  // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   In                                                             => _offIn.GetValue();
	public UBorder                                            Border_Content                                                 => _offBorder_Content.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UBorder                                            MainIcon                                                       => _offMainIcon.GetValue();
	public UScaleBox                                          ScaleBox_1                                                     => _offScaleBox_1.GetValue();
	public USizeBox                                           SizeBox_1                                                      => _offSizeBox_1.GetValue();
	public UTextBlock                                         TB_Pos                                                         => _offTB_Pos.GetValue();
	public UTextBlock                                         TB_Squad                                                       => _offTB_Squad.GetValue();
	public FTimerHandle                                       Fade_Timer                                                     => _offFade_Timer.GetValue();
	public byte/*(bool)*/                                     Faded                                                          => _offFaded.GetValue();
	#endregion


}


}