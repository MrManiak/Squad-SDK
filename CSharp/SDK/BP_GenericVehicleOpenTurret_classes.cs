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

// BlueprintGeneratedClass BP_GenericVehicleOpenTurret.BP_GenericVehicleOpenTurret_C
// 0x0083 (0x045B - 0x03D8)
public class ABP_GenericVehicleOpenTurret_C : ASQVehicleTurretOpenTop
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x03E0, false); // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USQRotationMovementAudioComponent> _offSQRotationMovementAudio                                    = new ExternalOffset<USQRotationMovementAudioComponent>(0x03E8, true); // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offTurret_Collision                                           = new ExternalOffset<UStaticMeshComponent>(0x03F0, true);      // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offCamera1pPositionComponent                                  = new ExternalOffset<USceneComponent>(0x03F8, true);           // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offAdsCamera1pPositionComponent                               = new ExternalOffset<USceneComponent>(0x0400, true);           // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkeletalMeshComponent>            _offTurret_SkeletalMesh                                        = new ExternalOffset<USkeletalMeshComponent>(0x0408, true);    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCameraComponent>                  _offCamera1pComponent                                          = new ExternalOffset<UCameraComponent>(0x0410, true);          // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offGunMountComponent                                          = new ExternalOffset<USceneComponent>(0x0418, true);           // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleInventoryComponent>      _offSQVehicleInventory                                         = new ExternalOffset<USQVehicleInventoryComponent>(0x0420, true); // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZoom_Interpolate_Alpha_946F826C4828AA1170ED87A663F2BEA9    = new ExternalOffset<float>(0x0428);                           // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<ETimelineDirection>>   _offZoom_Interpolate__Direction_946F826C4828AA1170ED87A663F2BEA9 = new ExternalOffset<TEnumAsByte<ETimelineDirection>>(0x042C, false); // 0x042C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTimelineComponent>                _offZoom_Interpolate                                           = new ExternalOffset<UTimelineComponent>(0x0430, true);        // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRotationSpeedMultiplier                                    = new ExternalOffset<float>(0x0438);                           // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxRotationSpeed                                           = new ExternalOffset<float>(0x043C);                           // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offElevationSpeedMultiplier                                   = new ExternalOffset<float>(0x0440);                           // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxElevationSpeed                                          = new ExternalOffset<float>(0x0444);                           // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offResetOrientationPitch                                      = new ExternalOffset<byte/*(bool)*/>(0x0448);                  // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<ASQPlayerController>               _offCurrentPlayerController                                    = new ExternalOffset<ASQPlayerController>(0x0450, true);       // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offResetOrientationYaw                                        = new ExternalOffset<byte/*(bool)*/>(0x0458);                  // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Show_Zoom_Tutorial                                     = new ExternalOffset<byte/*(bool)*/>(0x0459);                  // 0x0459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Show_Zoom_While_ADS_Tutorial                           = new ExternalOffset<byte/*(bool)*/>(0x045A);                  // 0x045A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USQRotationMovementAudioComponent                  SQRotationMovementAudio                                        => _offSQRotationMovementAudio.GetValue();
	public UStaticMeshComponent                               Turret_Collision                                               => _offTurret_Collision.GetValue();
	public USceneComponent                                    Camera1pPositionComponent                                      => _offCamera1pPositionComponent.GetValue();
	public USceneComponent                                    AdsCamera1pPositionComponent                                   => _offAdsCamera1pPositionComponent.GetValue();
	public USkeletalMeshComponent                             Turret_SkeletalMesh                                            => _offTurret_SkeletalMesh.GetValue();
	public UCameraComponent                                   Camera1pComponent                                              => _offCamera1pComponent.GetValue();
	public USceneComponent                                    GunMountComponent                                              => _offGunMountComponent.GetValue();
	public USQVehicleInventoryComponent                       SQVehicleInventory                                             => _offSQVehicleInventory.GetValue();
	public float                                              Zoom_Interpolate_Alpha_946F826C4828AA1170ED87A663F2BEA9        => _offZoom_Interpolate_Alpha_946F826C4828AA1170ED87A663F2BEA9.GetValue();
	public TEnumAsByte<ETimelineDirection>                    Zoom_Interpolate__Direction_946F826C4828AA1170ED87A663F2BEA9   => _offZoom_Interpolate__Direction_946F826C4828AA1170ED87A663F2BEA9.GetValue();
	public UTimelineComponent                                 Zoom_Interpolate                                               => _offZoom_Interpolate.GetValue();
	public float                                              RotationSpeedMultiplier                                        => _offRotationSpeedMultiplier.GetValue();
	public float                                              MaxRotationSpeed                                               => _offMaxRotationSpeed.GetValue();
	public float                                              ElevationSpeedMultiplier                                       => _offElevationSpeedMultiplier.GetValue();
	public float                                              MaxElevationSpeed                                              => _offMaxElevationSpeed.GetValue();
	public byte/*(bool)*/                                     ResetOrientationPitch                                          => _offResetOrientationPitch.GetValue();
	public ASQPlayerController                                CurrentPlayerController                                        => _offCurrentPlayerController.GetValue();
	public byte/*(bool)*/                                     ResetOrientationYaw                                            => _offResetOrientationYaw.GetValue();
	public byte/*(bool)*/                                     Can_Show_Zoom_Tutorial                                         => _offCan_Show_Zoom_Tutorial.GetValue();
	public byte/*(bool)*/                                     Can_Show_Zoom_While_ADS_Tutorial                               => _offCan_Show_Zoom_While_ADS_Tutorial.GetValue();
	#endregion


}


}