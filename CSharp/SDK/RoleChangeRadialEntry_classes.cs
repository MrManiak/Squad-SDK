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

// WidgetBlueprintGeneratedClass RoleChangeRadialEntry.RoleChangeRadialEntry_C
// 0x0028 (0x0488 - 0x0460)
public class URoleChangeRadialEntry_C : USQRadialRoleIconButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0460, false); // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBPElementImage                                             = new ExternalOffset<UImage>(0x0468, true);                    // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPIconImage                                                = new ExternalOffset<UImage>(0x0470, true);                    // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPOuterRimImage                                            = new ExternalOffset<UImage>(0x0478, true);                    // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBP_RadialItemModel_C>             _offRelatedActionModel                                         = new ExternalOffset<UBP_RadialItemModel_C>(0x0480, true);     // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             BPElementImage                                                 => _offBPElementImage.GetValue();
	public UImage                                             BPIconImage                                                    => _offBPIconImage.GetValue();
	public UImage                                             BPOuterRimImage                                                => _offBPOuterRimImage.GetValue();
	public UBP_RadialItemModel_C                              RelatedActionModel                                             => _offRelatedActionModel.GetValue();
	#endregion


}


}