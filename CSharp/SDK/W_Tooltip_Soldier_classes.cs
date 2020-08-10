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

// WidgetBlueprintGeneratedClass W_Tooltip_Soldier.W_Tooltip_Soldier_C
// 0x00C8 (0x02A8 - 0x01E0)
public class UW_Tooltip_Soldier_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_Main                                                = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCommanderStar                                              = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offFT_Text                                                    = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offKit_Image                                                  = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offPlayerName_Text                                            = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRank                                                       = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSquadID_SizeBox                                            = new ExternalOffset<USizeBox>(0x0268, true);                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offSquadID_Text                                               = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSquadLeaderBG                                              = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FSQSoldierInfo>                    _offSoldier_Info                                               = new ExternalOffset<FSQSoldierInfo>(0x0280, false);           // 0x0280(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_Main                                                    => _offBorder_Main.GetValue();
	public UImage                                             CommanderStar                                                  => _offCommanderStar.GetValue();
	public UTextBlock                                         FT_Text                                                        => _offFT_Text.GetValue();
	public UImage                                             Kit_Image                                                      => _offKit_Image.GetValue();
	public UTextBlock                                         PlayerName_Text                                                => _offPlayerName_Text.GetValue();
	public UImage                                             Rank                                                           => _offRank.GetValue();
	public USizeBox                                           SquadID_SizeBox                                                => _offSquadID_SizeBox.GetValue();
	public UTextBlock                                         SquadID_Text                                                   => _offSquadID_Text.GetValue();
	public UImage                                             SquadLeaderBG                                                  => _offSquadLeaderBG.GetValue();
	public FSQSoldierInfo                                     Soldier_Info                                                   => _offSoldier_Info.GetValue();
	#endregion


}


}