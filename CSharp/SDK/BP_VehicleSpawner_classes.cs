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

// BlueprintGeneratedClass BP_VehicleSpawner.BP_VehicleSpawner_C
// 0x0030 (0x02A0 - 0x0270)
public class ABP_VehicleSpawner_C : ASQVehicleSpawner
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0270, false); // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USkeletalMeshComponent>            _offPreviewMesh                                                = new ExternalOffset<USkeletalMeshComponent>(0x0278, true);    // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UArrowComponent>                   _offArrow                                                      = new ExternalOffset<UArrowComponent>(0x0280, true);           // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x0288, true);           // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offUseAutoAlign                                               = new ExternalOffset<byte/*(bool)*/>(0x0290);                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offGround_Vic_Height                                          = new ExternalOffset<float>(0x0294);                           // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offtrace_distance                                             = new ExternalOffset<float>(0x0298);                           // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offHelo_Height                                                = new ExternalOffset<float>(0x029C);                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USkeletalMeshComponent                             PreviewMesh                                                    => _offPreviewMesh.GetValue();
	public UArrowComponent                                    Arrow                                                          => _offArrow.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	public byte/*(bool)*/                                     UseAutoAlign                                                   => _offUseAutoAlign.GetValue();
	public float                                              Ground_Vic_Height                                              => _offGround_Vic_Height.GetValue();
	public float                                              trace_distance                                                 => _offtrace_distance.GetValue();
	public float                                              Helo_Height                                                    => _offHelo_Height.GetValue();
	#endregion


}


}