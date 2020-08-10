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

// WidgetBlueprintGeneratedClass UMG_Compass_Marker.UMG_Compass_Marker_C
// 0x0049 (0x0379 - 0x0330)
public class UUMG_Compass_Marker_C : USQCompassMarker
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0330, false); // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offIn                                                         = new ExternalOffset<UWidgetAnimation>(0x0338, true);          // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBP_DistanceText                                            = new ExternalOffset<UTextBlock>(0x0340, true);                // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBP_MeterText                                               = new ExternalOffset<UTextBlock>(0x0348, true);                // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offBPMain_P                                                   = new ExternalOffset<UCanvasPanel>(0x0350, true);              // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPMarker_IMG                                               = new ExternalOffset<UImage>(0x0358, true);                    // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offCanvasPanel_857                                            = new ExternalOffset<UCanvasPanel>(0x0360, true);              // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLeadIcon                                                   = new ExternalOffset<UImage>(0x0368, true);                    // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_FT                                                      = new ExternalOffset<UTextBlock>(0x0370, true);                // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ESQMapMarkerType>                  _offMarker_Type                                                = new ExternalOffset<ESQMapMarkerType>(0x0378, false);         // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   In                                                             => _offIn.GetValue();
	public UTextBlock                                         BP_DistanceText                                                => _offBP_DistanceText.GetValue();
	public UTextBlock                                         BP_MeterText                                                   => _offBP_MeterText.GetValue();
	public UCanvasPanel                                       BPMain_P                                                       => _offBPMain_P.GetValue();
	public UImage                                             BPMarker_IMG                                                   => _offBPMarker_IMG.GetValue();
	public UCanvasPanel                                       CanvasPanel_857                                                => _offCanvasPanel_857.GetValue();
	public UImage                                             LeadIcon                                                       => _offLeadIcon.GetValue();
	public UTextBlock                                         TB_FT                                                          => _offTB_FT.GetValue();
	public ESQMapMarkerType                                   Marker_Type                                                    => _offMarker_Type.GetValue();
	#endregion


}


}