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

// WidgetBlueprintGeneratedClass W_EndRound.W_EndRound_C
// 0x0078 (0x02B8 - 0x0240)
public class UW_EndRound_C : UW_EndRound_Base_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0240, false); // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offBounceText                                                 = new ExternalOffset<UWidgetAnimation>(0x0248, true);          // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offFade                                                       = new ExternalOffset<UWidgetAnimation>(0x0250, true);          // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_Flag                                                 = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIMG_T1_Flag                                                = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIMG_T2_Flag                                                = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_State                                                   = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Team                                                    = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Tickets                                                 = new ExternalOffset<UTextBlock>(0x0280, true);                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offTicketBox                                                  = new ExternalOffset<UHorizontalBox>(0x0288, true);            // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_1                                           = new ExternalOffset<UWidgetSwitcher>(0x0290, true);           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0298, true);       // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offOn_Screen_Time                                             = new ExternalOffset<float>(0x02A0);                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQTeamState>                      _offWinning_Team_0_1                                           = new ExternalOffset<ASQTeamState>(0x02A8, true);              // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAudioComponent>                   _offDraw_Sound_1                                               = new ExternalOffset<UAudioComponent>(0x02B0, true);           // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   BounceText                                                     => _offBounceText.GetValue();
	public UWidgetAnimation                                   Fade                                                           => _offFade.GetValue();
	public UImage                                             Image_Flag                                                     => _offImage_Flag.GetValue();
	public UImage                                             IMG_T1_Flag                                                    => _offIMG_T1_Flag.GetValue();
	public UImage                                             IMG_T2_Flag                                                    => _offIMG_T2_Flag.GetValue();
	public UTextBlock                                         TB_State                                                       => _offTB_State.GetValue();
	public UTextBlock                                         TB_Team                                                        => _offTB_Team.GetValue();
	public UTextBlock                                         TB_Tickets                                                     => _offTB_Tickets.GetValue();
	public UHorizontalBox                                     TicketBox                                                      => _offTicketBox.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_1                                               => _offWidgetSwitcher_1.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public float                                              On_Screen_Time                                                 => _offOn_Screen_Time.GetValue();
	public ASQTeamState                                       Winning_Team_0_1                                               => _offWinning_Team_0_1.GetValue();
	public UAudioComponent                                    Draw_Sound_1                                                   => _offDraw_Sound_1.GetValue();
	#endregion


}


}