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

// BlueprintGeneratedClass BP_VehicleBay.BP_VehicleBay_C
// 0x00D9 (0x04A9 - 0x03D0)
public class ABP_VehicleBay_C : ABP_Deployable_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x03D0, false); // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USceneComponent>                   _offSoundLocation                                              = new ExternalOffset<USceneComponent>(0x03D8, true);           // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UChildActorComponent>              _offConsole                                                    = new ExternalOffset<UChildActorComponent>(0x03E0, true);      // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPreview_Vehicle_Mesh                                       = new ExternalOffset<UStaticMeshComponent>(0x03E8, true);      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapIconComponent>               _offSQMapIcon                                                  = new ExternalOffset<USQMapIconComponent>(0x03F0, true);       // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleDepotComponent>          _offSQVehicleDepotRepair                                       = new ExternalOffset<USQVehicleDepotComponent>(0x03F8, true);  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBoxComponent>                     _offRepair_rearm_radius                                        = new ExternalOffset<UBoxComponent>(0x0400, true);             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBoxComponent>                     _offShovelZone                                                 = new ExternalOffset<UBoxComponent>(0x0408, true);             // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQForwardBase>                    _offMy_FOB                                                     = new ExternalOffset<ASQForwardBase>(0x0410, true);            // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offVehicle_Radial                                             = new ExternalOffset<UClass>(0x0418, true);                    // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMax_Vehicles                                               = new ExternalOffset<int>(0x0420);                             // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMax_Queue_Limit                                            = new ExternalOffset<int>(0x0424);                             // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offSquad_Leader_Only                                          = new ExternalOffset<byte/*(bool)*/>(0x0428);                  // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offLast_Build_Start_Time                                      = new ExternalOffset<float>(0x042C);                           // 0x042C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UClass>>                    _offConstruction_Queue                                         = new ExternalOffset<TArray<UClass>>(0x0430, false);           // 0x0430(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMID_Preview                                                = new ExternalOffset<UMaterialInstanceDynamic>(0x0440, true);  // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInterface>                _offPreview_Material                                           = new ExternalOffset<UMaterialInterface>(0x0448, true);        // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offSFX_Obstruction                                            = new ExternalOffset<USoundBase>(0x0450, true);                // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offSFX_BuildingStarted                                        = new ExternalOffset<USoundBase>(0x0458, true);                // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offSFX_BuildingComplete                                       = new ExternalOffset<USoundBase>(0x0460, true);                // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offSFX_QueueUpdated                                           = new ExternalOffset<USoundBase>(0x0468, true);                // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offSFX_QueueFull                                              = new ExternalOffset<USoundBase>(0x0470, true);                // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offSFX_InsufficientFunds                                      = new ExternalOffset<USoundBase>(0x0478, true);                // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offQueue_Updated                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0480, false); // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offRequire_FOB                                                = new ExternalOffset<byte/*(bool)*/>(0x0490);                  // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<TArray<ASQVehicle>>                _offCurrent_Vehicles                                           = new ExternalOffset<TArray<ASQVehicle>>(0x0498, false);       // 0x0498(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offInstant_Spawn_Test                                         = new ExternalOffset<byte/*(bool)*/>(0x04A8);                  // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USceneComponent                                    SoundLocation                                                  => _offSoundLocation.GetValue();
	public UChildActorComponent                               Console                                                        => _offConsole.GetValue();
	public UStaticMeshComponent                               Preview_Vehicle_Mesh                                           => _offPreview_Vehicle_Mesh.GetValue();
	public USQMapIconComponent                                SQMapIcon                                                      => _offSQMapIcon.GetValue();
	public USQVehicleDepotComponent                           SQVehicleDepotRepair                                           => _offSQVehicleDepotRepair.GetValue();
	public UBoxComponent                                      Repair_rearm_radius                                            => _offRepair_rearm_radius.GetValue();
	public UBoxComponent                                      ShovelZone                                                     => _offShovelZone.GetValue();
	public ASQForwardBase                                     My_FOB                                                         => _offMy_FOB.GetValue();
	public UClass                                             Vehicle_Radial                                                 => _offVehicle_Radial.GetValue();
	public int                                                Max_Vehicles                                                   => _offMax_Vehicles.GetValue();
	public int                                                Max_Queue_Limit                                                => _offMax_Queue_Limit.GetValue();
	public byte/*(bool)*/                                     Squad_Leader_Only                                              => _offSquad_Leader_Only.GetValue();
	public float                                              Last_Build_Start_Time                                          => _offLast_Build_Start_Time.GetValue();
	public TArray<UClass>                                     Construction_Queue                                             => _offConstruction_Queue.GetValue();
	public UMaterialInstanceDynamic                           MID_Preview                                                    => _offMID_Preview.GetValue();
	public UMaterialInterface                                 Preview_Material                                               => _offPreview_Material.GetValue();
	public USoundBase                                         SFX_Obstruction                                                => _offSFX_Obstruction.GetValue();
	public USoundBase                                         SFX_BuildingStarted                                            => _offSFX_BuildingStarted.GetValue();
	public USoundBase                                         SFX_BuildingComplete                                           => _offSFX_BuildingComplete.GetValue();
	public USoundBase                                         SFX_QueueUpdated                                               => _offSFX_QueueUpdated.GetValue();
	public USoundBase                                         SFX_QueueFull                                                  => _offSFX_QueueFull.GetValue();
	public USoundBase                                         SFX_InsufficientFunds                                          => _offSFX_InsufficientFunds.GetValue();
	public FScriptMulticastDelegate                           Queue_Updated                                                  => _offQueue_Updated.GetValue();
	public byte/*(bool)*/                                     Require_FOB                                                    => _offRequire_FOB.GetValue();
	public TArray<ASQVehicle>                                 Current_Vehicles                                               => _offCurrent_Vehicles.GetValue();
	public byte/*(bool)*/                                     Instant_Spawn_Test                                             => _offInstant_Spawn_Test.GetValue();
	#endregion


}


}