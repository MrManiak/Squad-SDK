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

// WidgetBlueprintGeneratedClass W_UnassignedList.W_UnassignedList_C
// 0x0090 (0x0270 - 0x01E0)
public class UW_UnassignedList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_List                                                = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_InviteAll                                           = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_InviteSelected                                      = new ExternalOffset<UMainMenu_Button_C>(0x0248, true);        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_Invites                                      = new ExternalOffset<UHorizontalBox>(0x0250, true);            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offMainMenu_Button                                            = new ExternalOffset<UMainMenu_Button_C>(0x0258, true);        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offMember_SelectorBox                                         = new ExternalOffset<UScrollBox>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0268, true);       // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_List                                                    => _offBorder_List.GetValue();
	public UMainMenu_Button_C                                 Button_InviteAll                                               => _offButton_InviteAll.GetValue();
	public UMainMenu_Button_C                                 Button_InviteSelected                                          => _offButton_InviteSelected.GetValue();
	public UHorizontalBox                                     HorizontalBox_Invites                                          => _offHorizontalBox_Invites.GetValue();
	public UMainMenu_Button_C                                 MainMenu_Button                                                => _offMainMenu_Button.GetValue();
	public UScrollBox                                         Member_SelectorBox                                             => _offMember_SelectorBox.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	#endregion


}


}