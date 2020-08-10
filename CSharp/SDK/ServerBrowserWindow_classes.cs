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

// WidgetBlueprintGeneratedClass ServerBrowserWindow.ServerBrowserWindow_C
// 0x0150 (0x03B8 - 0x0268)
public class UServerBrowserWindow_C : USQServerBrowserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0268, false); // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton_ClearSearch                                         = new ExternalOffset<UButton>(0x0270, true);                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offCurrentServerParent                                        = new ExternalOffset<UBorder>(0x0278, true);                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_4                                                    = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUniformGridPanel>                 _offPromotedGrid                                               = new ExternalOffset<UUniformGridPanel>(0x0298, true);         // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offPromotedVerticalBox                                        = new ExternalOffset<UVerticalBox>(0x02A0, true);              // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UEditableTextBox>                  _offSearchBox                                                  = new ExternalOffset<UEditableTextBox>(0x02A8, true);          // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UServerDetails_C>                  _offServerDetails_C_1                                          = new ExternalOffset<UServerDetails_C>(0x02B0, true);          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUniformGridPanel>                 _offServerListGrid                                             = new ExternalOffset<UUniformGridPanel>(0x02B8, true);         // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USortableColumnButton_C>           _offSortGameMode                                               = new ExternalOffset<USortableColumnButton_C>(0x02C0, true);   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USortableColumnButton_C>           _offSORTHealth                                                 = new ExternalOffset<USortableColumnButton_C>(0x02C8, true);   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USortableColumnButton_C>           _offSORTMaps                                                   = new ExternalOffset<USortableColumnButton_C>(0x02D0, true);   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USortableColumnButton_C>           _offSortNumPlayers                                             = new ExternalOffset<USortableColumnButton_C>(0x02D8, true);   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USortableColumnButton_C>           _offSortPing                                                   = new ExternalOffset<USortableColumnButton_C>(0x02E0, true);   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USortableColumnButton_C>           _offSortServerName                                             = new ExternalOffset<USortableColumnButton_C>(0x02E8, true);   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offSwitcherDetails                                            = new ExternalOffset<UWidgetSwitcher>(0x02F0, true);           // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCircularThrobber>                 _offThrobber                                                   = new ExternalOffset<UCircularThrobber>(0x02F8, true);         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_Loading                                     = new ExternalOffset<UWidgetSwitcher>(0x0300, true);           // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UServerListItem_C>                 _offSelectedServerItem                                         = new ExternalOffset<UServerListItem_C>(0x0308, true);         // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offWrongVersionServerCount                                    = new ExternalOffset<int>(0x0310);                             // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offSameVersionServerCount                                     = new ExternalOffset<int>(0x0314);                             // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Licensed_Servers                                      = new ExternalOffset<byte/*(bool)*/>(0x0318);                  // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Unlicensed_Servers                                    = new ExternalOffset<byte/*(bool)*/>(0x0319);                  // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FText>                             _offBrowser_Header                                             = new ExternalOffset<FText>(0x0320, false);                    // 0x0320(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<int>                               _offCurrentServerIndex                                         = new ExternalOffset<int>(0x0338);                             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UServerListItem_C>                 _offJoiningServer                                              = new ExternalOffset<UServerListItem_C>(0x0340, true);         // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Queue_Window                                          = new ExternalOffset<byte/*(bool)*/>(0x0348);                  // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TArray<FBlueprintSessionResult>>   _offResults                                                    = new ExternalOffset<TArray<FBlueprintSessionResult>>(0x0350, false); // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Sorted                                                  = new ExternalOffset<byte/*(bool)*/>(0x0360);                  // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UMainMenuScreen_C>                 _offREF_MainMenu                                               = new ExternalOffset<UMainMenuScreen_C>(0x0368, true);         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offFound_Sessions                                             = new ExternalOffset<FScriptMulticastDelegate>(0x0370, false); // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<TArray<FBlueprintSessionResult>>   _offComposited_Sessions                                        = new ExternalOffset<TArray<FBlueprintSessionResult>>(0x0380, false); // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offSearch_Complete                                            = new ExternalOffset<byte/*(bool)*/>(0x0390);                  // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FString>                           _offCurrent_Search                                             = new ExternalOffset<FString>(0x0398, false);                  // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offUseUniqueWhitelistBox                                      = new ExternalOffset<byte/*(bool)*/>(0x03A8);                  // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offHas_Promoted_Servers                                       = new ExternalOffset<byte/*(bool)*/>(0x03A9);                  // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UBP_ServerPassword_C>              _offServerPasswordWidget                                       = new ExternalOffset<UBP_ServerPassword_C>(0x03B0, true);      // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button_ClearSearch                                             => _offButton_ClearSearch.GetValue();
	public UBorder                                            CurrentServerParent                                            => _offCurrentServerParent.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             Image_4                                                        => _offImage_4.GetValue();
	public UUniformGridPanel                                  PromotedGrid                                                   => _offPromotedGrid.GetValue();
	public UVerticalBox                                       PromotedVerticalBox                                            => _offPromotedVerticalBox.GetValue();
	public UEditableTextBox                                   SearchBox                                                      => _offSearchBox.GetValue();
	public UServerDetails_C                                   ServerDetails_C_1                                              => _offServerDetails_C_1.GetValue();
	public UUniformGridPanel                                  ServerListGrid                                                 => _offServerListGrid.GetValue();
	public USortableColumnButton_C                            SortGameMode                                                   => _offSortGameMode.GetValue();
	public USortableColumnButton_C                            SORTHealth                                                     => _offSORTHealth.GetValue();
	public USortableColumnButton_C                            SORTMaps                                                       => _offSORTMaps.GetValue();
	public USortableColumnButton_C                            SortNumPlayers                                                 => _offSortNumPlayers.GetValue();
	public USortableColumnButton_C                            SortPing                                                       => _offSortPing.GetValue();
	public USortableColumnButton_C                            SortServerName                                                 => _offSortServerName.GetValue();
	public UWidgetSwitcher                                    SwitcherDetails                                                => _offSwitcherDetails.GetValue();
	public UCircularThrobber                                  Throbber                                                       => _offThrobber.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_Loading                                         => _offWidgetSwitcher_Loading.GetValue();
	public UServerListItem_C                                  SelectedServerItem                                             => _offSelectedServerItem.GetValue();
	public int                                                WrongVersionServerCount                                        => _offWrongVersionServerCount.GetValue();
	public int                                                SameVersionServerCount                                         => _offSameVersionServerCount.GetValue();
	public byte/*(bool)*/                                     Show_Licensed_Servers                                          => _offShow_Licensed_Servers.GetValue();
	public byte/*(bool)*/                                     Show_Unlicensed_Servers                                        => _offShow_Unlicensed_Servers.GetValue();
	public FText                                              Browser_Header                                                 => _offBrowser_Header.GetValue();
	public int                                                CurrentServerIndex                                             => _offCurrentServerIndex.GetValue();
	public UServerListItem_C                                  JoiningServer                                                  => _offJoiningServer.GetValue();
	public byte/*(bool)*/                                     Show_Queue_Window                                              => _offShow_Queue_Window.GetValue();
	public TArray<FBlueprintSessionResult>                    Results                                                        => _offResults.GetValue();
	public byte/*(bool)*/                                     Is_Sorted                                                      => _offIs_Sorted.GetValue();
	public UMainMenuScreen_C                                  REF_MainMenu                                                   => _offREF_MainMenu.GetValue();
	public FScriptMulticastDelegate                           Found_Sessions                                                 => _offFound_Sessions.GetValue();
	public TArray<FBlueprintSessionResult>                    Composited_Sessions                                            => _offComposited_Sessions.GetValue();
	public byte/*(bool)*/                                     Search_Complete                                                => _offSearch_Complete.GetValue();
	public FString                                            Current_Search                                                 => _offCurrent_Search.GetValue();
	public byte/*(bool)*/                                     UseUniqueWhitelistBox                                          => _offUseUniqueWhitelistBox.GetValue();
	public byte/*(bool)*/                                     Has_Promoted_Servers                                           => _offHas_Promoted_Servers.GetValue();
	public UBP_ServerPassword_C                               ServerPasswordWidget                                           => _offServerPasswordWidget.GetValue();
	#endregion


}


}