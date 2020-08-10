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

// WidgetBlueprintGeneratedClass W_BackpackRow.W_BackpackRow_C
// 0x0090 (0x0270 - 0x01E0)
public class UW_BackpackRow_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UGridPanel>                        _offGridPanel_1                                                = new ExternalOffset<UGridPanel>(0x0238, true);                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<ASQEquipableItem>>          _offItem_Array                                                 = new ExternalOffset<TArray<ASQEquipableItem>>(0x0240, false); // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Bottom                                                = new ExternalOffset<byte/*(bool)*/>(0x0250);                  // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Top                                                   = new ExternalOffset<byte/*(bool)*/>(0x0251);                  // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<UW_RoleDetails_C>                  _offRoleDetails                                                = new ExternalOffset<UW_RoleDetails_C>(0x0258, true);          // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<TArray<FSQInventoryData>>          _offData_Array                                                 = new ExternalOffset<TArray<FSQInventoryData>>(0x0260, false); // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UGridPanel                                         GridPanel_1                                                    => _offGridPanel_1.GetValue();
	public TArray<ASQEquipableItem>                           Item_Array                                                     => _offItem_Array.GetValue();
	public byte/*(bool)*/                                     Show_Bottom                                                    => _offShow_Bottom.GetValue();
	public byte/*(bool)*/                                     Show_Top                                                       => _offShow_Top.GetValue();
	public UW_RoleDetails_C                                   RoleDetails                                                    => _offRoleDetails.GetValue();
	public TArray<FSQInventoryData>                           Data_Array                                                     => _offData_Array.GetValue();
	#endregion


}


}