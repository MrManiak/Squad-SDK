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

// WidgetBlueprintGeneratedClass ServerListItem.ServerListItem_C
// 0x01D1 (0x0569 - 0x0398)
public class UServerListItem_C : USQServerListItemWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0398, false); // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_1012                                                = new ExternalOffset<UBorder>(0x03A0, true);                   // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Fave                                                = new ExternalOffset<UButton>(0x03A8, true);                   // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offFavourite                                                  = new ExternalOffset<UImage>(0x03B0, true);                    // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImageHealth                                                = new ExternalOffset<UImage>(0x03B8, true);                    // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLocked                                                     = new ExternalOffset<UImage>(0x03C0, true);                    // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offModIcon                                                    = new ExternalOffset<UImage>(0x03C8, true);                    // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Friends                                                 = new ExternalOffset<UTextBlock>(0x03D0, true);                // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_GameModeName                                            = new ExternalOffset<UTextBlock>(0x03D8, true);                // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_MapName                                                 = new ExternalOffset<UTextBlock>(0x03E0, true);                // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Ping                                                    = new ExternalOffset<UTextBlock>(0x03E8, true);                // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Players                                                 = new ExternalOffset<UTextBlock>(0x03F0, true);                // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ServerName                                              = new ExternalOffset<UTextBlock>(0x03F8, true);                // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offVAC                                                        = new ExternalOffset<UImage>(0x0400, true);                    // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UServerBrowserWindow_C>            _offBrowserWindow                                              = new ExternalOffset<UServerBrowserWindow_C>(0x0408, true);    // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offPasswordedImage                                            = new ExternalOffset<UTexture2D>(0x0410, true);                // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offUnpasswordedImage                                          = new ExternalOffset<UTexture2D>(0x0418, true);                // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offRequestJoin                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0420, false); // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<UTexture2D>                        _offVacOn                                                      = new ExternalOffset<UTexture2D>(0x0430, true);                // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offVACOff                                                     = new ExternalOffset<UTexture2D>(0x0438, true);                // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offFavoritesOn                                                = new ExternalOffset<UTexture2D>(0x0440, true);                // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offFavoritesOff                                               = new ExternalOffset<UTexture2D>(0x0448, true);                // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSelectedColor                                              = new ExternalOffset<FLinearColor>(0x0450, false);             // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offUnselectedColor                                            = new ExternalOffset<FLinearColor>(0x0460, false);             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offHoveredColor                                               = new ExternalOffset<FLinearColor>(0x0470, false);             // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offLicensed_                                                  = new ExternalOffset<byte/*(bool)*/>(0x0480);                  // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<FLinearColor>                      _offJoiningColor                                               = new ExternalOffset<FLinearColor>(0x0484, false);             // 0x0484(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offMarquee_String                                             = new ExternalOffset<FString>(0x0498, false);                  // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<UFriendsBrowserWindow_C>           _offFriend_List                                                = new ExternalOffset<UFriendsBrowserWindow_C>(0x04A8, true);   // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FBlueprintSessionResult>           _offIn_Session                                                 = new ExternalOffset<FBlueprintSessionResult>(0x04B0, false);  // 0x04B0(0x00B8) (Edit, BlueprintVisible, ExposeOnSpawn)
	private ExternalOffset<byte/*(bool)*/>                    _offEnabled                                                    = new ExternalOffset<byte/*(bool)*/>(0x0568);                  // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_1012                                                    => _offBorder_1012.GetValue();
	public UButton                                            Button_Fave                                                    => _offButton_Fave.GetValue();
	public UImage                                             Favourite                                                      => _offFavourite.GetValue();
	public UImage                                             ImageHealth                                                    => _offImageHealth.GetValue();
	public UImage                                             Locked                                                         => _offLocked.GetValue();
	public UImage                                             ModIcon                                                        => _offModIcon.GetValue();
	public UTextBlock                                         TB_Friends                                                     => _offTB_Friends.GetValue();
	public UTextBlock                                         TB_GameModeName                                                => _offTB_GameModeName.GetValue();
	public UTextBlock                                         TB_MapName                                                     => _offTB_MapName.GetValue();
	public UTextBlock                                         TB_Ping                                                        => _offTB_Ping.GetValue();
	public UTextBlock                                         TB_Players                                                     => _offTB_Players.GetValue();
	public UTextBlock                                         TB_ServerName                                                  => _offTB_ServerName.GetValue();
	public UImage                                             VAC                                                            => _offVAC.GetValue();
	public UServerBrowserWindow_C                             BrowserWindow                                                  => _offBrowserWindow.GetValue();
	public UTexture2D                                         PasswordedImage                                                => _offPasswordedImage.GetValue();
	public UTexture2D                                         UnpasswordedImage                                              => _offUnpasswordedImage.GetValue();
	public FScriptMulticastDelegate                           RequestJoin                                                    => _offRequestJoin.GetValue();
	public UTexture2D                                         VacOn                                                          => _offVacOn.GetValue();
	public UTexture2D                                         VACOff                                                         => _offVACOff.GetValue();
	public UTexture2D                                         FavoritesOn                                                    => _offFavoritesOn.GetValue();
	public UTexture2D                                         FavoritesOff                                                   => _offFavoritesOff.GetValue();
	public FLinearColor                                       SelectedColor                                                  => _offSelectedColor.GetValue();
	public FLinearColor                                       UnselectedColor                                                => _offUnselectedColor.GetValue();
	public FLinearColor                                       HoveredColor                                                   => _offHoveredColor.GetValue();
	public byte/*(bool)*/                                     Licensed_                                                      => _offLicensed_.GetValue();
	public FLinearColor                                       JoiningColor                                                   => _offJoiningColor.GetValue();
	public FString                                            Marquee_String                                                 => _offMarquee_String.GetValue();
	public UFriendsBrowserWindow_C                            Friend_List                                                    => _offFriend_List.GetValue();
	public FBlueprintSessionResult                            In_Session                                                     => _offIn_Session.GetValue();
	public byte/*(bool)*/                                     Enabled                                                        => _offEnabled.GetValue();
	#endregion


}


}