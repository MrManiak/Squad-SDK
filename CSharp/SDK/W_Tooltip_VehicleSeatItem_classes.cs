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

// WidgetBlueprintGeneratedClass W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C
// 0x00F4 (0x02D4 - 0x01E0)
public class UW_Tooltip_VehicleSeatItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_Main                                                = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCommanderStar                                              = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offFT_Text                                                    = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offKit_Image                                                  = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offPlayerName_Text                                            = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRank                                                       = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSquadID_BG                                                 = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSquadID_SizeBox                                            = new ExternalOffset<USizeBox>(0x0270, true);                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offSquadID_Text                                               = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offPC                                                         = new ExternalOffset<ASQPlayerController>(0x0280, true);       // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapWidgetVehicle>               _offVehicle_Widget                                             = new ExternalOffset<USQMapWidgetVehicle>(0x0288, true);       // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FSQVehicleOccupantInfo>            _offOccupant_Info                                              = new ExternalOffset<FSQVehicleOccupantInfo>(0x0290, false);   // 0x0290(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Self_Team                                               = new ExternalOffset<byte/*(bool)*/>(0x02C8);                  // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offMy_Seat_ID                                                 = new ExternalOffset<int>(0x02CC);                             // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offSeat_Index                                                 = new ExternalOffset<int>(0x02D0);                             // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_Main                                                    => _offBorder_Main.GetValue();
	public UImage                                             CommanderStar                                                  => _offCommanderStar.GetValue();
	public UTextBlock                                         FT_Text                                                        => _offFT_Text.GetValue();
	public UImage                                             Kit_Image                                                      => _offKit_Image.GetValue();
	public UTextBlock                                         PlayerName_Text                                                => _offPlayerName_Text.GetValue();
	public UImage                                             Rank                                                           => _offRank.GetValue();
	public UImage                                             SquadID_BG                                                     => _offSquadID_BG.GetValue();
	public USizeBox                                           SquadID_SizeBox                                                => _offSquadID_SizeBox.GetValue();
	public UTextBlock                                         SquadID_Text                                                   => _offSquadID_Text.GetValue();
	public ASQPlayerController                                PC                                                             => _offPC.GetValue();
	public USQMapWidgetVehicle                                Vehicle_Widget                                                 => _offVehicle_Widget.GetValue();
	public FSQVehicleOccupantInfo                             Occupant_Info                                                  => _offOccupant_Info.GetValue();
	public byte/*(bool)*/                                     Is_Self_Team                                                   => _offIs_Self_Team.GetValue();
	public int                                                My_Seat_ID                                                     => _offMy_Seat_ID.GetValue();
	public int                                                Seat_Index                                                     => _offSeat_Index.GetValue();
	#endregion


}


}