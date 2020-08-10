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

// WidgetBlueprintGeneratedClass W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C
// 0x009F (0x0348 - 0x02A9)
public class UW_InteractableList_VehicleBay_C : UW_InteractableWidgetList_Master_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02B0, false); // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFade                                                       = new ExternalOffset<UWidgetAnimation>(0x02B8, true);          // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offInteractList                                               = new ExternalOffset<UVerticalBox>(0x02C0, true);              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offObjectName                                                 = new ExternalOffset<UTextBlock>(0x02C8, true);                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offQueue                                                      = new ExternalOffset<UHorizontalBox>(0x02D0, true);            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_VehicleName                                             = new ExternalOffset<UTextBlock>(0x02D8, true);                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offInteract_Item_Class                                        = new ExternalOffset<UClass>(0x02E0, true);                    // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offFade_Timer_1                                               = new ExternalOffset<FTimerHandle>(0x02E8, false);             // 0x02E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offOpening_1                                                  = new ExternalOffset<byte/*(bool)*/>(0x02F0);                  // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FSQUsableData>                     _offRepair_Data                                                = new ExternalOffset<FSQUsableData>(0x02F8, false);            // 0x02F8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<ABP_VehicleBay_C>                  _offVehicle_Bay                                                = new ExternalOffset<ABP_VehicleBay_C>(0x0338, true);          // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_Timer                                                   = new ExternalOffset<UMaterialInstanceDynamic>(0x0340, true);  // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Fade                                                           => _offFade.GetValue();
	public UVerticalBox                                       InteractList                                                   => _offInteractList.GetValue();
	public UTextBlock                                         ObjectName                                                     => _offObjectName.GetValue();
	public UHorizontalBox                                     Queue                                                          => _offQueue.GetValue();
	public UTextBlock                                         TB_VehicleName                                                 => _offTB_VehicleName.GetValue();
	public UClass                                             Interact_Item_Class                                            => _offInteract_Item_Class.GetValue();
	public FTimerHandle                                       Fade_Timer_1                                                   => _offFade_Timer_1.GetValue();
	public byte/*(bool)*/                                     Opening_1                                                      => _offOpening_1.GetValue();
	public FSQUsableData                                      Repair_Data                                                    => _offRepair_Data.GetValue();
	public ABP_VehicleBay_C                                   Vehicle_Bay                                                    => _offVehicle_Bay.GetValue();
	public UMaterialInstanceDynamic                           MI_Timer                                                       => _offMI_Timer.GetValue();
	#endregion


}


}