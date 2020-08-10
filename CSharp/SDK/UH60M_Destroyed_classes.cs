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

// BlueprintGeneratedClass UH60M_Destroyed.UH60M_Destroyed_C
// 0x0048 (0x0370 - 0x0328)
public class AUH60M_Destroyed_C : ABP_GenericHelicopterWreck_C
{
	#region Offsets
	private ExternalOffset<UParticleSystemComponent>          _offFire                                                       = new ExternalOffset<UParticleSystemComponent>(0x0328, true);  // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem2                                            = new ExternalOffset<UParticleSystemComponent>(0x0330, true);  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem1                                            = new ExternalOffset<UParticleSystemComponent>(0x0338, true);  // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem                                             = new ExternalOffset<UParticleSystemComponent>(0x0340, true);  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offGlassExp                                                   = new ExternalOffset<UParticleSystemComponent>(0x0348, true);  // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offCollisionMesh                                              = new ExternalOffset<UStaticMeshComponent>(0x0350, true);      // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAudioComponent>                   _offFlamesAudio                                                = new ExternalOffset<UAudioComponent>(0x0358, true);           // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offWreck_Pieces                                               = new ExternalOffset<UParticleSystemComponent>(0x0360, true);  // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offexplosion                                                  = new ExternalOffset<UParticleSystemComponent>(0x0368, true);  // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UParticleSystemComponent                           Fire                                                           => _offFire.GetValue();
	public UParticleSystemComponent                           ParticleSystem2                                                => _offParticleSystem2.GetValue();
	public UParticleSystemComponent                           ParticleSystem1                                                => _offParticleSystem1.GetValue();
	public UParticleSystemComponent                           ParticleSystem                                                 => _offParticleSystem.GetValue();
	public UParticleSystemComponent                           GlassExp                                                       => _offGlassExp.GetValue();
	public UStaticMeshComponent                               CollisionMesh                                                  => _offCollisionMesh.GetValue();
	public UAudioComponent                                    FlamesAudio                                                    => _offFlamesAudio.GetValue();
	public UParticleSystemComponent                           Wreck_Pieces                                                   => _offWreck_Pieces.GetValue();
	public UParticleSystemComponent                           explosion                                                      => _offexplosion.GetValue();
	#endregion


}


}