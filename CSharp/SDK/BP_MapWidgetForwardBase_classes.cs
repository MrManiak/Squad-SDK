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

// WidgetBlueprintGeneratedClass BP_MapWidgetForwardBase.BP_MapWidgetForwardBase_C
// 0x0084 (0x0348 - 0x02C4)
public class UBP_MapWidgetForwardBase_C : USQMapWidgetForwardBase
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02C8, false); // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offFOBIcon                                                    = new ExternalOffset<UImage>(0x02D0, true);                    // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offH_Ammo                                                     = new ExternalOffset<UHorizontalBox>(0x02D8, true);            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offH_Construction                                             = new ExternalOffset<UHorizontalBox>(0x02E0, true);            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x02E8, true);                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x02F0, true);                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRadiusConstruction                                         = new ExternalOffset<UImage>(0x02F8, true);                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRadiusExclusion                                            = new ExternalOffset<UImage>(0x0300, true);                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScale2                                                     = new ExternalOffset<UScaleBox>(0x0308, true);                 // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_Supplies                                          = new ExternalOffset<UScaleBox>(0x0310, true);                 // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBoxFob                                                = new ExternalOffset<UScaleBox>(0x0318, true);                 // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_Construction                                       = new ExternalOffset<USizeBox>(0x0320, true);                  // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_Exclusion                                          = new ExternalOffset<USizeBox>(0x0328, true);                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_AmmoAmount                                              = new ExternalOffset<UTextBlock>(0x0330, true);                // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ConstructionAmount                                      = new ExternalOffset<UTextBlock>(0x0338, true);                // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_FobSupplies_C>          _offSupplies_Widget                                            = new ExternalOffset<UW_Tooltip_FobSupplies_C>(0x0340, true);  // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             FOBIcon                                                        => _offFOBIcon.GetValue();
	public UHorizontalBox                                     H_Ammo                                                         => _offH_Ammo.GetValue();
	public UHorizontalBox                                     H_Construction                                                 => _offH_Construction.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             RadiusConstruction                                             => _offRadiusConstruction.GetValue();
	public UImage                                             RadiusExclusion                                                => _offRadiusExclusion.GetValue();
	public UScaleBox                                          Scale2                                                         => _offScale2.GetValue();
	public UScaleBox                                          ScaleBox_Supplies                                              => _offScaleBox_Supplies.GetValue();
	public UScaleBox                                          ScaleBoxFob                                                    => _offScaleBoxFob.GetValue();
	public USizeBox                                           SizeBox_Construction                                           => _offSizeBox_Construction.GetValue();
	public USizeBox                                           SizeBox_Exclusion                                              => _offSizeBox_Exclusion.GetValue();
	public UTextBlock                                         TB_AmmoAmount                                                  => _offTB_AmmoAmount.GetValue();
	public UTextBlock                                         TB_ConstructionAmount                                          => _offTB_ConstructionAmount.GetValue();
	public UW_Tooltip_FobSupplies_C                           Supplies_Widget                                                => _offSupplies_Widget.GetValue();
	#endregion


}


}