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

// WidgetBlueprintGeneratedClass UMG_Scoreboard.UMG_Scoreboard_C
// 0x00E4 (0x03C4 - 0x02E0)
public class UUMG_Scoreboard_C : USQScoreboard
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02E0, false); // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFade                                                       = new ExternalOffset<UWidgetAnimation>(0x02E8, true);          // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offBottom                                                     = new ExternalOffset<UOverlay>(0x02F0, true);                  // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPCurrentGamemodeTextBlock                                 = new ExternalOffset<UTextBlock>(0x02F8, true);                // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBpCurrentMapTextBlock                                      = new ExternalOffset<UTextBlock>(0x0300, true);                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPGameResultTextBlock                                      = new ExternalOffset<UTextBlock>(0x0308, true);                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBpGameTimeClockImage                                       = new ExternalOffset<UImage>(0x0310, true);                    // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPNextMapTextBlock                                         = new ExternalOffset<UTextBlock>(0x0318, true);                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPPlayerCountTextBlock                                     = new ExternalOffset<UTextBlock>(0x0320, true);                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBpRemainingGameTimeText                                    = new ExternalOffset<UTextBlock>(0x0328, true);                // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPRemainingTicketsText                                     = new ExternalOffset<UTextBlock>(0x0330, true);                // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_ScoreboardTeam_C>             _offBPScoreboardEnemy                                          = new ExternalOffset<UUMG_ScoreboardTeam_C>(0x0338, true);     // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_ScoreboardTeam_C>             _offBPScoreboardFriendly                                       = new ExternalOffset<UUMG_ScoreboardTeam_C>(0x0340, true);     // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPServerNameTextBlock                                      = new ExternalOffset<UTextBlock>(0x0348, true);                // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPTickImage                                                = new ExternalOffset<UImage>(0x0350, true);                    // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPTickTextBlock                                            = new ExternalOffset<UTextBlock>(0x0358, true);                // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offEndRoundTimer                                              = new ExternalOffset<UHorizontalBox>(0x0360, true);            // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_1                                            = new ExternalOffset<UHorizontalBox>(0x0368, true);            // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0370, true);                    // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_5                                                    = new ExternalOffset<UImage>(0x0378, true);                    // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offMainMenu_Button                                            = new ExternalOffset<UMainMenu_Button_C>(0x0380, true);        // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offResultCanvas                                               = new ExternalOffset<UCanvasPanel>(0x0388, true);              // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_3                                                 = new ExternalOffset<UScaleBox>(0x0390, true);                 // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_5                                                 = new ExternalOffset<UScaleBox>(0x0398, true);                 // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Timer                                                   = new ExternalOffset<UTextBlock>(0x03A0, true);                // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offTickRateText                                               = new ExternalOffset<FText>(0x03A8, false);                    // 0x03A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<int>                               _offCurrentGameTime                                            = new ExternalOffset<int>(0x03C0);                             // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Fade                                                           => _offFade.GetValue();
	public UOverlay                                           Bottom                                                         => _offBottom.GetValue();
	public UTextBlock                                         BPCurrentGamemodeTextBlock                                     => _offBPCurrentGamemodeTextBlock.GetValue();
	public UTextBlock                                         BpCurrentMapTextBlock                                          => _offBpCurrentMapTextBlock.GetValue();
	public UTextBlock                                         BPGameResultTextBlock                                          => _offBPGameResultTextBlock.GetValue();
	public UImage                                             BpGameTimeClockImage                                           => _offBpGameTimeClockImage.GetValue();
	public UTextBlock                                         BPNextMapTextBlock                                             => _offBPNextMapTextBlock.GetValue();
	public UTextBlock                                         BPPlayerCountTextBlock                                         => _offBPPlayerCountTextBlock.GetValue();
	public UTextBlock                                         BpRemainingGameTimeText                                        => _offBpRemainingGameTimeText.GetValue();
	public UTextBlock                                         BPRemainingTicketsText                                         => _offBPRemainingTicketsText.GetValue();
	public UUMG_ScoreboardTeam_C                              BPScoreboardEnemy                                              => _offBPScoreboardEnemy.GetValue();
	public UUMG_ScoreboardTeam_C                              BPScoreboardFriendly                                           => _offBPScoreboardFriendly.GetValue();
	public UTextBlock                                         BPServerNameTextBlock                                          => _offBPServerNameTextBlock.GetValue();
	public UImage                                             BPTickImage                                                    => _offBPTickImage.GetValue();
	public UTextBlock                                         BPTickTextBlock                                                => _offBPTickTextBlock.GetValue();
	public UHorizontalBox                                     EndRoundTimer                                                  => _offEndRoundTimer.GetValue();
	public UHorizontalBox                                     HorizontalBox_1                                                => _offHorizontalBox_1.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_5                                                        => _offImage_5.GetValue();
	public UMainMenu_Button_C                                 MainMenu_Button                                                => _offMainMenu_Button.GetValue();
	public UCanvasPanel                                       ResultCanvas                                                   => _offResultCanvas.GetValue();
	public UScaleBox                                          ScaleBox_3                                                     => _offScaleBox_3.GetValue();
	public UScaleBox                                          ScaleBox_5                                                     => _offScaleBox_5.GetValue();
	public UTextBlock                                         TB_Timer                                                       => _offTB_Timer.GetValue();
	public FText                                              TickRateText                                                   => _offTickRateText.GetValue();
	public int                                                CurrentGameTime                                                => _offCurrentGameTime.GetValue();
	#endregion


}


}