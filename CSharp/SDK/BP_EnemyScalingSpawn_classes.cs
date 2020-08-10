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

// BlueprintGeneratedClass BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C
// 0x0020 (0x03FC - 0x03DC)
public class ABP_EnemyScalingSpawn_C : ASQGameSpawn
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x03E0, false); // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USphereComponent>                  _offEnemyDetectionRadius                                       = new ExternalOffset<USphereComponent>(0x03E8, true);          // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offEnemiesInRadius                                            = new ExternalOffset<int>(0x03F0);                             // 0x03F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRespawnDelayPerPerson                                      = new ExternalOffset<float>(0x03F4);                           // 0x03F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offNumEnemiesToDisable                                        = new ExternalOffset<int>(0x03F8);                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USphereComponent                                   EnemyDetectionRadius                                           => _offEnemyDetectionRadius.GetValue();
	public int                                                EnemiesInRadius                                                => _offEnemiesInRadius.GetValue();
	public float                                              RespawnDelayPerPerson                                          => _offRespawnDelayPerPerson.GetValue();
	public int                                                NumEnemiesToDisable                                            => _offNumEnemiesToDisable.GetValue();
	#endregion


}


}