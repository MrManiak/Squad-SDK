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

// WidgetBlueprintGeneratedClass BP_MapMarker_Action.BP_MapMarker_Action_C
// 0x0028 (0x0350 - 0x0328)
public class UBP_MapMarker_Action_C : UBP_MapMarker_Selectable_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0328, false); // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offPOIin                                                      = new ExternalOffset<UWidgetAnimation>(0x0330, true);          // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage                                                      = new ExternalOffset<UImage>(0x0338, true);                    // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_3                                                 = new ExternalOffset<UScaleBox>(0x0340, true);                 // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_SquadID                                                 = new ExternalOffset<UTextBlock>(0x0348, true);                // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   POIin                                                          => _offPOIin.GetValue();
	public UImage                                             Image                                                          => _offImage.GetValue();
	public UScaleBox                                          ScaleBox_3                                                     => _offScaleBox_3.GetValue();
	public UTextBlock                                         TB_SquadID                                                     => _offTB_SquadID.GetValue();
	#endregion


}


}