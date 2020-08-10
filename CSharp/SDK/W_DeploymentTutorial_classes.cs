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

// WidgetBlueprintGeneratedClass W_DeploymentTutorial.W_DeploymentTutorial_C
// 0x01B2 (0x0392 - 0x01E0)
public class UW_DeploymentTutorial_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFadeOut                                                    = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_TeamSelect1                                         = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonRoleNext                                             = new ExternalOffset<UMainMenu_Button_C>(0x0248, true);        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offEnd_3                                                      = new ExternalOffset<UCanvasPanel>(0x0250, true);              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_9                                                    = new ExternalOffset<UImage>(0x0270, true);                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_10                                                   = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_11                                                   = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_12                                                   = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_13                                                   = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_14                                                   = new ExternalOffset<UImage>(0x0298, true);                    // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_17                                                   = new ExternalOffset<UImage>(0x02A0, true);                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_18                                                   = new ExternalOffset<UImage>(0x02A8, true);                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_23                                                   = new ExternalOffset<UImage>(0x02B0, true);                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_25                                                   = new ExternalOffset<UImage>(0x02B8, true);                    // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_27                                                   = new ExternalOffset<UImage>(0x02C0, true);                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_28                                                   = new ExternalOffset<UImage>(0x02C8, true);                    // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_31                                                   = new ExternalOffset<UImage>(0x02D0, true);                    // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_33                                                   = new ExternalOffset<UImage>(0x02D8, true);                    // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_44                                                   = new ExternalOffset<UImage>(0x02E0, true);                    // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_45                                                   = new ExternalOffset<UImage>(0x02E8, true);                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_47                                                   = new ExternalOffset<UImage>(0x02F0, true);                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_57                                                   = new ExternalOffset<UImage>(0x02F8, true);                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_58                                                   = new ExternalOffset<UImage>(0x0300, true);                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_61                                                   = new ExternalOffset<UImage>(0x0308, true);                    // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_62                                                   = new ExternalOffset<UImage>(0x0310, true);                    // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_63                                                   = new ExternalOffset<UImage>(0x0318, true);                    // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_64                                                   = new ExternalOffset<UImage>(0x0320, true);                    // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_65                                                   = new ExternalOffset<UImage>(0x0328, true);                    // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offMapScreen                                                  = new ExternalOffset<UCanvasPanel>(0x0330, true);              // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offShow                                                       = new ExternalOffset<UMainMenu_Button_C>(0x0338, true);        // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offSkip                                                       = new ExternalOffset<UMainMenu_Button_C>(0x0340, true);        // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offSkipBorder                                                 = new ExternalOffset<UBorder>(0x0348, true);                   // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offSkipBox                                                    = new ExternalOffset<UVerticalBox>(0x0350, true);              // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offSquadSelect_2                                              = new ExternalOffset<UCanvasPanel>(0x0358, true);              // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offSquadSelect_3                                              = new ExternalOffset<UCanvasPanel>(0x0360, true);              // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offTeamSelect_2                                               = new ExternalOffset<UCanvasPanel>(0x0368, true);              // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offTeamSelect_3                                               = new ExternalOffset<UCanvasPanel>(0x0370, true);              // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_1                                           = new ExternalOffset<UWidgetSwitcher>(0x0378, true);           // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USaveData_UI_C>                    _offCurrent_Save                                               = new ExternalOffset<USaveData_UI_C>(0x0380, true);            // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_DeploymentMenu_C>               _offDeployment_Menu                                            = new ExternalOffset<UW_DeploymentMenu_C>(0x0388, true);       // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCheck_Squad                                                = new ExternalOffset<byte/*(bool)*/>(0x0390);                  // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offCheck_Spawn_Selected                                       = new ExternalOffset<byte/*(bool)*/>(0x0391);                  // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   FadeOut                                                        => _offFadeOut.GetValue();
	public UMainMenu_Button_C                                 Button_TeamSelect1                                             => _offButton_TeamSelect1.GetValue();
	public UMainMenu_Button_C                                 ButtonRoleNext                                                 => _offButtonRoleNext.GetValue();
	public UCanvasPanel                                       End_3                                                          => _offEnd_3.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UImage                                             Image_9                                                        => _offImage_9.GetValue();
	public UImage                                             Image_10                                                       => _offImage_10.GetValue();
	public UImage                                             Image_11                                                       => _offImage_11.GetValue();
	public UImage                                             Image_12                                                       => _offImage_12.GetValue();
	public UImage                                             Image_13                                                       => _offImage_13.GetValue();
	public UImage                                             Image_14                                                       => _offImage_14.GetValue();
	public UImage                                             Image_17                                                       => _offImage_17.GetValue();
	public UImage                                             Image_18                                                       => _offImage_18.GetValue();
	public UImage                                             Image_23                                                       => _offImage_23.GetValue();
	public UImage                                             Image_25                                                       => _offImage_25.GetValue();
	public UImage                                             Image_27                                                       => _offImage_27.GetValue();
	public UImage                                             Image_28                                                       => _offImage_28.GetValue();
	public UImage                                             Image_31                                                       => _offImage_31.GetValue();
	public UImage                                             Image_33                                                       => _offImage_33.GetValue();
	public UImage                                             Image_44                                                       => _offImage_44.GetValue();
	public UImage                                             Image_45                                                       => _offImage_45.GetValue();
	public UImage                                             Image_47                                                       => _offImage_47.GetValue();
	public UImage                                             Image_57                                                       => _offImage_57.GetValue();
	public UImage                                             Image_58                                                       => _offImage_58.GetValue();
	public UImage                                             Image_61                                                       => _offImage_61.GetValue();
	public UImage                                             Image_62                                                       => _offImage_62.GetValue();
	public UImage                                             Image_63                                                       => _offImage_63.GetValue();
	public UImage                                             Image_64                                                       => _offImage_64.GetValue();
	public UImage                                             Image_65                                                       => _offImage_65.GetValue();
	public UCanvasPanel                                       MapScreen                                                      => _offMapScreen.GetValue();
	public UMainMenu_Button_C                                 Show                                                           => _offShow.GetValue();
	public UMainMenu_Button_C                                 Skip                                                           => _offSkip.GetValue();
	public UBorder                                            SkipBorder                                                     => _offSkipBorder.GetValue();
	public UVerticalBox                                       SkipBox                                                        => _offSkipBox.GetValue();
	public UCanvasPanel                                       SquadSelect_2                                                  => _offSquadSelect_2.GetValue();
	public UCanvasPanel                                       SquadSelect_3                                                  => _offSquadSelect_3.GetValue();
	public UCanvasPanel                                       TeamSelect_2                                                   => _offTeamSelect_2.GetValue();
	public UCanvasPanel                                       TeamSelect_3                                                   => _offTeamSelect_3.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_1                                               => _offWidgetSwitcher_1.GetValue();
	public USaveData_UI_C                                     Current_Save                                                   => _offCurrent_Save.GetValue();
	public UW_DeploymentMenu_C                                Deployment_Menu                                                => _offDeployment_Menu.GetValue();
	public byte/*(bool)*/                                     Check_Squad                                                    => _offCheck_Squad.GetValue();
	public byte/*(bool)*/                                     Check_Spawn_Selected                                           => _offCheck_Spawn_Selected.GetValue();
	#endregion


}


}