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

// BlueprintGeneratedClass BP_GenericVehicleClosedTurret.BP_GenericVehicleClosedTurret_C
// 0x00AC (0x04B8 - 0x040C)
public class ABP_GenericVehicleClosedTurret_C : ASQVehicleTurretClosedTop
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0430, false); // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UStaticMeshComponent>              _offGunCollisionMesh                                           = new ExternalOffset<UStaticMeshComponent>(0x0438, true);      // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkeletalMeshComponent>            _offSkeletalMesh                                               = new ExternalOffset<USkeletalMeshComponent>(0x0440, true);    // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQRotationMovementAudioComponent> _offSQRotationMovementAudio                                    = new ExternalOffset<USQRotationMovementAudioComponent>(0x0448, true); // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVelocityRotatingMovementComponent> _offPitchMovement                                              = new ExternalOffset<USQVelocityRotatingMovementComponent>(0x0450, true); // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVelocityRotatingMovementComponent> _offYawMovement                                                = new ExternalOffset<USQVelocityRotatingMovementComponent>(0x0458, true); // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offCollisionMesh                                              = new ExternalOffset<UStaticMeshComponent>(0x0460, true);      // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCameraComponent>                  _offFirstPersonCamera                                          = new ExternalOffset<UCameraComponent>(0x0468, true);          // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCameraComponent>                  _offCamera                                                     = new ExternalOffset<UCameraComponent>(0x0470, true);          // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offGunAttachPoint                                             = new ExternalOffset<USceneComponent>(0x0478, true);           // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkeletalMeshComponent>            _offTurret_SkeletalMesh                                        = new ExternalOffset<USkeletalMeshComponent>(0x0480, true);    // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleInventoryComponent>      _offSQVehicleInventory                                         = new ExternalOffset<USQVehicleInventoryComponent>(0x0488, true); // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x0490, true);           // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTimeline_0_lerp_CEC9EA414025A28F160BC981592258A4           = new ExternalOffset<float>(0x0498);                           // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<ETimelineDirection>>   _offTimeline_0__Direction_CEC9EA414025A28F160BC981592258A4     = new ExternalOffset<TEnumAsByte<ETimelineDirection>>(0x049C, false); // 0x049C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTimelineComponent>                _offTimeline_1                                                 = new ExternalOffset<UTimelineComponent>(0x04A0, true);        // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxRotationSpeed                                           = new ExternalOffset<float>(0x04A8);                           // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRotationSpeedMultiplier                                    = new ExternalOffset<float>(0x04AC);                           // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offElevationSpeedMultiplier                                   = new ExternalOffset<float>(0x04B0);                           // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxElevationSpeed                                          = new ExternalOffset<float>(0x04B4);                           // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UStaticMeshComponent                               GunCollisionMesh                                               => _offGunCollisionMesh.GetValue();
	public USkeletalMeshComponent                             SkeletalMesh                                                   => _offSkeletalMesh.GetValue();
	public USQRotationMovementAudioComponent                  SQRotationMovementAudio                                        => _offSQRotationMovementAudio.GetValue();
	public USQVelocityRotatingMovementComponent               PitchMovement                                                  => _offPitchMovement.GetValue();
	public USQVelocityRotatingMovementComponent               YawMovement                                                    => _offYawMovement.GetValue();
	public UStaticMeshComponent                               CollisionMesh                                                  => _offCollisionMesh.GetValue();
	public UCameraComponent                                   FirstPersonCamera                                              => _offFirstPersonCamera.GetValue();
	public UCameraComponent                                   Camera                                                         => _offCamera.GetValue();
	public USceneComponent                                    GunAttachPoint                                                 => _offGunAttachPoint.GetValue();
	public USkeletalMeshComponent                             Turret_SkeletalMesh                                            => _offTurret_SkeletalMesh.GetValue();
	public USQVehicleInventoryComponent                       SQVehicleInventory                                             => _offSQVehicleInventory.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	public float                                              Timeline_0_lerp_CEC9EA414025A28F160BC981592258A4               => _offTimeline_0_lerp_CEC9EA414025A28F160BC981592258A4.GetValue();
	public TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_CEC9EA414025A28F160BC981592258A4         => _offTimeline_0__Direction_CEC9EA414025A28F160BC981592258A4.GetValue();
	public UTimelineComponent                                 Timeline_1                                                     => _offTimeline_1.GetValue();
	public float                                              MaxRotationSpeed                                               => _offMaxRotationSpeed.GetValue();
	public float                                              RotationSpeedMultiplier                                        => _offRotationSpeedMultiplier.GetValue();
	public float                                              ElevationSpeedMultiplier                                       => _offElevationSpeedMultiplier.GetValue();
	public float                                              MaxElevationSpeed                                              => _offMaxElevationSpeed.GetValue();
	#endregion


}


}