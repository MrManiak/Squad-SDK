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

// WidgetBlueprintGeneratedClass W_MapVehicleListItem.W_MapVehicleListItem_C
// 0x00B9 (0x0299 - 0x01E0)
public class UW_MapVehicleListItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSize_Timer                                                 = new ExternalOffset<USizeBox>(0x0240, true);                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Delayed                                                 = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Name                                                    = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_TicketCost                                              = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Timer                                                   = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FS_VehicleListData>                _offVehicle_List_Data                                          = new ExternalOffset<FS_VehicleListData>(0x0268, false);       // 0x0268(0x0030) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offEnemy                                                      = new ExternalOffset<byte/*(bool)*/>(0x0298);                  // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public USizeBox                                           Size_Timer                                                     => _offSize_Timer.GetValue();
	public UTextBlock                                         TB_Delayed                                                     => _offTB_Delayed.GetValue();
	public UTextBlock                                         TB_Name                                                        => _offTB_Name.GetValue();
	public UTextBlock                                         TB_TicketCost                                                  => _offTB_TicketCost.GetValue();
	public UTextBlock                                         TB_Timer                                                       => _offTB_Timer.GetValue();
	public FS_VehicleListData                                 Vehicle_List_Data                                              => _offVehicle_List_Data.GetValue();
	public byte/*(bool)*/                                     Enemy                                                          => _offEnemy.GetValue();
	#endregion


}


}