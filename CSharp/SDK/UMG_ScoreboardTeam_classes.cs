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

// WidgetBlueprintGeneratedClass UMG_ScoreboardTeam.UMG_ScoreboardTeam_C
// 0x00F0 (0x0498 - 0x03A8)
public class UUMG_ScoreboardTeam_C : USQScoreboardTeam
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x03A8, false); // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBPColoredHeaderBarImage                                    = new ExternalOffset<UImage>(0x03B0, true);                    // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPColoredHeaderTabImage                                    = new ExternalOffset<UImage>(0x03B8, true);                    // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offBPEndOfRoundHorizontal                                     = new ExternalOffset<UHorizontalBox>(0x03C0, true);            // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USpacer>                           _offBPEnemyTeamPingAligner                                     = new ExternalOffset<USpacer>(0x03C8, true);                   // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPFlagImage                                                = new ExternalOffset<UImage>(0x03D0, true);                    // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offBpNonSquadPlayersCanvasPanel                               = new ExternalOffset<UCanvasPanel>(0x03D8, true);              // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USpacer>                           _offBPNotEndOfRoundSpacer                                      = new ExternalOffset<USpacer>(0x03E0, true);                   // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBpObjectiveScore                                           = new ExternalOffset<UImage>(0x03E8, true);                    // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBpPlayerNumberText                                         = new ExternalOffset<UTextBlock>(0x03F0, true);                // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGridPanel>                        _offBPPlayersGrid                                              = new ExternalOffset<UGridPanel>(0x03F8, true);                // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPRemainingTicketsText                                     = new ExternalOffset<UTextBlock>(0x0400, true);                // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_ScoreboardTeamScore_C>        _offBPScoreboardTeamScore                                      = new ExternalOffset<UUMG_ScoreboardTeamScore_C>(0x0408, true); // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPScoreText                                                = new ExternalOffset<UTextBlock>(0x0410, true);                // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPSquadScore                                               = new ExternalOffset<UImage>(0x0418, true);                    // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGridPanel>                        _offBPSquadsGrid                                               = new ExternalOffset<UGridPanel>(0x0420, true);                // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offBPTeamHorizontalBox                                        = new ExternalOffset<UHorizontalBox>(0x0428, true);            // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPTeamNameText                                             = new ExternalOffset<UTextBlock>(0x0430, true);                // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPTicketIcon                                               = new ExternalOffset<UImage>(0x0438, true);                    // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offBPTopVerticalBox                                           = new ExternalOffset<UVerticalBox>(0x0440, true);              // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offDeaths                                                     = new ExternalOffset<UImage>(0x0448, true);                    // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offHeal                                                       = new ExternalOffset<UImage>(0x0450, true);                    // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0458, true);                    // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0460, true);                    // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIncaps                                                     = new ExternalOffset<UImage>(0x0468, true);                    // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPing                                                       = new ExternalOffset<UImage>(0x0470, true);                    // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRevive                                                     = new ExternalOffset<UImage>(0x0478, true);                    // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTB_Kills                                                   = new ExternalOffset<UImage>(0x0480, true);                    // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Kit                                                     = new ExternalOffset<UTextBlock>(0x0488, true);                // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offVehicleImage                                               = new ExternalOffset<UImage>(0x0490, true);                    // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             BPColoredHeaderBarImage                                        => _offBPColoredHeaderBarImage.GetValue();
	public UImage                                             BPColoredHeaderTabImage                                        => _offBPColoredHeaderTabImage.GetValue();
	public UHorizontalBox                                     BPEndOfRoundHorizontal                                         => _offBPEndOfRoundHorizontal.GetValue();
	public USpacer                                            BPEnemyTeamPingAligner                                         => _offBPEnemyTeamPingAligner.GetValue();
	public UImage                                             BPFlagImage                                                    => _offBPFlagImage.GetValue();
	public UCanvasPanel                                       BpNonSquadPlayersCanvasPanel                                   => _offBpNonSquadPlayersCanvasPanel.GetValue();
	public USpacer                                            BPNotEndOfRoundSpacer                                          => _offBPNotEndOfRoundSpacer.GetValue();
	public UImage                                             BpObjectiveScore                                               => _offBpObjectiveScore.GetValue();
	public UTextBlock                                         BpPlayerNumberText                                             => _offBpPlayerNumberText.GetValue();
	public UGridPanel                                         BPPlayersGrid                                                  => _offBPPlayersGrid.GetValue();
	public UTextBlock                                         BPRemainingTicketsText                                         => _offBPRemainingTicketsText.GetValue();
	public UUMG_ScoreboardTeamScore_C                         BPScoreboardTeamScore                                          => _offBPScoreboardTeamScore.GetValue();
	public UTextBlock                                         BPScoreText                                                    => _offBPScoreText.GetValue();
	public UImage                                             BPSquadScore                                                   => _offBPSquadScore.GetValue();
	public UGridPanel                                         BPSquadsGrid                                                   => _offBPSquadsGrid.GetValue();
	public UHorizontalBox                                     BPTeamHorizontalBox                                            => _offBPTeamHorizontalBox.GetValue();
	public UTextBlock                                         BPTeamNameText                                                 => _offBPTeamNameText.GetValue();
	public UImage                                             BPTicketIcon                                                   => _offBPTicketIcon.GetValue();
	public UVerticalBox                                       BPTopVerticalBox                                               => _offBPTopVerticalBox.GetValue();
	public UImage                                             Deaths                                                         => _offDeaths.GetValue();
	public UImage                                             Heal                                                           => _offHeal.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             Incaps                                                         => _offIncaps.GetValue();
	public UImage                                             Ping                                                           => _offPing.GetValue();
	public UImage                                             Revive                                                         => _offRevive.GetValue();
	public UImage                                             TB_Kills                                                       => _offTB_Kills.GetValue();
	public UTextBlock                                         TB_Kit                                                         => _offTB_Kit.GetValue();
	public UImage                                             VehicleImage                                                   => _offVehicleImage.GetValue();
	#endregion


}


}