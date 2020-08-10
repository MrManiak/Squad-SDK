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

// BlueprintGeneratedClass Rotor_Bust_Uh60.Rotor_Bust_Uh60_C
// 0x00A0 (0x0328 - 0x0288)
public class ARotor_Bust_Uh60_C : ASQLastingEffect
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02A0, false); // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem3                                            = new ExternalOffset<UParticleSystemComponent>(0x02A8, true);  // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem2                                            = new ExternalOffset<UParticleSystemComponent>(0x02B0, true);  // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem1                                            = new ExternalOffset<UParticleSystemComponent>(0x02B8, true);  // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offexplosion                                                  = new ExternalOffset<UParticleSystemComponent>(0x02C0, true);  // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offForceD                                                     = new ExternalOffset<UStaticMeshComponent>(0x02C8, true);      // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offForceC                                                     = new ExternalOffset<UStaticMeshComponent>(0x02D0, true);      // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offForceB                                                     = new ExternalOffset<UStaticMeshComponent>(0x02D8, true);      // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialForceComponent>             _offBladeForce3                                                = new ExternalOffset<URadialForceComponent>(0x02E0, true);     // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialForceComponent>             _offBladeForce2                                                = new ExternalOffset<URadialForceComponent>(0x02E8, true);     // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialForceComponent>             _offBladeForce1                                                = new ExternalOffset<URadialForceComponent>(0x02F0, true);     // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offForce                                                      = new ExternalOffset<UStaticMeshComponent>(0x02F8, true);      // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offBlade4                                                     = new ExternalOffset<UStaticMeshComponent>(0x0300, true);      // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offBlade3                                                     = new ExternalOffset<UStaticMeshComponent>(0x0308, true);      // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offBlade2                                                     = new ExternalOffset<UStaticMeshComponent>(0x0310, true);      // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offBlade1                                                     = new ExternalOffset<UStaticMeshComponent>(0x0318, true);      // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialForceComponent>             _offRadialForce                                                = new ExternalOffset<URadialForceComponent>(0x0320, true);     // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UParticleSystemComponent                           ParticleSystem3                                                => _offParticleSystem3.GetValue();
	public UParticleSystemComponent                           ParticleSystem2                                                => _offParticleSystem2.GetValue();
	public UParticleSystemComponent                           ParticleSystem1                                                => _offParticleSystem1.GetValue();
	public UParticleSystemComponent                           explosion                                                      => _offexplosion.GetValue();
	public UStaticMeshComponent                               ForceD                                                         => _offForceD.GetValue();
	public UStaticMeshComponent                               ForceC                                                         => _offForceC.GetValue();
	public UStaticMeshComponent                               ForceB                                                         => _offForceB.GetValue();
	public URadialForceComponent                              BladeForce3                                                    => _offBladeForce3.GetValue();
	public URadialForceComponent                              BladeForce2                                                    => _offBladeForce2.GetValue();
	public URadialForceComponent                              BladeForce1                                                    => _offBladeForce1.GetValue();
	public UStaticMeshComponent                               Force                                                          => _offForce.GetValue();
	public UStaticMeshComponent                               Blade4                                                         => _offBlade4.GetValue();
	public UStaticMeshComponent                               Blade3                                                         => _offBlade3.GetValue();
	public UStaticMeshComponent                               Blade2                                                         => _offBlade2.GetValue();
	public UStaticMeshComponent                               Blade1                                                         => _offBlade1.GetValue();
	public URadialForceComponent                              RadialForce                                                    => _offRadialForce.GetValue();
	#endregion


}


}