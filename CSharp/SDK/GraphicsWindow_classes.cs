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

// WidgetBlueprintGeneratedClass GraphicsWindow.GraphicsWindow_C
// 0x0139 (0x0319 - 0x01E0)
public class UGraphicsWindow_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USettingsItem_AntiAliasToggle_C>   _offANTIALIAS                                                  = new ExternalOffset<USettingsItem_AntiAliasToggle_C>(0x0238, true); // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_GraphicsToggle_C>    _offEffects                                                    = new ExternalOffset<USettingsItem_GraphicsToggle_C>(0x0240, true); // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offGamma                                                      = new ExternalOffset<USettingsItem_Slider_C>(0x0248, true);    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_GraphicsToggle_C>    _offGraphicsQuality                                            = new ExternalOffset<USettingsItem_GraphicsToggle_C>(0x0250, true); // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_GraphicsToggle_C>    _offMODEWINDOW                                                 = new ExternalOffset<USettingsItem_GraphicsToggle_C>(0x0268, true); // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsComboboxItem_C>           _offRESCOMBO                                                   = new ExternalOffset<USettingsComboboxItem_C>(0x0270, true);   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBox                                                  = new ExternalOffset<UScrollBox>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_GraphicsToggle_C>    _offShadow                                                     = new ExternalOffset<USettingsItem_GraphicsToggle_C>(0x0280, true); // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_Slider_C>            _offSHARPENING                                                 = new ExternalOffset<USettingsItem_Slider_C>(0x0288, true);    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_GraphicsToggle_C>    _offSUPERSAMPLES                                               = new ExternalOffset<USettingsItem_GraphicsToggle_C>(0x0290, true); // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_GraphicsToggle_C>    _offTextures                                                   = new ExternalOffset<USettingsItem_GraphicsToggle_C>(0x0298, true); // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleAO                                                   = new ExternalOffset<USettingsItem_TickBox_C>(0x02A0, true);   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleAOFRACTION                                           = new ExternalOffset<USettingsItem_TickBox_C>(0x02A8, true);   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleBLOOM                                                = new ExternalOffset<USettingsItem_TickBox_C>(0x02B0, true);   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleDISTANCESHADOWS                                      = new ExternalOffset<USettingsItem_TickBox_C>(0x02B8, true);   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleEYEADAPTATION                                        = new ExternalOffset<USettingsItem_TickBox_C>(0x02C0, true);   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleLENSFLARE                                            = new ExternalOffset<USettingsItem_TickBox_C>(0x02C8, true);   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleMOTIONBLUR                                           = new ExternalOffset<USettingsItem_TickBox_C>(0x02D0, true);   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleTEXTURELOADING                                       = new ExternalOffset<USettingsItem_TickBox_C>(0x02D8, true);   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_TickBox_C>           _offToggleVSYNC                                                = new ExternalOffset<USettingsItem_TickBox_C>(0x02E0, true);   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USettingsItem_GraphicsToggle_C>    _offVIEWDIST                                                   = new ExternalOffset<USettingsItem_GraphicsToggle_C>(0x02E8, true); // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<FScreenResolutionStruct>>   _offScreenResolutions                                          = new ExternalOffset<TArray<FScreenResolutionStruct>>(0x02F0, false); // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<FScreenResolutionStruct>>   _offValidResolutions                                           = new ExternalOffset<TArray<FScreenResolutionStruct>>(0x0300, false); // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offbConstructed                                               = new ExternalOffset<byte/*(bool)*/>(0x0310);                  // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offTesting                                                    = new ExternalOffset<int>(0x0314);                             // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offwoo                                                        = new ExternalOffset<byte/*(bool)*/>(0x0318);                  // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USettingsItem_AntiAliasToggle_C                    ANTIALIAS                                                      => _offANTIALIAS.GetValue();
	public USettingsItem_GraphicsToggle_C                     Effects                                                        => _offEffects.GetValue();
	public USettingsItem_Slider_C                             Gamma                                                          => _offGamma.GetValue();
	public USettingsItem_GraphicsToggle_C                     GraphicsQuality                                                => _offGraphicsQuality.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public USettingsItem_GraphicsToggle_C                     MODEWINDOW                                                     => _offMODEWINDOW.GetValue();
	public USettingsComboboxItem_C                            RESCOMBO                                                       => _offRESCOMBO.GetValue();
	public UScrollBox                                         ScrollBox                                                      => _offScrollBox.GetValue();
	public USettingsItem_GraphicsToggle_C                     Shadow                                                         => _offShadow.GetValue();
	public USettingsItem_Slider_C                             SHARPENING                                                     => _offSHARPENING.GetValue();
	public USettingsItem_GraphicsToggle_C                     SUPERSAMPLES                                                   => _offSUPERSAMPLES.GetValue();
	public USettingsItem_GraphicsToggle_C                     Textures                                                       => _offTextures.GetValue();
	public USettingsItem_TickBox_C                            ToggleAO                                                       => _offToggleAO.GetValue();
	public USettingsItem_TickBox_C                            ToggleAOFRACTION                                               => _offToggleAOFRACTION.GetValue();
	public USettingsItem_TickBox_C                            ToggleBLOOM                                                    => _offToggleBLOOM.GetValue();
	public USettingsItem_TickBox_C                            ToggleDISTANCESHADOWS                                          => _offToggleDISTANCESHADOWS.GetValue();
	public USettingsItem_TickBox_C                            ToggleEYEADAPTATION                                            => _offToggleEYEADAPTATION.GetValue();
	public USettingsItem_TickBox_C                            ToggleLENSFLARE                                                => _offToggleLENSFLARE.GetValue();
	public USettingsItem_TickBox_C                            ToggleMOTIONBLUR                                               => _offToggleMOTIONBLUR.GetValue();
	public USettingsItem_TickBox_C                            ToggleTEXTURELOADING                                           => _offToggleTEXTURELOADING.GetValue();
	public USettingsItem_TickBox_C                            ToggleVSYNC                                                    => _offToggleVSYNC.GetValue();
	public USettingsItem_GraphicsToggle_C                     VIEWDIST                                                       => _offVIEWDIST.GetValue();
	public TArray<FScreenResolutionStruct>                    ScreenResolutions                                              => _offScreenResolutions.GetValue();
	public TArray<FScreenResolutionStruct>                    ValidResolutions                                               => _offValidResolutions.GetValue();
	public byte/*(bool)*/                                     bConstructed                                                   => _offbConstructed.GetValue();
	public int                                                Testing                                                        => _offTesting.GetValue();
	public byte/*(bool)*/                                     woo                                                            => _offwoo.GetValue();
	#endregion


}


}