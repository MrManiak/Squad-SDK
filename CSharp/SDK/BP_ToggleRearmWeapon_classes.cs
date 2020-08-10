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

// BlueprintGeneratedClass BP_ToggleRearmWeapon.BP_ToggleRearmWeapon_C
// 0x002C (0x005C - 0x0030)
public class UBP_ToggleRearmWeapon_C : UBP_RadialAction_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0030, false); // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<ASQEquipableItem>                  _offEquippable                                                 = new ExternalOffset<ASQEquipableItem>(0x0038, true);          // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsAmmoFull                                                = new ExternalOffset<byte/*(bool)*/>(0x0040);                  // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offMagsToRearm                                                = new ExternalOffset<int>(0x0044);                             // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TScriptInterface<USQRearmSource>>  _offRearmSource                                                = new ExternalOffset<TScriptInterface<USQRearmSource>>(0x0048, false); // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offRemainingAmmo                                              = new ExternalOffset<float>(0x0058);                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public ASQEquipableItem                                   Equippable                                                     => _offEquippable.GetValue();
	public byte/*(bool)*/                                     bIsAmmoFull                                                    => _offbIsAmmoFull.GetValue();
	public int                                                MagsToRearm                                                    => _offMagsToRearm.GetValue();
	public TScriptInterface<USQRearmSource>                   RearmSource                                                    => _offRearmSource.GetValue();
	public float                                              RemainingAmmo                                                  => _offRemainingAmmo.GetValue();
	#endregion


}


}