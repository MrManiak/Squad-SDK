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

// BlueprintGeneratedClass BP_GenericDeployableTripodVehicle.BP_GenericDeployableTripodVehicle_C
// 0x0085 (0x090D - 0x0888)
public class ABP_GenericDeployableTripodVehicle_C : ASQDeployableTripodVehicle
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0890, false); // 0x0890(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USQRotationMovementAudioComponent> _offSQRotationMovementAudio                                    = new ExternalOffset<USQRotationMovementAudioComponent>(0x0898, true); // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offWeaponCollision                                            = new ExternalOffset<UStaticMeshComponent>(0x08A0, true);      // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBoxComponent>                     _offInteractBox                                                = new ExternalOffset<UBoxComponent>(0x08A8, true);             // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offInterpolateZoom_Alpha_AFDD346B4C31DFA43382A3A0259D66C3     = new ExternalOffset<float>(0x08B0);                           // 0x08B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<ETimelineDirection>>   _offInterpolateZoom__Direction_AFDD346B4C31DFA43382A3A0259D66C3 = new ExternalOffset<TEnumAsByte<ETimelineDirection>>(0x08B4, false); // 0x08B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTimelineComponent>                _offInterpolateZoom                                            = new ExternalOffset<UTimelineComponent>(0x08B8, true);        // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offScope_InterpolateZoom_lerp_312667D24DA06968478036B24436F0C7 = new ExternalOffset<float>(0x08C0);                           // 0x08C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<ETimelineDirection>>   _offScope_InterpolateZoom__Direction_312667D24DA06968478036B24436F0C7 = new ExternalOffset<TEnumAsByte<ETimelineDirection>>(0x08C4, false); // 0x08C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTimelineComponent>                _offScope_InterpolateZoom                                      = new ExternalOffset<UTimelineComponent>(0x08C8, true);        // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsInThirdPerson_1                                         = new ExternalOffset<byte/*(bool)*/>(0x08D0);                  // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FVector2D>                         _offFreelookLimitPitch                                         = new ExternalOffset<FVector2D>(0x08D4, false);                // 0x08D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offFreelookLimitYaw                                           = new ExternalOffset<FVector2D>(0x08DC, false);                // 0x08DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowFocus                                                = new ExternalOffset<byte/*(bool)*/>(0x08E4);                  // 0x08E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseVehicleZoom                                            = new ExternalOffset<byte/*(bool)*/>(0x08E5);                  // 0x08E5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbTripodIsADS                                               = new ExternalOffset<byte/*(bool)*/>(0x08E6);                  // 0x08E6(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TArray<float>>                     _offZoomLevels                                                 = new ExternalOffset<TArray<float>>(0x08E8, false);            // 0x08E8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	private ExternalOffset<int>                               _offCurrentZoom                                                = new ExternalOffset<int>(0x08F8);                             // 0x08F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offElevationSpeedMultiplier                                   = new ExternalOffset<float>(0x08FC);                           // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxElevationSpeed                                          = new ExternalOffset<float>(0x0900);                           // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRotationSpeedMultiplier                                    = new ExternalOffset<float>(0x0904);                           // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxRotationSpeed                                           = new ExternalOffset<float>(0x0908);                           // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offZoomTimer                                                  = new ExternalOffset<byte/*(bool)*/>(0x090C);                  // 0x090C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USQRotationMovementAudioComponent                  SQRotationMovementAudio                                        => _offSQRotationMovementAudio.GetValue();
	public UStaticMeshComponent                               WeaponCollision                                                => _offWeaponCollision.GetValue();
	public UBoxComponent                                      InteractBox                                                    => _offInteractBox.GetValue();
	public float                                              InterpolateZoom_Alpha_AFDD346B4C31DFA43382A3A0259D66C3         => _offInterpolateZoom_Alpha_AFDD346B4C31DFA43382A3A0259D66C3.GetValue();
	public TEnumAsByte<ETimelineDirection>                    InterpolateZoom__Direction_AFDD346B4C31DFA43382A3A0259D66C3    => _offInterpolateZoom__Direction_AFDD346B4C31DFA43382A3A0259D66C3.GetValue();
	public UTimelineComponent                                 InterpolateZoom                                                => _offInterpolateZoom.GetValue();
	public float                                              Scope_InterpolateZoom_lerp_312667D24DA06968478036B24436F0C7    => _offScope_InterpolateZoom_lerp_312667D24DA06968478036B24436F0C7.GetValue();
	public TEnumAsByte<ETimelineDirection>                    Scope_InterpolateZoom__Direction_312667D24DA06968478036B24436F0C7 => _offScope_InterpolateZoom__Direction_312667D24DA06968478036B24436F0C7.GetValue();
	public UTimelineComponent                                 Scope_InterpolateZoom                                          => _offScope_InterpolateZoom.GetValue();
	public byte/*(bool)*/                                     bIsInThirdPerson_1                                             => _offbIsInThirdPerson_1.GetValue();
	public FVector2D                                          FreelookLimitPitch                                             => _offFreelookLimitPitch.GetValue();
	public FVector2D                                          FreelookLimitYaw                                               => _offFreelookLimitYaw.GetValue();
	public byte/*(bool)*/                                     bAllowFocus                                                    => _offbAllowFocus.GetValue();
	public byte/*(bool)*/                                     bUseVehicleZoom                                                => _offbUseVehicleZoom.GetValue();
	public byte/*(bool)*/                                     bTripodIsADS                                                   => _offbTripodIsADS.GetValue();
	public TArray<float>                                      ZoomLevels                                                     => _offZoomLevels.GetValue();
	public int                                                CurrentZoom                                                    => _offCurrentZoom.GetValue();
	public float                                              ElevationSpeedMultiplier                                       => _offElevationSpeedMultiplier.GetValue();
	public float                                              MaxElevationSpeed                                              => _offMaxElevationSpeed.GetValue();
	public float                                              RotationSpeedMultiplier                                        => _offRotationSpeedMultiplier.GetValue();
	public float                                              MaxRotationSpeed                                               => _offMaxRotationSpeed.GetValue();
	public byte/*(bool)*/                                     ZoomTimer                                                      => _offZoomTimer.GetValue();
	#endregion


}


}