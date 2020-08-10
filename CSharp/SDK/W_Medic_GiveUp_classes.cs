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

// WidgetBlueprintGeneratedClass W_Medic_GiveUp.W_Medic_GiveUp_C
// 0x00E4 (0x02C4 - 0x01E0)
public class UW_Medic_GiveUp_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_CallMedic                                           = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Giveup                                              = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UChallengeWindow_C>                _offChallengeGiveUp                                            = new ExternalOffset<UChallengeWindow_C>(0x0248, true);        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offSettingsItem_TickBox                                       = new ExternalOffset<USettingsItem_TickBox_C>(0x0258, true);   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offSkipBorder                                                 = new ExternalOffset<UBorder>(0x0260, true);                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Bleed                                                   = new ExternalOffset<UTextBlock>(0x0268, true);                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_MedicDistance                                           = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_1                                           = new ExternalOffset<UWidgetSwitcher>(0x0278, true);           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0280, true);       // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FSQInputState>                     _offWounded_Stack                                              = new ExternalOffset<FSQInputState>(0x0288, false);            // 0x0288(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<USaveData_UI_C>                    _offCurrent_Save                                               = new ExternalOffset<USaveData_UI_C>(0x02A8, true);            // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offIncrementing_Medic_Call_Delay                              = new ExternalOffset<float>(0x02B0);                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Medic_Call                                             = new ExternalOffset<byte/*(bool)*/>(0x02B4);                  // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offMedic_Cooldown                                             = new ExternalOffset<FTimerHandle>(0x02B8, false);             // 0x02B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offInitial_Delay_Time                                         = new ExternalOffset<float>(0x02C0);                           // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 Button_CallMedic                                               => _offButton_CallMedic.GetValue();
	public UMainMenu_Button_C                                 Button_Giveup                                                  => _offButton_Giveup.GetValue();
	public UChallengeWindow_C                                 ChallengeGiveUp                                                => _offChallengeGiveUp.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public USettingsItem_TickBox_C                            SettingsItem_TickBox                                           => _offSettingsItem_TickBox.GetValue();
	public UBorder                                            SkipBorder                                                     => _offSkipBorder.GetValue();
	public UTextBlock                                         TB_Bleed                                                       => _offTB_Bleed.GetValue();
	public UTextBlock                                         TB_MedicDistance                                               => _offTB_MedicDistance.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_1                                               => _offWidgetSwitcher_1.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public FSQInputState                                      Wounded_Stack                                                  => _offWounded_Stack.GetValue();
	public USaveData_UI_C                                     Current_Save                                                   => _offCurrent_Save.GetValue();
	public float                                              Incrementing_Medic_Call_Delay                                  => _offIncrementing_Medic_Call_Delay.GetValue();
	public byte/*(bool)*/                                     Can_Medic_Call                                                 => _offCan_Medic_Call.GetValue();
	public FTimerHandle                                       Medic_Cooldown                                                 => _offMedic_Cooldown.GetValue();
	public float                                              Initial_Delay_Time                                             => _offInitial_Delay_Time.GetValue();
	#endregion


}


}