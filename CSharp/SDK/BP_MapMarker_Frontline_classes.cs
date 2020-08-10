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

// WidgetBlueprintGeneratedClass BP_MapMarker_Frontline.BP_MapMarker_Frontline_C
// 0x0028 (0x0350 - 0x0328)
public class UBP_MapMarker_Frontline_C : UBP_MapMarker_Selectable_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0328, false); // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offIn                                                         = new ExternalOffset<UWidgetAnimation>(0x0330, true);          // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offArrows                                                     = new ExternalOffset<UImage>(0x0338, true);                    // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_1                                                  = new ExternalOffset<USizeBox>(0x0340, true);                  // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_Arrows                                                  = new ExternalOffset<UMaterialInstanceDynamic>(0x0348, true);  // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   In                                                             => _offIn.GetValue();
	public UImage                                             Arrows                                                         => _offArrows.GetValue();
	public USizeBox                                           SizeBox_1                                                      => _offSizeBox_1.GetValue();
	public UMaterialInstanceDynamic                           MI_Arrows                                                      => _offMI_Arrows.GetValue();
	#endregion


}


}