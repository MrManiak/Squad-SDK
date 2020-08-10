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

// BlueprintGeneratedClass BP_FlyingDrone.BP_FlyingDrone_C
// 0x00F8 (0x0750 - 0x0658)
public class ABP_FlyingDrone_C : ACharacter
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0660, false); // 0x0660(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UStaticMeshComponent>              _offHitBox                                                     = new ExternalOffset<UStaticMeshComponent>(0x0668, true);      // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAudioComponent>                   _offSC_QuadcoptersAudio                                        = new ExternalOffset<UAudioComponent>(0x0670, true);           // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCameraComponent>                  _offCamera                                                     = new ExternalOffset<UCameraComponent>(0x0678, true);          // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapIconComponent>               _offSQMapIcon                                                  = new ExternalOffset<USQMapIconComponent>(0x0680, true);       // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQCoreStateComponent>             _offSQCoreState                                                = new ExternalOffset<USQCoreStateComponent>(0x0688, true);     // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offBlade4                                                     = new ExternalOffset<UStaticMeshComponent>(0x0690, true);      // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offBlade3                                                     = new ExternalOffset<UStaticMeshComponent>(0x0698, true);      // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offBlade2                                                     = new ExternalOffset<UStaticMeshComponent>(0x06A0, true);      // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offBlade                                                      = new ExternalOffset<UStaticMeshComponent>(0x06A8, true);      // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UHealthComponent_C>                _offHealthComponent                                            = new ExternalOffset<UHealthComponent_C>(0x06B0, true);        // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offBody                                                       = new ExternalOffset<UStaticMeshComponent>(0x06B8, true);      // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offSQ_PC                                                      = new ExternalOffset<ASQPlayerController>(0x06C0, true);       // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offDead                                                       = new ExternalOffset<byte/*(bool)*/>(0x06C8);                  // 0x06C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UParticleSystem>                   _offExplode_Effect                                             = new ExternalOffset<UParticleSystem>(0x06D0, true);           // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offExplode_Sound                                              = new ExternalOffset<USoundBase>(0x06D8, true);                // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Possess                                                = new ExternalOffset<byte/*(bool)*/>(0x06E0);                  // 0x06E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UClass>                            _offCommand_Action                                             = new ExternalOffset<UClass>(0x06E8, true);                    // 0x06E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCrashVelocity                                              = new ExternalOffset<float>(0x06F0);                           // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMax_Fly_Height                                             = new ExternalOffset<float>(0x06F4);                           // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Increase_Altitude                                      = new ExternalOffset<byte/*(bool)*/>(0x06F8);                  // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offAltitude_Timer                                             = new ExternalOffset<FTimerHandle>(0x0700, false);             // 0x0700(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offZoom_Level                                                 = new ExternalOffset<int>(0x0708);                             // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDesired_Zoom                                               = new ExternalOffset<float>(0x070C);                           // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<float>>                     _offZoom_Levels                                                = new ExternalOffset<TArray<float>>(0x0710, false);            // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<UClass>                            _offFPV_Item_Class                                             = new ExternalOffset<UClass>(0x0720, true);                    // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offBankAngleLimit                                             = new ExternalOffset<float>(0x0728);                           // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FDebugFloatHistory>                _offDebugFloatHistory                                          = new ExternalOffset<FDebugFloatHistory>(0x0730, false);       // 0x0730(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UStaticMeshComponent                               HitBox                                                         => _offHitBox.GetValue();
	public UAudioComponent                                    SC_QuadcoptersAudio                                            => _offSC_QuadcoptersAudio.GetValue();
	public UCameraComponent                                   Camera                                                         => _offCamera.GetValue();
	public USQMapIconComponent                                SQMapIcon                                                      => _offSQMapIcon.GetValue();
	public USQCoreStateComponent                              SQCoreState                                                    => _offSQCoreState.GetValue();
	public UStaticMeshComponent                               Blade4                                                         => _offBlade4.GetValue();
	public UStaticMeshComponent                               Blade3                                                         => _offBlade3.GetValue();
	public UStaticMeshComponent                               Blade2                                                         => _offBlade2.GetValue();
	public UStaticMeshComponent                               Blade                                                          => _offBlade.GetValue();
	public UHealthComponent_C                                 HealthComponent                                                => _offHealthComponent.GetValue();
	public UStaticMeshComponent                               Body                                                           => _offBody.GetValue();
	public ASQPlayerController                                SQ_PC                                                          => _offSQ_PC.GetValue();
	public byte/*(bool)*/                                     Dead                                                           => _offDead.GetValue();
	public UParticleSystem                                    Explode_Effect                                                 => _offExplode_Effect.GetValue();
	public USoundBase                                         Explode_Sound                                                  => _offExplode_Sound.GetValue();
	public byte/*(bool)*/                                     Can_Possess                                                    => _offCan_Possess.GetValue();
	public UClass                                             Command_Action                                                 => _offCommand_Action.GetValue();
	public float                                              CrashVelocity                                                  => _offCrashVelocity.GetValue();
	public float                                              Max_Fly_Height                                                 => _offMax_Fly_Height.GetValue();
	public byte/*(bool)*/                                     Can_Increase_Altitude                                          => _offCan_Increase_Altitude.GetValue();
	public FTimerHandle                                       Altitude_Timer                                                 => _offAltitude_Timer.GetValue();
	public int                                                Zoom_Level                                                     => _offZoom_Level.GetValue();
	public float                                              Desired_Zoom                                                   => _offDesired_Zoom.GetValue();
	public TArray<float>                                      Zoom_Levels                                                    => _offZoom_Levels.GetValue();
	public UClass                                             FPV_Item_Class                                                 => _offFPV_Item_Class.GetValue();
	public float                                              BankAngleLimit                                                 => _offBankAngleLimit.GetValue();
	public FDebugFloatHistory                                 DebugFloatHistory                                              => _offDebugFloatHistory.GetValue();
	#endregion


}


}