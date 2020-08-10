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

// BlueprintGeneratedClass BP_EmplacedM2.BP_EmplacedM2_C
// 0x0044 (0x08C4 - 0x0880)
public class ABP_EmplacedM2_C : ASQDeployableVehicle
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0880, false); // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBoxComponent>                     _offBox                                                        = new ExternalOffset<UBoxComponent>(0x0888, true);             // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offCameraPosition                                             = new ExternalOffset<USceneComponent>(0x0890, true);           // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offADSCameraPosition                                          = new ExternalOffset<USceneComponent>(0x0898, true);           // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCameraComponent>                  _offCamera                                                     = new ExternalOffset<UCameraComponent>(0x08A0, true);          // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offGunMount                                                   = new ExternalOffset<USceneComponent>(0x08A8, true);           // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint1                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x08B0, true); // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleInventoryComponent>      _offNewVar_1                                                   = new ExternalOffset<USQVehicleInventoryComponent>(0x08B8, true); // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offNewVar_2                                                   = new ExternalOffset<float>(0x08C0);                           // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBoxComponent                                      Box                                                            => _offBox.GetValue();
	public USceneComponent                                    CameraPosition                                                 => _offCameraPosition.GetValue();
	public USceneComponent                                    ADSCameraPosition                                              => _offADSCameraPosition.GetValue();
	public UCameraComponent                                   Camera                                                         => _offCamera.GetValue();
	public USceneComponent                                    GunMount                                                       => _offGunMount.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint1                                            => _offSQVehicleExitPoint1.GetValue();
	public USQVehicleInventoryComponent                       NewVar_1                                                       => _offNewVar_1.GetValue();
	public float                                              NewVar_2                                                       => _offNewVar_2.GetValue();
	#endregion


}


}