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

// WidgetBlueprintGeneratedClass W_CommandVoteParent.W_CommandVoteParent_C
// 0x00A8 (0x02F0 - 0x0248)
public class UW_CommandVoteParent_C : USQCommanderVotingWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0250, false); // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_1                                                   = new ExternalOffset<UBorder>(0x0258, true);                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonCommander                                            = new ExternalOffset<UMainMenu_Button_C>(0x0260, true);        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offCommandVoteScrollBox                                       = new ExternalOffset<UScrollBox>(0x0268, true);                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGridPanel>                        _offGrid_Votee                                                 = new ExternalOffset<UGridPanel>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_CommandVote                                             = new ExternalOffset<UTextBlock>(0x0288, true);                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_TimerText                                               = new ExternalOffset<UTextBlock>(0x0290, true);                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offTimerBorder                                                = new ExternalOffset<UBorder>(0x0298, true);                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offTopPanel                                                   = new ExternalOffset<UVerticalBox>(0x02A0, true);              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offVote_Handle                                                = new ExternalOffset<FTimerHandle>(0x02A8, false);             // 0x02A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTimerDuration                                              = new ExternalOffset<float>(0x02B0);                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQCommanderState>                 _offCache_Commander_State                                      = new ExternalOffset<ASQCommanderState>(0x02B8, true);         // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02C0, true);       // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Vote                                                   = new ExternalOffset<byte/*(bool)*/>(0x02C8);                  // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ASQPlayerState>                    _offMy_PS                                                      = new ExternalOffset<ASQPlayerState>(0x02D0, true);            // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offCommander_Name                                             = new ExternalOffset<FText>(0x02D8, false);                    // 0x02D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_1                                                       => _offBorder_1.GetValue();
	public UMainMenu_Button_C                                 ButtonCommander                                                => _offButtonCommander.GetValue();
	public UScrollBox                                         CommandVoteScrollBox                                           => _offCommandVoteScrollBox.GetValue();
	public UGridPanel                                         Grid_Votee                                                     => _offGrid_Votee.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UTextBlock                                         TB_CommandVote                                                 => _offTB_CommandVote.GetValue();
	public UTextBlock                                         TB_TimerText                                                   => _offTB_TimerText.GetValue();
	public UBorder                                            TimerBorder                                                    => _offTimerBorder.GetValue();
	public UVerticalBox                                       TopPanel                                                       => _offTopPanel.GetValue();
	public FTimerHandle                                       Vote_Handle                                                    => _offVote_Handle.GetValue();
	public float                                              TimerDuration                                                  => _offTimerDuration.GetValue();
	public ASQCommanderState                                  Cache_Commander_State                                          => _offCache_Commander_State.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public byte/*(bool)*/                                     Can_Vote                                                       => _offCan_Vote.GetValue();
	public ASQPlayerState                                     My_PS                                                          => _offMy_PS.GetValue();
	public FText                                              Commander_Name                                                 => _offCommander_Name.GetValue();
	#endregion


}


}