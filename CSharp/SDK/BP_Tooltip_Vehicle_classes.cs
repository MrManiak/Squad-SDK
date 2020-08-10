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

// WidgetBlueprintGeneratedClass BP_Tooltip_Vehicle.BP_Tooltip_Vehicle_C
// 0x00B0 (0x02F0 - 0x0240)
public class UBP_Tooltip_Vehicle_C : USQToolTipBaseWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0240, false); // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem                                    = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0248, true); // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_1                                = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0250, true); // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_2                                = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0258, true); // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_3                                = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0260, true); // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_4                                = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0268, true); // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_5                                = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0270, true); // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_6                                = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0278, true); // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_7                                = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0280, true); // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_8                                = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0288, true); // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_9                                = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0290, true); // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_10                               = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x0298, true); // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_11                               = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x02A0, true); // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_12                               = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x02A8, true); // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_13                               = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x02B0, true); // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_14                               = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x02B8, true); // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_15                               = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x02C0, true); // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_16                               = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x02C8, true); // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_17                               = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x02D0, true); // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_18                               = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x02D8, true); // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSeatListItem_C>        _offUMG_VehicleSeatListItem_C_19                               = new ExternalOffset<UUMG_VehicleSeatListItem_C>(0x02E0, true); // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offVerticalBox_Occupants                                      = new ExternalOffset<UVerticalBox>(0x02E8, true);              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem                                        => _offUMG_VehicleSeatListItem.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_1                                    => _offUMG_VehicleSeatListItem_C_1.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_2                                    => _offUMG_VehicleSeatListItem_C_2.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_3                                    => _offUMG_VehicleSeatListItem_C_3.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_4                                    => _offUMG_VehicleSeatListItem_C_4.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_5                                    => _offUMG_VehicleSeatListItem_C_5.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_6                                    => _offUMG_VehicleSeatListItem_C_6.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_7                                    => _offUMG_VehicleSeatListItem_C_7.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_8                                    => _offUMG_VehicleSeatListItem_C_8.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_9                                    => _offUMG_VehicleSeatListItem_C_9.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_10                                   => _offUMG_VehicleSeatListItem_C_10.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_11                                   => _offUMG_VehicleSeatListItem_C_11.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_12                                   => _offUMG_VehicleSeatListItem_C_12.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_13                                   => _offUMG_VehicleSeatListItem_C_13.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_14                                   => _offUMG_VehicleSeatListItem_C_14.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_15                                   => _offUMG_VehicleSeatListItem_C_15.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_16                                   => _offUMG_VehicleSeatListItem_C_16.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_17                                   => _offUMG_VehicleSeatListItem_C_17.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_18                                   => _offUMG_VehicleSeatListItem_C_18.GetValue();
	public UUMG_VehicleSeatListItem_C                         UMG_VehicleSeatListItem_C_19                                   => _offUMG_VehicleSeatListItem_C_19.GetValue();
	public UVerticalBox                                       VerticalBox_Occupants                                          => _offVerticalBox_Occupants.GetValue();
	#endregion


}


}