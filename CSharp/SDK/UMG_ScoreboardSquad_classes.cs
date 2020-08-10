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

// WidgetBlueprintGeneratedClass UMG_ScoreboardSquad.UMG_ScoreboardSquad_C
// 0x0088 (0x0390 - 0x0308)
public class UUMG_ScoreboardSquad_C : USQScoreboardSquad
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0308, false); // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTextBlock>                        _offBPDeathsText                                               = new ExternalOffset<UTextBlock>(0x0310, true);                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offBPEndOfRoundHorizontalBox                                  = new ExternalOffset<UHorizontalBox>(0x0318, true);            // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPHealText                                                 = new ExternalOffset<UTextBlock>(0x0320, true);                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPIncapsText                                               = new ExternalOffset<UTextBlock>(0x0328, true);                // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPKillsText                                                = new ExternalOffset<UTextBlock>(0x0330, true);                // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USpacer>                           _offBPNotEndOfRoundSpacer                                      = new ExternalOffset<USpacer>(0x0338, true);                   // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPObjectiveText                                            = new ExternalOffset<UTextBlock>(0x0340, true);                // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGridPanel>                        _offBPPlayersGrid                                              = new ExternalOffset<UGridPanel>(0x0348, true);                // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPReviveText                                               = new ExternalOffset<UTextBlock>(0x0350, true);                // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPScoreText                                                = new ExternalOffset<UTextBlock>(0x0358, true);                // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPSquadColorImage                                          = new ExternalOffset<UImage>(0x0360, true);                    // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPSquadNameText                                            = new ExternalOffset<UTextBlock>(0x0368, true);                // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPSquadNumberText                                          = new ExternalOffset<UTextBlock>(0x0370, true);                // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPTalkingImage                                             = new ExternalOffset<UImage>(0x0378, true);                    // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPTeamworkText                                             = new ExternalOffset<UTextBlock>(0x0380, true);                // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0388, true);                    // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTextBlock                                         BPDeathsText                                                   => _offBPDeathsText.GetValue();
	public UHorizontalBox                                     BPEndOfRoundHorizontalBox                                      => _offBPEndOfRoundHorizontalBox.GetValue();
	public UTextBlock                                         BPHealText                                                     => _offBPHealText.GetValue();
	public UTextBlock                                         BPIncapsText                                                   => _offBPIncapsText.GetValue();
	public UTextBlock                                         BPKillsText                                                    => _offBPKillsText.GetValue();
	public USpacer                                            BPNotEndOfRoundSpacer                                          => _offBPNotEndOfRoundSpacer.GetValue();
	public UTextBlock                                         BPObjectiveText                                                => _offBPObjectiveText.GetValue();
	public UGridPanel                                         BPPlayersGrid                                                  => _offBPPlayersGrid.GetValue();
	public UTextBlock                                         BPReviveText                                                   => _offBPReviveText.GetValue();
	public UTextBlock                                         BPScoreText                                                    => _offBPScoreText.GetValue();
	public UImage                                             BPSquadColorImage                                              => _offBPSquadColorImage.GetValue();
	public UTextBlock                                         BPSquadNameText                                                => _offBPSquadNameText.GetValue();
	public UTextBlock                                         BPSquadNumberText                                              => _offBPSquadNumberText.GetValue();
	public UImage                                             BPTalkingImage                                                 => _offBPTalkingImage.GetValue();
	public UTextBlock                                         BPTeamworkText                                                 => _offBPTeamworkText.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	#endregion


}


}