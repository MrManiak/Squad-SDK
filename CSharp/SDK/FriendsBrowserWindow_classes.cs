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

// WidgetBlueprintGeneratedClass FriendsBrowserWindow.FriendsBrowserWindow_C
// 0x00C0 (0x0300 - 0x0240)
public class UFriendsBrowserWindow_C : USQFriendsBrowserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0240, false); // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton_ClearSearch                                         = new ExternalOffset<UButton>(0x0248, true);                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUniformGridPanel>                 _offFriendListGrid                                             = new ExternalOffset<UUniformGridPanel>(0x0250, true);         // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_4                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UEditableTextBox>                  _offSearchBox                                                  = new ExternalOffset<UEditableTextBox>(0x0260, true);          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Name                                                    = new ExternalOffset<UTextBlock>(0x0268, true);                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Status                                                  = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_4                                                = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UThrobber>                         _offThrobber_1                                                 = new ExternalOffset<UThrobber>(0x0280, true);                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_Loading                                     = new ExternalOffset<UWidgetSwitcher>(0x0288, true);           // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<FSQBlueprintFriend>>        _offCurrent_Friends                                            = new ExternalOffset<TArray<FSQBlueprintFriend>>(0x0290, false); // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<FScriptMulticastDelegate>          _offFinished_Search                                            = new ExternalOffset<FScriptMulticastDelegate>(0x02A0, false); // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<TArray<UFriendListItem_C>>         _offFriend_List_Items                                          = new ExternalOffset<TArray<UFriendListItem_C>>(0x02B0, false); // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<FScriptMulticastDelegate>          _offFinished_Refresh                                           = new ExternalOffset<FScriptMulticastDelegate>(0x02C0, false); // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offStart_Search                                               = new ExternalOffset<FScriptMulticastDelegate>(0x02D0, false); // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offSet_Composited_Sessions                                    = new ExternalOffset<FScriptMulticastDelegate>(0x02E0, false); // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<TArray<FBlueprintSessionResult>>   _offCurrent_Sessions                                           = new ExternalOffset<TArray<FBlueprintSessionResult>>(0x02F0, false); // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button_ClearSearch                                             => _offButton_ClearSearch.GetValue();
	public UUniformGridPanel                                  FriendListGrid                                                 => _offFriendListGrid.GetValue();
	public UImage                                             Image_4                                                        => _offImage_4.GetValue();
	public UEditableTextBox                                   SearchBox                                                      => _offSearchBox.GetValue();
	public UTextBlock                                         TB_Name                                                        => _offTB_Name.GetValue();
	public UTextBlock                                         TB_Status                                                      => _offTB_Status.GetValue();
	public UTextBlock                                         TextBlock_4                                                    => _offTextBlock_4.GetValue();
	public UThrobber                                          Throbber_1                                                     => _offThrobber_1.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_Loading                                         => _offWidgetSwitcher_Loading.GetValue();
	public TArray<FSQBlueprintFriend>                         Current_Friends                                                => _offCurrent_Friends.GetValue();
	public FScriptMulticastDelegate                           Finished_Search                                                => _offFinished_Search.GetValue();
	public TArray<UFriendListItem_C>                          Friend_List_Items                                              => _offFriend_List_Items.GetValue();
	public FScriptMulticastDelegate                           Finished_Refresh                                               => _offFinished_Refresh.GetValue();
	public FScriptMulticastDelegate                           Start_Search                                                   => _offStart_Search.GetValue();
	public FScriptMulticastDelegate                           Set_Composited_Sessions                                        => _offSet_Composited_Sessions.GetValue();
	public TArray<FBlueprintSessionResult>                    Current_Sessions                                               => _offCurrent_Sessions.GetValue();
	#endregion


}


}