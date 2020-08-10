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

// WidgetBlueprintGeneratedClass W_Tooltip_Vehicle.W_Tooltip_Vehicle_C
// 0x00D0 (0x0310 - 0x0240)
public class UW_Tooltip_Vehicle_C : USQToolTipBaseWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0240, false); // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UVerticalBox>                      _offVerticalBox_2                                              = new ExternalOffset<UVerticalBox>(0x0248, true);              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem                                  = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x0250, true); // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_1                              = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x0258, true); // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_2                              = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x0260, true); // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_3                              = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x0268, true); // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_4                              = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x0270, true); // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_5                              = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x0278, true); // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_6                              = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x0280, true); // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_7                              = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x0288, true); // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_8                              = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x0290, true); // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_9                              = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x0298, true); // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_10                             = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x02A0, true); // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_11                             = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x02A8, true); // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_12                             = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x02B0, true); // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_13                             = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x02B8, true); // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_14                             = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x02C0, true); // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_15                             = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x02C8, true); // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_16                             = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x02D0, true); // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_17                             = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x02D8, true); // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_18                             = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x02E0, true); // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_VehicleSeatItem_C>      _offW_Tooltip_VehicleSeatItem_C_19                             = new ExternalOffset<UW_Tooltip_VehicleSeatItem_C>(0x02E8, true); // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USQMapWidgetVehicle>               _offVehicle_Widget                                             = new ExternalOffset<USQMapWidgetVehicle>(0x02F0, true);       // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<TArray<FSQVehicleOccupantInfo>>    _offOccupancy                                                  = new ExternalOffset<TArray<FSQVehicleOccupantInfo>>(0x02F8, false); // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Self_Team                                               = new ExternalOffset<byte/*(bool)*/>(0x0308);                  // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<int>                               _offMy_Seat_ID                                                 = new ExternalOffset<int>(0x030C);                             // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UVerticalBox                                       VerticalBox_2                                                  => _offVerticalBox_2.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem                                      => _offW_Tooltip_VehicleSeatItem.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_1                                  => _offW_Tooltip_VehicleSeatItem_C_1.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_2                                  => _offW_Tooltip_VehicleSeatItem_C_2.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_3                                  => _offW_Tooltip_VehicleSeatItem_C_3.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_4                                  => _offW_Tooltip_VehicleSeatItem_C_4.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_5                                  => _offW_Tooltip_VehicleSeatItem_C_5.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_6                                  => _offW_Tooltip_VehicleSeatItem_C_6.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_7                                  => _offW_Tooltip_VehicleSeatItem_C_7.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_8                                  => _offW_Tooltip_VehicleSeatItem_C_8.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_9                                  => _offW_Tooltip_VehicleSeatItem_C_9.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_10                                 => _offW_Tooltip_VehicleSeatItem_C_10.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_11                                 => _offW_Tooltip_VehicleSeatItem_C_11.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_12                                 => _offW_Tooltip_VehicleSeatItem_C_12.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_13                                 => _offW_Tooltip_VehicleSeatItem_C_13.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_14                                 => _offW_Tooltip_VehicleSeatItem_C_14.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_15                                 => _offW_Tooltip_VehicleSeatItem_C_15.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_16                                 => _offW_Tooltip_VehicleSeatItem_C_16.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_17                                 => _offW_Tooltip_VehicleSeatItem_C_17.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_18                                 => _offW_Tooltip_VehicleSeatItem_C_18.GetValue();
	public UW_Tooltip_VehicleSeatItem_C                       W_Tooltip_VehicleSeatItem_C_19                                 => _offW_Tooltip_VehicleSeatItem_C_19.GetValue();
	public USQMapWidgetVehicle                                Vehicle_Widget                                                 => _offVehicle_Widget.GetValue();
	public TArray<FSQVehicleOccupantInfo>                     Occupancy                                                      => _offOccupancy.GetValue();
	public byte/*(bool)*/                                     Is_Self_Team                                                   => _offIs_Self_Team.GetValue();
	public int                                                My_Seat_ID                                                     => _offMy_Seat_ID.GetValue();
	#endregion


}


}