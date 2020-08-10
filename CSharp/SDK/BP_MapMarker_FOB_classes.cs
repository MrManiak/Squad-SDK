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

// WidgetBlueprintGeneratedClass BP_MapMarker_FOB.BP_MapMarker_FOB_C
// 0x005C (0x0384 - 0x0328)
public class UBP_MapMarker_FOB_C : UBP_MapMarker_Selectable_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0328, false); // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offIn                                                         = new ExternalOffset<UWidgetAnimation>(0x0330, true);          // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_Content                                             = new ExternalOffset<UBorder>(0x0338, true);                   // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offMarkerImage1                                               = new ExternalOffset<UImage>(0x0340, true);                    // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRadiusConstruction                                         = new ExternalOffset<UImage>(0x0348, true);                    // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRadiusExclusion                                            = new ExternalOffset<UImage>(0x0350, true);                    // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_1                                                 = new ExternalOffset<UScaleBox>(0x0358, true);                 // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_Construction                                       = new ExternalOffset<USizeBox>(0x0360, true);                  // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_Exclusion                                          = new ExternalOffset<USizeBox>(0x0368, true);                  // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offUpdate_Timer                                               = new ExternalOffset<FTimerHandle>(0x0370, false);             // 0x0370(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offFaded                                                      = new ExternalOffset<byte/*(bool)*/>(0x0378);                  // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offConstructionDiameter                                       = new ExternalOffset<float>(0x037C);                           // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offExclusionDiameter                                          = new ExternalOffset<float>(0x0380);                           // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   In                                                             => _offIn.GetValue();
	public UBorder                                            Border_Content                                                 => _offBorder_Content.GetValue();
	public UImage                                             MarkerImage1                                                   => _offMarkerImage1.GetValue();
	public UImage                                             RadiusConstruction                                             => _offRadiusConstruction.GetValue();
	public UImage                                             RadiusExclusion                                                => _offRadiusExclusion.GetValue();
	public UScaleBox                                          ScaleBox_1                                                     => _offScaleBox_1.GetValue();
	public USizeBox                                           SizeBox_Construction                                           => _offSizeBox_Construction.GetValue();
	public USizeBox                                           SizeBox_Exclusion                                              => _offSizeBox_Exclusion.GetValue();
	public FTimerHandle                                       Update_Timer                                                   => _offUpdate_Timer.GetValue();
	public byte/*(bool)*/                                     Faded                                                          => _offFaded.GetValue();
	public float                                              ConstructionDiameter                                           => _offConstructionDiameter.GetValue();
	public float                                              ExclusionDiameter                                              => _offExclusionDiameter.GetValue();
	#endregion


}


}