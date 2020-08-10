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

// WidgetBlueprintGeneratedClass W_SquadCreate.W_SquadCreate_C
// 0x00A8 (0x0288 - 0x01E0)
public class UW_SquadCreate_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonLocked                                               = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offCreate                                                     = new ExternalOffset<UButton>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UEditableTextBox>                  _offCreateSquad_TextBox                                        = new ExternalOffset<UEditableTextBox>(0x0248, true);          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offLeave                                                      = new ExternalOffset<UButton>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offSwitchCreateLeave                                          = new ExternalOffset<UWidgetSwitcher>(0x0258, true);           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTBSquadName                                                = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcherName                                         = new ExternalOffset<UWidgetSwitcher>(0x0268, true);           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offParent_Controller                                          = new ExternalOffset<ASQPlayerController>(0x0270, true);       // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offCustomName                                                 = new ExternalOffset<FString>(0x0278, false);                  // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 ButtonLocked                                                   => _offButtonLocked.GetValue();
	public UButton                                            Create                                                         => _offCreate.GetValue();
	public UEditableTextBox                                   CreateSquad_TextBox                                            => _offCreateSquad_TextBox.GetValue();
	public UButton                                            Leave                                                          => _offLeave.GetValue();
	public UWidgetSwitcher                                    SwitchCreateLeave                                              => _offSwitchCreateLeave.GetValue();
	public UTextBlock                                         TBSquadName                                                    => _offTBSquadName.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcherName                                             => _offWidgetSwitcherName.GetValue();
	public ASQPlayerController                                Parent_Controller                                              => _offParent_Controller.GetValue();
	public FString                                            CustomName                                                     => _offCustomName.GetValue();
	#endregion


}


}