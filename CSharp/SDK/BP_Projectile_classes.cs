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

// BlueprintGeneratedClass BP_Projectile.BP_Projectile_C
// 0x0030 (0x0490 - 0x0460)
public class ABP_Projectile_C : ASQProjectile
{
	#region Offsets
	private ExternalOffset<UStaticMesh>                       _offTracerMesh                                                 = new ExternalOffset<UStaticMesh>(0x0480, true);               // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterial>                         _offTracerMaterial                                             = new ExternalOffset<UMaterial>(0x0488, true);                 // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UStaticMesh                                        TracerMesh                                                     => _offTracerMesh.GetValue();
	public UMaterial                                          TracerMaterial                                                 => _offTracerMaterial.GetValue();
	#endregion


}


}