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

// BlueprintGeneratedClass BP_Proj_Generictank_HE.BP_Proj_Generictank_HE_C
// 0x005C (0x0530 - 0x04D4)
public class ABP_Proj_Generictank_HE_C : ASQMortarProjectile
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0510, false); // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem                                             = new ExternalOffset<UParticleSystemComponent>(0x0518, true);  // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMesh>                       _offTracerMesh                                                 = new ExternalOffset<UStaticMesh>(0x0520, true);               // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterial>                         _offTracerMaterial                                             = new ExternalOffset<UMaterial>(0x0528, true);                 // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UParticleSystemComponent                           ParticleSystem                                                 => _offParticleSystem.GetValue();
	public UStaticMesh                                        TracerMesh                                                     => _offTracerMesh.GetValue();
	public UMaterial                                          TracerMaterial                                                 => _offTracerMaterial.GetValue();
	#endregion


}


}