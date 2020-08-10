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

// WidgetBlueprintGeneratedClass GameSettingsWindow.GameSettingsWindow_C
// 0x01C8 (0x03A8 - 0x01E0)
public class UGameSettingsWindow_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USettingsItem_Slider_C>            _offDOUBLETAPTIMESLIDER                                        = new ExternalOffset<USettingsItem_Slider_C>(0x0238, true);    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offFOV                                                        = new ExternalOffset<USettingsItem_Slider_C>(0x0240, true);    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offFreelookSensitivity                                        = new ExternalOffset<USettingsItem_Slider_C>(0x0248, true);    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offGlobalSensitivity                                          = new ExternalOffset<USettingsItem_Slider_C>(0x0250, true);    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offHelicopterPitchSensitivity                                 = new ExternalOffset<USettingsItem_Slider_C>(0x0258, true);    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offHelicopterRollSensitivity                                  = new ExternalOffset<USettingsItem_Slider_C>(0x0260, true);    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_4                                                    = new ExternalOffset<UImage>(0x0270, true);                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_5                                                    = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_6                                                    = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offKeyboardHighlight                                          = new ExternalOffset<USettingsItem_TickBox_C>(0x0288, true);   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TextBox_C>           _offPLAYERPREFIX                                               = new ExternalOffset<USettingsItem_TextBox_C>(0x0290, true);   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBox                                                  = new ExternalOffset<UScrollBox>(0x0298, true);                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offSlider_MaxFPS                                              = new ExternalOffset<USettingsItem_Slider_C>(0x02A0, true);    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offSoldierLongSensitivity                                     = new ExternalOffset<USettingsItem_Slider_C>(0x02A8, true);    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offSoldierMediumSensitivity                                   = new ExternalOffset<USettingsItem_Slider_C>(0x02B0, true);    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offSoldierNonAdsSensitivity                                   = new ExternalOffset<USettingsItem_Slider_C>(0x02B8, true);    // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offSoldierShortSensitivity                                    = new ExternalOffset<USettingsItem_Slider_C>(0x02C0, true);    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextSOLDIERSENSITIVITYMULTIPLIERS                          = new ExternalOffset<UTextBlock>(0x02C8, true);                // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleADS                                                  = new ExternalOffset<USettingsItem_TickBox_C>(0x02D0, true);   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleCrouch                                               = new ExternalOffset<USettingsItem_TickBox_C>(0x02D8, true);   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleDoubleTapWalk                                        = new ExternalOffset<USettingsItem_TickBox_C>(0x02E0, true);   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleFreelook                                             = new ExternalOffset<USettingsItem_TickBox_C>(0x02E8, true);   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleFreelookRecenter                                     = new ExternalOffset<USettingsItem_TickBox_C>(0x02F0, true);   // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleHelicopterInvertMousePitch                           = new ExternalOffset<USettingsItem_TickBox_C>(0x02F8, true);   // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleInvertY                                              = new ExternalOffset<USettingsItem_TickBox_C>(0x0300, true);   // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleJumpUncrouch                                         = new ExternalOffset<USettingsItem_TickBox_C>(0x0308, true);   // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleJumpUnprone                                          = new ExternalOffset<USettingsItem_TickBox_C>(0x0310, true);   // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleLean                                                 = new ExternalOffset<USettingsItem_TickBox_C>(0x0318, true);   // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleMouseSmooth                                          = new ExternalOffset<USettingsItem_TickBox_C>(0x0320, true);   // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offUseSensitivityScaling                                      = new ExternalOffset<USettingsItem_TickBox_C>(0x0328, true);   // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offVehicleLongSensitivity                                     = new ExternalOffset<USettingsItem_Slider_C>(0x0330, true);    // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offVehicleSensitivity                                         = new ExternalOffset<USettingsItem_Slider_C>(0x0338, true);    // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offVehicleShortSensitivity                                    = new ExternalOffset<USettingsItem_Slider_C>(0x0340, true);    // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<FScreenResolutionStruct>>   _offScreenResolutions                                          = new ExternalOffset<TArray<FScreenResolutionStruct>>(0x0348, false); // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<FScreenResolutionStruct>>   _offValidResolutions                                           = new ExternalOffset<TArray<FScreenResolutionStruct>>(0x0358, false); // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offbConstructed                                               = new ExternalOffset<byte/*(bool)*/>(0x0368);                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offReset_Appdata_OnClicked                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0370, false); // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FLinearColor>                      _offSelectedColor                                              = new ExternalOffset<FLinearColor>(0x0380, false);             // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offUnselectedColor_                                           = new ExternalOffset<FLinearColor>(0x0390, false);             // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USaveData_UI_C>                    _offCurrent_UI_Save                                            = new ExternalOffset<USaveData_UI_C>(0x03A0, true);            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USettingsItem_Slider_C                             DOUBLETAPTIMESLIDER                                            => _offDOUBLETAPTIMESLIDER.GetValue();
	public USettingsItem_Slider_C                             FOV                                                            => _offFOV.GetValue();
	public USettingsItem_Slider_C                             FreelookSensitivity                                            => _offFreelookSensitivity.GetValue();
	public USettingsItem_Slider_C                             GlobalSensitivity                                              => _offGlobalSensitivity.GetValue();
	public USettingsItem_Slider_C                             HelicopterPitchSensitivity                                     => _offHelicopterPitchSensitivity.GetValue();
	public USettingsItem_Slider_C                             HelicopterRollSensitivity                                      => _offHelicopterRollSensitivity.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             Image_4                                                        => _offImage_4.GetValue();
	public UImage                                             Image_5                                                        => _offImage_5.GetValue();
	public UImage                                             Image_6                                                        => _offImage_6.GetValue();
	public USettingsItem_TickBox_C                            KeyboardHighlight                                              => _offKeyboardHighlight.GetValue();
	public USettingsItem_TextBox_C                            PLAYERPREFIX                                                   => _offPLAYERPREFIX.GetValue();
	public UScrollBox                                         ScrollBox                                                      => _offScrollBox.GetValue();
	public USettingsItem_Slider_C                             Slider_MaxFPS                                                  => _offSlider_MaxFPS.GetValue();
	public USettingsItem_Slider_C                             SoldierLongSensitivity                                         => _offSoldierLongSensitivity.GetValue();
	public USettingsItem_Slider_C                             SoldierMediumSensitivity                                       => _offSoldierMediumSensitivity.GetValue();
	public USettingsItem_Slider_C                             SoldierNonAdsSensitivity                                       => _offSoldierNonAdsSensitivity.GetValue();
	public USettingsItem_Slider_C                             SoldierShortSensitivity                                        => _offSoldierShortSensitivity.GetValue();
	public UTextBlock                                         TextSOLDIERSENSITIVITYMULTIPLIERS                              => _offTextSOLDIERSENSITIVITYMULTIPLIERS.GetValue();
	public USettingsItem_TickBox_C                            ToggleADS                                                      => _offToggleADS.GetValue();
	public USettingsItem_TickBox_C                            ToggleCrouch                                                   => _offToggleCrouch.GetValue();
	public USettingsItem_TickBox_C                            ToggleDoubleTapWalk                                            => _offToggleDoubleTapWalk.GetValue();
	public USettingsItem_TickBox_C                            ToggleFreelook                                                 => _offToggleFreelook.GetValue();
	public USettingsItem_TickBox_C                            ToggleFreelookRecenter                                         => _offToggleFreelookRecenter.GetValue();
	public USettingsItem_TickBox_C                            ToggleHelicopterInvertMousePitch                               => _offToggleHelicopterInvertMousePitch.GetValue();
	public USettingsItem_TickBox_C                            ToggleInvertY                                                  => _offToggleInvertY.GetValue();
	public USettingsItem_TickBox_C                            ToggleJumpUncrouch                                             => _offToggleJumpUncrouch.GetValue();
	public USettingsItem_TickBox_C                            ToggleJumpUnprone                                              => _offToggleJumpUnprone.GetValue();
	public USettingsItem_TickBox_C                            ToggleLean                                                     => _offToggleLean.GetValue();
	public USettingsItem_TickBox_C                            ToggleMouseSmooth                                              => _offToggleMouseSmooth.GetValue();
	public USettingsItem_TickBox_C                            UseSensitivityScaling                                          => _offUseSensitivityScaling.GetValue();
	public USettingsItem_Slider_C                             VehicleLongSensitivity                                         => _offVehicleLongSensitivity.GetValue();
	public USettingsItem_Slider_C                             VehicleSensitivity                                             => _offVehicleSensitivity.GetValue();
	public USettingsItem_Slider_C                             VehicleShortSensitivity                                        => _offVehicleShortSensitivity.GetValue();
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