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

// BlueprintGeneratedClass UH60M_Crash.UH60M_Crash_C
// 0x00D8 (0x0400 - 0x0328)
public class AUH60M_Crash_C : ABP_GenericHelicopterWreck_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0328, false); // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UParticleSystemComponent>          _offFrontTrail                                                 = new ExternalOffset<UParticleSystemComponent>(0x0330, true);  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offtrail                                                      = new ExternalOffset<UParticleSystemComponent>(0x0338, true);  // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh15                                               = new ExternalOffset<UStaticMeshComponent>(0x0340, true);      // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh14                                               = new ExternalOffset<UStaticMeshComponent>(0x0348, true);      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offHeliExp_Fuel                                               = new ExternalOffset<UParticleSystemComponent>(0x0350, true);  // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem3                                            = new ExternalOffset<UParticleSystemComponent>(0x0358, true);  // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem2                                            = new ExternalOffset<UParticleSystemComponent>(0x0360, true);  // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem1                                            = new ExternalOffset<UParticleSystemComponent>(0x0368, true);  // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem                                             = new ExternalOffset<UParticleSystemComponent>(0x0370, true);  // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offLargeBody2                                                 = new ExternalOffset<UStaticMeshComponent>(0x0378, true);      // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offLargeBody6                                                 = new ExternalOffset<UStaticMeshComponent>(0x0380, true);      // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh11                                               = new ExternalOffset<UStaticMeshComponent>(0x0388, true);      // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offLargeBody5                                                 = new ExternalOffset<UStaticMeshComponent>(0x0390, true);      // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh1                                                = new ExternalOffset<UStaticMeshComponent>(0x0398, true);      // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offLargeBody4                                                 = new ExternalOffset<UStaticMeshComponent>(0x03A0, true);      // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh7                                                = new ExternalOffset<UStaticMeshComponent>(0x03A8, true);      // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh6                                                = new ExternalOffset<UStaticMeshComponent>(0x03B0, true);      // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh5                                                = new ExternalOffset<UStaticMeshComponent>(0x03B8, true);      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh4                                                = new ExternalOffset<UStaticMeshComponent>(0x03C0, true);      // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offLargeBody3                                                 = new ExternalOffset<UStaticMeshComponent>(0x03C8, true);      // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialForceComponent>             _offRadialForce1                                               = new ExternalOffset<URadialForceComponent>(0x03D0, true);     // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh2                                                = new ExternalOffset<UStaticMeshComponent>(0x03D8, true);      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh9                                                = new ExternalOffset<UStaticMeshComponent>(0x03E0, true);      // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offLargeBody1                                                 = new ExternalOffset<UStaticMeshComponent>(0x03E8, true);      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAudioComponent>                   _offFlamesAudio                                                = new ExternalOffset<UAudioComponent>(0x03F0, true);           // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialForceComponent>             _offRadialForce                                                = new ExternalOffset<URadialForceComponent>(0x03F8, true);     // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UParticleSystemComponent                           FrontTrail                                                     => _offFrontTrail.GetValue();
	public UParticleSystemComponent                           trail                                                          => _offtrail.GetValue();
	public UStaticMeshComponent                               StaticMesh15                                                   => _offStaticMesh15.GetValue();
	public UStaticMeshComponent                               StaticMesh14                                                   => _offStaticMesh14.GetValue();
	public UParticleSystemComponent                           HeliExp_Fuel                                                   => _offHeliExp_Fuel.GetValue();
	public UParticleSystemComponent                           ParticleSystem3                                                => _offParticleSystem3.GetValue();
	public UParticleSystemComponent                           ParticleSystem2                                                => _offParticleSystem2.GetValue();
	public UParticleSystemComponent                           ParticleSystem1                                                => _offParticleSystem1.GetValue();
	public UParticleSystemComponent                           ParticleSystem                                                 => _offParticleSystem.GetValue();
	public UStaticMeshComponent                               LargeBody2                                                     => _offLargeBody2.GetValue();
	public UStaticMeshComponent                               LargeBody6                                                     => _offLargeBody6.GetValue();
	public UStaticMeshComponent                               StaticMesh11                                                   => _offStaticMesh11.GetValue();
	public UStaticMeshComponent                               LargeBody5                                                     => _offLargeBody5.GetValue();
	public UStaticMeshComponent                               StaticMesh1                                                    => _offStaticMesh1.GetValue();
	public UStaticMeshComponent                               LargeBody4                                                     => _offLargeBody4.GetValue();
	public UStaticMeshComponent                               StaticMesh7                                                    => _offStaticMesh7.GetValue();
	public UStaticMeshComponent                               StaticMesh6                                                    => _offStaticMesh6.GetValue();
	public UStaticMeshComponent                               StaticMesh5                                                    => _offStaticMesh5.GetValue();
	public UStaticMeshComponent                               StaticMesh4                                                    => _offStaticMesh4.GetValue();
	public UStaticMeshComponent                               LargeBody3                                                     => _offLargeBody3.GetValue();
	public URadialForceComponent                              RadialForce1                                                   => _offRadialForce1.GetValue();
	public UStaticMeshComponent                               StaticMesh2                                                    => _offStaticMesh2.GetValue();
	public UStaticMeshComponent                               StaticMesh9                                                    => _offStaticMesh9.GetValue();
	public UStaticMeshComponent                               LargeBody1                                                     => _offLargeBody1.GetValue();
	public UAudioComponent                                    FlamesAudio                                                    => _offFlamesAudio.GetValue();
	public URadialForceComponent                              RadialForce                                                    => _offRadialForce.GetValue();
	#endregion


}


}