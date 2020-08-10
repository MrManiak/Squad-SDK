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

// BlueprintGeneratedClass BP_M1A2.BP_M1A2_C
// 0x00C8 (0x0AD8 - 0x0A10)
public class ABP_M1A2_C : ASQTrackedVehicle
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0A10, false); // 0x0A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBPComponent_RadialModel_C>        _offVehicle_Radial                                             = new ExternalOffset<UBPComponent_RadialModel_C>(0x0A18, true); // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleResourceWeaponInventoryComponent> _offSQVehicleResourceWeaponInventory                           = new ExternalOffset<USQVehicleResourceWeaponInventoryComponent>(0x0A20, true); // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offCollisionSideskirtRight                                    = new ExternalOffset<UStaticMeshComponent>(0x0A28, true);      // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offCollisionSideskirtLeft                                     = new ExternalOffset<UStaticMeshComponent>(0x0A30, true);      // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offNoPenetrationBlock                                         = new ExternalOffset<UStaticMeshComponent>(0x0A38, true);      // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleTrack>                   _offTrackRightComponent                                        = new ExternalOffset<USQVehicleTrack>(0x0A40, true);           // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleTrack>                   _offTrackLeftComponent                                         = new ExternalOffset<USQVehicleTrack>(0x0A48, true);           // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleAmmoBox>                 _offAmmoRackComponent                                          = new ExternalOffset<USQVehicleAmmoBox>(0x0A50, true);         // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleEngine>                  _offEngineComponent                                            = new ExternalOffset<USQVehicleEngine>(0x0A58, true);          // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCameraComponent>                  _offDriverCamera                                               = new ExternalOffset<UCameraComponent>(0x0A60, true);          // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USpringArmComponent>               _offDriver_SpringArm                                           = new ExternalOffset<USpringArmComponent>(0x0A68, true);       // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh                                                 = new ExternalOffset<UStaticMeshComponent>(0x0A70, true);      // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offM1A2_CollisionMesh                                         = new ExternalOffset<UStaticMeshComponent>(0x0A78, true);      // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offScene                                                      = new ExternalOffset<USceneComponent>(0x0A80, true);           // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapIconComponent>               _offSQMapIcon                                                  = new ExternalOffset<USQMapIconComponent>(0x0A88, true);       // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCameraComponent>                  _offExternalCamera                                             = new ExternalOffset<UCameraComponent>(0x0A90, true);          // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleBurningComponent>        _offSQVehicleBurning                                           = new ExternalOffset<USQVehicleBurningComponent>(0x0A98, true); // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USpringArmComponent>               _offSpringArm                                                  = new ExternalOffset<USpringArmComponent>(0x0AA0, true);       // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint2                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0AA8, true); // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint1                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0AB0, true); // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint                                         = new ExternalOffset<USQVehicleExitPointComponent>(0x0AB8, true); // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offTrackMaterialRight                                         = new ExternalOffset<UMaterialInstanceDynamic>(0x0AC0, true);  // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offTrackMaterialLeft                                          = new ExternalOffset<UMaterialInstanceDynamic>(0x0AC8, true);  // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRightTrackUVOffset                                         = new ExternalOffset<float>(0x0AD0);                           // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offLeftTrackUVOffset                                          = new ExternalOffset<float>(0x0AD4);                           // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBPComponent_RadialModel_C                         Vehicle_Radial                                                 => _offVehicle_Radial.GetValue();
	public USQVehicleResourceWeaponInventoryComponent         SQVehicleResourceWeaponInventory                               => _offSQVehicleResourceWeaponInventory.GetValue();
	public UStaticMeshComponent                               CollisionSideskirtRight                                        => _offCollisionSideskirtRight.GetValue();
	public UStaticMeshComponent                               CollisionSideskirtLeft                                         => _offCollisionSideskirtLeft.GetValue();
	public UStaticMeshComponent                               NoPenetrationBlock                                             => _offNoPenetrationBlock.GetValue();
	public USQVehicleTrack                                    TrackRightComponent                                            => _offTrackRightComponent.GetValue();
	public USQVehicleTrack                                    TrackLeftComponent                                             => _offTrackLeftComponent.GetValue();
	public USQVehicleAmmoBox                                  AmmoRackComponent                                              => _offAmmoRackComponent.GetValue();
	public USQVehicleEngine                                   EngineComponent                                                => _offEngineComponent.GetValue();
	public UCameraComponent                                   DriverCamera                                                   => _offDriverCamera.GetValue();
	public USpringArmComponent                                Driver_SpringArm                                               => _offDriver_SpringArm.GetValue();
	public UStaticMeshComponent                               StaticMesh                                                     => _offStaticMesh.GetValue();
	public UStaticMeshComponent                               M1A2_CollisionMesh                                             => _offM1A2_CollisionMesh.GetValue();
	public USceneComponent                                    Scene                                                          => _offScene.GetValue();
	public USQMapIconComponent                                SQMapIcon                                                      => _offSQMapIcon.GetValue();
	public UCameraComponent                                   ExternalCamera                                                 => _offExternalCamera.GetValue();
	public USQVehicleBurningComponent                         SQVehicleBurning                                               => _offSQVehicleBurning.GetValue();
	public USpringArmComponent                                SpringArm                                                      => _offSpringArm.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint2                                            => _offSQVehicleExitPoint2.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint1                                            => _offSQVehicleExitPoint1.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint                                             => _offSQVehicleExitPoint.GetValue();
	public UMaterialInstanceDynamic                           TrackMaterialRight                                             => _offTrackMaterialRight.GetValue();
	public UMaterialInstanceDynamic                           TrackMaterialLeft                                              => _offTrackMaterialLeft.GetValue();
	public float                                              RightTrackUVOffset                                             => _offRightTrackUVOffset.GetValue();
	public float                                              LeftTrackUVOffset                                              => _offLeftTrackUVOffset.GetValue();
	#endregion


}


}