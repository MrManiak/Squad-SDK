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

// WidgetBlueprintGeneratedClass W_SQMapBody.W_SQMapBody_C
// 0x00A8 (0x02E0 - 0x0238)
public class UW_SQMapBody_C : USQMapWidgetBase
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0260, false); // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<URelativeCanvasPanel>              _offElementsRoot                                               = new ExternalOffset<URelativeCanvasPanel>(0x0268, true);      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offFixedSizeLayer                                             = new ExternalOffset<UCanvasPanel>(0x0270, true);              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapGridLines_C>               _offGridLines                                                  = new ExternalOffset<UW_SQMapGridLines_C>(0x0278, true);       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapHorizontalBar_C>           _offHorizontalBar                                              = new ExternalOffset<UW_SQMapHorizontalBar_C>(0x0280, true);   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offMapBoundary                                                = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offMapImage                                                   = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offPanLayer                                                   = new ExternalOffset<UCanvasPanel>(0x0298, true);              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapScaleBars_C>               _offScalebars                                                  = new ExternalOffset<UW_SQMapScaleBars_C>(0x02A0, true);       // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_MapName                                                 = new ExternalOffset<UTextBlock>(0x02A8, true);                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_MapLattice_C>                   _offUMG_MapLattice                                             = new ExternalOffset<UW_MapLattice_C>(0x02B0, true);           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapVerticalBar_C>             _offVerticalBar                                                = new ExternalOffset<UW_SQMapVerticalBar_C>(0x02B8, true);     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapOrderWaypointLines_C>      _offW_SQMapOrderWaypointLines                                  = new ExternalOffset<UW_SQMapOrderWaypointLines_C>(0x02C0, true); // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offZoomLayer                                                  = new ExternalOffset<USizeBox>(0x02C8, true);                  // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offDesignTimeGridLines                                        = new ExternalOffset<FVector2D>(0x02D0, false);                // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offAppliedMapBoundsScale                                      = new ExternalOffset<FVector2D>(0x02D8, false);                // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public URelativeCanvasPanel                               ElementsRoot                                                   => _offElementsRoot.GetValue();
	public UCanvasPanel                                       FixedSizeLayer                                                 => _offFixedSizeLayer.GetValue();
	public UW_SQMapGridLines_C                                GridLines                                                      => _offGridLines.GetValue();
	public UW_SQMapHorizontalBar_C                            HorizontalBar                                                  => _offHorizontalBar.GetValue();
	public UImage                                             MapBoundary                                                    => _offMapBoundary.GetValue();
	public UImage                                             MapImage                                                       => _offMapImage.GetValue();
	public UCanvasPanel                                       PanLayer                                                       => _offPanLayer.GetValue();
	public UW_SQMapScaleBars_C                                Scalebars                                                      => _offScalebars.GetValue();
	public UTextBlock                                         TB_MapName                                                     => _offTB_MapName.GetValue();
	public UW_MapLattice_C                                    UMG_MapLattice                                                 => _offUMG_MapLattice.GetValue();
	public UW_SQMapVerticalBar_C                              VerticalBar                                                    => _offVerticalBar.GetValue();
	public UW_SQMapOrderWaypointLines_C                       W_SQMapOrderWaypointLines                                      => _offW_SQMapOrderWaypointLines.GetValue();
	public USizeBox                                           ZoomLayer                                                      => _offZoomLayer.GetValue();
	public FVector2D                                          DesignTimeGridLines                                            => _offDesignTimeGridLines.GetValue();
	public FVector2D                                          AppliedMapBoundsScale                                          => _offAppliedMapBoundsScale.GetValue();
	#endregion


}


}