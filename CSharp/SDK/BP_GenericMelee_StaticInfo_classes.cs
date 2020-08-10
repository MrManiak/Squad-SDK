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

// BlueprintGeneratedClass BP_GenericMelee_StaticInfo.BP_GenericMelee_StaticInfo_C
// 0x0030 (0x0960 - 0x0930)
public class UBP_GenericMelee_StaticInfo_C : UBP_GenericWeapon_StaticInfo_C
{
	#region Offsets
	private ExternalOffset<UAnimMontage>                      _offBP_MeleeNoHitSoldier1pMontage                              = new ExternalOffset<UAnimMontage>(0x0930, true);              // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offBP_MeleeHitSoldier1pMontage                                = new ExternalOffset<UAnimMontage>(0x0938, true);              // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offBP_MeleeNoHitSoldier3pMontage                              = new ExternalOffset<UAnimMontage>(0x0940, true);              // 0x0940(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offBP_MeleeNoHitSoldierWeaponMontage                          = new ExternalOffset<UAnimMontage>(0x0948, true);              // 0x0948(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offBP_MeleeHitSoldier3pMontage                                = new ExternalOffset<UAnimMontage>(0x0950, true);              // 0x0950(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offBP_MeleeHitSoldierWeaponMontage                            = new ExternalOffset<UAnimMontage>(0x0958, true);              // 0x0958(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UAnimMontage                                       BP_MeleeNoHitSoldier1pMontage                                  => _offBP_MeleeNoHitSoldier1pMontage.GetValue();
	public UAnimMontage                                       BP_MeleeHitSoldier1pMontage                                    => _offBP_MeleeHitSoldier1pMontage.GetValue();
	public UAnimMontage                                       BP_MeleeNoHitSoldier3pMontage                                  => _offBP_MeleeNoHitSoldier3pMontage.GetValue();
	public UAnimMontage                                       BP_MeleeNoHitSoldierWeaponMontage                              => _offBP_MeleeNoHitSoldierWeaponMontage.GetValue();
	public UAnimMontage                                       BP_MeleeHitSoldier3pMontage                                    => _offBP_MeleeHitSoldier3pMontage.GetValue();
	public UAnimMontage                                       BP_MeleeHitSoldierWeaponMontage                                => _offBP_MeleeHitSoldierWeaponMontage.GetValue();
	#endregion


}


}