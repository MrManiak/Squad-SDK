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

// BlueprintGeneratedClass BP_minsk.BP_minsk_C
// 0x0090 (0x0AB0 - 0x0A20)
public class ABP_minsk_C : ASQWheeledVehicle
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0A20, false); // 0x0A20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBPComponent_RadialModel_C>        _offVehicleRadial                                              = new ExternalOffset<UBPComponent_RadialModel_C>(0x0A28, true); // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleWheel>                   _offFront_Wheel                                                = new ExternalOffset<USQVehicleWheel>(0x0A30, true);           // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleWheel>                   _offRear_Wheel                                                 = new ExternalOffset<USQVehicleWheel>(0x0A38, true);           // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offDecoration                                                 = new ExternalOffset<UStaticMeshComponent>(0x0A40, true);      // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleEngine>                  _offEngineComponent                                            = new ExternalOffset<USQVehicleEngine>(0x0A48, true);          // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCameraComponent>                  _offDriverCamera                                               = new ExternalOffset<UCameraComponent>(0x0A50, true);          // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USpringArmComponent>               _offDriver_SpringArm                                           = new ExternalOffset<USpringArmComponent>(0x0A58, true);       // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleResourceWeaponInventoryComponent> _offSQVehicleResourceWeaponInventory                           = new ExternalOffset<USQVehicleResourceWeaponInventoryComponent>(0x0A60, true); // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offCollisionMesh                                              = new ExternalOffset<UStaticMeshComponent>(0x0A68, true);      // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapIconComponent>               _offSQMapIcon                                                  = new ExternalOffset<USQMapIconComponent>(0x0A70, true);       // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCameraComponent>                  _offExternalCamera                                             = new ExternalOffset<UCameraComponent>(0x0A78, true);          // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USpringArmComponent>               _offSpringArm                                                  = new ExternalOffset<USpringArmComponent>(0x0A80, true);       // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleBurningComponent>        _offSQVehicleBurning                                           = new ExternalOffset<USQVehicleBurningComponent>(0x0A88, true); // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint1                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0A90, true); // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint                                         = new ExternalOffset<USQVehicleExitPointComponent>(0x0A98, true); // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offWheelDestroyedSound                                        = new ExternalOffset<USoundBase>(0x0AA0, true);                // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offWheelDestroyedEffect                                       = new ExternalOffset<UParticleSystem>(0x0AA8, true);           // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBPComponent_RadialModel_C                         VehicleRadial                                                  => _offVehicleRadial.GetValue();
	public USQVehicleWheel                                    Front_Wheel                                                    => _offFront_Wheel.GetValue();
	public USQVehicleWheel                                    Rear_Wheel                                                     => _offRear_Wheel.GetValue();
	public UStaticMeshComponent                               Decoration                                                     => _offDecoration.GetValue();
	public USQVehicleEngine                                   EngineComponent                                                => _offEngineComponent.GetValue();
	public UCameraComponent                                   DriverCamera                                                   => _offDriverCamera.GetValue();
	public USpringArmComponent                                Driver_SpringArm                                               => _offDriver_SpringArm.GetValue();
	public USQVehicleResourceWeaponInventoryComponent         SQVehicleResourceWeaponInventory                               => _offSQVehicleResourceWeaponInventory.GetValue();
	public UStaticMeshComponent                               CollisionMesh                                                  => _offCollisionMesh.GetValue();
	public USQMapIconComponent                                SQMapIcon                                                      => _offSQMapIcon.GetValue();
	public UCameraComponent                                   ExternalCamera                                                 => _offExternalCamera.GetValue();
	public USpringArmComponent                                SpringArm                                                      => _offSpringArm.GetValue();
	public USQVehicleBurningComponent                         SQVehicleBurning                                               => _offSQVehicleBurning.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint1                                            => _offSQVehicleExitPoint1.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint                                             => _offSQVehicleExitPoint.GetValue();
	public USoundBase                                         WheelDestroyedSound                                            => _offWheelDestroyedSound.GetValue();
	public UParticleSystem                                    WheelDestroyedEffect                                           => _offWheelDestroyedEffect.GetValue();
	#endregion


}


}