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

// WidgetBlueprintGeneratedClass W_TeamSelect.W_TeamSelect_C
// 0x0154 (0x0334 - 0x01E0)
public class UW_TeamSelect_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offarrowleft                                                  = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offArrowRight                                                 = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_ArrowLeft                                           = new ExternalOffset<UBorder>(0x0248, true);                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_ArrowRight                                          = new ExternalOffset<UBorder>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offCentre                                                     = new ExternalOffset<UButton>(0x0258, true);                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offLeftHover                                                  = new ExternalOffset<UButton>(0x0260, true);                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLine                                                       = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_FlagMap_C>                      _offMap_C_9                                                    = new ExternalOffset<UW_FlagMap_C>(0x0270, true);              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offNav_Map                                                    = new ExternalOffset<UMainMenu_Button_C>(0x0278, true);        // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offNav_Server                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0280, true);        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offRightHover                                                 = new ExternalOffset<UButton>(0x0288, true);                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSB_Left                                                    = new ExternalOffset<USizeBox>(0x0290, true);                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSB_Right                                                   = new ExternalOffset<USizeBox>(0x0298, true);                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USQRichTextBlock>                  _offSQRichTextBlock_1                                          = new ExternalOffset<USQRichTextBlock>(0x02A0, true);          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_MapLore                                                 = new ExternalOffset<UTextBlock>(0x02A8, true);                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_TeamInfo_C>                     _offTeamInfo_2                                                 = new ExternalOffset<UW_TeamInfo_C>(0x02B0, true);             // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_TeamInfo_C>                     _offTeamInfo_3                                                 = new ExternalOffset<UW_TeamInfo_C>(0x02B8, true);             // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offTeamPanel                                                  = new ExternalOffset<UHorizontalBox>(0x02C0, true);            // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_21                                               = new ExternalOffset<UTextBlock>(0x02C8, true);                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_22                                               = new ExternalOffset<UTextBlock>(0x02D0, true);                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_Info                                        = new ExternalOffset<UWidgetSwitcher>(0x02D8, true);           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWS_ModeInfo                                                = new ExternalOffset<UWidgetSwitcher>(0x02E0, true);           // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offTeam_Button_Pressed                                        = new ExternalOffset<FScriptMulticastDelegate>(0x02E8, false); // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FString>                           _offCached_level_name                                          = new ExternalOffset<FString>(0x02F8, false);                  // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQHUD>                            _offSQ_HUD_REF                                                 = new ExternalOffset<ASQHUD>(0x0308, true);                    // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offCached_Server_Message                                      = new ExternalOffset<FText>(0x0310, false);                    // 0x0310(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offSelection_Enabled                                          = new ExternalOffset<byte/*(bool)*/>(0x0328);                  // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offRight_Target                                               = new ExternalOffset<float>(0x032C);                           // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offLeft_Target                                                = new ExternalOffset<float>(0x0330);                           // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             arrowleft                                                      => _offarrowleft.GetValue();
	public UImage                                             ArrowRight                                                     => _offArrowRight.GetValue();
	public UBorder                                            Border_ArrowLeft                                               => _offBorder_ArrowLeft.GetValue();
	public UBorder                                            Border_ArrowRight                                              => _offBorder_ArrowRight.GetValue();
	public UButton                                            Centre                                                         => _offCentre.GetValue();
	public UButton                                            LeftHover                                                      => _offLeftHover.GetValue();
	public UImage                                             Line                                                           => _offLine.GetValue();
	public UW_FlagMap_C                                       Map_C_9                                                        => _offMap_C_9.GetValue();
	public UMainMenu_Button_C                                 Nav_Map                                                        => _offNav_Map.GetValue();
	public UMainMenu_Button_C                                 Nav_Server                                                     => _offNav_Server.GetValue();
	public UButton                                            RightHover                                                     => _offRightHover.GetValue();
	public USizeBox                                           SB_Left                                                        => _offSB_Left.GetValue();
	public USizeBox                                           SB_Right                                                       => _offSB_Right.GetValue();
	public USQRichTextBlock                                   SQRichTextBlock_1                                              => _offSQRichTextBlock_1.GetValue();
	public UTextBlock                                         TB_MapLore                                                     => _offTB_MapLore.GetValue();
	public UW_TeamInfo_C                                      TeamInfo_2                                                     => _offTeamInfo_2.GetValue();
	public UW_TeamInfo_C                                      TeamInfo_3                                                     => _offTeamInfo_3.GetValue();
	public UHorizontalBox                                     TeamPanel                                                      => _offTeamPanel.GetValue();
	public UTextBlock                                         TextBlock_21                                                   => _offTextBlock_21.GetValue();
	public UTextBlock                                         TextBlock_22                                                   => _offTextBlock_22.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_Info                                            => _offWidgetSwitcher_Info.GetValue();
	public UWidgetSwitcher                                    WS_ModeInfo                                                    => _offWS_ModeInfo.GetValue();
	public FScriptMulticastDelegate                           Team_Button_Pressed                                            => _offTeam_Button_Pressed.GetValue();
	public FString                                            Cached_level_name                                              => _offCached_level_name.GetValue();
	public ASQHUD                                             SQ_HUD_REF                                                     => _offSQ_HUD_REF.GetValue();
	public FText                                              Cached_Server_Message                                          => _offCached_Server_Message.GetValue();
	public byte/*(bool)*/                                     Selection_Enabled                                              => _offSelection_Enabled.GetValue();
	public float                                              Right_Target                                                   => _offRight_Target.GetValue();
	public float                                              Left_Target                                                    => _offLeft_Target.GetValue();
	#endregion


}


}