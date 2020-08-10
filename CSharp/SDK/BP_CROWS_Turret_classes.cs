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

// BlueprintGeneratedClass BP_CROWS_Turret.BP_CROWS_Turret_C
// 0x009C (0x04A8 - 0x040C)
public class ABP_CROWS_Turret_C : ASQVehicleTurretClosedTop
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0430, false); // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UCameraComponent>                  _offFirstPersonCamera                                          = new ExternalOffset<UCameraComponent>(0x0438, true);          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQRotationMovementAudioComponent> _offSQRotationMovementAudio                                    = new ExternalOffset<USQRotationMovementAudioComponent>(0x0440, true); // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offGunAttachPoint                                             = new ExternalOffset<USceneComponent>(0x0448, true);           // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offcrows_turret_static_mesh                                   = new ExternalOffset<UStaticMeshComponent>(0x0450, true);      // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVelocityRotatingMovementComponent> _offPitchMovement                                              = new ExternalOffset<USQVelocityRotatingMovementComponent>(0x0458, true); // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVelocityRotatingMovementComponent> _offYawMovement                                                = new ExternalOffset<USQVelocityRotatingMovementComponent>(0x0460, true); // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCameraComponent>                  _offCamera                                                     = new ExternalOffset<UCameraComponent>(0x0468, true);          // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offCollision                                                  = new ExternalOffset<UStaticMeshComponent>(0x0470, true);      // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleInventoryComponent>      _offSQVehicleInventory                                         = new ExternalOffset<USQVehicleInventoryComponent>(0x0478, true); // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x0480, true);           // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTimeline_0_lerp_5AE4C41E4F3FA034DCBE06B546C60B0F           = new ExternalOffset<float>(0x0488);                           // 0x0488(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<ETimelineDirection>>   _offTimeline_0__Direction_5AE4C41E4F3FA034DCBE06B546C60B0F     = new ExternalOffset<TEnumAsByte<ETimelineDirection>>(0x048C, false); // 0x048C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTimelineComponent>                _offTimeline_1                                                 = new ExternalOffset<UTimelineComponent>(0x0490, true);        // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxRotationSpeed                                           = new ExternalOffset<float>(0x0498);                           // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRotationSpeedMultiplier                                    = new ExternalOffset<float>(0x049C);                           // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offElevationSpeedMultiplier                                   = new ExternalOffset<float>(0x04A0);                           // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxElevationSpeed                                          = new ExternalOffset<float>(0x04A4);                           // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UCameraComponent                                   FirstPersonCamera                                              => _offFirstPersonCamera.GetValue();
	public USQRotationMovementAudioComponent                  SQRotationMovementAudio                                        => _offSQRotationMovementAudio.GetValue();
	public USceneComponent                                    GunAttachPoint                                                 => _offGunAttachPoint.GetValue();
	public UStaticMeshComponent                               crows_turret_static_mesh                                       => _offcrows_turret_static_mesh.GetValue();
	public USQVelocityRotatingMovementComponent               PitchMovement                                                  => _offPitchMovement.GetValue();
	public USQVelocityRotatingMovementComponent               YawMovement                                                    => _offYawMovement.GetValue();
	public UCameraComponent                                   Camera                                                         => _offCamera.GetValue();
	public UStaticMeshComponent                               Collision                                                      => _offCollision.GetValue();
	public USQVehicleInventoryComponent                       SQVehicleInventory                                             => _offSQVehicleInventory.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	public float                                              Timeline_0_lerp_5AE4C41E4F3FA034DCBE06B546C60B0F               => _offTimeline_0_lerp_5AE4C41E4F3FA034DCBE06B546C60B0F.GetValue();
	public TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_5AE4C41E4F3FA034DCBE06B546C60B0F         => _offTimeline_0__Direction_5AE4C41E4F3FA034DCBE06B546C60B0F.GetValue();
	public UTimelineComponent                                 Timeline_1                                                     => _offTimeline_1.GetValue();
	public float                                              MaxRotationSpeed                                               => _offMaxRotationSpeed.GetValue();
	public float                                              RotationSpeedMultiplier                                        => _offRotationSpeedMultiplier.GetValue();
	public float                                              ElevationSpeedMultiplier                                       => _offElevationSpeedMultiplier.GetValue();
	public float                                              MaxElevationSpeed                                              => _offMaxElevationSpeed.GetValue();
	#endregion


}


}