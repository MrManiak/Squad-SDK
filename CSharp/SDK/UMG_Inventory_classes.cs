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

// WidgetBlueprintGeneratedClass UMG_Inventory.UMG_Inventory_C
// 0x0060 (0x02D8 - 0x0278)
public class UUMG_Inventory_C : USQInventoryWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0278, false); // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UUMG_InventoryGroup_C>             _offUMG_InventoryGroup                                         = new ExternalOffset<UUMG_InventoryGroup_C>(0x0280, true);     // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryGroup_C>             _offUMG_InventoryGroup_C_1                                     = new ExternalOffset<UUMG_InventoryGroup_C>(0x0288, true);     // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryGroup_C>             _offUMG_InventoryGroup_C_2                                     = new ExternalOffset<UUMG_InventoryGroup_C>(0x0290, true);     // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryGroup_C>             _offUMG_InventoryGroup_C_3                                     = new ExternalOffset<UUMG_InventoryGroup_C>(0x0298, true);     // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryGroup_C>             _offUMG_InventoryGroup_C_4                                     = new ExternalOffset<UUMG_InventoryGroup_C>(0x02A0, true);     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryGroup_C>             _offUMG_InventoryGroup_C_5                                     = new ExternalOffset<UUMG_InventoryGroup_C>(0x02A8, true);     // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryGroup_C>             _offUMG_InventoryGroup_C_6                                     = new ExternalOffset<UUMG_InventoryGroup_C>(0x02B0, true);     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryGroup_C>             _offUMG_InventoryGroup_C_7                                     = new ExternalOffset<UUMG_InventoryGroup_C>(0x02B8, true);     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryGroup_C>             _offUMG_InventoryGroup_C_8                                     = new ExternalOffset<UUMG_InventoryGroup_C>(0x02C0, true);     // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_RearmCostInventory_C>         _offUMG_RearmCostInventory_3                                   = new ExternalOffset<UUMG_RearmCostInventory_C>(0x02C8, true); // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offVerticalBox_1                                              = new ExternalOffset<UVerticalBox>(0x02D0, true);              // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UUMG_InventoryGroup_C                              UMG_InventoryGroup                                             => _offUMG_InventoryGroup.GetValue();
	public UUMG_InventoryGroup_C                              UMG_InventoryGroup_C_1                                         => _offUMG_InventoryGroup_C_1.GetValue();
	public UUMG_InventoryGroup_C                              UMG_InventoryGroup_C_2                                         => _offUMG_InventoryGroup_C_2.GetValue();
	public UUMG_InventoryGroup_C                              UMG_InventoryGroup_C_3                                         => _offUMG_InventoryGroup_C_3.GetValue();
	public UUMG_InventoryGroup_C                              UMG_InventoryGroup_C_4                                         => _offUMG_InventoryGroup_C_4.GetValue();
	public UUMG_InventoryGroup_C                              UMG_InventoryGroup_C_5                                         => _offUMG_InventoryGroup_C_5.GetValue();
	public UUMG_InventoryGroup_C                              UMG_InventoryGroup_C_6                                         => _offUMG_InventoryGroup_C_6.GetValue();
	public UUMG_InventoryGroup_C                              UMG_InventoryGroup_C_7                                         => _offUMG_InventoryGroup_C_7.GetValue();
	public UUMG_InventoryGroup_C                              UMG_InventoryGroup_C_8                                         => _offUMG_InventoryGroup_C_8.GetValue();
	public UUMG_RearmCostInventory_C                          UMG_RearmCostInventory_3                                       => _offUMG_RearmCostInventory_3.GetValue();
	public UVerticalBox                                       VerticalBox_1                                                  => _offVerticalBox_1.GetValue();
	#endregion


}


}