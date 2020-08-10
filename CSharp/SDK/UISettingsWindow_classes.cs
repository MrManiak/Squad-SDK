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

// WidgetBlueprintGeneratedClass UISettingsWindow.UISettingsWindow_C
// 0x0180 (0x0360 - 0x01E0)
public class UUISettingsWindow_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USettingsItem_TickBox_C>           _offAlwaysShowWeaponsinDeployment                              = new ExternalOffset<USettingsItem_TickBox_C>(0x0238, true);   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offDisableOnScreenChat                                        = new ExternalOffset<USettingsItem_TickBox_C>(0x0240, true);   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_4                                                    = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offMapMarkerScale                                             = new ExternalOffset<USettingsItem_Slider_C>(0x0268, true);    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offNameTagHideName                                            = new ExternalOffset<USettingsItem_TickBox_C>(0x0270, true);   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offNameTagOpacity                                             = new ExternalOffset<USettingsItem_Slider_C>(0x0278, true);    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offNameTagScale                                               = new ExternalOffset<USettingsItem_Slider_C>(0x0280, true);    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offNameTagShowKit                                             = new ExternalOffset<USettingsItem_TickBox_C>(0x0288, true);   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offNameTagSLAlwaysVisible                                     = new ExternalOffset<USettingsItem_TickBox_C>(0x0290, true);   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offNameTagsShowFTID                                           = new ExternalOffset<USettingsItem_TickBox_C>(0x0298, true);   // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offPlayCaptureSounds                                          = new ExternalOffset<USettingsItem_TickBox_C>(0x02A0, true);   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBox                                                  = new ExternalOffset<UScrollBox>(0x02A8, true);                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offShowDeploymentTutorial                                     = new ExternalOffset<USettingsItem_TickBox_C>(0x02B0, true);   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offShowFireteamLetters                                        = new ExternalOffset<USettingsItem_TickBox_C>(0x02B8, true);   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offShowModeIntroAnimation                                     = new ExternalOffset<USettingsItem_TickBox_C>(0x02C0, true);   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offShowStanceIndicator                                        = new ExternalOffset<USettingsItem_TickBox_C>(0x02C8, true);   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offShowVehicleKeybinds                                        = new ExternalOffset<USettingsItem_TickBox_C>(0x02D0, true);   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offSkipGiveupConfirm                                          = new ExternalOffset<USettingsItem_TickBox_C>(0x02D8, true);   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleGameHelp                                             = new ExternalOffset<USettingsItem_TickBox_C>(0x02E0, true);   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleMenuTips                                             = new ExternalOffset<USettingsItem_TickBox_C>(0x02E8, true);   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleRadialTips                                           = new ExternalOffset<USettingsItem_TickBox_C>(0x02F0, true);   // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleStreamerMode                                         = new ExternalOffset<USettingsItem_TickBox_C>(0x02F8, true);   // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<FScreenResolutionStruct>>   _offScreenResolutions                                          = new ExternalOffset<TArray<FScreenResolutionStruct>>(0x0300, false); // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<FScreenResolutionStruct>>   _offValidResolutions                                           = new ExternalOffset<TArray<FScreenResolutionStruct>>(0x0310, false); // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offbConstructed                                               = new ExternalOffset<byte/*(bool)*/>(0x0320);                  // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offReset_Appdata_OnClicked                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0328, false); // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FLinearColor>                      _offSelectedColor                                              = new ExternalOffset<FLinearColor>(0x0338, false);             // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offUnselectedColor_                                           = new ExternalOffset<FLinearColor>(0x0348, false);             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USaveData_UI_C>                    _offCurrent_UI_Save                                            = new ExternalOffset<USaveData_UI_C>(0x0358, true);            // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USettingsItem_TickBox_C                            AlwaysShowWeaponsinDeployment                                  => _offAlwaysShowWeaponsinDeployment.GetValue();
	public USettingsItem_TickBox_C                            DisableOnScreenChat                                            => _offDisableOnScreenChat.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UImage                                             Image_4                                                        => _offImage_4.GetValue();
	public USettingsItem_Slider_C                             MapMarkerScale                                                 => _offMapMarkerScale.GetValue();
	public USettingsItem_TickBox_C                            NameTagHideName                                                => _offNameTagHideName.GetValue();
	public USettingsItem_Slider_C                             NameTagOpacity                                                 => _offNameTagOpacity.GetValue();
	public USettingsItem_Slider_C                             NameTagScale                                                   => _offNameTagScale.GetValue();
	public USettingsItem_TickBox_C                            NameTagShowKit                                                 => _offNameTagShowKit.GetValue();
	public USettingsItem_TickBox_C                            NameTagSLAlwaysVisible                                         => _offNameTagSLAlwaysVisible.GetValue();
	public USettingsItem_TickBox_C                            NameTagsShowFTID                                               => _offNameTagsShowFTID.GetValue();
	public USettingsItem_TickBox_C                            PlayCaptureSounds                                              => _offPlayCaptureSounds.GetValue();
	public UScrollBox                                         ScrollBox                                                      => _offScrollBox.GetValue();
	public USettingsItem_TickBox_C                            ShowDeploymentTutorial                                         => _offShowDeploymentTutorial.GetValue();
	public USettingsItem_TickBox_C                            ShowFireteamLetters                                            => _offShowFireteamLetters.GetValue();
	public USettingsItem_TickBox_C                            ShowModeIntroAnimation                                         => _offShowModeIntroAnimation.GetValue();
	public USettingsItem_TickBox_C                            ShowStanceIndicator                                            => _offShowStanceIndicator.GetValue();
	public USettingsItem_TickBox_C                            ShowVehicleKeybinds                                            => _offShowVehicleKeybinds.GetValue();
	public USettingsItem_TickBox_C                            SkipGiveupConfirm                                              => _offSkipGiveupConfirm.GetValue();
	public USettingsItem_TickBox_C                            ToggleGameHelp                                                 => _offToggleGameHelp.GetValue();
	public USettingsItem_TickBox_C                            ToggleMenuTips                                                 => _offToggleMenuTips.GetValue();
	public USettingsItem_TickBox_C                            ToggleRadialTips                                               => _offToggleRadialTips.GetValue();
	public USettingsItem_TickBox_C                            ToggleStreamerMode                                             => _offToggleStreamerMode.GetValue();
	public TArray<FScreenResolutionStruct>                    ScreenResolutions                                              => _offScreenResolutions.GetValue();
	public TArray<FScreenResolutionStruct>                    ValidResolutions                                               => _offValidResolutions.GetValue();
	public byte/*(bool)*/                                     bConstructed                                                   => _offbConstructed.GetValue();
	public FScriptMulticastDelegate                           Reset_Appdata_OnClicked                                        => _offReset_Appdata_OnClicked.GetValue();
	public FLinearColor                                       SelectedColor                                                  => _offSelectedColor.GetValue();
	public FLinearColor                                       UnselectedColor_                                               => _offUnselectedColor_.GetValue();
	public USaveData_UI_C                                     Current_UI_Save                                                => _offCurrent_UI_Save.GetValue();
	#endregion


}


}