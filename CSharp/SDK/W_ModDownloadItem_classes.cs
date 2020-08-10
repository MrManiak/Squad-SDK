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

// WidgetBlueprintGeneratedClass W_ModDownloadItem.W_ModDownloadItem_C
// 0x011C (0x02FC - 0x01E0)
public class UW_ModDownloadItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offBounceAnim                                                 = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Mod                                                 = new ExternalOffset<UButton>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCircularThrobber>                 _offCircularThrobber_1                                         = new ExternalOffset<UCircularThrobber>(0x0248, true);         // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offDownloadProgressBar                                        = new ExternalOffset<UProgressBar>(0x0250, true);              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offModIcon                                                    = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offProg_BG                                                    = new ExternalOffset<UBorder>(0x0268, true);                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_DownloadState                                           = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ModName                                                 = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_1                                           = new ExternalOffset<UWidgetSwitcher>(0x0280, true);           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FSQModInfo>                        _offModInfo                                                    = new ExternalOffset<FSQModInfo>(0x0288, false);               // 0x0288(0x0050) (Edit, BlueprintVisible)
	private ExternalOffset<USQServerListItemWidget>           _offServer_Item                                                = new ExternalOffset<USQServerListItemWidget>(0x02D8, true);   // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UTexture2DDynamic>                 _offTexture                                                    = new ExternalOffset<UTexture2DDynamic>(0x02E0, true);         // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offNewVar_1                                                   = new ExternalOffset<byte/*(bool)*/>(0x02E8);                  // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UW_ModDownloadWindow_C>            _offModDownloadWindow                                          = new ExternalOffset<UW_ModDownloadWindow_C>(0x02F0, true);    // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMod_Download_Index                                         = new ExternalOffset<int>(0x02F8);                             // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   BounceAnim                                                     => _offBounceAnim.GetValue();
	public UButton                                            Button_Mod                                                     => _offButton_Mod.GetValue();
	public UCircularThrobber                                  CircularThrobber_1                                             => _offCircularThrobber_1.GetValue();
	public UProgressBar                                       DownloadProgressBar                                            => _offDownloadProgressBar.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             ModIcon                                                        => _offModIcon.GetValue();
	public UBorder                                            Prog_BG                                                        => _offProg_BG.GetValue();
	public UTextBlock                                         TB_DownloadState                                               => _offTB_DownloadState.GetValue();
	public UTextBlock                                         TB_ModName                                                     => _offTB_ModName.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_1                                               => _offWidgetSwitcher_1.GetValue();
	public FSQModInfo                                         ModInfo                                                        => _offModInfo.GetValue();
	public USQServerListItemWidget                            Server_Item                                                    => _offServer_Item.GetValue();
	public UTexture2DDynamic                                  Texture                                                        => _offTexture.GetValue();
	public byte/*(bool)*/                                     NewVar_1                                                       => _offNewVar_1.GetValue();
	public UW_ModDownloadWindow_C                             ModDownloadWindow                                              => _offModDownloadWindow.GetValue();
	public int                                                Mod_Download_Index                                             => _offMod_Download_Index.GetValue();
	#endregion


}


}