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

// BlueprintGeneratedClass BP_GenericRocketLauncher.BP_GenericRocketLauncher_C
// 0x0048 (0x0740 - 0x06F8)
public class ABP_GenericRocketLauncher_C : ABP_Weapon2_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x06F8, false); // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UParticleSystemComponent>          _offMuzzleFlashRearComponent3P                                 = new ExternalOffset<UParticleSystemComponent>(0x0700, true);  // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UChildActorComponent>              _offBackBlastComponent3P                                       = new ExternalOffset<UChildActorComponent>(0x0708, true);      // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offMuzzleFlashRearComponent1P                                 = new ExternalOffset<UParticleSystemComponent>(0x0710, true);  // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQBlastComponent>                 _offSquadBlast                                                 = new ExternalOffset<USQBlastComponent>(0x0718, true);         // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UChildActorComponent>              _offBackBlastComponent1P                                       = new ExternalOffset<UChildActorComponent>(0x0720, true);      // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offBackblastSocket                                            = new ExternalOffset<FName>(0x0728, false);                    // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offBackblastEffect1P                                          = new ExternalOffset<UParticleSystem>(0x0730, true);           // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offBackblastEffect3P                                          = new ExternalOffset<UParticleSystem>(0x0738, true);           // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UParticleSystemComponent                           MuzzleFlashRearComponent3P                                     => _offMuzzleFlashRearComponent3P.GetValue();
	public UChildActorComponent                               BackBlastComponent3P                                           => _offBackBlastComponent3P.GetValue();
	public UParticleSystemComponent                           MuzzleFlashRearComponent1P                                     => _offMuzzleFlashRearComponent1P.GetValue();
	public USQBlastComponent                                  SquadBlast                                                     => _offSquadBlast.GetValue();
	public UChildActorComponent                               BackBlastComponent1P                                           => _offBackBlastComponent1P.GetValue();
	public FName                                              BackblastSocket                                                => _offBackblastSocket.GetValue();
	public UParticleSystem                                    BackblastEffect1P                                              => _offBackblastEffect1P.GetValue();
	public UParticleSystem                                    BackblastEffect3P                                              => _offBackblastEffect3P.GetValue();
	#endregion


}


}