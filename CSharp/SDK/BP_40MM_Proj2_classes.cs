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

// BlueprintGeneratedClass BP_40MM_Proj2.BP_40MM_Proj2_C
// 0x0064 (0x0538 - 0x04D4)
public class ABP_40MM_Proj2_C : ASQMortarProjectile
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0510, false); // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UChildActorComponent>              _offShockwave                                                  = new ExternalOffset<UChildActorComponent>(0x0518, true);      // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkeletalMeshComponent>            _offSkeletalMesh                                               = new ExternalOffset<USkeletalMeshComponent>(0x0520, true);    // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offBPEffectOnUnderMinFlightTime                               = new ExternalOffset<UParticleSystem>(0x0528, true);           // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offBPSoundonUnderMinFlightTime                                = new ExternalOffset<USoundBase>(0x0530, true);                // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UChildActorComponent                               Shockwave                                                      => _offShockwave.GetValue();
	public USkeletalMeshComponent                             SkeletalMesh                                                   => _offSkeletalMesh.GetValue();
	public UParticleSystem                                    BPEffectOnUnderMinFlightTime                                   => _offBPEffectOnUnderMinFlightTime.GetValue();
	public USoundBase                                         BPSoundonUnderMinFlightTime                                    => _offBPSoundonUnderMinFlightTime.GetValue();
	#endregion


}


}