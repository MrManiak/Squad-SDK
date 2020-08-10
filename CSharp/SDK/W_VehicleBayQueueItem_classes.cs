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

// WidgetBlueprintGeneratedClass W_VehicleBayQueueItem.W_VehicleBayQueueItem_C
// 0x00A4 (0x0284 - 0x01E0)
public class UW_VehicleBayQueueItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder                                                     = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_Vehicle                                            = new ExternalOffset<USizeBox>(0x0248, true);                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Time                                                    = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTimer                                                      = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Active                                                  = new ExternalOffset<byte/*(bool)*/>(0x0260);                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ABP_VehicleBay_C>                  _offVehicle_Bay                                                = new ExternalOffset<ABP_VehicleBay_C>(0x0268, true);          // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_Timer                                                   = new ExternalOffset<UMaterialInstanceDynamic>(0x0270, true);  // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadial_ActionModel_SpawnVehicle_C> _offSpawn_Action                                               = new ExternalOffset<URadial_ActionModel_SpawnVehicle_C>(0x0278, true); // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x0280);                           // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border                                                         => _offBorder.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public USizeBox                                           SizeBox_Vehicle                                                => _offSizeBox_Vehicle.GetValue();
	public UTextBlock                                         TB_Time                                                        => _offTB_Time.GetValue();
	public UImage                                             Timer                                                          => _offTimer.GetValue();
	public byte/*(bool)*/                                     Is_Active                                                      => _offIs_Active.GetValue();
	public ABP_VehicleBay_C                                   Vehicle_Bay                                                    => _offVehicle_Bay.GetValue();
	public UMaterialInstanceDynamic                           MI_Timer                                                       => _offMI_Timer.GetValue();
	public URadial_ActionModel_SpawnVehicle_C                 Spawn_Action                                                   => _offSpawn_Action.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	#endregion


}


}