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

// BlueprintGeneratedClass MI8_Flying_BG.MI8_Flying_BG_C
// 0x0064 (0x029C - 0x0238)
public class AMI8_Flying_BG_C : AActor
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UAudioComponent>                   _offEngineAudio                                                = new ExternalOffset<UAudioComponent>(0x0250, true);           // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkeletalMeshComponent>            _offSkeletalMesh                                               = new ExternalOffset<USkeletalMeshComponent>(0x0258, true);    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x0260, true);           // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offHeliMovement_Alpha_726A31094A2C8D2EA0F4629F3037A24F        = new ExternalOffset<float>(0x0268);                           // 0x0268(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<ETimelineDirection>>   _offHeliMovement__Direction_726A31094A2C8D2EA0F4629F3037A24F   = new ExternalOffset<TEnumAsByte<ETimelineDirection>>(0x026C, false); // 0x026C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTimelineComponent>                _offHeliMovement                                               = new ExternalOffset<UTimelineComponent>(0x0270, true);        // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x0278);                           // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offRestartDelay                                               = new ExternalOffset<FVector2D>(0x027C, false);                // 0x027C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ATargetPoint>                      _offTarget1                                                    = new ExternalOffset<ATargetPoint>(0x0288, true);              // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ATargetPoint>                      _offTarget2                                                    = new ExternalOffset<ATargetPoint>(0x0290, true);              // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offStartDelay                                                 = new ExternalOffset<float>(0x0298);                           // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UAudioComponent                                    EngineAudio                                                    => _offEngineAudio.GetValue();
	public USkeletalMeshComponent                             SkeletalMesh                                                   => _offSkeletalMesh.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	public float                                              HeliMovement_Alpha_726A31094A2C8D2EA0F4629F3037A24F            => _offHeliMovement_Alpha_726A31094A2C8D2EA0F4629F3037A24F.GetValue();
	public TEnumAsByte<ETimelineDirection>                    HeliMovement__Direction_726A31094A2C8D2EA0F4629F3037A24F       => _offHeliMovement__Direction_726A31094A2C8D2EA0F4629F3037A24F.GetValue();
	public UTimelineComponent                                 HeliMovement                                                   => _offHeliMovement.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	public FVector2D                                          RestartDelay                                                   => _offRestartDelay.GetValue();
	public ATargetPoint                                       Target1                                                        => _offTarget1.GetValue();
	public ATargetPoint                                       Target2                                                        => _offTarget2.GetValue();
	public float                                              StartDelay                                                     => _offStartDelay.GetValue();
	#endregion


}


}