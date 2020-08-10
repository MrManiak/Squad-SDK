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

// WidgetBlueprintGeneratedClass UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C
// 0x00C4 (0x048C - 0x03C8)
public class UUMG_ScoreboardPlayer_C : USQScoreboardPlayer
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x03C8, false); // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBP_PlayerSoundStateButton_C>      _offBP_PlayerSoundStateButton_73                               = new ExternalOffset<UBP_PlayerSoundStateButton_C>(0x03D0, true); // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPDeathsText                                               = new ExternalOffset<UTextBlock>(0x03D8, true);                // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offBPEndOfRoundPanel                                          = new ExternalOffset<UHorizontalBox>(0x03E0, true);            // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPFTColorImage                                             = new ExternalOffset<UImage>(0x03E8, true);                    // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPHealText                                                 = new ExternalOffset<UTextBlock>(0x03F0, true);                // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPHealthIcon                                               = new ExternalOffset<UImage>(0x03F8, true);                    // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPIncapsText                                               = new ExternalOffset<UTextBlock>(0x0400, true);                // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPKillsText                                                = new ExternalOffset<UTextBlock>(0x0408, true);                // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPLeaderIcon                                               = new ExternalOffset<UImage>(0x0410, true);                    // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offBPLeaderPanel                                              = new ExternalOffset<UCanvasPanel>(0x0418, true);              // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPLeaderText                                               = new ExternalOffset<UTextBlock>(0x0420, true);                // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USpacer>                           _offBPNotEndOfRoundSpacer                                      = new ExternalOffset<USpacer>(0x0428, true);                   // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPObjectivesText                                           = new ExternalOffset<UTextBlock>(0x0430, true);                // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPPingText                                                 = new ExternalOffset<UTextBlock>(0x0438, true);                // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPPlayerNameText                                           = new ExternalOffset<UTextBlock>(0x0440, true);                // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPReviveText                                               = new ExternalOffset<UTextBlock>(0x0448, true);                // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPRoleImage                                                = new ExternalOffset<UImage>(0x0450, true);                    // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPScoreText                                                = new ExternalOffset<UTextBlock>(0x0458, true);                // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPTeamworkText                                             = new ExternalOffset<UTextBlock>(0x0460, true);                // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPVehicleImage                                             = new ExternalOffset<UImage>(0x0468, true);                    // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offSQ_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0470, true);       // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offLast_Fireteam_Index                                        = new ExternalOffset<int>(0x0478);                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offLast_Fireteam_Color                                        = new ExternalOffset<FLinearColor>(0x047C, false);             // 0x047C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBP_PlayerSoundStateButton_C                       BP_PlayerSoundStateButton_73                                   => _offBP_PlayerSoundStateButton_73.GetValue();
	public UTextBlock                                         BPDeathsText                                                   => _offBPDeathsText.GetValue();
	public UHorizontalBox                                     BPEndOfRoundPanel                                              => _offBPEndOfRoundPanel.GetValue();
	public UImage                                             BPFTColorImage                                                 => _offBPFTColorImage.GetValue();
	public UTextBlock                                         BPHealText                                                     => _offBPHealText.GetValue();
	public UImage                                             BPHealthIcon                                                   => _offBPHealthIcon.GetValue();
	public UTextBlock                                         BPIncapsText                                                   => _offBPIncapsText.GetValue();
	public UTextBlock                                         BPKillsText                                                    => _offBPKillsText.GetValue();
	public UImage                                             BPLeaderIcon                                                   => _offBPLeaderIcon.GetValue();
	public UCanvasPanel                                       BPLeaderPanel                                                  => _offBPLeaderPanel.GetValue();
	public UTextBlock                                         BPLeaderText                                                   => _offBPLeaderText.GetValue();
	public USpacer                                            BPNotEndOfRoundSpacer                                          => _offBPNotEndOfRoundSpacer.GetValue();
	public UTextBlock                                         BPObjectivesText                                               => _offBPObjectivesText.GetValue();
	public UTextBlock                                         BPPingText                                                     => _offBPPingText.GetValue();
	public UTextBlock                                         BPPlayerNameText                                               => _offBPPlayerNameText.GetValue();
	public UTextBlock                                         BPReviveText                                                   => _offBPReviveText.GetValue();
	public UImage                                             BPRoleImage                                                    => _offBPRoleImage.GetValue();
	public UTextBlock                                         BPScoreText                                                    => _offBPScoreText.GetValue();
	public UTextBlock                                         BPTeamworkText                                                 => _offBPTeamworkText.GetValue();
	public UImage                                             BPVehicleImage                                                 => _offBPVehicleImage.GetValue();
	public ASQPlayerController                                SQ_PC                                                          => _offSQ_PC.GetValue();
	public int                                                Last_Fireteam_Index                                            => _offLast_Fireteam_Index.GetValue();
	public FLinearColor                                       Last_Fireteam_Color                                            => _offLast_Fireteam_Color.GetValue();
	#endregion


}


}