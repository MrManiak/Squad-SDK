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

// WidgetBlueprintGeneratedClass W_CommandUI.W_CommandUI_C
// 0x00D8 (0x0388 - 0x02B0)
public class UW_CommandUI_C : UUMG_MenuBase_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02B0, false); // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offCommandOpenCloseAnim                                       = new ExternalOffset<UWidgetAnimation>(0x02B8, true);          // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBackgroundBlur>                   _offBackgroundBlur_1                                           = new ExternalOffset<UBackgroundBlur>(0x02C0, true);           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UChallengeWindow_C>                _offChallengeGiveUp                                            = new ExternalOffset<UChallengeWindow_C>(0x02C8, true);        // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SlideComponent_C>               _offChatSlide                                                  = new ExternalOffset<UW_SlideComponent_C>(0x02D0, true);       // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SlideComponent_C>               _offCommandSlide                                               = new ExternalOffset<UW_SlideComponent_C>(0x02D8, true);       // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offGiveupPanel                                                = new ExternalOffset<USizeBox>(0x02E0, true);                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offMainObject                                                 = new ExternalOffset<UHorizontalBox>(0x02E8, true);            // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapCore_C>                    _offMapCoreWidget                                              = new ExternalOffset<UW_SQMapCore_C>(0x02F0, true);            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offNAV_ROLES                                                  = new ExternalOffset<UMainMenu_Button_C>(0x02F8, true);        // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offNAV_SQUADS                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0300, true);        // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offslideimage                                                 = new ExternalOffset<UImage>(0x0308, true);                    // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSquadBox                                                   = new ExternalOffset<USizeBox>(0x0310, true);                  // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offSquadsSlideButton                                          = new ExternalOffset<UButton>(0x0318, true);                   // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ControlledCameraList_C>         _offW_ControlledCameraList                                     = new ExternalOffset<UW_ControlledCameraList_C>(0x0320, true); // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_GameTime_C>                     _offW_GameTime                                                 = new ExternalOffset<UW_GameTime_C>(0x0328, true);             // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_GiveUp_C>                       _offW_GiveUp                                                   = new ExternalOffset<UW_GiveUp_C>(0x0330, true);               // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_MapControls_C>                  _offW_MapControls                                              = new ExternalOffset<UW_MapControls_C>(0x0338, true);          // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_MarkedPosition_C>               _offW_MarkedPosition                                           = new ExternalOffset<UW_MarkedPosition_C>(0x0340, true);       // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_PlayerPosition_C>               _offW_PlayerPosition                                           = new ExternalOffset<UW_PlayerPosition_C>(0x0348, true);       // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SquadList_C>                    _offW_SquadList                                                = new ExternalOffset<UW_SquadList_C>(0x0350, true);            // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_TeamTickets_C>                  _offW_TeamTickets                                              = new ExternalOffset<UW_TeamTickets_C>(0x0358, true);          // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_TerritoryControl_Bar_C>         _offW_TerritoryControl_Bar                                     = new ExternalOffset<UW_TerritoryControl_Bar_C>(0x0360, true); // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_VoipOwningPlayer_C>             _offW_VoipOwningPlayer                                         = new ExternalOffset<UW_VoipOwningPlayer_C>(0x0368, true);     // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0370, true);       // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offAlways_Allow_Action                                        = new ExternalOffset<byte/*(bool)*/>(0x0378);                  // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UW_CommandActionList_C>            _offCommand_List_Widget                                        = new ExternalOffset<UW_CommandActionList_C>(0x0380, true);    // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   CommandOpenCloseAnim                                           => _offCommandOpenCloseAnim.GetValue();
	public UBackgroundBlur                                    BackgroundBlur_1                                               => _offBackgroundBlur_1.GetValue();
	public UChallengeWindow_C                                 ChallengeGiveUp                                                => _offChallengeGiveUp.GetValue();
	public UW_SlideComponent_C                                ChatSlide                                                      => _offChatSlide.GetValue();
	public UW_SlideComponent_C                                CommandSlide                                                   => _offCommandSlide.GetValue();
	public USizeBox                                           GiveupPanel                                                    => _offGiveupPanel.GetValue();
	public UHorizontalBox                                     MainObject                                                     => _offMainObject.GetValue();
	public UW_SQMapCore_C                                     MapCoreWidget                                                  => _offMapCoreWidget.GetValue();
	public UMainMenu_Button_C                                 NAV_ROLES                                                      => _offNAV_ROLES.GetValue();
	public UMainMenu_Button_C                                 NAV_SQUADS                                                     => _offNAV_SQUADS.GetValue();
	public UImage                                             slideimage                                                     => _offslideimage.GetValue();
	public USizeBox                                           SquadBox                                                       => _offSquadBox.GetValue();
	public UButton                                            SquadsSlideButton                                              => _offSquadsSlideButton.GetValue();
	public UW_ControlledCameraList_C                          W_ControlledCameraList                                         => _offW_ControlledCameraList.GetValue();
	public UW_GameTime_C                                      W_GameTime                                                     => _offW_GameTime.GetValue();
	public UW_GiveUp_C                                        W_GiveUp                                                       => _offW_GiveUp.GetValue();
	public UW_MapControls_C                                   W_MapControls                                                  => _offW_MapControls.GetValue();
	public UW_MarkedPosition_C                                W_MarkedPosition                                               => _offW_MarkedPosition.GetValue();
	public UW_PlayerPosition_C                                W_PlayerPosition                                               => _offW_PlayerPosition.GetValue();
	public UW_SquadList_C                                     W_SquadList                                                    => _offW_SquadList.GetValue();
	public UW_TeamTickets_C                                   W_TeamTickets                                                  => _offW_TeamTickets.GetValue();
	public UW_TerritoryControl_Bar_C                          W_TerritoryControl_Bar                                         => _offW_TerritoryControl_Bar.GetValue();
	public UW_VoipOwningPlayer_C                              W_VoipOwningPlayer                                             => _offW_VoipOwningPlayer.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public byte/*(bool)*/                                     Always_Allow_Action                                            => _offAlways_Allow_Action.GetValue();
	public UW_CommandActionList_C                             Command_List_Widget                                            => _offCommand_List_Widget.GetValue();
	#endregion


}


}