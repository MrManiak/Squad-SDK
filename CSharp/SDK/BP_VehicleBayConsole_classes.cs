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

// BlueprintGeneratedClass BP_VehicleBayConsole.BP_VehicleBayConsole_C
// 0x0090 (0x02C8 - 0x0238)
public class ABP_VehicleBayConsole_C : AActor
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh                                                 = new ExternalOffset<UStaticMeshComponent>(0x0250, true);      // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBoxComponent>                     _offInteractBox                                                = new ExternalOffset<UBoxComponent>(0x0258, true);             // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x0260, true);           // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FSQUsableData>                     _offUsable_Data                                                = new ExternalOffset<FSQUsableData>(0x0268, false);            // 0x0268(0x0040) (Edit, BlueprintVisible)
	private ExternalOffset<int>                               _offTeam                                                       = new ExternalOffset<int>(0x02A8);                             // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ABP_VehicleBay_C>                  _offVehicle_Bay                                                = new ExternalOffset<ABP_VehicleBay_C>(0x02B0, true);          // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offSquad_Leader_Only                                          = new ExternalOffset<byte/*(bool)*/>(0x02B8);                  // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UClass>                            _offRadial                                                     = new ExternalOffset<UClass>(0x02C0, true);                    // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UStaticMeshComponent                               StaticMesh                                                     => _offStaticMesh.GetValue();
	public UBoxComponent                                      InteractBox                                                    => _offInteractBox.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	public FSQUsableData                                      Usable_Data                                                    => _offUsable_Data.GetValue();
	public int                                                Team                                                           => _offTeam.GetValue();
	public ABP_VehicleBay_C                                   Vehicle_Bay                                                    => _offVehicle_Bay.GetValue();
	public byte/*(bool)*/                                     Squad_Leader_Only                                              => _offSquad_Leader_Only.GetValue();
	public UClass                                             Radial                                                         => _offRadial.GetValue();
	#endregion


}


}