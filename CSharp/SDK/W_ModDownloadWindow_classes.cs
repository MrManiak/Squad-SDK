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

// WidgetBlueprintGeneratedClass W_ModDownloadWindow.W_ModDownloadWindow_C
// 0x00B8 (0x0298 - 0x01E0)
public class UW_ModDownloadWindow_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Download                                            = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Exit                                                = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Whitelist                                               = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModDownloadItem_C>              _offW_ModDownloadItem                                          = new ExternalOffset<UW_ModDownloadItem_C>(0x0258, true);      // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModDownloadItem_C>              _offW_ModDownloadItem_9                                        = new ExternalOffset<UW_ModDownloadItem_C>(0x0260, true);      // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModDownloadItem_C>              _offW_ModDownloadItem_10                                       = new ExternalOffset<UW_ModDownloadItem_C>(0x0268, true);      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModDownloadItem_C>              _offW_ModDownloadItem_11                                       = new ExternalOffset<UW_ModDownloadItem_C>(0x0270, true);      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModDownloadItem_C>              _offW_ModDownloadItem_12                                       = new ExternalOffset<UW_ModDownloadItem_C>(0x0278, true);      // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWrapBox>                          _offWrapBox_1                                                  = new ExternalOffset<UWrapBox>(0x0280, true);                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Downloading                                             = new ExternalOffset<byte/*(bool)*/>(0x0288);                  // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UServerListItem_C>                 _offServer_List_Item                                           = new ExternalOffset<UServerListItem_C>(0x0290, true);         // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 Button_Download                                                => _offButton_Download.GetValue();
	public UMainMenu_Button_C                                 Button_Exit                                                    => _offButton_Exit.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UTextBlock                                         TB_Whitelist                                                   => _offTB_Whitelist.GetValue();
	public UW_ModDownloadItem_C                               W_ModDownloadItem                                              => _offW_ModDownloadItem.GetValue();
	public UW_ModDownloadItem_C                               W_ModDownloadItem_9                                            => _offW_ModDownloadItem_9.GetValue();
	public UW_ModDownloadItem_C                               W_ModDownloadItem_10                                           => _offW_ModDownloadItem_10.GetValue();
	public UW_ModDownloadItem_C                               W_ModDownloadItem_11                                           => _offW_ModDownloadItem_11.GetValue();
	public UW_ModDownloadItem_C                               W_ModDownloadItem_12                                           => _offW_ModDownloadItem_12.GetValue();
	public UWrapBox                                           WrapBox_1                                                      => _offWrapBox_1.GetValue();
	public byte/*(bool)*/                                     Is_Downloading                                                 => _offIs_Downloading.GetValue();
	public UServerListItem_C                                  Server_List_Item                                               => _offServer_List_Item.GetValue();
	#endregion


}


}