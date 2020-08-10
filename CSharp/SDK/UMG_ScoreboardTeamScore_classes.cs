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

// WidgetBlueprintGeneratedClass UMG_ScoreboardTeamScore.UMG_ScoreboardTeamScore_C
// 0x0058 (0x02D8 - 0x0280)
public class UUMG_ScoreboardTeamScore_C : USQScoreboardTeamScore
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0280, false); // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTextBlock>                        _offBPDeathsText                                               = new ExternalOffset<UTextBlock>(0x0288, true);                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offBPEndOfRoundPanel                                          = new ExternalOffset<UHorizontalBox>(0x0290, true);            // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPHealText                                                 = new ExternalOffset<UTextBlock>(0x0298, true);                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPIncapsText                                               = new ExternalOffset<UTextBlock>(0x02A0, true);                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPKillsText                                                = new ExternalOffset<UTextBlock>(0x02A8, true);                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USpacer>                           _offBPNotEndOfRoundSpacer                                      = new ExternalOffset<USpacer>(0x02B0, true);                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPObjectivesText                                           = new ExternalOffset<UTextBlock>(0x02B8, true);                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPReviveText                                               = new ExternalOffset<UTextBlock>(0x02C0, true);                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPScoreText                                                = new ExternalOffset<UTextBlock>(0x02C8, true);                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPTeamworkText                                             = new ExternalOffset<UTextBlock>(0x02D0, true);                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTextBlock                                         BPDeathsText                                                   => _offBPDeathsText.GetValue();
	public UHorizontalBox                                     BPEndOfRoundPanel                                              => _offBPEndOfRoundPanel.GetValue();
	public UTextBlock                                         BPHealText                                                     => _offBPHealText.GetValue();
	public UTextBlock                                         BPIncapsText                                                   => _offBPIncapsText.GetValue();
	public UTextBlock                                         BPKillsText                                                    => _offBPKillsText.GetValue();
	public USpacer                                            BPNotEndOfRoundSpacer                                          => _offBPNotEndOfRoundSpacer.GetValue();
	public UTextBlock                                         BPObjectivesText                                               => _offBPObjectivesText.GetValue();
	public UTextBlock                                         BPReviveText                                                   => _offBPReviveText.GetValue();
	public UTextBlock                                         BPScoreText                                                    => _offBPScoreText.GetValue();
	public UTextBlock                                         BPTeamworkText                                                 => _offBPTeamworkText.GetValue();
	#endregion


}


}