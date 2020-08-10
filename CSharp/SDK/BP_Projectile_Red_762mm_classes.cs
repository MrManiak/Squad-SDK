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

// BlueprintGeneratedClass BP_Projectile_Red_762mm.BP_Projectile_Red_762mm_C
// 0x0008 (0x0498 - 0x0490)
public class ABP_Projectile_Red_762mm_C : ABP_Projectile_7_62mm_C
{
	#region Offsets
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem_Red                                         = new ExternalOffset<UParticleSystemComponent>(0x0490, true);  // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UParticleSystemComponent                           ParticleSystem_Red                                             => _offParticleSystem_Red.GetValue();
	#endregion


}


}