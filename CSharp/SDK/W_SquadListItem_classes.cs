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

// WidgetBlueprintGeneratedClass W_SquadListItem.W_SquadListItem_C
// 0x00F0 (0x0398 - 0x02A8)
public class UW_SquadListItem_C : USQCoreStateSquadItemWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02B0, false); // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_5                                                   = new ExternalOffset<UBorder>(0x02B8, true);                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Squad                                               = new ExternalOffset<UButton>(0x02C0, true);                   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonCommander                                            = new ExternalOffset<UMainMenu_Button_C>(0x02C8, true);        // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonFull                                                 = new ExternalOffset<UMainMenu_Button_C>(0x02D0, true);        // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonJoin                                                 = new ExternalOffset<UMainMenu_Button_C>(0x02D8, true);        // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonLocked                                               = new ExternalOffset<UMainMenu_Button_C>(0x02E0, true);        // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_FireteamGroup_C>                _offFireteamA                                                  = new ExternalOffset<UW_FireteamGroup_C>(0x02E8, true);        // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_FireteamGroup_C>                _offFireteamB                                                  = new ExternalOffset<UW_FireteamGroup_C>(0x02F0, true);        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_FireteamGroup_C>                _offFireteamC                                                  = new ExternalOffset<UW_FireteamGroup_C>(0x02F8, true);        // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIconCO                                                     = new ExternalOffset<UImage>(0x0300, true);                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIconSquad                                                  = new ExternalOffset<UImage>(0x0308, true);                    // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offIconSwitch                                                 = new ExternalOffset<UWidgetSwitcher>(0x0310, true);           // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_Arrow                                                = new ExternalOffset<UImage>(0x0318, true);                    // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGridPanel>                        _offMembersGrid                                                = new ExternalOffset<UGridPanel>(0x0320, true);                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_Arrow                                              = new ExternalOffset<USizeBox>(0x0328, true);                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offSquadColorBorder                                           = new ExternalOffset<UBorder>(0x0330, true);                   // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offSwitch_JoinContext                                         = new ExternalOffset<UWidgetSwitcher>(0x0338, true);           // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offSwitch_SquadButton                                         = new ExternalOffset<UWidgetSwitcher>(0x0340, true);           // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offSwitch_SquadDisplayState                                   = new ExternalOffset<UWidgetSwitcher>(0x0348, true);           // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offSwitch_SquadType                                           = new ExternalOffset<UWidgetSwitcher>(0x0350, true);           // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Leader                                                  = new ExternalOffset<UTextBlock>(0x0358, true);                // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_MemberNum                                               = new ExternalOffset<UTextBlock>(0x0360, true);                // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_SquadID                                                 = new ExternalOffset<UTextBlock>(0x0368, true);                // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_SquadName                                               = new ExternalOffset<UTextBlock>(0x0370, true);                // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_TrashPlayer_C>                  _offW_Dismiss                                                  = new ExternalOffset<UW_TrashPlayer_C>(0x0378, true);          // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offHovered                                                    = new ExternalOffset<byte/*(bool)*/>(0x0380);                  // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offselected                                                   = new ExternalOffset<byte/*(bool)*/>(0x0381);                  // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Header                                                  = new ExternalOffset<byte/*(bool)*/>(0x0382);                  // 0x0382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Fireteams                                             = new ExternalOffset<byte/*(bool)*/>(0x0383);                  // 0x0383(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsAllMuted                                                = new ExternalOffset<byte/*(bool)*/>(0x0384);                  // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsShowWeapons                                             = new ExternalOffset<byte/*(bool)*/>(0x0385);                  // 0x0385(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbCommandSquad_TEMP                                         = new ExternalOffset<byte/*(bool)*/>(0x0386);                  // 0x0386(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbCommandVoteActive_TEMP                                    = new ExternalOffset<byte/*(bool)*/>(0x0387);                  // 0x0387(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbCanDemote_TEMP                                            = new ExternalOffset<byte/*(bool)*/>(0x0388);                  // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offVoteTimerDuration                                          = new ExternalOffset<float>(0x038C);                           // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offVote_Handle                                                = new ExternalOffset<FTimerHandle>(0x0390, false);             // 0x0390(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_5                                                       => _offBorder_5.GetValue();
	public UButton                                            Button_Squad                                                   => _offButton_Squad.GetValue();
	public UMainMenu_Button_C                                 ButtonCommander                                                => _offButtonCommander.GetValue();
	public UMainMenu_Button_C                                 ButtonFull                                                     => _offButtonFull.GetValue();
	public UMainMenu_Button_C                                 ButtonJoin                                                     => _offButtonJoin.GetValue();
	public UMainMenu_Button_C                                 ButtonLocked                                                   => _offButtonLocked.GetValue();
	public UW_FireteamGroup_C                                 FireteamA                                                      => _offFireteamA.GetValue();
	public UW_FireteamGroup_C                                 FireteamB                                                      => _offFireteamB.GetValue();
	public UW_FireteamGroup_C                                 FireteamC                                                      => _offFireteamC.GetValue();
	public UImage                                             IconCO                                                         => _offIconCO.GetValue();
	public UImage                                             IconSquad                                                      => _offIconSquad.GetValue();
	public UWidgetSwitcher                                    IconSwitch                                                     => _offIconSwitch.GetValue();
	public UImage                                             Image_Arrow                                                    => _offImage_Arrow.GetValue();
	public UGridPanel                                         MembersGrid                                                    => _offMembersGrid.GetValue();
	public USizeBox                                           SizeBox_Arrow                                                  => _offSizeBox_Arrow.GetValue();
	public UBorder                                            SquadColorBorder                                               => _offSquadColorBorder.GetValue();
	public UWidgetSwitcher                                    Switch_JoinContext                                             => _offSwitch_JoinContext.GetValue();
	public UWidgetSwitcher                                    Switch_SquadButton                                             => _offSwitch_SquadButton.GetValue();
	public UWidgetSwitcher                                    Switch_SquadDisplayState                                       => _offSwitch_SquadDisplayState.GetValue();
	public UWidgetSwitcher                                    Switch_SquadType                                               => _offSwitch_SquadType.GetValue();
	public UTextBlock                                         TB_Leader                                                      => _offTB_Leader.GetValue();
	public UTextBlock                                         TB_MemberNum                                                   => _offTB_MemberNum.GetValue();
	public UTextBlock                                         TB_SquadID                                                     => _offTB_SquadID.GetValue();
	public UTextBlock                                         TB_SquadName                                                   => _offTB_SquadName.GetValue();
	public UW_TrashPlayer_C                                   W_Dismiss                                                      => _offW_Dismiss.GetValue();
	public byte/*(bool)*/                                     Hovered                                                        => _offHovered.GetValue();
	public byte/*(bool)*/                                     selected                                                       => _offselected.GetValue();
	public byte/*(bool)*/                                     Is_Header                                                      => _offIs_Header.GetValue();
	public byte/*(bool)*/                                     Show_Fireteams                                                 => _offShow_Fireteams.GetValue();
	public byte/*(bool)*/                                     bIsAllMuted                                                    => _offbIsAllMuted.GetValue();
	public byte/*(bool)*/                                     bIsShowWeapons                                                 => _offbIsShowWeapons.GetValue();
	public byte/*(bool)*/                                     bCommandSquad_TEMP                                             => _offbCommandSquad_TEMP.GetValue();
	public byte/*(bool)*/                                     bCommandVoteActive_TEMP                                        => _offbCommandVoteActive_TEMP.GetValue();
	public byte/*(bool)*/                                     bCanDemote_TEMP                                                => _offbCanDemote_TEMP.GetValue();
	public float                                              VoteTimerDuration                                              => _offVoteTimerDuration.GetValue();
	public FTimerHandle                                       Vote_Handle                                                    => _offVote_Handle.GetValue();
	#endregion


}


}