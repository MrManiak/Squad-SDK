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

// BlueprintGeneratedClass BP_RearmWeaponDynamicModel.BP_RearmWeaponDynamicModel_C
// 0x0014 (0x00B4 - 0x00A0)
public class UBP_RearmWeaponDynamicModel_C : UBP_RadialActionModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00A0, false); // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<ASQEquipableItem>                  _offEquippable                                                 = new ExternalOffset<ASQEquipableItem>(0x00A8, true);          // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCost                                                       = new ExternalOffset<float>(0x00B0);                           // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public ASQEquipableItem                                   Equippable                                                     => _offEquippable.GetValue();
	public float                                              Cost                                                           => _offCost.GetValue();
	#endregion


}


}