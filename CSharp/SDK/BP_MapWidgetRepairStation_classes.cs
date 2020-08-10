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

// WidgetBlueprintGeneratedClass BP_MapWidgetRepairStation.BP_MapWidgetRepairStation_C
// 0x0018 (0x02C8 - 0x02B0)
public class UBP_MapWidgetRepairStation_C : USQMapWidgetRepairStation
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02B0, false); // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offMarkerImage                                                = new ExternalOffset<UImage>(0x02B8, true);                    // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_1                                                 = new ExternalOffset<UScaleBox>(0x02C0, true);                 // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             MarkerImage                                                    => _offMarkerImage.GetValue();
	public UScaleBox                                          ScaleBox_1                                                     => _offScaleBox_1.GetValue();
	#endregion


}


}