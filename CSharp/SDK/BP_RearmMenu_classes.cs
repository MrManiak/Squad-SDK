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

// BlueprintGeneratedClass BP_RearmMenu.BP_RearmMenu_C
// 0x0030 (0x0088 - 0x0058)
public class UBP_RearmMenu_C : UBP_RadialMenuModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0058, false); // 0x0058(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBP_RearmWeaponDynamicModel_C>     _offRearmGroupGenericModel                                     = new ExternalOffset<UBP_RearmWeaponDynamicModel_C>(0x0060, true); // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBPRadialPopulatorRearmGroup_C>    _offRearmPopulator                                             = new ExternalOffset<UBPRadialPopulatorRearmGroup_C>(0x0068, true); // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ESQRearmType>                      _offRearmType                                                  = new ExternalOffset<ESQRearmType>(0x0070, false);             // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialCenterRearmButton_C>        _offRearmCenterButton                                          = new ExternalOffset<URadialCenterRearmButton_C>(0x0078, true); // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQPawnInventoryComponent>         _offInventoryComponent                                         = new ExternalOffset<USQPawnInventoryComponent>(0x0080, true); // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBP_RearmWeaponDynamicModel_C                      RearmGroupGenericModel                                         => _offRearmGroupGenericModel.GetValue();
	public UBPRadialPopulatorRearmGroup_C                     RearmPopulator                                                 => _offRearmPopulator.GetValue();
	public ESQRearmType                                       RearmType                                                      => _offRearmType.GetValue();
	public URadialCenterRearmButton_C                         RearmCenterButton                                              => _offRearmCenterButton.GetValue();
	public USQPawnInventoryComponent                          InventoryComponent                                             => _offInventoryComponent.GetValue();
	#endregion


}


}