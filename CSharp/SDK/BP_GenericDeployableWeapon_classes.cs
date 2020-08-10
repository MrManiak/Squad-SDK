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

// BlueprintGeneratedClass BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C
// 0x015F (0x0B14 - 0x09B5)
public class ABP_GenericDeployableWeapon_C : ASQVehicleWeapon
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
	private ExternalOffset<float>                             _offFire_Camera_Shake_Outer_Radius                             = new ExternalOffset<float>(0x0A28);                           // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offFire_Camera_Shake_Falloff                                  = new ExternalOffset<float>(0x0A2C);                           // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offFire_Camera_Shake_Epicenter_Socket                         = new ExternalOffset<FName>(0x0A30, false);                    // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offCamera_Shake_Preset                                        = new ExternalOffset<UClass>(0x0A38, true);                    // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offFire_Weapon_Animation                                      = new ExternalOffset<UAnimMontage>(0x0A40, true);              // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offFire_Soldier_Animation                                     = new ExternalOffset<UAnimMontage>(0x0A48, true);              // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offFire_Tripod_Animation                                      = new ExternalOffset<UAnimMontage>(0x0A50, true);              // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offReload_Tripod_Animation                                    = new ExternalOffset<UAnimMontage>(0x0A58, true);              // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offReload_Weapon_Animation                                    = new ExternalOffset<UAnimMontage>(0x0A60, true);              // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offReload_Soldier_Animation                                   = new ExternalOffset<UAnimMontage>(0x0A68, true);              // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offReload_Dry_Tripod_Animation                                = new ExternalOffset<UAnimMontage>(0x0A70, true);              // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offReload_Dry_Weapon_Animation                                = new ExternalOffset<UAnimMontage>(0x0A78, true);              // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offReload_Dry_Soldier_Animation                               = new ExternalOffset<UAnimMontage>(0x0A80, true);              // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offEquip_Soldier_Animation                                    = new ExternalOffset<UAnimMontage>(0x0A88, true);              // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offEquip_Weapon_Animation                                     = new ExternalOffset<UAnimMontage>(0x0A90, true);              // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAnimMontage>                      _offEquip_Tripod_Animation                                     = new ExternalOffset<UAnimMontage>(0x0A98, true);              // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offBackblastSocket                                            = new ExternalOffset<FName>(0x0AA0, false);                    // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTransform>                        _offStartTransform                                             = new ExternalOffset<FTransform>(0x0AB0, false);               // 0x0AB0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTransform>                        _offEndTransform                                               = new ExternalOffset<FTransform>(0x0AE0, false);               // 0x0AE0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offMeshCurrentMontageTime                                     = new ExternalOffset<float>(0x0B10);                           // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
	public float                                              Fire_Camera_Shake_Outer_Radius                                 => _offFire_Camera_Shake_Outer_Radius.GetValue();
	public float                                              Fire_Camera_Shake_Falloff                                      => _offFire_Camera_Shake_Falloff.GetValue();
	public FName                                              Fire_Camera_Shake_Epicenter_Socket                             => _offFire_Camera_Shake_Epicenter_Socket.GetValue();
	public UClass                                             Camera_Shake_Preset                                            => _offCamera_Shake_Preset.GetValue();
	public UAnimMontage                                       Fire_Weapon_Animation                                          => _offFire_Weapon_Animation.GetValue();
	public UAnimMontage                                       Fire_Soldier_Animation                                         => _offFire_Soldier_Animation.GetValue();
	public UAnimMontage                                       Fire_Tripod_Animation                                          => _offFire_Tripod_Animation.GetValue();
	public UAnimMontage                                       Reload_Tripod_Animation                                        => _offReload_Tripod_Animation.GetValue();
	public UAnimMontage                                       Reload_Weapon_Animation                                        => _offReload_Weapon_Animation.GetValue();
	public UAnimMontage                                       Reload_Soldier_Animation                                       => _offReload_Soldier_Animation.GetValue();
	public UAnimMontage                                       Reload_Dry_Tripod_Animation                                    => _offReload_Dry_Tripod_Animation.GetValue();
	public UAnimMontage                                       Reload_Dry_Weapon_Animation                                    => _offReload_Dry_Weapon_Animation.GetValue();
	public UAnimMontage                                       Reload_Dry_Soldier_Animation                                   => _offReload_Dry_Soldier_Animation.GetValue();
	public UAnimMontage                                       Equip_Soldier_Animation                                        => _offEquip_Soldier_Animation.GetValue();
	public UAnimMontage                                       Equip_Weapon_Animation                                         => _offEquip_Weapon_Animation.GetValue();
	public UAnimMontage                                       Equip_Tripod_Animation                                         => _offEquip_Tripod_Animation.GetValue();
	public FName                                              BackblastSocket                                                => _offBackblastSocket.GetValue();
	public FTransform                                         StartTransform                                                 => _offStartTransform.GetValue();
	public FTransform                                         EndTransform                                                   => _offEndTransform.GetValue();
	public float                                              MeshCurrentMontageTime                                         => _offMeshCurrentMontageTime.GetValue();
	#endregion


}


}