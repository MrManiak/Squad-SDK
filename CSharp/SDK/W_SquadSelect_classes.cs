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

// WidgetBlueprintGeneratedClass W_SquadSelect.W_SquadSelect_C
// 0x00F0 (0x02D0 - 0x01E0)
public class UW_SquadSelect_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonDeploymentSizeToggle                                 = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UDeploymentList_C>                 _offDeploymentList                                             = new ExternalOffset<UDeploymentList_C>(0x0240, true);         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_6                                            = new ExternalOffset<UHorizontalBox>(0x0248, true);            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImageBar                                                   = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapCore_C>                    _offMapCore                                                    = new ExternalOffset<UW_SQMapCore_C>(0x0268, true);            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offRoleQuickSelectPanel                                       = new ExternalOffset<UVerticalBox>(0x0270, true);              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeDeployList                                             = new ExternalOffset<USizeBox>(0x0278, true);                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Prompt                                                  = new ExternalOffset<UTextBlock>(0x0280, true);                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_1                                                = new ExternalOffset<UTextBlock>(0x0288, true);                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_4                                                = new ExternalOffset<UTextBlock>(0x0290, true);                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ChatBox_C>                      _offW_ChatBox_366                                              = new ExternalOffset<UW_ChatBox_C>(0x0298, true);              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_MapControls_C>                  _offW_MapControls_89                                           = new ExternalOffset<UW_MapControls_C>(0x02A0, true);          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_MarkedPosition_C>               _offW_MarkedPosition                                           = new ExternalOffset<UW_MarkedPosition_C>(0x02A8, true);       // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_PlayerPosition_C>               _offW_PlayerPosition                                           = new ExternalOffset<UW_PlayerPosition_C>(0x02B0, true);       // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleQuickList_C>                _offW_RoleQuickSelect                                          = new ExternalOffset<UW_RoleQuickList_C>(0x02B8, true);        // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SquadList_C>                    _offW_SquadList                                                = new ExternalOffset<UW_SquadList_C>(0x02C0, true);            // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offParent_Controller                                          = new ExternalOffset<ASQPlayerController>(0x02C8, true);       // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 ButtonDeploymentSizeToggle                                     => _offButtonDeploymentSizeToggle.GetValue();
	public UDeploymentList_C                                  DeploymentList                                                 => _offDeploymentList.GetValue();
	public UHorizontalBox                                     HorizontalBox_6                                                => _offHorizontalBox_6.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             ImageBar                                                       => _offImageBar.GetValue();
	public UW_SQMapCore_C                                     MapCore                                                        => _offMapCore.GetValue();
	public UVerticalBox                                       RoleQuickSelectPanel                                           => _offRoleQuickSelectPanel.GetValue();
	public USizeBox                                           SizeDeployList                                                 => _offSizeDeployList.GetValue();
	public UTextBlock                                         TB_Prompt                                                      => _offTB_Prompt.GetValue();
	public UTextBlock                                         TextBlock_1                                                    => _offTextBlock_1.GetValue();
	public UTextBlock                                         TextBlock_4                                                    => _offTextBlock_4.GetValue();
	public UW_ChatBox_C                                       W_ChatBox_366                                                  => _offW_ChatBox_366.GetValue();
	public UW_MapControls_C                                   W_MapControls_89                                               => _offW_MapControls_89.GetValue();
	public UW_MarkedPosition_C                                W_MarkedPosition                                               => _offW_MarkedPosition.GetValue();
	public UW_PlayerPosition_C                                W_PlayerPosition                                               => _offW_PlayerPosition.GetValue();
	public UW_RoleQuickList_C                                 W_RoleQuickSelect                                              => _offW_RoleQuickSelect.GetValue();
	public UW_SquadList_C                                     W_SquadList                                                    => _offW_SquadList.GetValue();
	public ASQPlayerController                                Parent_Controller                                              => _offParent_Controller.GetValue();
	#endregion


}


}