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

// BlueprintGeneratedClass BP_BTR80_RUS_PKT.BP_BTR80_RUS_PKT_C
// 0x0073 (0x0A28 - 0x09B5)
public class ABP_BTR80_RUS_PKT_C : ASQVehicleWeapon
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x09B8, false); // 0x09B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USQTemperatureComponent>           _offSQTemperature                                              = new ExternalOffset<USQTemperatureComponent>(0x09C0, true);   // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offShutdownTemp                                               = new ExternalOffset<float>(0x09C8);                           // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offOverheatEffectTrigger_2                                    = new ExternalOffset<float>(0x09CC);                           // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offOverheatEffectTrigger_3                                    = new ExternalOffset<float>(0x09D0);                           // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offOverheat_1_Effect                                          = new ExternalOffset<UParticleSystemComponent>(0x09D8, true);  // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offOverheat_2_Effect                                          = new ExternalOffset<UParticleSystemComponent>(0x09E0, true);  // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offOverheat_3_Effect                                          = new ExternalOffset<UParticleSystemComponent>(0x09E8, true);  // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAudioComponent>                   _offOverheat_1_Sound                                           = new ExternalOffset<UAudioComponent>(0x09F0, true);           // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAudioComponent>                   _offOverheat_2_Sound                                           = new ExternalOffset<UAudioComponent>(0x09F8, true);           // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundCue>                         _offSoundTest                                                  = new ExternalOffset<USoundCue>(0x0A00, true);                 // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAudioComponent>                   _offOverheat_3_Sound                                           = new ExternalOffset<UAudioComponent>(0x0A08, true);           // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offMesh1PReturnSection                                        = new ExternalOffset<FName>(0x0A10, false);                    // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offMesh3PReturnSection                                        = new ExternalOffset<FName>(0x0A18, false);                    // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offSoldierMeshReturnSection                                   = new ExternalOffset<FName>(0x0A20, false);                    // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USQTemperatureComponent                            SQTemperature                                                  => _offSQTemperature.GetValue();
	public float                                              ShutdownTemp                                                   => _offShutdownTemp.GetValue();
	public float                                              OverheatEffectTrigger_2                                        => _offOverheatEffectTrigger_2.GetValue();
	public float                                              OverheatEffectTrigger_3                                        => _offOverheatEffectTrigger_3.GetValue();
	public UParticleSystemComponent                           Overheat_1_Effect                                              => _offOverheat_1_Effect.GetValue();
	public UParticleSystemComponent                           Overheat_2_Effect                                              => _offOverheat_2_Effect.GetValue();
	public UParticleSystemComponent                           Overheat_3_Effect                                              => _offOverheat_3_Effect.GetValue();
	public UAudioComponent                                    Overheat_1_Sound                                               => _offOverheat_1_Sound.GetValue();
	public UAudioComponent                                    Overheat_2_Sound                                               => _offOverheat_2_Sound.GetValue();
	public USoundCue                                          SoundTest                                                      => _offSoundTest.GetValue();
	public UAudioComponent                                    Overheat_3_Sound                                               => _offOverheat_3_Sound.GetValue();
	public FName                                              Mesh1PReturnSection                                            => _offMesh1PReturnSection.GetValue();
	public FName                                              Mesh3PReturnSection                                            => _offMesh3PReturnSection.GetValue();
	public FName                                              SoldierMeshReturnSection                                       => _offSoldierMeshReturnSection.GetValue();
	#endregion


}


}