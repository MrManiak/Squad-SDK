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

// BlueprintGeneratedClass BP_Projectile_120mm_AP.BP_Projectile_120mm_AP_C
// 0x0038 (0x0498 - 0x0460)
public class ABP_Projectile_120mm_AP_C : ASQProjectile
{
	#region Offsets
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem                                             = new ExternalOffset<UParticleSystemComponent>(0x0480, true);  // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMesh>                       _offTracerMesh                                                 = new ExternalOffset<UStaticMesh>(0x0488, true);               // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterial>                         _offTracerMaterial                                             = new ExternalOffset<UMaterial>(0x0490, true);                 // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UParticleSystemComponent                           ParticleSystem                                                 => _offParticleSystem.GetValue();
	public UStaticMesh                                        TracerMesh                                                     => _offTracerMesh.GetValue();
	public UMaterial                                          TracerMaterial                                                 => _offTracerMaterial.GetValue();
	#endregion


}


}